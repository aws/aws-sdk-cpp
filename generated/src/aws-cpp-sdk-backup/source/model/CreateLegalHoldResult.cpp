/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/backup/model/CreateLegalHoldResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::Backup::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

CreateLegalHoldResult::CreateLegalHoldResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

CreateLegalHoldResult& CreateLegalHoldResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("Title"))
  {
    m_title = jsonValue.GetString("Title");
    m_titleHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Status"))
  {
    m_status = LegalHoldStatusMapper::GetLegalHoldStatusForName(jsonValue.GetString("Status"));
    m_statusHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Description"))
  {
    m_description = jsonValue.GetString("Description");
    m_descriptionHasBeenSet = true;
  }
  if(jsonValue.ValueExists("LegalHoldId"))
  {
    m_legalHoldId = jsonValue.GetString("LegalHoldId");
    m_legalHoldIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("LegalHoldArn"))
  {
    m_legalHoldArn = jsonValue.GetString("LegalHoldArn");
    m_legalHoldArnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("CreationDate"))
  {
    m_creationDate = jsonValue.GetDouble("CreationDate");
    m_creationDateHasBeenSet = true;
  }
  if(jsonValue.ValueExists("RecoveryPointSelection"))
  {
    m_recoveryPointSelection = jsonValue.GetObject("RecoveryPointSelection");
    m_recoveryPointSelectionHasBeenSet = true;
  }

  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if(requestIdIter != headers.end())
  {
    m_requestId = requestIdIter->second;
    m_requestIdHasBeenSet = true;
  }


  return *this;
}
