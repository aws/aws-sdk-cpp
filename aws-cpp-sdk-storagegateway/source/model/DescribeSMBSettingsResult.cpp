/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/storagegateway/model/DescribeSMBSettingsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::StorageGateway::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

DescribeSMBSettingsResult::DescribeSMBSettingsResult() : 
    m_activeDirectoryStatus(ActiveDirectoryStatus::NOT_SET),
    m_sMBGuestPasswordSet(false),
    m_sMBSecurityStrategy(SMBSecurityStrategy::NOT_SET),
    m_fileSharesVisible(false)
{
}

DescribeSMBSettingsResult::DescribeSMBSettingsResult(const Aws::AmazonWebServiceResult<JsonValue>& result) : 
    m_activeDirectoryStatus(ActiveDirectoryStatus::NOT_SET),
    m_sMBGuestPasswordSet(false),
    m_sMBSecurityStrategy(SMBSecurityStrategy::NOT_SET),
    m_fileSharesVisible(false)
{
  *this = result;
}

DescribeSMBSettingsResult& DescribeSMBSettingsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("GatewayARN"))
  {
    m_gatewayARN = jsonValue.GetString("GatewayARN");

  }

  if(jsonValue.ValueExists("DomainName"))
  {
    m_domainName = jsonValue.GetString("DomainName");

  }

  if(jsonValue.ValueExists("ActiveDirectoryStatus"))
  {
    m_activeDirectoryStatus = ActiveDirectoryStatusMapper::GetActiveDirectoryStatusForName(jsonValue.GetString("ActiveDirectoryStatus"));

  }

  if(jsonValue.ValueExists("SMBGuestPasswordSet"))
  {
    m_sMBGuestPasswordSet = jsonValue.GetBool("SMBGuestPasswordSet");

  }

  if(jsonValue.ValueExists("SMBSecurityStrategy"))
  {
    m_sMBSecurityStrategy = SMBSecurityStrategyMapper::GetSMBSecurityStrategyForName(jsonValue.GetString("SMBSecurityStrategy"));

  }

  if(jsonValue.ValueExists("FileSharesVisible"))
  {
    m_fileSharesVisible = jsonValue.GetBool("FileSharesVisible");

  }



  return *this;
}
