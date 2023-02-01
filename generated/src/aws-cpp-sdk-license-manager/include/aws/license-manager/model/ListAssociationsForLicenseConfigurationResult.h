/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
  class ListAssociationsForLicenseConfigurationResult
  {
  public:
    AWS_LICENSEMANAGER_API ListAssociationsForLicenseConfigurationResult();
    AWS_LICENSEMANAGER_API ListAssociationsForLicenseConfigurationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_LICENSEMANAGER_API ListAssociationsForLicenseConfigurationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Information about the associations for the license configuration.</p>
     */
    inline const Aws::Vector<LicenseConfigurationAssociation>& GetLicenseConfigurationAssociations() const{ return m_licenseConfigurationAssociations; }

    /**
     * <p>Information about the associations for the license configuration.</p>
     */
    inline void SetLicenseConfigurationAssociations(const Aws::Vector<LicenseConfigurationAssociation>& value) { m_licenseConfigurationAssociations = value; }

    /**
     * <p>Information about the associations for the license configuration.</p>
     */
    inline void SetLicenseConfigurationAssociations(Aws::Vector<LicenseConfigurationAssociation>&& value) { m_licenseConfigurationAssociations = std::move(value); }

    /**
     * <p>Information about the associations for the license configuration.</p>
     */
    inline ListAssociationsForLicenseConfigurationResult& WithLicenseConfigurationAssociations(const Aws::Vector<LicenseConfigurationAssociation>& value) { SetLicenseConfigurationAssociations(value); return *this;}

    /**
     * <p>Information about the associations for the license configuration.</p>
     */
    inline ListAssociationsForLicenseConfigurationResult& WithLicenseConfigurationAssociations(Aws::Vector<LicenseConfigurationAssociation>&& value) { SetLicenseConfigurationAssociations(std::move(value)); return *this;}

    /**
     * <p>Information about the associations for the license configuration.</p>
     */
    inline ListAssociationsForLicenseConfigurationResult& AddLicenseConfigurationAssociations(const LicenseConfigurationAssociation& value) { m_licenseConfigurationAssociations.push_back(value); return *this; }

    /**
     * <p>Information about the associations for the license configuration.</p>
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
