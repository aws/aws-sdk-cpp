/*
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
#include <aws/iam/IAMRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

namespace Aws
{
namespace IAM
{
namespace Model
{

  /**
   */
  class AWS_IAM_API GetContextKeysForPrincipalPolicyRequest : public IAMRequest
  {
  public:
    GetContextKeysForPrincipalPolicyRequest();
    Aws::String SerializePayload() const override;

    /**
     * <p>The ARN of a user, group, or role whose policies contain the context keys
     * that you want listed. If you specify a user, the list includes context keys that
     * are found in all policies attached to the user as well as to all groups that the
     * user is a member of. If you pick a group or a role, then it includes only those
     * context keys that are found in policies attached to that entity. Note that all
     * parameters are shown in unencoded form here for clarity, but must be URL encoded
     * to be included as a part of a real HTML request.</p> <p>For more information
     * about ARNs, see <a
     * href="http://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">Amazon
     * Resource Names (ARNs) and AWS Service Namespaces</a> in the <i>AWS General
     * Reference</i>.</p>
     */
    inline const Aws::String& GetPolicySourceArn() const{ return m_policySourceArn; }

    /**
     * <p>The ARN of a user, group, or role whose policies contain the context keys
     * that you want listed. If you specify a user, the list includes context keys that
     * are found in all policies attached to the user as well as to all groups that the
     * user is a member of. If you pick a group or a role, then it includes only those
     * context keys that are found in policies attached to that entity. Note that all
     * parameters are shown in unencoded form here for clarity, but must be URL encoded
     * to be included as a part of a real HTML request.</p> <p>For more information
     * about ARNs, see <a
     * href="http://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">Amazon
     * Resource Names (ARNs) and AWS Service Namespaces</a> in the <i>AWS General
     * Reference</i>.</p>
     */
    inline void SetPolicySourceArn(const Aws::String& value) { m_policySourceArnHasBeenSet = true; m_policySourceArn = value; }

    /**
     * <p>The ARN of a user, group, or role whose policies contain the context keys
     * that you want listed. If you specify a user, the list includes context keys that
     * are found in all policies attached to the user as well as to all groups that the
     * user is a member of. If you pick a group or a role, then it includes only those
     * context keys that are found in policies attached to that entity. Note that all
     * parameters are shown in unencoded form here for clarity, but must be URL encoded
     * to be included as a part of a real HTML request.</p> <p>For more information
     * about ARNs, see <a
     * href="http://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">Amazon
     * Resource Names (ARNs) and AWS Service Namespaces</a> in the <i>AWS General
     * Reference</i>.</p>
     */
    inline void SetPolicySourceArn(Aws::String&& value) { m_policySourceArnHasBeenSet = true; m_policySourceArn = value; }

    /**
     * <p>The ARN of a user, group, or role whose policies contain the context keys
     * that you want listed. If you specify a user, the list includes context keys that
     * are found in all policies attached to the user as well as to all groups that the
     * user is a member of. If you pick a group or a role, then it includes only those
     * context keys that are found in policies attached to that entity. Note that all
     * parameters are shown in unencoded form here for clarity, but must be URL encoded
     * to be included as a part of a real HTML request.</p> <p>For more information
     * about ARNs, see <a
     * href="http://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">Amazon
     * Resource Names (ARNs) and AWS Service Namespaces</a> in the <i>AWS General
     * Reference</i>.</p>
     */
    inline void SetPolicySourceArn(const char* value) { m_policySourceArnHasBeenSet = true; m_policySourceArn.assign(value); }

    /**
     * <p>The ARN of a user, group, or role whose policies contain the context keys
     * that you want listed. If you specify a user, the list includes context keys that
     * are found in all policies attached to the user as well as to all groups that the
     * user is a member of. If you pick a group or a role, then it includes only those
     * context keys that are found in policies attached to that entity. Note that all
     * parameters are shown in unencoded form here for clarity, but must be URL encoded
     * to be included as a part of a real HTML request.</p> <p>For more information
     * about ARNs, see <a
     * href="http://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">Amazon
     * Resource Names (ARNs) and AWS Service Namespaces</a> in the <i>AWS General
     * Reference</i>.</p>
     */
    inline GetContextKeysForPrincipalPolicyRequest& WithPolicySourceArn(const Aws::String& value) { SetPolicySourceArn(value); return *this;}

    /**
     * <p>The ARN of a user, group, or role whose policies contain the context keys
     * that you want listed. If you specify a user, the list includes context keys that
     * are found in all policies attached to the user as well as to all groups that the
     * user is a member of. If you pick a group or a role, then it includes only those
     * context keys that are found in policies attached to that entity. Note that all
     * parameters are shown in unencoded form here for clarity, but must be URL encoded
     * to be included as a part of a real HTML request.</p> <p>For more information
     * about ARNs, see <a
     * href="http://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">Amazon
     * Resource Names (ARNs) and AWS Service Namespaces</a> in the <i>AWS General
     * Reference</i>.</p>
     */
    inline GetContextKeysForPrincipalPolicyRequest& WithPolicySourceArn(Aws::String&& value) { SetPolicySourceArn(value); return *this;}

    /**
     * <p>The ARN of a user, group, or role whose policies contain the context keys
     * that you want listed. If you specify a user, the list includes context keys that
     * are found in all policies attached to the user as well as to all groups that the
     * user is a member of. If you pick a group or a role, then it includes only those
     * context keys that are found in policies attached to that entity. Note that all
     * parameters are shown in unencoded form here for clarity, but must be URL encoded
     * to be included as a part of a real HTML request.</p> <p>For more information
     * about ARNs, see <a
     * href="http://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">Amazon
     * Resource Names (ARNs) and AWS Service Namespaces</a> in the <i>AWS General
     * Reference</i>.</p>
     */
    inline GetContextKeysForPrincipalPolicyRequest& WithPolicySourceArn(const char* value) { SetPolicySourceArn(value); return *this;}

    /**
     * <p>An optional list of additional policies for which you want the list of
     * context keys that are referenced.</p> <p>The <a
     * href="http://wikipedia.org/wiki/regex">regex pattern</a> for this parameter is a
     * string of characters consisting of any printable ASCII character ranging from
     * the space character (\u0020) through end of the ASCII character range (\u00FF).
     * It also includes the special characters tab (\u0009), line feed (\u000A), and
     * carriage return (\u000D).</p>
     */
    inline const Aws::Vector<Aws::String>& GetPolicyInputList() const{ return m_policyInputList; }

    /**
     * <p>An optional list of additional policies for which you want the list of
     * context keys that are referenced.</p> <p>The <a
     * href="http://wikipedia.org/wiki/regex">regex pattern</a> for this parameter is a
     * string of characters consisting of any printable ASCII character ranging from
     * the space character (\u0020) through end of the ASCII character range (\u00FF).
     * It also includes the special characters tab (\u0009), line feed (\u000A), and
     * carriage return (\u000D).</p>
     */
    inline void SetPolicyInputList(const Aws::Vector<Aws::String>& value) { m_policyInputListHasBeenSet = true; m_policyInputList = value; }

    /**
     * <p>An optional list of additional policies for which you want the list of
     * context keys that are referenced.</p> <p>The <a
     * href="http://wikipedia.org/wiki/regex">regex pattern</a> for this parameter is a
     * string of characters consisting of any printable ASCII character ranging from
     * the space character (\u0020) through end of the ASCII character range (\u00FF).
     * It also includes the special characters tab (\u0009), line feed (\u000A), and
     * carriage return (\u000D).</p>
     */
    inline void SetPolicyInputList(Aws::Vector<Aws::String>&& value) { m_policyInputListHasBeenSet = true; m_policyInputList = value; }

    /**
     * <p>An optional list of additional policies for which you want the list of
     * context keys that are referenced.</p> <p>The <a
     * href="http://wikipedia.org/wiki/regex">regex pattern</a> for this parameter is a
     * string of characters consisting of any printable ASCII character ranging from
     * the space character (\u0020) through end of the ASCII character range (\u00FF).
     * It also includes the special characters tab (\u0009), line feed (\u000A), and
     * carriage return (\u000D).</p>
     */
    inline GetContextKeysForPrincipalPolicyRequest& WithPolicyInputList(const Aws::Vector<Aws::String>& value) { SetPolicyInputList(value); return *this;}

    /**
     * <p>An optional list of additional policies for which you want the list of
     * context keys that are referenced.</p> <p>The <a
     * href="http://wikipedia.org/wiki/regex">regex pattern</a> for this parameter is a
     * string of characters consisting of any printable ASCII character ranging from
     * the space character (\u0020) through end of the ASCII character range (\u00FF).
     * It also includes the special characters tab (\u0009), line feed (\u000A), and
     * carriage return (\u000D).</p>
     */
    inline GetContextKeysForPrincipalPolicyRequest& WithPolicyInputList(Aws::Vector<Aws::String>&& value) { SetPolicyInputList(value); return *this;}

    /**
     * <p>An optional list of additional policies for which you want the list of
     * context keys that are referenced.</p> <p>The <a
     * href="http://wikipedia.org/wiki/regex">regex pattern</a> for this parameter is a
     * string of characters consisting of any printable ASCII character ranging from
     * the space character (\u0020) through end of the ASCII character range (\u00FF).
     * It also includes the special characters tab (\u0009), line feed (\u000A), and
     * carriage return (\u000D).</p>
     */
    inline GetContextKeysForPrincipalPolicyRequest& AddPolicyInputList(const Aws::String& value) { m_policyInputListHasBeenSet = true; m_policyInputList.push_back(value); return *this; }

    /**
     * <p>An optional list of additional policies for which you want the list of
     * context keys that are referenced.</p> <p>The <a
     * href="http://wikipedia.org/wiki/regex">regex pattern</a> for this parameter is a
     * string of characters consisting of any printable ASCII character ranging from
     * the space character (\u0020) through end of the ASCII character range (\u00FF).
     * It also includes the special characters tab (\u0009), line feed (\u000A), and
     * carriage return (\u000D).</p>
     */
    inline GetContextKeysForPrincipalPolicyRequest& AddPolicyInputList(Aws::String&& value) { m_policyInputListHasBeenSet = true; m_policyInputList.push_back(value); return *this; }

    /**
     * <p>An optional list of additional policies for which you want the list of
     * context keys that are referenced.</p> <p>The <a
     * href="http://wikipedia.org/wiki/regex">regex pattern</a> for this parameter is a
     * string of characters consisting of any printable ASCII character ranging from
     * the space character (\u0020) through end of the ASCII character range (\u00FF).
     * It also includes the special characters tab (\u0009), line feed (\u000A), and
     * carriage return (\u000D).</p>
     */
    inline GetContextKeysForPrincipalPolicyRequest& AddPolicyInputList(const char* value) { m_policyInputListHasBeenSet = true; m_policyInputList.push_back(value); return *this; }

  private:
    Aws::String m_policySourceArn;
    bool m_policySourceArnHasBeenSet;
    Aws::Vector<Aws::String> m_policyInputList;
    bool m_policyInputListHasBeenSet;
  };

} // namespace Model
} // namespace IAM
} // namespace Aws
