/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iam/IAM_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
   * href="https://docs.aws.amazon.com/IAM/latest/APIReference/API_UpdateSAMLProvider.html">UpdateSAMLProvider</a>
   * request. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iam-2010-05-08/UpdateSAMLProviderResponse">AWS
   * API Reference</a></p>
   */
  class UpdateSAMLProviderResult
  {
  public:
    AWS_IAM_API UpdateSAMLProviderResult() = default;
    AWS_IAM_API UpdateSAMLProviderResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_IAM_API UpdateSAMLProviderResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the SAML provider that was updated.</p>
     */
    inline const Aws::String& GetSAMLProviderArn() const { return m_sAMLProviderArn; }
    template<typename SAMLProviderArnT = Aws::String>
    void SetSAMLProviderArn(SAMLProviderArnT&& value) { m_sAMLProviderArnHasBeenSet = true; m_sAMLProviderArn = std::forward<SAMLProviderArnT>(value); }
    template<typename SAMLProviderArnT = Aws::String>
    UpdateSAMLProviderResult& WithSAMLProviderArn(SAMLProviderArnT&& value) { SetSAMLProviderArn(std::forward<SAMLProviderArnT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const ResponseMetadata& GetResponseMetadata() const { return m_responseMetadata; }
    template<typename ResponseMetadataT = ResponseMetadata>
    void SetResponseMetadata(ResponseMetadataT&& value) { m_responseMetadataHasBeenSet = true; m_responseMetadata = std::forward<ResponseMetadataT>(value); }
    template<typename ResponseMetadataT = ResponseMetadata>
    UpdateSAMLProviderResult& WithResponseMetadata(ResponseMetadataT&& value) { SetResponseMetadata(std::forward<ResponseMetadataT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_sAMLProviderArn;
    bool m_sAMLProviderArnHasBeenSet = false;

    ResponseMetadata m_responseMetadata;
    bool m_responseMetadataHasBeenSet = false;
  };

} // namespace Model
} // namespace IAM
} // namespace Aws
