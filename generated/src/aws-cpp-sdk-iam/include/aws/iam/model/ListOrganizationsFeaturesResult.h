/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iam/IAM_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/iam/model/ResponseMetadata.h>
#include <aws/iam/model/FeatureType.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Xml
{
  class XmlDocument;
} // namespace Xml
} // namespace Utils
namespace IAM
{
namespace Model
{
  class ListOrganizationsFeaturesResult
  {
  public:
    AWS_IAM_API ListOrganizationsFeaturesResult() = default;
    AWS_IAM_API ListOrganizationsFeaturesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_IAM_API ListOrganizationsFeaturesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    /**
     * <p>The unique identifier (ID) of an organization.</p>
     */
    inline const Aws::String& GetOrganizationId() const { return m_organizationId; }
    template<typename OrganizationIdT = Aws::String>
    void SetOrganizationId(OrganizationIdT&& value) { m_organizationIdHasBeenSet = true; m_organizationId = std::forward<OrganizationIdT>(value); }
    template<typename OrganizationIdT = Aws::String>
    ListOrganizationsFeaturesResult& WithOrganizationId(OrganizationIdT&& value) { SetOrganizationId(std::forward<OrganizationIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the features that are currently available in your organization.</p>
     */
    inline const Aws::Vector<FeatureType>& GetEnabledFeatures() const { return m_enabledFeatures; }
    template<typename EnabledFeaturesT = Aws::Vector<FeatureType>>
    void SetEnabledFeatures(EnabledFeaturesT&& value) { m_enabledFeaturesHasBeenSet = true; m_enabledFeatures = std::forward<EnabledFeaturesT>(value); }
    template<typename EnabledFeaturesT = Aws::Vector<FeatureType>>
    ListOrganizationsFeaturesResult& WithEnabledFeatures(EnabledFeaturesT&& value) { SetEnabledFeatures(std::forward<EnabledFeaturesT>(value)); return *this;}
    inline ListOrganizationsFeaturesResult& AddEnabledFeatures(FeatureType value) { m_enabledFeaturesHasBeenSet = true; m_enabledFeatures.push_back(value); return *this; }
    ///@}

    ///@{
    
    inline const ResponseMetadata& GetResponseMetadata() const { return m_responseMetadata; }
    template<typename ResponseMetadataT = ResponseMetadata>
    void SetResponseMetadata(ResponseMetadataT&& value) { m_responseMetadataHasBeenSet = true; m_responseMetadata = std::forward<ResponseMetadataT>(value); }
    template<typename ResponseMetadataT = ResponseMetadata>
    ListOrganizationsFeaturesResult& WithResponseMetadata(ResponseMetadataT&& value) { SetResponseMetadata(std::forward<ResponseMetadataT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_organizationId;
    bool m_organizationIdHasBeenSet = false;

    Aws::Vector<FeatureType> m_enabledFeatures;
    bool m_enabledFeaturesHasBeenSet = false;

    ResponseMetadata m_responseMetadata;
    bool m_responseMetadataHasBeenSet = false;
  };

} // namespace Model
} // namespace IAM
} // namespace Aws
