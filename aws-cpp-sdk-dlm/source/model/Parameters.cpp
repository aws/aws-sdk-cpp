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

#include <aws/dlm/model/Parameters.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace DLM
{
namespace Model
{

Parameters::Parameters() : 
    m_excludeBootVolume(false),
    m_excludeBootVolumeHasBeenSet(false)
{
}

Parameters::Parameters(JsonView jsonValue) : 
    m_excludeBootVolume(false),
    m_excludeBootVolumeHasBeenSet(false)
{
  *this = jsonValue;
}

Parameters& Parameters::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ExcludeBootVolume"))
  {
    m_excludeBootVolume = jsonValue.GetBool("ExcludeBootVolume");

    m_excludeBootVolumeHasBeenSet = true;
  }

  return *this;
}

JsonValue Parameters::Jsonize() const
{
  JsonValue payload;

  if(m_excludeBootVolumeHasBeenSet)
  {
   payload.WithBool("ExcludeBootVolume", m_excludeBootVolume);

  }

  return payload;
}

} // namespace Model
} // namespace DLM
} // namespace Aws
