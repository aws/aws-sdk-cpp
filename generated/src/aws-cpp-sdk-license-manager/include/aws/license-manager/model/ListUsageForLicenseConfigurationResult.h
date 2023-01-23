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


    /**
     * <p>Information about the license configurations.</p>
     */
    inline const Aws::Vector<LicenseConfigurationUsage>& GetLicenseConfigurationUsageList() const{ return m_licenseConfigurationUsageList; }

    /**
     * <p>Information about the license configurations.</p>
     */
    inline void SetLicenseConfigurationUsageList(const Aws::Vector<LicenseConfigurationUsage>& value) { m_licenseConfigurationUsageList = value; }

    /**
     * <p>Information about the license configurations.</p>
     */
    inline void SetLicenseConfigurationUsageList(Aws::Vector<LicenseConfigurationUsage>&& value) { m_licenseConfigurationUsageList = std::move(value); }

    /**
     * <p>Information about the license configurations.</p>
     */
    inline ListUsageForLicenseConfigurationResult& WithLicenseConfigurationUsageList(const Aws::Vector<LicenseConfigurationUsage>& value) { SetLicenseConfigurationUsageList(value); return *this;}

    /**
     * <p>Information about the license configurations.</p>
     */
    inline ListUsageForLicenseConfigurationResult& WithLicenseConfigurationUsageList(Aws::Vector<LicenseConfigurationUsage>&& value) { SetLicenseConfigurationUsageList(std::move(value)); return *this;}

    /**
     * <p>Information about the license configurations.</p>
     */
    inline ListUsageForLicenseConfigurationResult& AddLicenseConfigurationUsageList(const LicenseConfigurationUsage& value) { m_licenseConfigurationUsageList.push_back(value); return *this; }

    /**
     * <p>Information about the license configurations.</p>
     */
    inline ListUsageForLicenseConfigurationResult& AddLicenseConfigurationUsageList(LicenseConfigurationUsage&& value) { m_licenseConfigurationUsageList.push_back(std::move(value)); return *this; }


    /**
     * <p>Token for the next set of results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>Token for the next set of results.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>Token for the next set of results.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>Token for the next set of results.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>Token for the next set of results.</p>
     */
    inline ListUsageForLicenseConfigurationResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>Token for the next set of results.</p>
     */
    inline ListUsageForLicenseConfigurationResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>Token for the next set of results.</p>
     */
    inline ListUsageForLicenseConfigurationResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<LicenseConfigurationUsage> m_licenseConfigurationUsageList;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace LicenseManager
} // namespace Aws
