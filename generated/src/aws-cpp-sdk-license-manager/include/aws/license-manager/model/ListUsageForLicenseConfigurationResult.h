/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/license-manager/LicenseManager_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/license-manager/model/LicenseConfigurationUsage.h>
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
namespace LicenseManager
{
namespace Model
{
  class ListUsageForLicenseConfigurationResult
  {
  public:
    AWS_LICENSEMANAGER_API ListUsageForLicenseConfigurationResult();
    AWS_LICENSEMANAGER_API ListUsageForLicenseConfigurationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_LICENSEMANAGER_API ListUsageForLicenseConfigurationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Information about the license configurations.</p>
     */
    inline const Aws::Vector<LicenseConfigurationUsage>& GetLicenseConfigurationUsageList() const{ return m_licenseConfigurationUsageList; }
    inline void SetLicenseConfigurationUsageList(const Aws::Vector<LicenseConfigurationUsage>& value) { m_licenseConfigurationUsageList = value; }
    inline void SetLicenseConfigurationUsageList(Aws::Vector<LicenseConfigurationUsage>&& value) { m_licenseConfigurationUsageList = std::move(value); }
    inline ListUsageForLicenseConfigurationResult& WithLicenseConfigurationUsageList(const Aws::Vector<LicenseConfigurationUsage>& value) { SetLicenseConfigurationUsageList(value); return *this;}
    inline ListUsageForLicenseConfigurationResult& WithLicenseConfigurationUsageList(Aws::Vector<LicenseConfigurationUsage>&& value) { SetLicenseConfigurationUsageList(std::move(value)); return *this;}
    inline ListUsageForLicenseConfigurationResult& AddLicenseConfigurationUsageList(const LicenseConfigurationUsage& value) { m_licenseConfigurationUsageList.push_back(value); return *this; }
    inline ListUsageForLicenseConfigurationResult& AddLicenseConfigurationUsageList(LicenseConfigurationUsage&& value) { m_licenseConfigurationUsageList.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Token for the next set of results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }
    inline ListUsageForLicenseConfigurationResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListUsageForLicenseConfigurationResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListUsageForLicenseConfigurationResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline ListUsageForLicenseConfigurationResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline ListUsageForLicenseConfigurationResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline ListUsageForLicenseConfigurationResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<LicenseConfigurationUsage> m_licenseConfigurationUsageList;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace LicenseManager
} // namespace Aws
