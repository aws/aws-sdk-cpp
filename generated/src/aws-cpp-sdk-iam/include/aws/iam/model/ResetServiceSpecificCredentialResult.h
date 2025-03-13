/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iam/IAM_EXPORTS.h>
#include <aws/iam/model/ServiceSpecificCredential.h>
#include <aws/iam/model/ResponseMetadata.h>
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
  class ResetServiceSpecificCredentialResult
  {
  public:
    AWS_IAM_API ResetServiceSpecificCredentialResult() = default;
    AWS_IAM_API ResetServiceSpecificCredentialResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_IAM_API ResetServiceSpecificCredentialResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    /**
     * <p>A structure with details about the updated service-specific credential,
     * including the new password.</p>  <p>This is the <b>only</b> time that
     * you can access the password. You cannot recover the password later, but you can
     * reset it again.</p> 
     */
    inline const ServiceSpecificCredential& GetServiceSpecificCredential() const { return m_serviceSpecificCredential; }
    template<typename ServiceSpecificCredentialT = ServiceSpecificCredential>
    void SetServiceSpecificCredential(ServiceSpecificCredentialT&& value) { m_serviceSpecificCredentialHasBeenSet = true; m_serviceSpecificCredential = std::forward<ServiceSpecificCredentialT>(value); }
    template<typename ServiceSpecificCredentialT = ServiceSpecificCredential>
    ResetServiceSpecificCredentialResult& WithServiceSpecificCredential(ServiceSpecificCredentialT&& value) { SetServiceSpecificCredential(std::forward<ServiceSpecificCredentialT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const ResponseMetadata& GetResponseMetadata() const { return m_responseMetadata; }
    template<typename ResponseMetadataT = ResponseMetadata>
    void SetResponseMetadata(ResponseMetadataT&& value) { m_responseMetadataHasBeenSet = true; m_responseMetadata = std::forward<ResponseMetadataT>(value); }
    template<typename ResponseMetadataT = ResponseMetadata>
    ResetServiceSpecificCredentialResult& WithResponseMetadata(ResponseMetadataT&& value) { SetResponseMetadata(std::forward<ResponseMetadataT>(value)); return *this;}
    ///@}
  private:

    ServiceSpecificCredential m_serviceSpecificCredential;
    bool m_serviceSpecificCredentialHasBeenSet = false;

    ResponseMetadata m_responseMetadata;
    bool m_responseMetadataHasBeenSet = false;
  };

} // namespace Model
} // namespace IAM
} // namespace Aws
