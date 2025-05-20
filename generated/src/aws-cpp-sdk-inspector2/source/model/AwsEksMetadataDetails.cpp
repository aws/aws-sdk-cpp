/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/inspector2/model/AwsEksMetadataDetails.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Inspector2
{
namespace Model
{

AwsEksMetadataDetails::AwsEksMetadataDetails(JsonView jsonValue)
{
  *this = jsonValue;
}

AwsEksMetadataDetails& AwsEksMetadataDetails::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("namespace"))
  {
    m_namespace = jsonValue.GetString("namespace");
    m_namespaceHasBeenSet = true;
  }
  if(jsonValue.ValueExists("workloadInfoList"))
  {
    Aws::Utils::Array<JsonView> workloadInfoListJsonList = jsonValue.GetArray("workloadInfoList");
    for(unsigned workloadInfoListIndex = 0; workloadInfoListIndex < workloadInfoListJsonList.GetLength(); ++workloadInfoListIndex)
    {
      m_workloadInfoList.push_back(workloadInfoListJsonList[workloadInfoListIndex].AsObject());
    }
    m_workloadInfoListHasBeenSet = true;
  }
  return *this;
}

JsonValue AwsEksMetadataDetails::Jsonize() const
{
  JsonValue payload;

  if(m_namespaceHasBeenSet)
  {
   payload.WithString("namespace", m_namespace);

  }

  if(m_workloadInfoListHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> workloadInfoListJsonList(m_workloadInfoList.size());
   for(unsigned workloadInfoListIndex = 0; workloadInfoListIndex < workloadInfoListJsonList.GetLength(); ++workloadInfoListIndex)
   {
     workloadInfoListJsonList[workloadInfoListIndex].AsObject(m_workloadInfoList[workloadInfoListIndex].Jsonize());
   }
   payload.WithArray("workloadInfoList", std::move(workloadInfoListJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace Inspector2
} // namespace Aws
