/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ec2/model/VerifiedAccessSseSpecificationResponse.h>
#include <aws/ec2/model/ResponseMetadata.h>
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
namespace EC2
{
namespace Model
{
  class ModifyVerifiedAccessEndpointPolicyResponse
  {
  public:
    AWS_EC2_API ModifyVerifiedAccessEndpointPolicyResponse() = default;
    AWS_EC2_API ModifyVerifiedAccessEndpointPolicyResponse(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_EC2_API ModifyVerifiedAccessEndpointPolicyResponse& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    /**
     * <p>The status of the Verified Access policy.</p>
     */
    inline bool GetPolicyEnabled() const { return m_policyEnabled; }
    inline void SetPolicyEnabled(bool value) { m_policyEnabledHasBeenSet = true; m_policyEnabled = value; }
    inline ModifyVerifiedAccessEndpointPolicyResponse& WithPolicyEnabled(bool value) { SetPolicyEnabled(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Verified Access policy document.</p>
     */
    inline const Aws::String& GetPolicyDocument() const { return m_policyDocument; }
    template<typename PolicyDocumentT = Aws::String>
    void SetPolicyDocument(PolicyDocumentT&& value) { m_policyDocumentHasBeenSet = true; m_policyDocument = std::forward<PolicyDocumentT>(value); }
    template<typename PolicyDocumentT = Aws::String>
    ModifyVerifiedAccessEndpointPolicyResponse& WithPolicyDocument(PolicyDocumentT&& value) { SetPolicyDocument(std::forward<PolicyDocumentT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The options in use for server side encryption.</p>
     */
    inline const VerifiedAccessSseSpecificationResponse& GetSseSpecification() const { return m_sseSpecification; }
    template<typename SseSpecificationT = VerifiedAccessSseSpecificationResponse>
    void SetSseSpecification(SseSpecificationT&& value) { m_sseSpecificationHasBeenSet = true; m_sseSpecification = std::forward<SseSpecificationT>(value); }
    template<typename SseSpecificationT = VerifiedAccessSseSpecificationResponse>
    ModifyVerifiedAccessEndpointPolicyResponse& WithSseSpecification(SseSpecificationT&& value) { SetSseSpecification(std::forward<SseSpecificationT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const ResponseMetadata& GetResponseMetadata() const { return m_responseMetadata; }
    template<typename ResponseMetadataT = ResponseMetadata>
    void SetResponseMetadata(ResponseMetadataT&& value) { m_responseMetadataHasBeenSet = true; m_responseMetadata = std::forward<ResponseMetadataT>(value); }
    template<typename ResponseMetadataT = ResponseMetadata>
    ModifyVerifiedAccessEndpointPolicyResponse& WithResponseMetadata(ResponseMetadataT&& value) { SetResponseMetadata(std::forward<ResponseMetadataT>(value)); return *this;}
    ///@}
  private:

    bool m_policyEnabled{false};
    bool m_policyEnabledHasBeenSet = false;

    Aws::String m_policyDocument;
    bool m_policyDocumentHasBeenSet = false;

    VerifiedAccessSseSpecificationResponse m_sseSpecification;
    bool m_sseSpecificationHasBeenSet = false;

    ResponseMetadata m_responseMetadata;
    bool m_responseMetadataHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
