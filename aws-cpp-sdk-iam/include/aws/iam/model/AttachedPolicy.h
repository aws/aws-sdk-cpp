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
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Xml
{
  class XmlNode;
} // namespace Xml
} // namespace Utils
namespace IAM
{
namespace Model
{

  /**
   * <p>Contains information about an attached policy.</p> <p>An attached policy is a
   * managed policy that has been attached to a user, group, or role. This data type
   * is used as a response element in the <a>ListAttachedGroupPolicies</a>,
   * <a>ListAttachedRolePolicies</a>, <a>ListAttachedUserPolicies</a>, and
   * <a>GetAccountAuthorizationDetails</a> operations. </p> <p>For more information
   * about managed policies, refer to <a
   * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/policies-managed-vs-inline.html">Managed
   * Policies and Inline Policies</a> in the <i>Using IAM</i> guide. </p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iam-2010-05-08/AttachedPolicy">AWS
   * API Reference</a></p>
   */
  class AWS_IAM_API AttachedPolicy
  {
  public:
    AttachedPolicy();
    AttachedPolicy(const Aws::Utils::Xml::XmlNode& xmlNode);
    AttachedPolicy& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p>The friendly name of the attached policy.</p>
     */
    inline const Aws::String& GetPolicyName() const{ return m_policyName; }

    /**
     * <p>The friendly name of the attached policy.</p>
     */
    inline bool PolicyNameHasBeenSet() const { return m_policyNameHasBeenSet; }

    /**
     * <p>The friendly name of the attached policy.</p>
     */
    inline void SetPolicyName(const Aws::String& value) { m_policyNameHasBeenSet = true; m_policyName = value; }

    /**
     * <p>The friendly name of the attached policy.</p>
     */
    inline void SetPolicyName(Aws::String&& value) { m_policyNameHasBeenSet = true; m_policyName = std::move(value); }

    /**
     * <p>The friendly name of the attached policy.</p>
     */
    inline void SetPolicyName(const char* value) { m_policyNameHasBeenSet = true; m_policyName.assign(value); }

    /**
     * <p>The friendly name of the attached policy.</p>
     */
    inline AttachedPolicy& WithPolicyName(const Aws::String& value) { SetPolicyName(value); return *this;}

    /**
     * <p>The friendly name of the attached policy.</p>
     */
    inline AttachedPolicy& WithPolicyName(Aws::String&& value) { SetPolicyName(std::move(value)); return *this;}

    /**
     * <p>The friendly name of the attached policy.</p>
     */
    inline AttachedPolicy& WithPolicyName(const char* value) { SetPolicyName(value); return *this;}


    
    inline const Aws::String& GetPolicyArn() const{ return m_policyArn; }

    
    inline bool PolicyArnHasBeenSet() const { return m_policyArnHasBeenSet; }

    
    inline void SetPolicyArn(const Aws::String& value) { m_policyArnHasBeenSet = true; m_policyArn = value; }

    
    inline void SetPolicyArn(Aws::String&& value) { m_policyArnHasBeenSet = true; m_policyArn = std::move(value); }

    
    inline void SetPolicyArn(const char* value) { m_policyArnHasBeenSet = true; m_policyArn.assign(value); }

    
    inline AttachedPolicy& WithPolicyArn(const Aws::String& value) { SetPolicyArn(value); return *this;}

    
    inline AttachedPolicy& WithPolicyArn(Aws::String&& value) { SetPolicyArn(std::move(value)); return *this;}

    
    inline AttachedPolicy& WithPolicyArn(const char* value) { SetPolicyArn(value); return *this;}

  private:

    Aws::String m_policyName;
    bool m_policyNameHasBeenSet;

    Aws::String m_policyArn;
    bool m_policyArnHasBeenSet;
  };

} // namespace Model
} // namespace IAM
} // namespace Aws
