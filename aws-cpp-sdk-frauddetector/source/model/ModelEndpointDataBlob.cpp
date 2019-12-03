/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#include <aws/frauddetector/model/ModelEndpointDataBlob.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/HashingUtils.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace FraudDetector
{
namespace Model
{

ModelEndpointDataBlob::ModelEndpointDataBlob() : 
    m_byteBufferHasBeenSet(false),
    m_contentTypeHasBeenSet(false)
{
}

ModelEndpointDataBlob::ModelEndpointDataBlob(JsonView jsonValue) : 
    m_byteBufferHasBeenSet(false),
    m_contentTypeHasBeenSet(false)
{
  *this = jsonValue;
}

ModelEndpointDataBlob& ModelEndpointDataBlob::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("byteBuffer"))
  {
    m_byteBuffer = HashingUtils::Base64Decode(jsonValue.GetString("byteBuffer"));
    m_byteBufferHasBeenSet = true;
  }

  if(jsonValue.ValueExists("contentType"))
  {
    m_contentType = jsonValue.GetString("contentType");

    m_contentTypeHasBeenSet = true;
  }

  return *this;
}

JsonValue ModelEndpointDataBlob::Jsonize() const
{
  JsonValue payload;

  if(m_byteBufferHasBeenSet)
  {
   payload.WithString("byteBuffer", HashingUtils::Base64Encode(m_byteBuffer));
  }

  if(m_contentTypeHasBeenSet)
  {
   payload.WithString("contentType", m_contentType);

  }

  return payload;
}

} // namespace Model
} // namespace FraudDetector
} // namespace Aws
