/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/glue/model/GetPartitionIndexesResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::Glue::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetPartitionIndexesResult::GetPartitionIndexesResult()
{
}

GetPartitionIndexesResult::GetPartitionIndexesResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

GetPartitionIndexesResult& GetPartitionIndexesResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("PartitionIndexDescriptorList"))
  {
    Aws::Utils::Array<JsonView> partitionIndexDescriptorListJsonList = jsonValue.GetArray("PartitionIndexDescriptorList");
    for(unsigned partitionIndexDescriptorListIndex = 0; partitionIndexDescriptorListIndex < partitionIndexDescriptorListJsonList.GetLength(); ++partitionIndexDescriptorListIndex)
    {
      m_partitionIndexDescriptorList.push_back(partitionIndexDescriptorListJsonList[partitionIndexDescriptorListIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("NextToken"))
  {
    m_nextToken = jsonValue.GetString("NextToken");

  }



  return *this;
}
