/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#pragma once
#include <aws/license-manager/LicenseManager_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/license-manager/model/LicenseConfiguration.h>
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
  class AWS_LICENSEMANAGER_API ListLicenseConfigurationsResult
  {
  public:
    ListLicenseConfigurationsResult();
    ListLicenseConfigurationsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    ListLicenseConfigurationsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Array of license configuration objects.</p>
     */
    inline const Aws::Vector<LicenseConfiguration>& GetLicenseConfigurations() const{ return m_licenseConfigurations; }

    /**
     * <p>Array of license configuration objects.</p>
     */
    inline void SetLicenseConfigurations(const Aws::Vector<LicenseConfiguration>& value) { m_licenseConfigurations = value; }

    /**
     * <p>Array of license configuration objects.</p>
     */
    inline void SetLicenseConfigurations(Aws::Vector<LicenseConfiguration>&& value) { m_licenseConfigurations = std::move(value); }

    /**
     * <p>Array of license configuration objects.</p>
     */
    inline ListLicenseConfigurationsResult& WithLicenseConfigurations(const Aws::Vector<LicenseConfiguration>& value) { SetLicenseConfigurations(value); return *this;}

    /**
     * <p>Array of license configuration objects.</p>
     */
    inline ListLicenseConfigurationsResult& WithLicenseConfigurations(Aws::Vector<LicenseConfiguration>&& value) { SetLicenseConfigurations(std::move(value)); return *this;}

    /**
     * <p>Array of license configuration objects.</p>
     */
    inline ListLicenseConfigurationsResult& AddLicenseConfigurations(const LicenseConfiguration& value) { m_licenseConfigurations.push_back(value); return *this; }

    /**
     * <p>Array of license configuration objects.</p>
     */
    inline ListLicenseConfigurationsResult& AddLicenseConfigurations(LicenseConfiguration&& value) { m_licenseConfigurations.push_back(std::move(value)); return *this; }


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
    inline ListLicenseConfigurationsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>Token for the next set of results.</p>
     */
    inline ListLicenseConfigurationsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>Token for the next set of results.</p>
     */
    inline ListLicenseConfigurationsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<LicenseConfiguration> m_licenseConfigurations;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace LicenseManager
} // namespace Aws
