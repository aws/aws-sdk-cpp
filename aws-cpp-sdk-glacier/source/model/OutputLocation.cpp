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

#include <aws/glacier/model/OutputLocation.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Glacier
{
namespace Model
{

OutputLocation::OutputLocation() : 
    m_s3HasBeenSet(false)
{
}

OutputLocation::OutputLocation(const JsonValue& jsonValue) : 
    m_s3HasBeenSet(false)
{
  *this = jsonValue;
}

OutputLocation& OutputLocation::operator =(const JsonValue& jsonValue)
{
  if(jsonValue.ValueExists("S3"))
  {
    m_s3 = jsonValue.GetObject("S3");

    m_s3HasBeenSet = true;
  }

  return *this;
}

JsonValue OutputLocation::Jsonize() const
{
  JsonValue payload;

  if(m_s3HasBeenSet)
  {
   payload.WithObject("S3", m_s3.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace Glacier
} // namespace Aws
