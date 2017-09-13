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

#include <aws/codedeploy/model/EC2TagSet.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace CodeDeploy
{
namespace Model
{

EC2TagSet::EC2TagSet() : 
    m_ec2TagSetListHasBeenSet(false)
{
}

EC2TagSet::EC2TagSet(const JsonValue& jsonValue) : 
    m_ec2TagSetListHasBeenSet(false)
{
  *this = jsonValue;
}

EC2TagSet& EC2TagSet::operator =(const JsonValue& jsonValue)
{
  if(jsonValue.ValueExists("ec2TagSetList"))
  {
    Array<JsonValue> ec2TagSetListJsonList = jsonValue.GetArray("ec2TagSetList");
    for(unsigned ec2TagSetListIndex = 0; ec2TagSetListIndex < ec2TagSetListJsonList.GetLength(); ++ec2TagSetListIndex)
    {
      Array<JsonValue> eC2TagFilterListJsonList = ec2TagSetListJsonList[ec2TagSetListIndex].AsArray();
      Aws::Vector<EC2TagFilter> eC2TagFilterListList;
      eC2TagFilterListList.reserve((size_t)eC2TagFilterListJsonList.GetLength());
      for(unsigned eC2TagFilterListIndex = 0; eC2TagFilterListIndex < eC2TagFilterListJsonList.GetLength(); ++eC2TagFilterListIndex)
      {
        eC2TagFilterListList.push_back(eC2TagFilterListJsonList[eC2TagFilterListIndex].AsObject());
      }
      m_ec2TagSetList.push_back(std::move(eC2TagFilterListList));
    }
    m_ec2TagSetListHasBeenSet = true;
  }

  return *this;
}

JsonValue EC2TagSet::Jsonize() const
{
  JsonValue payload;

  if(m_ec2TagSetListHasBeenSet)
  {
   Array<JsonValue> ec2TagSetListJsonList(m_ec2TagSetList.size());
   for(unsigned ec2TagSetListIndex = 0; ec2TagSetListIndex < ec2TagSetListJsonList.GetLength(); ++ec2TagSetListIndex)
   {
     Array<JsonValue> eC2TagFilterListJsonList(m_ec2TagSetList[ec2TagSetListIndex].size());
     for(unsigned eC2TagFilterListIndex = 0; eC2TagFilterListIndex < eC2TagFilterListJsonList.GetLength(); ++eC2TagFilterListIndex)
     {
       eC2TagFilterListJsonList[eC2TagFilterListIndex].AsObject(m_ec2TagSetList[ec2TagSetListIndex][eC2TagFilterListIndex].Jsonize());
     }
     ec2TagSetListJsonList[ec2TagSetListIndex].AsArray(std::move(eC2TagFilterListJsonList));
   }
   payload.WithArray("ec2TagSetList", std::move(ec2TagSetListJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace CodeDeploy
} // namespace Aws
