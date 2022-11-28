/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/backup/model/CreateLegalHoldResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::Backup::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

CreateLegalHoldResult::CreateLegalHoldResult() : 
    m_status(LegalHoldStatus::NOT_SET)
{
}

CreateLegalHoldResult::CreateLegalHoldResult(const Aws::AmazonWebServiceResult<JsonValue>& result) : 
    m_status(LegalHoldStatus::NOT_SET)
{
  *this = result;
}

CreateLegalHoldResult& CreateLegalHoldResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("Title"))
  {
    m_title = jsonValue.GetString("Title");

  }

  if(jsonValue.ValueExists("Status"))
  {
    m_status = LegalHoldStatusMapper::GetLegalHoldStatusForName(jsonValue.GetString("Status"));

  }

  if(jsonValue.ValueExists("Description"))
  {
    m_description = jsonValue.GetString("Description");

  }

  if(jsonValue.ValueExists("LegalHoldId"))
  {
    m_legalHoldId = jsonValue.GetString("LegalHoldId");

  }

  if(jsonValue.ValueExists("LegalHoldArn"))
  {
    m_legalHoldArn = jsonValue.GetString("LegalHoldArn");

  }

  if(jsonValue.ValueExists("CreationDate"))
  {
    m_creationDate = jsonValue.GetDouble("CreationDate");

  }

  if(jsonValue.ValueExists("RecoveryPointSelection"))
  {
    m_recoveryPointSelection = jsonValue.GetObject("RecoveryPointSelection");

  }



  return *this;
}
