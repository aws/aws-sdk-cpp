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
  class CreateServiceSpecificCredentialResult
  {
  public:
    AWS_IAM_API CreateServiceSpecificCredentialResult() = default;
    AWS_IAM_API CreateServiceSpecificCredentialResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_IAM_API CreateServiceSpecificCredentialResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    /**
     * <p>A structure that contains information about the newly created
     * service-specific credential.</p>  <p>This is the only time that the
     * password for this credential set is available. It cannot be recovered later.
     * Instead, you must reset the password with <a
     * href="https://docs.aws.amazon.com/IAM/latest/APIReference/API_ResetServiceSpecificCredential.html">ResetServiceSpecificCredential</a>.</p>
     * 
     */
    inline const ServiceSpecificCredential& GetServiceSpecificCredential() const { return m_serviceSpecificCredential; }
    template<typename ServiceSpecificCredentialT = ServiceSpecificCredential>
    void SetServiceSpecificCredential(ServiceSpecificCredentialT&& value) { m_serviceSpecificCredentialHasBeenSet = true; m_serviceSpecificCredential = std::forward<ServiceSpecificCredentialT>(value); }
    template<typename ServiceSpecificCredentialT = ServiceSpecificCredential>
    CreateServiceSpecificCredentialResult& WithServiceSpecificCredential(ServiceSpecificCredentialT&& value) { SetServiceSpecificCredential(std::forward<ServiceSpecificCredentialT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const ResponseMetadata& GetResponseMetadata() const { return m_responseMetadata; }
    template<typename ResponseMetadataT = ResponseMetadata>
    void SetResponseMetadata(ResponseMetadataT&& value) { m_responseMetadataHasBeenSet = true; m_responseMetadata = std::forward<ResponseMetadataT>(value); }
    template<typename ResponseMetadataT = ResponseMetadata>
    CreateServiceSpecificCredentialResult& WithResponseMetadata(ResponseMetadataT&& value) { SetResponseMetadata(std::forward<ResponseMetadataT>(value)); return *this;}
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
