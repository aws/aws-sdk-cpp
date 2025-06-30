/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iam/IAM_EXPORTS.h>
#include <aws/iam/model/PasswordPolicy.h>
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
   * href="https://docs.aws.amazon.com/IAM/latest/APIReference/API_GetAccountPasswordPolicy.html">GetAccountPasswordPolicy</a>
   * request. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iam-2010-05-08/GetAccountPasswordPolicyResponse">AWS
   * API Reference</a></p>
   */
  class GetAccountPasswordPolicyResult
  {
  public:
    AWS_IAM_API GetAccountPasswordPolicyResult() = default;
    AWS_IAM_API GetAccountPasswordPolicyResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_IAM_API GetAccountPasswordPolicyResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    /**
     * <p>A structure that contains details about the account's password policy.</p>
     */
    inline const PasswordPolicy& GetPasswordPolicy() const { return m_passwordPolicy; }
    template<typename PasswordPolicyT = PasswordPolicy>
    void SetPasswordPolicy(PasswordPolicyT&& value) { m_passwordPolicyHasBeenSet = true; m_passwordPolicy = std::forward<PasswordPolicyT>(value); }
    template<typename PasswordPolicyT = PasswordPolicy>
    GetAccountPasswordPolicyResult& WithPasswordPolicy(PasswordPolicyT&& value) { SetPasswordPolicy(std::forward<PasswordPolicyT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const ResponseMetadata& GetResponseMetadata() const { return m_responseMetadata; }
    template<typename ResponseMetadataT = ResponseMetadata>
    void SetResponseMetadata(ResponseMetadataT&& value) { m_responseMetadataHasBeenSet = true; m_responseMetadata = std::forward<ResponseMetadataT>(value); }
    template<typename ResponseMetadataT = ResponseMetadata>
    GetAccountPasswordPolicyResult& WithResponseMetadata(ResponseMetadataT&& value) { SetResponseMetadata(std::forward<ResponseMetadataT>(value)); return *this;}
    ///@}
  private:

    PasswordPolicy m_passwordPolicy;
    bool m_passwordPolicyHasBeenSet = false;

    ResponseMetadata m_responseMetadata;
    bool m_responseMetadataHasBeenSet = false;
  };

} // namespace Model
} // namespace IAM
} // namespace Aws
