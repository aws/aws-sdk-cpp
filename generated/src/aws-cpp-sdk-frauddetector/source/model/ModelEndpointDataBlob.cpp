/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
