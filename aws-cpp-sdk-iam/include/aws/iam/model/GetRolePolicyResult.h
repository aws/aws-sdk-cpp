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
#include <aws/core/utils/memory/stl/AWSString.h>
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
   * <p>Contains the response to a successful <a>GetRolePolicy</a> request. </p>
   */
  class AWS_IAM_API GetRolePolicyResult
  {
  public:
    GetRolePolicyResult();
    GetRolePolicyResult(const AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    GetRolePolicyResult& operator=(const AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);

    /**
     * <p>The role the policy is associated with.</p>
     */
    inline const Aws::String& GetRoleName() const{ return m_roleName; }

    /**
     * <p>The role the policy is associated with.</p>
     */
    inline void SetRoleName(const Aws::String& value) { m_roleName = value; }

    /**
     * <p>The role the policy is associated with.</p>
     */
    inline void SetRoleName(Aws::String&& value) { m_roleName = value; }

    /**
     * <p>The role the policy is associated with.</p>
     */
    inline void SetRoleName(const char* value) { m_roleName.assign(value); }

    /**
     * <p>The role the policy is associated with.</p>
     */
    inline GetRolePolicyResult& WithRoleName(const Aws::String& value) { SetRoleName(value); return *this;}

    /**
     * <p>The role the policy is associated with.</p>
     */
    inline GetRolePolicyResult& WithRoleName(Aws::String&& value) { SetRoleName(value); return *this;}

    /**
     * <p>The role the policy is associated with.</p>
     */
    inline GetRolePolicyResult& WithRoleName(const char* value) { SetRoleName(value); return *this;}

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
    inline void SetPolicyName(Aws::String&& value) { m_policyName = value; }

    /**
     * <p>The name of the policy.</p>
     */
    inline void SetPolicyName(const char* value) { m_policyName.assign(value); }

    /**
     * <p>The name of the policy.</p>
     */
    inline GetRolePolicyResult& WithPolicyName(const Aws::String& value) { SetPolicyName(value); return *this;}

    /**
     * <p>The name of the policy.</p>
     */
    inline GetRolePolicyResult& WithPolicyName(Aws::String&& value) { SetPolicyName(value); return *this;}

    /**
     * <p>The name of the policy.</p>
     */
    inline GetRolePolicyResult& WithPolicyName(const char* value) { SetPolicyName(value); return *this;}

    /**
     * <p>The policy document.</p>
     */
    inline const Aws::String& GetPolicyDocument() const{ return m_policyDocument; }

    /**
     * <p>The policy document.</p>
     */
    inline void SetPolicyDocument(const Aws::String& value) { m_policyDocument = value; }

    /**
     * <p>The policy document.</p>
     */
    inline void SetPolicyDocument(Aws::String&& value) { m_policyDocument = value; }

    /**
     * <p>The policy document.</p>
     */
    inline void SetPolicyDocument(const char* value) { m_policyDocument.assign(value); }

    /**
     * <p>The policy document.</p>
     */
    inline GetRolePolicyResult& WithPolicyDocument(const Aws::String& value) { SetPolicyDocument(value); return *this;}

    /**
     * <p>The policy document.</p>
     */
    inline GetRolePolicyResult& WithPolicyDocument(Aws::String&& value) { SetPolicyDocument(value); return *this;}

    /**
     * <p>The policy document.</p>
     */
    inline GetRolePolicyResult& WithPolicyDocument(const char* value) { SetPolicyDocument(value); return *this;}

    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }

    
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }

    
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = value; }

    
    inline GetRolePolicyResult& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}

    
    inline GetRolePolicyResult& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(value); return *this;}

  private:
    Aws::String m_roleName;
    Aws::String m_policyName;
    Aws::String m_policyDocument;
    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace IAM
} // namespace Aws