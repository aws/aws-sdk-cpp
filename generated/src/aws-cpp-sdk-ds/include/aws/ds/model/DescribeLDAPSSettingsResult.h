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
    AWS_DIRECTORYSERVICE_API DescribeLDAPSSettingsResult();
    AWS_DIRECTORYSERVICE_API DescribeLDAPSSettingsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_DIRECTORYSERVICE_API DescribeLDAPSSettingsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Information about LDAP security for the specified directory, including status
     * of enablement, state last updated date time, and the reason for the state.</p>
     */
    inline const Aws::Vector<LDAPSSettingInfo>& GetLDAPSSettingsInfo() const{ return m_lDAPSSettingsInfo; }
    inline void SetLDAPSSettingsInfo(const Aws::Vector<LDAPSSettingInfo>& value) { m_lDAPSSettingsInfo = value; }
    inline void SetLDAPSSettingsInfo(Aws::Vector<LDAPSSettingInfo>&& value) { m_lDAPSSettingsInfo = std::move(value); }
    inline DescribeLDAPSSettingsResult& WithLDAPSSettingsInfo(const Aws::Vector<LDAPSSettingInfo>& value) { SetLDAPSSettingsInfo(value); return *this;}
    inline DescribeLDAPSSettingsResult& WithLDAPSSettingsInfo(Aws::Vector<LDAPSSettingInfo>&& value) { SetLDAPSSettingsInfo(std::move(value)); return *this;}
    inline DescribeLDAPSSettingsResult& AddLDAPSSettingsInfo(const LDAPSSettingInfo& value) { m_lDAPSSettingsInfo.push_back(value); return *this; }
    inline DescribeLDAPSSettingsResult& AddLDAPSSettingsInfo(LDAPSSettingInfo&& value) { m_lDAPSSettingsInfo.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The next token used to retrieve the LDAPS settings if the number of setting
     * types exceeds page limit and there is another page.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }
    inline DescribeLDAPSSettingsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline DescribeLDAPSSettingsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline DescribeLDAPSSettingsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline DescribeLDAPSSettingsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline DescribeLDAPSSettingsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline DescribeLDAPSSettingsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<LDAPSSettingInfo> m_lDAPSSettingsInfo;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace DirectoryService
} // namespace Aws
