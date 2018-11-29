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
#include <aws/license-manager/model/LicenseConfigurationAssociation.h>
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
  class AWS_LICENSEMANAGER_API ListAssociationsForLicenseConfigurationResult
  {
  public:
    ListAssociationsForLicenseConfigurationResult();
    ListAssociationsForLicenseConfigurationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    ListAssociationsForLicenseConfigurationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Lists association objects for the license configuration, each containing the
     * association time, number of consumed licenses, resource ARN, resource ID,
     * account ID that owns the resource, resource size, and resource type.</p>
     */
    inline const Aws::Vector<LicenseConfigurationAssociation>& GetLicenseConfigurationAssociations() const{ return m_licenseConfigurationAssociations; }

    /**
     * <p>Lists association objects for the license configuration, each containing the
     * association time, number of consumed licenses, resource ARN, resource ID,
     * account ID that owns the resource, resource size, and resource type.</p>
     */
    inline void SetLicenseConfigurationAssociations(const Aws::Vector<LicenseConfigurationAssociation>& value) { m_licenseConfigurationAssociations = value; }

    /**
     * <p>Lists association objects for the license configuration, each containing the
     * association time, number of consumed licenses, resource ARN, resource ID,
     * account ID that owns the resource, resource size, and resource type.</p>
     */
    inline void SetLicenseConfigurationAssociations(Aws::Vector<LicenseConfigurationAssociation>&& value) { m_licenseConfigurationAssociations = std::move(value); }

    /**
     * <p>Lists association objects for the license configuration, each containing the
     * association time, number of consumed licenses, resource ARN, resource ID,
     * account ID that owns the resource, resource size, and resource type.</p>
     */
    inline ListAssociationsForLicenseConfigurationResult& WithLicenseConfigurationAssociations(const Aws::Vector<LicenseConfigurationAssociation>& value) { SetLicenseConfigurationAssociations(value); return *this;}

    /**
     * <p>Lists association objects for the license configuration, each containing the
     * association time, number of consumed licenses, resource ARN, resource ID,
     * account ID that owns the resource, resource size, and resource type.</p>
     */
    inline ListAssociationsForLicenseConfigurationResult& WithLicenseConfigurationAssociations(Aws::Vector<LicenseConfigurationAssociation>&& value) { SetLicenseConfigurationAssociations(std::move(value)); return *this;}

    /**
     * <p>Lists association objects for the license configuration, each containing the
     * association time, number of consumed licenses, resource ARN, resource ID,
     * account ID that owns the resource, resource size, and resource type.</p>
     */
    inline ListAssociationsForLicenseConfigurationResult& AddLicenseConfigurationAssociations(const LicenseConfigurationAssociation& value) { m_licenseConfigurationAssociations.push_back(value); return *this; }

    /**
     * <p>Lists association objects for the license configuration, each containing the
     * association time, number of consumed licenses, resource ARN, resource ID,
     * account ID that owns the resource, resource size, and resource type.</p>
     */
    inline ListAssociationsForLicenseConfigurationResult& AddLicenseConfigurationAssociations(LicenseConfigurationAssociation&& value) { m_licenseConfigurationAssociations.push_back(std::move(value)); return *this; }


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
    inline ListAssociationsForLicenseConfigurationResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>Token for the next set of results.</p>
     */
    inline ListAssociationsForLicenseConfigurationResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>Token for the next set of results.</p>
     */
    inline ListAssociationsForLicenseConfigurationResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<LicenseConfigurationAssociation> m_licenseConfigurationAssociations;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace LicenseManager
} // namespace Aws
