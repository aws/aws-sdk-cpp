/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iam/IAM_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/iam/model/ResponseMetadata.h>
#include <aws/iam/model/ServiceSpecificCredentialMetadata.h>
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
  class ListServiceSpecificCredentialsResult
  {
  public:
    AWS_IAM_API ListServiceSpecificCredentialsResult() = default;
    AWS_IAM_API ListServiceSpecificCredentialsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_IAM_API ListServiceSpecificCredentialsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    /**
     * <p>A list of structures that each contain details about a service-specific
     * credential.</p>
     */
    inline const Aws::Vector<ServiceSpecificCredentialMetadata>& GetServiceSpecificCredentials() const { return m_serviceSpecificCredentials; }
    template<typename ServiceSpecificCredentialsT = Aws::Vector<ServiceSpecificCredentialMetadata>>
    void SetServiceSpecificCredentials(ServiceSpecificCredentialsT&& value) { m_serviceSpecificCredentialsHasBeenSet = true; m_serviceSpecificCredentials = std::forward<ServiceSpecificCredentialsT>(value); }
    template<typename ServiceSpecificCredentialsT = Aws::Vector<ServiceSpecificCredentialMetadata>>
    ListServiceSpecificCredentialsResult& WithServiceSpecificCredentials(ServiceSpecificCredentialsT&& value) { SetServiceSpecificCredentials(std::forward<ServiceSpecificCredentialsT>(value)); return *this;}
    template<typename ServiceSpecificCredentialsT = ServiceSpecificCredentialMetadata>
    ListServiceSpecificCredentialsResult& AddServiceSpecificCredentials(ServiceSpecificCredentialsT&& value) { m_serviceSpecificCredentialsHasBeenSet = true; m_serviceSpecificCredentials.emplace_back(std::forward<ServiceSpecificCredentialsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>When IsTruncated is true, this element is present and contains the value to
     * use for the Marker parameter in a subsequent pagination request.</p>
     */
    inline const Aws::String& GetMarker() const { return m_marker; }
    template<typename MarkerT = Aws::String>
    void SetMarker(MarkerT&& value) { m_markerHasBeenSet = true; m_marker = std::forward<MarkerT>(value); }
    template<typename MarkerT = Aws::String>
    ListServiceSpecificCredentialsResult& WithMarker(MarkerT&& value) { SetMarker(std::forward<MarkerT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A flag that indicates whether there are more items to return. If your results
     * were truncated, you can make a subsequent pagination request using the Marker
     * request parameter to retrieve more items.</p>
     */
    inline bool GetIsTruncated() const { return m_isTruncated; }
    inline void SetIsTruncated(bool value) { m_isTruncatedHasBeenSet = true; m_isTruncated = value; }
    inline ListServiceSpecificCredentialsResult& WithIsTruncated(bool value) { SetIsTruncated(value); return *this;}
    ///@}

    ///@{
    
    inline const ResponseMetadata& GetResponseMetadata() const { return m_responseMetadata; }
    template<typename ResponseMetadataT = ResponseMetadata>
    void SetResponseMetadata(ResponseMetadataT&& value) { m_responseMetadataHasBeenSet = true; m_responseMetadata = std::forward<ResponseMetadataT>(value); }
    template<typename ResponseMetadataT = ResponseMetadata>
    ListServiceSpecificCredentialsResult& WithResponseMetadata(ResponseMetadataT&& value) { SetResponseMetadata(std::forward<ResponseMetadataT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<ServiceSpecificCredentialMetadata> m_serviceSpecificCredentials;
    bool m_serviceSpecificCredentialsHasBeenSet = false;

    Aws::String m_marker;
    bool m_markerHasBeenSet = false;

    bool m_isTruncated{false};
    bool m_isTruncatedHasBeenSet = false;

    ResponseMetadata m_responseMetadata;
    bool m_responseMetadataHasBeenSet = false;
  };

} // namespace Model
} // namespace IAM
} // namespace Aws
