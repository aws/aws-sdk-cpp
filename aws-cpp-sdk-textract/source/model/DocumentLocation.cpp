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

#include <aws/textract/model/DocumentLocation.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Textract
{
namespace Model
{

DocumentLocation::DocumentLocation() : 
    m_s3ObjectHasBeenSet(false)
{
}

DocumentLocation::DocumentLocation(JsonView jsonValue) : 
    m_s3ObjectHasBeenSet(false)
{
  *this = jsonValue;
}

DocumentLocation& DocumentLocation::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("S3Object"))
  {
    m_s3Object = jsonValue.GetObject("S3Object");

    m_s3ObjectHasBeenSet = true;
  }

  return *this;
}

JsonValue DocumentLocation::Jsonize() const
{
  JsonValue payload;

  if(m_s3ObjectHasBeenSet)
  {
   payload.WithObject("S3Object", m_s3Object.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace Textract
} // namespace Aws
