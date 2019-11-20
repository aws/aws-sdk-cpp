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

#include <aws/quicksight/model/S3Parameters.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace QuickSight
{
namespace Model
{

S3Parameters::S3Parameters() : 
    m_manifestFileLocationHasBeenSet(false)
{
}

S3Parameters::S3Parameters(JsonView jsonValue) : 
    m_manifestFileLocationHasBeenSet(false)
{
  *this = jsonValue;
}

S3Parameters& S3Parameters::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ManifestFileLocation"))
  {
    m_manifestFileLocation = jsonValue.GetObject("ManifestFileLocation");

    m_manifestFileLocationHasBeenSet = true;
  }

  return *this;
}

JsonValue S3Parameters::Jsonize() const
{
  JsonValue payload;

  if(m_manifestFileLocationHasBeenSet)
  {
   payload.WithObject("ManifestFileLocation", m_manifestFileLocation.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace QuickSight
} // namespace Aws
