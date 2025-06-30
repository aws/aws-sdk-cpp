/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iam/IAM_EXPORTS.h>
#include <aws/iam/model/ServerCertificate.h>
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
  /**
   * <p>Contains the response to a successful <a
   * href="https://docs.aws.amazon.com/IAM/latest/APIReference/API_GetServerCertificate.html">GetServerCertificate</a>
   * request. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iam-2010-05-08/GetServerCertificateResponse">AWS
   * API Reference</a></p>
   */
  class GetServerCertificateResult
  {
  public:
    AWS_IAM_API GetServerCertificateResult() = default;
    AWS_IAM_API GetServerCertificateResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_IAM_API GetServerCertificateResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    /**
     * <p>A structure containing details about the server certificate.</p>
     */
    inline const ServerCertificate& GetServerCertificate() const { return m_serverCertificate; }
    template<typename ServerCertificateT = ServerCertificate>
    void SetServerCertificate(ServerCertificateT&& value) { m_serverCertificateHasBeenSet = true; m_serverCertificate = std::forward<ServerCertificateT>(value); }
    template<typename ServerCertificateT = ServerCertificate>
    GetServerCertificateResult& WithServerCertificate(ServerCertificateT&& value) { SetServerCertificate(std::forward<ServerCertificateT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const ResponseMetadata& GetResponseMetadata() const { return m_responseMetadata; }
    template<typename ResponseMetadataT = ResponseMetadata>
    void SetResponseMetadata(ResponseMetadataT&& value) { m_responseMetadataHasBeenSet = true; m_responseMetadata = std::forward<ResponseMetadataT>(value); }
    template<typename ResponseMetadataT = ResponseMetadata>
    GetServerCertificateResult& WithResponseMetadata(ResponseMetadataT&& value) { SetResponseMetadata(std::forward<ResponseMetadataT>(value)); return *this;}
    ///@}
  private:

    ServerCertificate m_serverCertificate;
    bool m_serverCertificateHasBeenSet = false;

    ResponseMetadata m_responseMetadata;
    bool m_responseMetadataHasBeenSet = false;
  };

} // namespace Model
} // namespace IAM
} // namespace Aws
