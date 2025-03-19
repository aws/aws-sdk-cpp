/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ds/DirectoryService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ds/model/LDAPSSettingInfo.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace DirectoryService
{
namespace Model
{
  class DescribeLDAPSSettingsResult
  {
  public:
    AWS_DIRECTORYSERVICE_API DescribeLDAPSSettingsResult() = default;
    AWS_DIRECTORYSERVICE_API DescribeLDAPSSettingsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_DIRECTORYSERVICE_API DescribeLDAPSSettingsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Information about LDAP security for the specified directory, including status
     * of enablement, state last updated date time, and the reason for the state.</p>
     */
    inline const Aws::Vector<LDAPSSettingInfo>& GetLDAPSSettingsInfo() const { return m_lDAPSSettingsInfo; }
    template<typename LDAPSSettingsInfoT = Aws::Vector<LDAPSSettingInfo>>
    void SetLDAPSSettingsInfo(LDAPSSettingsInfoT&& value) { m_lDAPSSettingsInfoHasBeenSet = true; m_lDAPSSettingsInfo = std::forward<LDAPSSettingsInfoT>(value); }
    template<typename LDAPSSettingsInfoT = Aws::Vector<LDAPSSettingInfo>>
    DescribeLDAPSSettingsResult& WithLDAPSSettingsInfo(LDAPSSettingsInfoT&& value) { SetLDAPSSettingsInfo(std::forward<LDAPSSettingsInfoT>(value)); return *this;}
    template<typename LDAPSSettingsInfoT = LDAPSSettingInfo>
    DescribeLDAPSSettingsResult& AddLDAPSSettingsInfo(LDAPSSettingsInfoT&& value) { m_lDAPSSettingsInfoHasBeenSet = true; m_lDAPSSettingsInfo.emplace_back(std::forward<LDAPSSettingsInfoT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The next token used to retrieve the LDAPS settings if the number of setting
     * types exceeds page limit and there is another page.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    DescribeLDAPSSettingsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    DescribeLDAPSSettingsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<LDAPSSettingInfo> m_lDAPSSettingsInfo;
    bool m_lDAPSSettingsInfoHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace DirectoryService
} // namespace Aws
