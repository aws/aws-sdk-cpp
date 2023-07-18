/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/finspace-data/model/UpdateChangesetResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::FinSpaceData::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

UpdateChangesetResult::UpdateChangesetResult()
{
}

UpdateChangesetResult::UpdateChangesetResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

UpdateChangesetResult& UpdateChangesetResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("changesetId"))
  {
    m_changesetId = jsonValue.GetString("changesetId");

  }

  if(jsonValue.ValueExists("datasetId"))
  {
    m_datasetId = jsonValue.GetString("datasetId");

  }



  return *this;
}
