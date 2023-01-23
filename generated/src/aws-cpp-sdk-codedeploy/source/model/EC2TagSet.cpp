/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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

EC2TagSet::EC2TagSet(JsonView jsonValue) : 
    m_ec2TagSetListHasBeenSet(false)
{
  *this = jsonValue;
}

EC2TagSet& EC2TagSet::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ec2TagSetList"))
  {
    Aws::Utils::Array<JsonView> ec2TagSetListJsonList = jsonValue.GetArray("ec2TagSetList");
    for(unsigned ec2TagSetListIndex = 0; ec2TagSetListIndex < ec2TagSetListJsonList.GetLength(); ++ec2TagSetListIndex)
    {
      Aws::Utils::Array<JsonView> eC2TagFilterListJsonList = ec2TagSetListJsonList[ec2TagSetListIndex].AsArray();
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
   Aws::Utils::Array<JsonValue> ec2TagSetListJsonList(m_ec2TagSetList.size());
   for(unsigned ec2TagSetListIndex = 0; ec2TagSetListIndex < ec2TagSetListJsonList.GetLength(); ++ec2TagSetListIndex)
   {
     Aws::Utils::Array<JsonValue> eC2TagFilterListJsonList(m_ec2TagSetList[ec2TagSetListIndex].size());
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
