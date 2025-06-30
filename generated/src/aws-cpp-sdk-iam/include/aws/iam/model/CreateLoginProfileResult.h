/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iam/IAM_EXPORTS.h>
#include <aws/iam/model/LoginProfile.h>
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
   * href="https://docs.aws.amazon.com/IAM/latest/APIReference/API_CreateLoginProfile.html">CreateLoginProfile</a>
   * request. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iam-2010-05-08/CreateLoginProfileResponse">AWS
   * API Reference</a></p>
   */
  class CreateLoginProfileResult
  {
  public:
    AWS_IAM_API CreateLoginProfileResult() = default;
    AWS_IAM_API CreateLoginProfileResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_IAM_API CreateLoginProfileResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    /**
     * <p>A structure containing the user name and password create date.</p>
     */
    inline const LoginProfile& GetLoginProfile() const { return m_loginProfile; }
    template<typename LoginProfileT = LoginProfile>
    void SetLoginProfile(LoginProfileT&& value) { m_loginProfileHasBeenSet = true; m_loginProfile = std::forward<LoginProfileT>(value); }
    template<typename LoginProfileT = LoginProfile>
    CreateLoginProfileResult& WithLoginProfile(LoginProfileT&& value) { SetLoginProfile(std::forward<LoginProfileT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const ResponseMetadata& GetResponseMetadata() const { return m_responseMetadata; }
    template<typename ResponseMetadataT = ResponseMetadata>
    void SetResponseMetadata(ResponseMetadataT&& value) { m_responseMetadataHasBeenSet = true; m_responseMetadata = std::forward<ResponseMetadataT>(value); }
    template<typename ResponseMetadataT = ResponseMetadata>
    CreateLoginProfileResult& WithResponseMetadata(ResponseMetadataT&& value) { SetResponseMetadata(std::forward<ResponseMetadataT>(value)); return *this;}
    ///@}
  private:

    LoginProfile m_loginProfile;
    bool m_loginProfileHasBeenSet = false;

    ResponseMetadata m_responseMetadata;
    bool m_responseMetadataHasBeenSet = false;
  };

} // namespace Model
} // namespace IAM
} // namespace Aws
