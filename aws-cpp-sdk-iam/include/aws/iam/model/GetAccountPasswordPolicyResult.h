﻿/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/
#pragma once
#include <aws/iam/IAM_EXPORTS.h>
#include <aws/iam/model/PasswordPolicy.h>
#include <aws/iam/model/ResponseMetadata.h>

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
   * <p>Contains the response to a successful <a>GetAccountPasswordPolicy</a>
   * request. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iam-2010-05-08/GetAccountPasswordPolicyResponse">AWS
   * API Reference</a></p>
   */
  class AWS_IAM_API GetAccountPasswordPolicyResult
  {
  public:
    GetAccountPasswordPolicyResult();
    GetAccountPasswordPolicyResult(const AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    GetAccountPasswordPolicyResult& operator=(const AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);

    /**
     * <p>Contains information about the account password policy.</p>
     */
    inline const PasswordPolicy& GetPasswordPolicy() const{ return m_passwordPolicy; }

    /**
     * <p>Contains information about the account password policy.</p>
     */
    inline void SetPasswordPolicy(const PasswordPolicy& value) { m_passwordPolicy = value; }

    /**
     * <p>Contains information about the account password policy.</p>
     */
    inline void SetPasswordPolicy(PasswordPolicy&& value) { m_passwordPolicy = value; }

    /**
     * <p>Contains information about the account password policy.</p>
     */
    inline GetAccountPasswordPolicyResult& WithPasswordPolicy(const PasswordPolicy& value) { SetPasswordPolicy(value); return *this;}

    /**
     * <p>Contains information about the account password policy.</p>
     */
    inline GetAccountPasswordPolicyResult& WithPasswordPolicy(PasswordPolicy&& value) { SetPasswordPolicy(value); return *this;}

    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }

    
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }

    
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = value; }

    
    inline GetAccountPasswordPolicyResult& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}

    
    inline GetAccountPasswordPolicyResult& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(value); return *this;}

  private:
    PasswordPolicy m_passwordPolicy;
    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace IAM
} // namespace Aws