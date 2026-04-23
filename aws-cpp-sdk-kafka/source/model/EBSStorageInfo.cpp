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

#include <aws/kafka/model/EBSStorageInfo.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Kafka
{
namespace Model
{

EBSStorageInfo::EBSStorageInfo() : 
    m_volumeSize(0),
    m_volumeSizeHasBeenSet(false)
{
}

EBSStorageInfo::EBSStorageInfo(JsonView jsonValue) : 
    m_volumeSize(0),
    m_volumeSizeHasBeenSet(false)
{
  *this = jsonValue;
}

EBSStorageInfo& EBSStorageInfo::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("volumeSize"))
  {
    m_volumeSize = jsonValue.GetInteger("volumeSize");

    m_volumeSizeHasBeenSet = true;
  }

  return *this;
}

JsonValue EBSStorageInfo::Jsonize() const
{
  JsonValue payload;

  if(m_volumeSizeHasBeenSet)
  {
   payload.WithInteger("volumeSize", m_volumeSize);

  }

  return payload;
}

} // namespace Model
} // namespace Kafka
} // namespace Aws
