/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ssm/model/DescribeAssociationExecutionsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::SSM::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

DescribeAssociationExecutionsResult::DescribeAssociationExecutionsResult()
{
}

DescribeAssociationExecutionsResult::DescribeAssociationExecutionsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

DescribeAssociationExecutionsResult& DescribeAssociationExecutionsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("AssociationExecutions"))
  {
    Aws::Utils::Array<JsonView> associationExecutionsJsonList = jsonValue.GetArray("AssociationExecutions");
    for(unsigned associationExecutionsIndex = 0; associationExecutionsIndex < associationExecutionsJsonList.GetLength(); ++associationExecutionsIndex)
    {
      m_associationExecutions.push_back(associationExecutionsJsonList[associationExecutionsIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("NextToken"))
  {
    m_nextToken = jsonValue.GetString("NextToken");

  }



  return *this;
}
