/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
   * <p>Contains the response to a successful <a>GetUserPolicy</a> request.
   * </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iam-2010-05-08/GetUserPolicyResponse">AWS
   * API Reference</a></p>
   */
  class AWS_IAM_API GetUserPolicyResult
  {
  public:
    GetUserPolicyResult();
    GetUserPolicyResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    GetUserPolicyResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    /**
     * <p>The user the policy is associated with.</p>
     */
    inline const Aws::String& GetUserName() const{ return m_userName; }

    /**
     * <p>The user the policy is associated with.</p>
     */
    inline void SetUserName(const Aws::String& value) { m_userName = value; }

    /**
     * <p>The user the policy is associated with.</p>
     */
    inline void SetUserName(Aws::String&& value) { m_userName = std::move(value); }

    /**
     * <p>The user the policy is associated with.</p>
     */
    inline void SetUserName(const char* value) { m_userName.assign(value); }

    /**
     * <p>The user the policy is associated with.</p>
     */
    inline GetUserPolicyResult& WithUserName(const Aws::String& value) { SetUserName(value); return *this;}

    /**
     * <p>The user the policy is associated with.</p>
     */
    inline GetUserPolicyResult& WithUserName(Aws::String&& value) { SetUserName(std::move(value)); return *this;}

    /**
     * <p>The user the policy is associated with.</p>
     */
    inline GetUserPolicyResult& WithUserName(const char* value) { SetUserName(value); return *this;}


    /**
     * <p>The name of the policy.</p>
     */
    inline const Aws::String& GetPolicyName() const{ return m_policyName; }

    /**
     * <p>The name of the policy.</p>
     */
    inline void SetPolicyName(const Aws::String& value) { m_policyName = value; }

    /**
     * <p>The name of the policy.</p>
     */
    inline void SetPolicyName(Aws::String&& value) { m_policyName = std::move(value); }

    /**
     * <p>The name of the policy.</p>
     */
    inline void SetPolicyName(const char* value) { m_policyName.assign(value); }

    /**
     * <p>The name of the policy.</p>
     */
    inline GetUserPolicyResult& WithPolicyName(const Aws::String& value) { SetPolicyName(value); return *this;}

    /**
     * <p>The name of the policy.</p>
     */
    inline GetUserPolicyResult& WithPolicyName(Aws::String&& value) { SetPolicyName(std::move(value)); return *this;}

    /**
     * <p>The name of the policy.</p>
     */
    inline GetUserPolicyResult& WithPolicyName(const char* value) { SetPolicyName(value); return *this;}


    /**
     * <p>The policy document.</p> <p>IAM stores policies in JSON format. However,
     * resources that were created using AWS CloudFormation templates can be formatted
     * in YAML. AWS CloudFormation always converts a YAML policy to JSON format before
     * submitting it to IAM.</p>
     */
    inline const Aws::String& GetPolicyDocument() const{ return m_policyDocument; }

    /**
     * <p>The policy document.</p> <p>IAM stores policies in JSON format. However,
     * resources that were created using AWS CloudFormation templates can be formatted
     * in YAML. AWS CloudFormation always converts a YAML policy to JSON format before
     * submitting it to IAM.</p>
     */
    inline void SetPolicyDocument(const Aws::String& value) { m_policyDocument = value; }

    /**
     * <p>The policy document.</p> <p>IAM stores policies in JSON format. However,
     * resources that were created using AWS CloudFormation templates can be formatted
     * in YAML. AWS CloudFormation always converts a YAML policy to JSON format before
     * submitting it to IAM.</p>
     */
    inline void SetPolicyDocument(Aws::String&& value) { m_policyDocument = std::move(value); }

    /**
     * <p>The policy document.</p> <p>IAM stores policies in JSON format. However,
     * resources that were created using AWS CloudFormation templates can be formatted
     * in YAML. AWS CloudFormation always converts a YAML policy to JSON format before
     * submitting it to IAM.</p>
     */
    inline void SetPolicyDocument(const char* value) { m_policyDocument.assign(value); }

    /**
     * <p>The policy document.</p> <p>IAM stores policies in JSON format. However,
     * resources that were created using AWS CloudFormation templates can be formatted
     * in YAML. AWS CloudFormation always converts a YAML policy to JSON format before
     * submitting it to IAM.</p>
     */
    inline GetUserPolicyResult& WithPolicyDocument(const Aws::String& value) { SetPolicyDocument(value); return *this;}

    /**
     * <p>The policy document.</p> <p>IAM stores policies in JSON format. However,
     * resources that were created using AWS CloudFormation templates can be formatted
     * in YAML. AWS CloudFormation always converts a YAML policy to JSON format before
     * submitting it to IAM.</p>
     */
    inline GetUserPolicyResult& WithPolicyDocument(Aws::String&& value) { SetPolicyDocument(std::move(value)); return *this;}

    /**
     * <p>The policy document.</p> <p>IAM stores policies in JSON format. However,
     * resources that were created using AWS CloudFormation templates can be formatted
     * in YAML. AWS CloudFormation always converts a YAML policy to JSON format before
     * submitting it to IAM.</p>
     */
    inline GetUserPolicyResult& WithPolicyDocument(const char* value) { SetPolicyDocument(value); return *this;}


    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }

    
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }

    
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = std::move(value); }

    
    inline GetUserPolicyResult& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}

    
    inline GetUserPolicyResult& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(std::move(value)); return *this;}

  private:

    Aws::String m_userName;

    Aws::String m_policyName;

    Aws::String m_policyDocument;

    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace IAM
} // namespace Aws
