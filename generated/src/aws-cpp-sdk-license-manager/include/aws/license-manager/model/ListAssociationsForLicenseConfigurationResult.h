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
    AWS_LICENSEMANAGER_API ListAssociationsForLicenseConfigurationResult() = default;
    AWS_LICENSEMANAGER_API ListAssociationsForLicenseConfigurationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_LICENSEMANAGER_API ListAssociationsForLicenseConfigurationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Information about the associations for the license configuration.</p>
     */
    inline const Aws::Vector<LicenseConfigurationAssociation>& GetLicenseConfigurationAssociations() const { return m_licenseConfigurationAssociations; }
    template<typename LicenseConfigurationAssociationsT = Aws::Vector<LicenseConfigurationAssociation>>
    void SetLicenseConfigurationAssociations(LicenseConfigurationAssociationsT&& value) { m_licenseConfigurationAssociationsHasBeenSet = true; m_licenseConfigurationAssociations = std::forward<LicenseConfigurationAssociationsT>(value); }
    template<typename LicenseConfigurationAssociationsT = Aws::Vector<LicenseConfigurationAssociation>>
    ListAssociationsForLicenseConfigurationResult& WithLicenseConfigurationAssociations(LicenseConfigurationAssociationsT&& value) { SetLicenseConfigurationAssociations(std::forward<LicenseConfigurationAssociationsT>(value)); return *this;}
    template<typename LicenseConfigurationAssociationsT = LicenseConfigurationAssociation>
    ListAssociationsForLicenseConfigurationResult& AddLicenseConfigurationAssociations(LicenseConfigurationAssociationsT&& value) { m_licenseConfigurationAssociationsHasBeenSet = true; m_licenseConfigurationAssociations.emplace_back(std::forward<LicenseConfigurationAssociationsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Token for the next set of results.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListAssociationsForLicenseConfigurationResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListAssociationsForLicenseConfigurationResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<LicenseConfigurationAssociation> m_licenseConfigurationAssociations;
    bool m_licenseConfigurationAssociationsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace LicenseManager
} // namespace Aws
