﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iam/IAM_EXPORTS.h>
#include <aws/iam/IAMRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/iam/model/ContextEntry.h>
#include <utility>

namespace Aws
{
namespace IAM
{
namespace Model
{

  /**
   */
  class AWS_IAM_API SimulatePrincipalPolicyRequest : public IAMRequest
  {
  public:
    SimulatePrincipalPolicyRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "SimulatePrincipalPolicy"; }

    Aws::String SerializePayload() const override;

  protected:
    void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    /**
     * <p>The Amazon Resource Name (ARN) of a user, group, or role whose policies you
     * want to include in the simulation. If you specify a user, group, or role, the
     * simulation includes all policies that are associated with that entity. If you
     * specify a user, the simulation also includes all policies that are attached to
     * any groups the user belongs to.</p> <p>For more information about ARNs, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">Amazon
     * Resource Names (ARNs)</a> in the <i>AWS General Reference</i>.</p>
     */
    inline const Aws::String& GetPolicySourceArn() const{ return m_policySourceArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of a user, group, or role whose policies you
     * want to include in the simulation. If you specify a user, group, or role, the
     * simulation includes all policies that are associated with that entity. If you
     * specify a user, the simulation also includes all policies that are attached to
     * any groups the user belongs to.</p> <p>For more information about ARNs, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">Amazon
     * Resource Names (ARNs)</a> in the <i>AWS General Reference</i>.</p>
     */
    inline bool PolicySourceArnHasBeenSet() const { return m_policySourceArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of a user, group, or role whose policies you
     * want to include in the simulation. If you specify a user, group, or role, the
     * simulation includes all policies that are associated with that entity. If you
     * specify a user, the simulation also includes all policies that are attached to
     * any groups the user belongs to.</p> <p>For more information about ARNs, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">Amazon
     * Resource Names (ARNs)</a> in the <i>AWS General Reference</i>.</p>
     */
    inline void SetPolicySourceArn(const Aws::String& value) { m_policySourceArnHasBeenSet = true; m_policySourceArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of a user, group, or role whose policies you
     * want to include in the simulation. If you specify a user, group, or role, the
     * simulation includes all policies that are associated with that entity. If you
     * specify a user, the simulation also includes all policies that are attached to
     * any groups the user belongs to.</p> <p>For more information about ARNs, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">Amazon
     * Resource Names (ARNs)</a> in the <i>AWS General Reference</i>.</p>
     */
    inline void SetPolicySourceArn(Aws::String&& value) { m_policySourceArnHasBeenSet = true; m_policySourceArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of a user, group, or role whose policies you
     * want to include in the simulation. If you specify a user, group, or role, the
     * simulation includes all policies that are associated with that entity. If you
     * specify a user, the simulation also includes all policies that are attached to
     * any groups the user belongs to.</p> <p>For more information about ARNs, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">Amazon
     * Resource Names (ARNs)</a> in the <i>AWS General Reference</i>.</p>
     */
    inline void SetPolicySourceArn(const char* value) { m_policySourceArnHasBeenSet = true; m_policySourceArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of a user, group, or role whose policies you
     * want to include in the simulation. If you specify a user, group, or role, the
     * simulation includes all policies that are associated with that entity. If you
     * specify a user, the simulation also includes all policies that are attached to
     * any groups the user belongs to.</p> <p>For more information about ARNs, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">Amazon
     * Resource Names (ARNs)</a> in the <i>AWS General Reference</i>.</p>
     */
    inline SimulatePrincipalPolicyRequest& WithPolicySourceArn(const Aws::String& value) { SetPolicySourceArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of a user, group, or role whose policies you
     * want to include in the simulation. If you specify a user, group, or role, the
     * simulation includes all policies that are associated with that entity. If you
     * specify a user, the simulation also includes all policies that are attached to
     * any groups the user belongs to.</p> <p>For more information about ARNs, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">Amazon
     * Resource Names (ARNs)</a> in the <i>AWS General Reference</i>.</p>
     */
    inline SimulatePrincipalPolicyRequest& WithPolicySourceArn(Aws::String&& value) { SetPolicySourceArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of a user, group, or role whose policies you
     * want to include in the simulation. If you specify a user, group, or role, the
     * simulation includes all policies that are associated with that entity. If you
     * specify a user, the simulation also includes all policies that are attached to
     * any groups the user belongs to.</p> <p>For more information about ARNs, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">Amazon
     * Resource Names (ARNs)</a> in the <i>AWS General Reference</i>.</p>
     */
    inline SimulatePrincipalPolicyRequest& WithPolicySourceArn(const char* value) { SetPolicySourceArn(value); return *this;}


    /**
     * <p>An optional list of additional policy documents to include in the simulation.
     * Each document is specified as a string containing the complete, valid JSON text
     * of an IAM policy.</p> <p>The <a href="http://wikipedia.org/wiki/regex">regex
     * pattern</a> used to validate this parameter is a string of characters consisting
     * of the following:</p> <ul> <li> <p>Any printable ASCII character ranging from
     * the space character (<code>\u0020</code>) through the end of the ASCII character
     * range</p> </li> <li> <p>The printable characters in the Basic Latin and Latin-1
     * Supplement character set (through <code>\u00FF</code>)</p> </li> <li> <p>The
     * special characters tab (<code>\u0009</code>), line feed (<code>\u000A</code>),
     * and carriage return (<code>\u000D</code>)</p> </li> </ul>
     */
    inline const Aws::Vector<Aws::String>& GetPolicyInputList() const{ return m_policyInputList; }

    /**
     * <p>An optional list of additional policy documents to include in the simulation.
     * Each document is specified as a string containing the complete, valid JSON text
     * of an IAM policy.</p> <p>The <a href="http://wikipedia.org/wiki/regex">regex
     * pattern</a> used to validate this parameter is a string of characters consisting
     * of the following:</p> <ul> <li> <p>Any printable ASCII character ranging from
     * the space character (<code>\u0020</code>) through the end of the ASCII character
     * range</p> </li> <li> <p>The printable characters in the Basic Latin and Latin-1
     * Supplement character set (through <code>\u00FF</code>)</p> </li> <li> <p>The
     * special characters tab (<code>\u0009</code>), line feed (<code>\u000A</code>),
     * and carriage return (<code>\u000D</code>)</p> </li> </ul>
     */
    inline bool PolicyInputListHasBeenSet() const { return m_policyInputListHasBeenSet; }

    /**
     * <p>An optional list of additional policy documents to include in the simulation.
     * Each document is specified as a string containing the complete, valid JSON text
     * of an IAM policy.</p> <p>The <a href="http://wikipedia.org/wiki/regex">regex
     * pattern</a> used to validate this parameter is a string of characters consisting
     * of the following:</p> <ul> <li> <p>Any printable ASCII character ranging from
     * the space character (<code>\u0020</code>) through the end of the ASCII character
     * range</p> </li> <li> <p>The printable characters in the Basic Latin and Latin-1
     * Supplement character set (through <code>\u00FF</code>)</p> </li> <li> <p>The
     * special characters tab (<code>\u0009</code>), line feed (<code>\u000A</code>),
     * and carriage return (<code>\u000D</code>)</p> </li> </ul>
     */
    inline void SetPolicyInputList(const Aws::Vector<Aws::String>& value) { m_policyInputListHasBeenSet = true; m_policyInputList = value; }

    /**
     * <p>An optional list of additional policy documents to include in the simulation.
     * Each document is specified as a string containing the complete, valid JSON text
     * of an IAM policy.</p> <p>The <a href="http://wikipedia.org/wiki/regex">regex
     * pattern</a> used to validate this parameter is a string of characters consisting
     * of the following:</p> <ul> <li> <p>Any printable ASCII character ranging from
     * the space character (<code>\u0020</code>) through the end of the ASCII character
     * range</p> </li> <li> <p>The printable characters in the Basic Latin and Latin-1
     * Supplement character set (through <code>\u00FF</code>)</p> </li> <li> <p>The
     * special characters tab (<code>\u0009</code>), line feed (<code>\u000A</code>),
     * and carriage return (<code>\u000D</code>)</p> </li> </ul>
     */
    inline void SetPolicyInputList(Aws::Vector<Aws::String>&& value) { m_policyInputListHasBeenSet = true; m_policyInputList = std::move(value); }

    /**
     * <p>An optional list of additional policy documents to include in the simulation.
     * Each document is specified as a string containing the complete, valid JSON text
     * of an IAM policy.</p> <p>The <a href="http://wikipedia.org/wiki/regex">regex
     * pattern</a> used to validate this parameter is a string of characters consisting
     * of the following:</p> <ul> <li> <p>Any printable ASCII character ranging from
     * the space character (<code>\u0020</code>) through the end of the ASCII character
     * range</p> </li> <li> <p>The printable characters in the Basic Latin and Latin-1
     * Supplement character set (through <code>\u00FF</code>)</p> </li> <li> <p>The
     * special characters tab (<code>\u0009</code>), line feed (<code>\u000A</code>),
     * and carriage return (<code>\u000D</code>)</p> </li> </ul>
     */
    inline SimulatePrincipalPolicyRequest& WithPolicyInputList(const Aws::Vector<Aws::String>& value) { SetPolicyInputList(value); return *this;}

    /**
     * <p>An optional list of additional policy documents to include in the simulation.
     * Each document is specified as a string containing the complete, valid JSON text
     * of an IAM policy.</p> <p>The <a href="http://wikipedia.org/wiki/regex">regex
     * pattern</a> used to validate this parameter is a string of characters consisting
     * of the following:</p> <ul> <li> <p>Any printable ASCII character ranging from
     * the space character (<code>\u0020</code>) through the end of the ASCII character
     * range</p> </li> <li> <p>The printable characters in the Basic Latin and Latin-1
     * Supplement character set (through <code>\u00FF</code>)</p> </li> <li> <p>The
     * special characters tab (<code>\u0009</code>), line feed (<code>\u000A</code>),
     * and carriage return (<code>\u000D</code>)</p> </li> </ul>
     */
    inline SimulatePrincipalPolicyRequest& WithPolicyInputList(Aws::Vector<Aws::String>&& value) { SetPolicyInputList(std::move(value)); return *this;}

    /**
     * <p>An optional list of additional policy documents to include in the simulation.
     * Each document is specified as a string containing the complete, valid JSON text
     * of an IAM policy.</p> <p>The <a href="http://wikipedia.org/wiki/regex">regex
     * pattern</a> used to validate this parameter is a string of characters consisting
     * of the following:</p> <ul> <li> <p>Any printable ASCII character ranging from
     * the space character (<code>\u0020</code>) through the end of the ASCII character
     * range</p> </li> <li> <p>The printable characters in the Basic Latin and Latin-1
     * Supplement character set (through <code>\u00FF</code>)</p> </li> <li> <p>The
     * special characters tab (<code>\u0009</code>), line feed (<code>\u000A</code>),
     * and carriage return (<code>\u000D</code>)</p> </li> </ul>
     */
    inline SimulatePrincipalPolicyRequest& AddPolicyInputList(const Aws::String& value) { m_policyInputListHasBeenSet = true; m_policyInputList.push_back(value); return *this; }

    /**
     * <p>An optional list of additional policy documents to include in the simulation.
     * Each document is specified as a string containing the complete, valid JSON text
     * of an IAM policy.</p> <p>The <a href="http://wikipedia.org/wiki/regex">regex
     * pattern</a> used to validate this parameter is a string of characters consisting
     * of the following:</p> <ul> <li> <p>Any printable ASCII character ranging from
     * the space character (<code>\u0020</code>) through the end of the ASCII character
     * range</p> </li> <li> <p>The printable characters in the Basic Latin and Latin-1
     * Supplement character set (through <code>\u00FF</code>)</p> </li> <li> <p>The
     * special characters tab (<code>\u0009</code>), line feed (<code>\u000A</code>),
     * and carriage return (<code>\u000D</code>)</p> </li> </ul>
     */
    inline SimulatePrincipalPolicyRequest& AddPolicyInputList(Aws::String&& value) { m_policyInputListHasBeenSet = true; m_policyInputList.push_back(std::move(value)); return *this; }

    /**
     * <p>An optional list of additional policy documents to include in the simulation.
     * Each document is specified as a string containing the complete, valid JSON text
     * of an IAM policy.</p> <p>The <a href="http://wikipedia.org/wiki/regex">regex
     * pattern</a> used to validate this parameter is a string of characters consisting
     * of the following:</p> <ul> <li> <p>Any printable ASCII character ranging from
     * the space character (<code>\u0020</code>) through the end of the ASCII character
     * range</p> </li> <li> <p>The printable characters in the Basic Latin and Latin-1
     * Supplement character set (through <code>\u00FF</code>)</p> </li> <li> <p>The
     * special characters tab (<code>\u0009</code>), line feed (<code>\u000A</code>),
     * and carriage return (<code>\u000D</code>)</p> </li> </ul>
     */
    inline SimulatePrincipalPolicyRequest& AddPolicyInputList(const char* value) { m_policyInputListHasBeenSet = true; m_policyInputList.push_back(value); return *this; }


    /**
     * <p>The IAM permissions boundary policy to simulate. The permissions boundary
     * sets the maximum permissions that the entity can have. You can input only one
     * permissions boundary when you pass a policy to this operation. An IAM entity can
     * only have one permissions boundary in effect at a time. For example, if a
     * permissions boundary is attached to an entity and you pass in a different
     * permissions boundary policy using this parameter, then the new permissions
     * boundary policy is used for the simulation. For more information about
     * permissions boundaries, see <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/access_policies_boundaries.html">Permissions
     * boundaries for IAM entities</a> in the <i>IAM User Guide</i>. The policy input
     * is specified as a string containing the complete, valid JSON text of a
     * permissions boundary policy.</p> <p>The <a
     * href="http://wikipedia.org/wiki/regex">regex pattern</a> used to validate this
     * parameter is a string of characters consisting of the following:</p> <ul> <li>
     * <p>Any printable ASCII character ranging from the space character
     * (<code>\u0020</code>) through the end of the ASCII character range</p> </li>
     * <li> <p>The printable characters in the Basic Latin and Latin-1 Supplement
     * character set (through <code>\u00FF</code>)</p> </li> <li> <p>The special
     * characters tab (<code>\u0009</code>), line feed (<code>\u000A</code>), and
     * carriage return (<code>\u000D</code>)</p> </li> </ul>
     */
    inline const Aws::Vector<Aws::String>& GetPermissionsBoundaryPolicyInputList() const{ return m_permissionsBoundaryPolicyInputList; }

    /**
     * <p>The IAM permissions boundary policy to simulate. The permissions boundary
     * sets the maximum permissions that the entity can have. You can input only one
     * permissions boundary when you pass a policy to this operation. An IAM entity can
     * only have one permissions boundary in effect at a time. For example, if a
     * permissions boundary is attached to an entity and you pass in a different
     * permissions boundary policy using this parameter, then the new permissions
     * boundary policy is used for the simulation. For more information about
     * permissions boundaries, see <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/access_policies_boundaries.html">Permissions
     * boundaries for IAM entities</a> in the <i>IAM User Guide</i>. The policy input
     * is specified as a string containing the complete, valid JSON text of a
     * permissions boundary policy.</p> <p>The <a
     * href="http://wikipedia.org/wiki/regex">regex pattern</a> used to validate this
     * parameter is a string of characters consisting of the following:</p> <ul> <li>
     * <p>Any printable ASCII character ranging from the space character
     * (<code>\u0020</code>) through the end of the ASCII character range</p> </li>
     * <li> <p>The printable characters in the Basic Latin and Latin-1 Supplement
     * character set (through <code>\u00FF</code>)</p> </li> <li> <p>The special
     * characters tab (<code>\u0009</code>), line feed (<code>\u000A</code>), and
     * carriage return (<code>\u000D</code>)</p> </li> </ul>
     */
    inline bool PermissionsBoundaryPolicyInputListHasBeenSet() const { return m_permissionsBoundaryPolicyInputListHasBeenSet; }

    /**
     * <p>The IAM permissions boundary policy to simulate. The permissions boundary
     * sets the maximum permissions that the entity can have. You can input only one
     * permissions boundary when you pass a policy to this operation. An IAM entity can
     * only have one permissions boundary in effect at a time. For example, if a
     * permissions boundary is attached to an entity and you pass in a different
     * permissions boundary policy using this parameter, then the new permissions
     * boundary policy is used for the simulation. For more information about
     * permissions boundaries, see <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/access_policies_boundaries.html">Permissions
     * boundaries for IAM entities</a> in the <i>IAM User Guide</i>. The policy input
     * is specified as a string containing the complete, valid JSON text of a
     * permissions boundary policy.</p> <p>The <a
     * href="http://wikipedia.org/wiki/regex">regex pattern</a> used to validate this
     * parameter is a string of characters consisting of the following:</p> <ul> <li>
     * <p>Any printable ASCII character ranging from the space character
     * (<code>\u0020</code>) through the end of the ASCII character range</p> </li>
     * <li> <p>The printable characters in the Basic Latin and Latin-1 Supplement
     * character set (through <code>\u00FF</code>)</p> </li> <li> <p>The special
     * characters tab (<code>\u0009</code>), line feed (<code>\u000A</code>), and
     * carriage return (<code>\u000D</code>)</p> </li> </ul>
     */
    inline void SetPermissionsBoundaryPolicyInputList(const Aws::Vector<Aws::String>& value) { m_permissionsBoundaryPolicyInputListHasBeenSet = true; m_permissionsBoundaryPolicyInputList = value; }

    /**
     * <p>The IAM permissions boundary policy to simulate. The permissions boundary
     * sets the maximum permissions that the entity can have. You can input only one
     * permissions boundary when you pass a policy to this operation. An IAM entity can
     * only have one permissions boundary in effect at a time. For example, if a
     * permissions boundary is attached to an entity and you pass in a different
     * permissions boundary policy using this parameter, then the new permissions
     * boundary policy is used for the simulation. For more information about
     * permissions boundaries, see <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/access_policies_boundaries.html">Permissions
     * boundaries for IAM entities</a> in the <i>IAM User Guide</i>. The policy input
     * is specified as a string containing the complete, valid JSON text of a
     * permissions boundary policy.</p> <p>The <a
     * href="http://wikipedia.org/wiki/regex">regex pattern</a> used to validate this
     * parameter is a string of characters consisting of the following:</p> <ul> <li>
     * <p>Any printable ASCII character ranging from the space character
     * (<code>\u0020</code>) through the end of the ASCII character range</p> </li>
     * <li> <p>The printable characters in the Basic Latin and Latin-1 Supplement
     * character set (through <code>\u00FF</code>)</p> </li> <li> <p>The special
     * characters tab (<code>\u0009</code>), line feed (<code>\u000A</code>), and
     * carriage return (<code>\u000D</code>)</p> </li> </ul>
     */
    inline void SetPermissionsBoundaryPolicyInputList(Aws::Vector<Aws::String>&& value) { m_permissionsBoundaryPolicyInputListHasBeenSet = true; m_permissionsBoundaryPolicyInputList = std::move(value); }

    /**
     * <p>The IAM permissions boundary policy to simulate. The permissions boundary
     * sets the maximum permissions that the entity can have. You can input only one
     * permissions boundary when you pass a policy to this operation. An IAM entity can
     * only have one permissions boundary in effect at a time. For example, if a
     * permissions boundary is attached to an entity and you pass in a different
     * permissions boundary policy using this parameter, then the new permissions
     * boundary policy is used for the simulation. For more information about
     * permissions boundaries, see <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/access_policies_boundaries.html">Permissions
     * boundaries for IAM entities</a> in the <i>IAM User Guide</i>. The policy input
     * is specified as a string containing the complete, valid JSON text of a
     * permissions boundary policy.</p> <p>The <a
     * href="http://wikipedia.org/wiki/regex">regex pattern</a> used to validate this
     * parameter is a string of characters consisting of the following:</p> <ul> <li>
     * <p>Any printable ASCII character ranging from the space character
     * (<code>\u0020</code>) through the end of the ASCII character range</p> </li>
     * <li> <p>The printable characters in the Basic Latin and Latin-1 Supplement
     * character set (through <code>\u00FF</code>)</p> </li> <li> <p>The special
     * characters tab (<code>\u0009</code>), line feed (<code>\u000A</code>), and
     * carriage return (<code>\u000D</code>)</p> </li> </ul>
     */
    inline SimulatePrincipalPolicyRequest& WithPermissionsBoundaryPolicyInputList(const Aws::Vector<Aws::String>& value) { SetPermissionsBoundaryPolicyInputList(value); return *this;}

    /**
     * <p>The IAM permissions boundary policy to simulate. The permissions boundary
     * sets the maximum permissions that the entity can have. You can input only one
     * permissions boundary when you pass a policy to this operation. An IAM entity can
     * only have one permissions boundary in effect at a time. For example, if a
     * permissions boundary is attached to an entity and you pass in a different
     * permissions boundary policy using this parameter, then the new permissions
     * boundary policy is used for the simulation. For more information about
     * permissions boundaries, see <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/access_policies_boundaries.html">Permissions
     * boundaries for IAM entities</a> in the <i>IAM User Guide</i>. The policy input
     * is specified as a string containing the complete, valid JSON text of a
     * permissions boundary policy.</p> <p>The <a
     * href="http://wikipedia.org/wiki/regex">regex pattern</a> used to validate this
     * parameter is a string of characters consisting of the following:</p> <ul> <li>
     * <p>Any printable ASCII character ranging from the space character
     * (<code>\u0020</code>) through the end of the ASCII character range</p> </li>
     * <li> <p>The printable characters in the Basic Latin and Latin-1 Supplement
     * character set (through <code>\u00FF</code>)</p> </li> <li> <p>The special
     * characters tab (<code>\u0009</code>), line feed (<code>\u000A</code>), and
     * carriage return (<code>\u000D</code>)</p> </li> </ul>
     */
    inline SimulatePrincipalPolicyRequest& WithPermissionsBoundaryPolicyInputList(Aws::Vector<Aws::String>&& value) { SetPermissionsBoundaryPolicyInputList(std::move(value)); return *this;}

    /**
     * <p>The IAM permissions boundary policy to simulate. The permissions boundary
     * sets the maximum permissions that the entity can have. You can input only one
     * permissions boundary when you pass a policy to this operation. An IAM entity can
     * only have one permissions boundary in effect at a time. For example, if a
     * permissions boundary is attached to an entity and you pass in a different
     * permissions boundary policy using this parameter, then the new permissions
     * boundary policy is used for the simulation. For more information about
     * permissions boundaries, see <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/access_policies_boundaries.html">Permissions
     * boundaries for IAM entities</a> in the <i>IAM User Guide</i>. The policy input
     * is specified as a string containing the complete, valid JSON text of a
     * permissions boundary policy.</p> <p>The <a
     * href="http://wikipedia.org/wiki/regex">regex pattern</a> used to validate this
     * parameter is a string of characters consisting of the following:</p> <ul> <li>
     * <p>Any printable ASCII character ranging from the space character
     * (<code>\u0020</code>) through the end of the ASCII character range</p> </li>
     * <li> <p>The printable characters in the Basic Latin and Latin-1 Supplement
     * character set (through <code>\u00FF</code>)</p> </li> <li> <p>The special
     * characters tab (<code>\u0009</code>), line feed (<code>\u000A</code>), and
     * carriage return (<code>\u000D</code>)</p> </li> </ul>
     */
    inline SimulatePrincipalPolicyRequest& AddPermissionsBoundaryPolicyInputList(const Aws::String& value) { m_permissionsBoundaryPolicyInputListHasBeenSet = true; m_permissionsBoundaryPolicyInputList.push_back(value); return *this; }

    /**
     * <p>The IAM permissions boundary policy to simulate. The permissions boundary
     * sets the maximum permissions that the entity can have. You can input only one
     * permissions boundary when you pass a policy to this operation. An IAM entity can
     * only have one permissions boundary in effect at a time. For example, if a
     * permissions boundary is attached to an entity and you pass in a different
     * permissions boundary policy using this parameter, then the new permissions
     * boundary policy is used for the simulation. For more information about
     * permissions boundaries, see <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/access_policies_boundaries.html">Permissions
     * boundaries for IAM entities</a> in the <i>IAM User Guide</i>. The policy input
     * is specified as a string containing the complete, valid JSON text of a
     * permissions boundary policy.</p> <p>The <a
     * href="http://wikipedia.org/wiki/regex">regex pattern</a> used to validate this
     * parameter is a string of characters consisting of the following:</p> <ul> <li>
     * <p>Any printable ASCII character ranging from the space character
     * (<code>\u0020</code>) through the end of the ASCII character range</p> </li>
     * <li> <p>The printable characters in the Basic Latin and Latin-1 Supplement
     * character set (through <code>\u00FF</code>)</p> </li> <li> <p>The special
     * characters tab (<code>\u0009</code>), line feed (<code>\u000A</code>), and
     * carriage return (<code>\u000D</code>)</p> </li> </ul>
     */
    inline SimulatePrincipalPolicyRequest& AddPermissionsBoundaryPolicyInputList(Aws::String&& value) { m_permissionsBoundaryPolicyInputListHasBeenSet = true; m_permissionsBoundaryPolicyInputList.push_back(std::move(value)); return *this; }

    /**
     * <p>The IAM permissions boundary policy to simulate. The permissions boundary
     * sets the maximum permissions that the entity can have. You can input only one
     * permissions boundary when you pass a policy to this operation. An IAM entity can
     * only have one permissions boundary in effect at a time. For example, if a
     * permissions boundary is attached to an entity and you pass in a different
     * permissions boundary policy using this parameter, then the new permissions
     * boundary policy is used for the simulation. For more information about
     * permissions boundaries, see <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/access_policies_boundaries.html">Permissions
     * boundaries for IAM entities</a> in the <i>IAM User Guide</i>. The policy input
     * is specified as a string containing the complete, valid JSON text of a
     * permissions boundary policy.</p> <p>The <a
     * href="http://wikipedia.org/wiki/regex">regex pattern</a> used to validate this
     * parameter is a string of characters consisting of the following:</p> <ul> <li>
     * <p>Any printable ASCII character ranging from the space character
     * (<code>\u0020</code>) through the end of the ASCII character range</p> </li>
     * <li> <p>The printable characters in the Basic Latin and Latin-1 Supplement
     * character set (through <code>\u00FF</code>)</p> </li> <li> <p>The special
     * characters tab (<code>\u0009</code>), line feed (<code>\u000A</code>), and
     * carriage return (<code>\u000D</code>)</p> </li> </ul>
     */
    inline SimulatePrincipalPolicyRequest& AddPermissionsBoundaryPolicyInputList(const char* value) { m_permissionsBoundaryPolicyInputListHasBeenSet = true; m_permissionsBoundaryPolicyInputList.push_back(value); return *this; }


    /**
     * <p>A list of names of API operations to evaluate in the simulation. Each
     * operation is evaluated for each resource. Each operation must include the
     * service identifier, such as <code>iam:CreateUser</code>.</p>
     */
    inline const Aws::Vector<Aws::String>& GetActionNames() const{ return m_actionNames; }

    /**
     * <p>A list of names of API operations to evaluate in the simulation. Each
     * operation is evaluated for each resource. Each operation must include the
     * service identifier, such as <code>iam:CreateUser</code>.</p>
     */
    inline bool ActionNamesHasBeenSet() const { return m_actionNamesHasBeenSet; }

    /**
     * <p>A list of names of API operations to evaluate in the simulation. Each
     * operation is evaluated for each resource. Each operation must include the
     * service identifier, such as <code>iam:CreateUser</code>.</p>
     */
    inline void SetActionNames(const Aws::Vector<Aws::String>& value) { m_actionNamesHasBeenSet = true; m_actionNames = value; }

    /**
     * <p>A list of names of API operations to evaluate in the simulation. Each
     * operation is evaluated for each resource. Each operation must include the
     * service identifier, such as <code>iam:CreateUser</code>.</p>
     */
    inline void SetActionNames(Aws::Vector<Aws::String>&& value) { m_actionNamesHasBeenSet = true; m_actionNames = std::move(value); }

    /**
     * <p>A list of names of API operations to evaluate in the simulation. Each
     * operation is evaluated for each resource. Each operation must include the
     * service identifier, such as <code>iam:CreateUser</code>.</p>
     */
    inline SimulatePrincipalPolicyRequest& WithActionNames(const Aws::Vector<Aws::String>& value) { SetActionNames(value); return *this;}

    /**
     * <p>A list of names of API operations to evaluate in the simulation. Each
     * operation is evaluated for each resource. Each operation must include the
     * service identifier, such as <code>iam:CreateUser</code>.</p>
     */
    inline SimulatePrincipalPolicyRequest& WithActionNames(Aws::Vector<Aws::String>&& value) { SetActionNames(std::move(value)); return *this;}

    /**
     * <p>A list of names of API operations to evaluate in the simulation. Each
     * operation is evaluated for each resource. Each operation must include the
     * service identifier, such as <code>iam:CreateUser</code>.</p>
     */
    inline SimulatePrincipalPolicyRequest& AddActionNames(const Aws::String& value) { m_actionNamesHasBeenSet = true; m_actionNames.push_back(value); return *this; }

    /**
     * <p>A list of names of API operations to evaluate in the simulation. Each
     * operation is evaluated for each resource. Each operation must include the
     * service identifier, such as <code>iam:CreateUser</code>.</p>
     */
    inline SimulatePrincipalPolicyRequest& AddActionNames(Aws::String&& value) { m_actionNamesHasBeenSet = true; m_actionNames.push_back(std::move(value)); return *this; }

    /**
     * <p>A list of names of API operations to evaluate in the simulation. Each
     * operation is evaluated for each resource. Each operation must include the
     * service identifier, such as <code>iam:CreateUser</code>.</p>
     */
    inline SimulatePrincipalPolicyRequest& AddActionNames(const char* value) { m_actionNamesHasBeenSet = true; m_actionNames.push_back(value); return *this; }


    /**
     * <p>A list of ARNs of AWS resources to include in the simulation. If this
     * parameter is not provided, then the value defaults to <code>*</code> (all
     * resources). Each API in the <code>ActionNames</code> parameter is evaluated for
     * each resource in this list. The simulation determines the access result (allowed
     * or denied) of each combination and reports it in the response. You can simulate
     * resources that don't exist in your account.</p> <p>The simulation does not
     * automatically retrieve policies for the specified resources. If you want to
     * include a resource policy in the simulation, then you must include the policy as
     * a string in the <code>ResourcePolicy</code> parameter.</p> <p>For more
     * information about ARNs, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">Amazon
     * Resource Names (ARNs)</a> in the <i>AWS General Reference</i>.</p>
     */
    inline const Aws::Vector<Aws::String>& GetResourceArns() const{ return m_resourceArns; }

    /**
     * <p>A list of ARNs of AWS resources to include in the simulation. If this
     * parameter is not provided, then the value defaults to <code>*</code> (all
     * resources). Each API in the <code>ActionNames</code> parameter is evaluated for
     * each resource in this list. The simulation determines the access result (allowed
     * or denied) of each combination and reports it in the response. You can simulate
     * resources that don't exist in your account.</p> <p>The simulation does not
     * automatically retrieve policies for the specified resources. If you want to
     * include a resource policy in the simulation, then you must include the policy as
     * a string in the <code>ResourcePolicy</code> parameter.</p> <p>For more
     * information about ARNs, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">Amazon
     * Resource Names (ARNs)</a> in the <i>AWS General Reference</i>.</p>
     */
    inline bool ResourceArnsHasBeenSet() const { return m_resourceArnsHasBeenSet; }

    /**
     * <p>A list of ARNs of AWS resources to include in the simulation. If this
     * parameter is not provided, then the value defaults to <code>*</code> (all
     * resources). Each API in the <code>ActionNames</code> parameter is evaluated for
     * each resource in this list. The simulation determines the access result (allowed
     * or denied) of each combination and reports it in the response. You can simulate
     * resources that don't exist in your account.</p> <p>The simulation does not
     * automatically retrieve policies for the specified resources. If you want to
     * include a resource policy in the simulation, then you must include the policy as
     * a string in the <code>ResourcePolicy</code> parameter.</p> <p>For more
     * information about ARNs, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">Amazon
     * Resource Names (ARNs)</a> in the <i>AWS General Reference</i>.</p>
     */
    inline void SetResourceArns(const Aws::Vector<Aws::String>& value) { m_resourceArnsHasBeenSet = true; m_resourceArns = value; }

    /**
     * <p>A list of ARNs of AWS resources to include in the simulation. If this
     * parameter is not provided, then the value defaults to <code>*</code> (all
     * resources). Each API in the <code>ActionNames</code> parameter is evaluated for
     * each resource in this list. The simulation determines the access result (allowed
     * or denied) of each combination and reports it in the response. You can simulate
     * resources that don't exist in your account.</p> <p>The simulation does not
     * automatically retrieve policies for the specified resources. If you want to
     * include a resource policy in the simulation, then you must include the policy as
     * a string in the <code>ResourcePolicy</code> parameter.</p> <p>For more
     * information about ARNs, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">Amazon
     * Resource Names (ARNs)</a> in the <i>AWS General Reference</i>.</p>
     */
    inline void SetResourceArns(Aws::Vector<Aws::String>&& value) { m_resourceArnsHasBeenSet = true; m_resourceArns = std::move(value); }

    /**
     * <p>A list of ARNs of AWS resources to include in the simulation. If this
     * parameter is not provided, then the value defaults to <code>*</code> (all
     * resources). Each API in the <code>ActionNames</code> parameter is evaluated for
     * each resource in this list. The simulation determines the access result (allowed
     * or denied) of each combination and reports it in the response. You can simulate
     * resources that don't exist in your account.</p> <p>The simulation does not
     * automatically retrieve policies for the specified resources. If you want to
     * include a resource policy in the simulation, then you must include the policy as
     * a string in the <code>ResourcePolicy</code> parameter.</p> <p>For more
     * information about ARNs, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">Amazon
     * Resource Names (ARNs)</a> in the <i>AWS General Reference</i>.</p>
     */
    inline SimulatePrincipalPolicyRequest& WithResourceArns(const Aws::Vector<Aws::String>& value) { SetResourceArns(value); return *this;}

    /**
     * <p>A list of ARNs of AWS resources to include in the simulation. If this
     * parameter is not provided, then the value defaults to <code>*</code> (all
     * resources). Each API in the <code>ActionNames</code> parameter is evaluated for
     * each resource in this list. The simulation determines the access result (allowed
     * or denied) of each combination and reports it in the response. You can simulate
     * resources that don't exist in your account.</p> <p>The simulation does not
     * automatically retrieve policies for the specified resources. If you want to
     * include a resource policy in the simulation, then you must include the policy as
     * a string in the <code>ResourcePolicy</code> parameter.</p> <p>For more
     * information about ARNs, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">Amazon
     * Resource Names (ARNs)</a> in the <i>AWS General Reference</i>.</p>
     */
    inline SimulatePrincipalPolicyRequest& WithResourceArns(Aws::Vector<Aws::String>&& value) { SetResourceArns(std::move(value)); return *this;}

    /**
     * <p>A list of ARNs of AWS resources to include in the simulation. If this
     * parameter is not provided, then the value defaults to <code>*</code> (all
     * resources). Each API in the <code>ActionNames</code> parameter is evaluated for
     * each resource in this list. The simulation determines the access result (allowed
     * or denied) of each combination and reports it in the response. You can simulate
     * resources that don't exist in your account.</p> <p>The simulation does not
     * automatically retrieve policies for the specified resources. If you want to
     * include a resource policy in the simulation, then you must include the policy as
     * a string in the <code>ResourcePolicy</code> parameter.</p> <p>For more
     * information about ARNs, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">Amazon
     * Resource Names (ARNs)</a> in the <i>AWS General Reference</i>.</p>
     */
    inline SimulatePrincipalPolicyRequest& AddResourceArns(const Aws::String& value) { m_resourceArnsHasBeenSet = true; m_resourceArns.push_back(value); return *this; }

    /**
     * <p>A list of ARNs of AWS resources to include in the simulation. If this
     * parameter is not provided, then the value defaults to <code>*</code> (all
     * resources). Each API in the <code>ActionNames</code> parameter is evaluated for
     * each resource in this list. The simulation determines the access result (allowed
     * or denied) of each combination and reports it in the response. You can simulate
     * resources that don't exist in your account.</p> <p>The simulation does not
     * automatically retrieve policies for the specified resources. If you want to
     * include a resource policy in the simulation, then you must include the policy as
     * a string in the <code>ResourcePolicy</code> parameter.</p> <p>For more
     * information about ARNs, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">Amazon
     * Resource Names (ARNs)</a> in the <i>AWS General Reference</i>.</p>
     */
    inline SimulatePrincipalPolicyRequest& AddResourceArns(Aws::String&& value) { m_resourceArnsHasBeenSet = true; m_resourceArns.push_back(std::move(value)); return *this; }

    /**
     * <p>A list of ARNs of AWS resources to include in the simulation. If this
     * parameter is not provided, then the value defaults to <code>*</code> (all
     * resources). Each API in the <code>ActionNames</code> parameter is evaluated for
     * each resource in this list. The simulation determines the access result (allowed
     * or denied) of each combination and reports it in the response. You can simulate
     * resources that don't exist in your account.</p> <p>The simulation does not
     * automatically retrieve policies for the specified resources. If you want to
     * include a resource policy in the simulation, then you must include the policy as
     * a string in the <code>ResourcePolicy</code> parameter.</p> <p>For more
     * information about ARNs, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">Amazon
     * Resource Names (ARNs)</a> in the <i>AWS General Reference</i>.</p>
     */
    inline SimulatePrincipalPolicyRequest& AddResourceArns(const char* value) { m_resourceArnsHasBeenSet = true; m_resourceArns.push_back(value); return *this; }


    /**
     * <p>A resource-based policy to include in the simulation provided as a string.
     * Each resource in the simulation is treated as if it had this policy attached.
     * You can include only one resource-based policy in a simulation.</p> <p>The <a
     * href="http://wikipedia.org/wiki/regex">regex pattern</a> used to validate this
     * parameter is a string of characters consisting of the following:</p> <ul> <li>
     * <p>Any printable ASCII character ranging from the space character
     * (<code>\u0020</code>) through the end of the ASCII character range</p> </li>
     * <li> <p>The printable characters in the Basic Latin and Latin-1 Supplement
     * character set (through <code>\u00FF</code>)</p> </li> <li> <p>The special
     * characters tab (<code>\u0009</code>), line feed (<code>\u000A</code>), and
     * carriage return (<code>\u000D</code>)</p> </li> </ul>
     */
    inline const Aws::String& GetResourcePolicy() const{ return m_resourcePolicy; }

    /**
     * <p>A resource-based policy to include in the simulation provided as a string.
     * Each resource in the simulation is treated as if it had this policy attached.
     * You can include only one resource-based policy in a simulation.</p> <p>The <a
     * href="http://wikipedia.org/wiki/regex">regex pattern</a> used to validate this
     * parameter is a string of characters consisting of the following:</p> <ul> <li>
     * <p>Any printable ASCII character ranging from the space character
     * (<code>\u0020</code>) through the end of the ASCII character range</p> </li>
     * <li> <p>The printable characters in the Basic Latin and Latin-1 Supplement
     * character set (through <code>\u00FF</code>)</p> </li> <li> <p>The special
     * characters tab (<code>\u0009</code>), line feed (<code>\u000A</code>), and
     * carriage return (<code>\u000D</code>)</p> </li> </ul>
     */
    inline bool ResourcePolicyHasBeenSet() const { return m_resourcePolicyHasBeenSet; }

    /**
     * <p>A resource-based policy to include in the simulation provided as a string.
     * Each resource in the simulation is treated as if it had this policy attached.
     * You can include only one resource-based policy in a simulation.</p> <p>The <a
     * href="http://wikipedia.org/wiki/regex">regex pattern</a> used to validate this
     * parameter is a string of characters consisting of the following:</p> <ul> <li>
     * <p>Any printable ASCII character ranging from the space character
     * (<code>\u0020</code>) through the end of the ASCII character range</p> </li>
     * <li> <p>The printable characters in the Basic Latin and Latin-1 Supplement
     * character set (through <code>\u00FF</code>)</p> </li> <li> <p>The special
     * characters tab (<code>\u0009</code>), line feed (<code>\u000A</code>), and
     * carriage return (<code>\u000D</code>)</p> </li> </ul>
     */
    inline void SetResourcePolicy(const Aws::String& value) { m_resourcePolicyHasBeenSet = true; m_resourcePolicy = value; }

    /**
     * <p>A resource-based policy to include in the simulation provided as a string.
     * Each resource in the simulation is treated as if it had this policy attached.
     * You can include only one resource-based policy in a simulation.</p> <p>The <a
     * href="http://wikipedia.org/wiki/regex">regex pattern</a> used to validate this
     * parameter is a string of characters consisting of the following:</p> <ul> <li>
     * <p>Any printable ASCII character ranging from the space character
     * (<code>\u0020</code>) through the end of the ASCII character range</p> </li>
     * <li> <p>The printable characters in the Basic Latin and Latin-1 Supplement
     * character set (through <code>\u00FF</code>)</p> </li> <li> <p>The special
     * characters tab (<code>\u0009</code>), line feed (<code>\u000A</code>), and
     * carriage return (<code>\u000D</code>)</p> </li> </ul>
     */
    inline void SetResourcePolicy(Aws::String&& value) { m_resourcePolicyHasBeenSet = true; m_resourcePolicy = std::move(value); }

    /**
     * <p>A resource-based policy to include in the simulation provided as a string.
     * Each resource in the simulation is treated as if it had this policy attached.
     * You can include only one resource-based policy in a simulation.</p> <p>The <a
     * href="http://wikipedia.org/wiki/regex">regex pattern</a> used to validate this
     * parameter is a string of characters consisting of the following:</p> <ul> <li>
     * <p>Any printable ASCII character ranging from the space character
     * (<code>\u0020</code>) through the end of the ASCII character range</p> </li>
     * <li> <p>The printable characters in the Basic Latin and Latin-1 Supplement
     * character set (through <code>\u00FF</code>)</p> </li> <li> <p>The special
     * characters tab (<code>\u0009</code>), line feed (<code>\u000A</code>), and
     * carriage return (<code>\u000D</code>)</p> </li> </ul>
     */
    inline void SetResourcePolicy(const char* value) { m_resourcePolicyHasBeenSet = true; m_resourcePolicy.assign(value); }

    /**
     * <p>A resource-based policy to include in the simulation provided as a string.
     * Each resource in the simulation is treated as if it had this policy attached.
     * You can include only one resource-based policy in a simulation.</p> <p>The <a
     * href="http://wikipedia.org/wiki/regex">regex pattern</a> used to validate this
     * parameter is a string of characters consisting of the following:</p> <ul> <li>
     * <p>Any printable ASCII character ranging from the space character
     * (<code>\u0020</code>) through the end of the ASCII character range</p> </li>
     * <li> <p>The printable characters in the Basic Latin and Latin-1 Supplement
     * character set (through <code>\u00FF</code>)</p> </li> <li> <p>The special
     * characters tab (<code>\u0009</code>), line feed (<code>\u000A</code>), and
     * carriage return (<code>\u000D</code>)</p> </li> </ul>
     */
    inline SimulatePrincipalPolicyRequest& WithResourcePolicy(const Aws::String& value) { SetResourcePolicy(value); return *this;}

    /**
     * <p>A resource-based policy to include in the simulation provided as a string.
     * Each resource in the simulation is treated as if it had this policy attached.
     * You can include only one resource-based policy in a simulation.</p> <p>The <a
     * href="http://wikipedia.org/wiki/regex">regex pattern</a> used to validate this
     * parameter is a string of characters consisting of the following:</p> <ul> <li>
     * <p>Any printable ASCII character ranging from the space character
     * (<code>\u0020</code>) through the end of the ASCII character range</p> </li>
     * <li> <p>The printable characters in the Basic Latin and Latin-1 Supplement
     * character set (through <code>\u00FF</code>)</p> </li> <li> <p>The special
     * characters tab (<code>\u0009</code>), line feed (<code>\u000A</code>), and
     * carriage return (<code>\u000D</code>)</p> </li> </ul>
     */
    inline SimulatePrincipalPolicyRequest& WithResourcePolicy(Aws::String&& value) { SetResourcePolicy(std::move(value)); return *this;}

    /**
     * <p>A resource-based policy to include in the simulation provided as a string.
     * Each resource in the simulation is treated as if it had this policy attached.
     * You can include only one resource-based policy in a simulation.</p> <p>The <a
     * href="http://wikipedia.org/wiki/regex">regex pattern</a> used to validate this
     * parameter is a string of characters consisting of the following:</p> <ul> <li>
     * <p>Any printable ASCII character ranging from the space character
     * (<code>\u0020</code>) through the end of the ASCII character range</p> </li>
     * <li> <p>The printable characters in the Basic Latin and Latin-1 Supplement
     * character set (through <code>\u00FF</code>)</p> </li> <li> <p>The special
     * characters tab (<code>\u0009</code>), line feed (<code>\u000A</code>), and
     * carriage return (<code>\u000D</code>)</p> </li> </ul>
     */
    inline SimulatePrincipalPolicyRequest& WithResourcePolicy(const char* value) { SetResourcePolicy(value); return *this;}


    /**
     * <p>An AWS account ID that specifies the owner of any simulated resource that
     * does not identify its owner in the resource ARN. Examples of resource ARNs
     * include an S3 bucket or object. If <code>ResourceOwner</code> is specified, it
     * is also used as the account owner of any <code>ResourcePolicy</code> included in
     * the simulation. If the <code>ResourceOwner</code> parameter is not specified,
     * then the owner of the resources and the resource policy defaults to the account
     * of the identity provided in <code>CallerArn</code>. This parameter is required
     * only if you specify a resource-based policy and account that owns the resource
     * is different from the account that owns the simulated calling user
     * <code>CallerArn</code>.</p>
     */
    inline const Aws::String& GetResourceOwner() const{ return m_resourceOwner; }

    /**
     * <p>An AWS account ID that specifies the owner of any simulated resource that
     * does not identify its owner in the resource ARN. Examples of resource ARNs
     * include an S3 bucket or object. If <code>ResourceOwner</code> is specified, it
     * is also used as the account owner of any <code>ResourcePolicy</code> included in
     * the simulation. If the <code>ResourceOwner</code> parameter is not specified,
     * then the owner of the resources and the resource policy defaults to the account
     * of the identity provided in <code>CallerArn</code>. This parameter is required
     * only if you specify a resource-based policy and account that owns the resource
     * is different from the account that owns the simulated calling user
     * <code>CallerArn</code>.</p>
     */
    inline bool ResourceOwnerHasBeenSet() const { return m_resourceOwnerHasBeenSet; }

    /**
     * <p>An AWS account ID that specifies the owner of any simulated resource that
     * does not identify its owner in the resource ARN. Examples of resource ARNs
     * include an S3 bucket or object. If <code>ResourceOwner</code> is specified, it
     * is also used as the account owner of any <code>ResourcePolicy</code> included in
     * the simulation. If the <code>ResourceOwner</code> parameter is not specified,
     * then the owner of the resources and the resource policy defaults to the account
     * of the identity provided in <code>CallerArn</code>. This parameter is required
     * only if you specify a resource-based policy and account that owns the resource
     * is different from the account that owns the simulated calling user
     * <code>CallerArn</code>.</p>
     */
    inline void SetResourceOwner(const Aws::String& value) { m_resourceOwnerHasBeenSet = true; m_resourceOwner = value; }

    /**
     * <p>An AWS account ID that specifies the owner of any simulated resource that
     * does not identify its owner in the resource ARN. Examples of resource ARNs
     * include an S3 bucket or object. If <code>ResourceOwner</code> is specified, it
     * is also used as the account owner of any <code>ResourcePolicy</code> included in
     * the simulation. If the <code>ResourceOwner</code> parameter is not specified,
     * then the owner of the resources and the resource policy defaults to the account
     * of the identity provided in <code>CallerArn</code>. This parameter is required
     * only if you specify a resource-based policy and account that owns the resource
     * is different from the account that owns the simulated calling user
     * <code>CallerArn</code>.</p>
     */
    inline void SetResourceOwner(Aws::String&& value) { m_resourceOwnerHasBeenSet = true; m_resourceOwner = std::move(value); }

    /**
     * <p>An AWS account ID that specifies the owner of any simulated resource that
     * does not identify its owner in the resource ARN. Examples of resource ARNs
     * include an S3 bucket or object. If <code>ResourceOwner</code> is specified, it
     * is also used as the account owner of any <code>ResourcePolicy</code> included in
     * the simulation. If the <code>ResourceOwner</code> parameter is not specified,
     * then the owner of the resources and the resource policy defaults to the account
     * of the identity provided in <code>CallerArn</code>. This parameter is required
     * only if you specify a resource-based policy and account that owns the resource
     * is different from the account that owns the simulated calling user
     * <code>CallerArn</code>.</p>
     */
    inline void SetResourceOwner(const char* value) { m_resourceOwnerHasBeenSet = true; m_resourceOwner.assign(value); }

    /**
     * <p>An AWS account ID that specifies the owner of any simulated resource that
     * does not identify its owner in the resource ARN. Examples of resource ARNs
     * include an S3 bucket or object. If <code>ResourceOwner</code> is specified, it
     * is also used as the account owner of any <code>ResourcePolicy</code> included in
     * the simulation. If the <code>ResourceOwner</code> parameter is not specified,
     * then the owner of the resources and the resource policy defaults to the account
     * of the identity provided in <code>CallerArn</code>. This parameter is required
     * only if you specify a resource-based policy and account that owns the resource
     * is different from the account that owns the simulated calling user
     * <code>CallerArn</code>.</p>
     */
    inline SimulatePrincipalPolicyRequest& WithResourceOwner(const Aws::String& value) { SetResourceOwner(value); return *this;}

    /**
     * <p>An AWS account ID that specifies the owner of any simulated resource that
     * does not identify its owner in the resource ARN. Examples of resource ARNs
     * include an S3 bucket or object. If <code>ResourceOwner</code> is specified, it
     * is also used as the account owner of any <code>ResourcePolicy</code> included in
     * the simulation. If the <code>ResourceOwner</code> parameter is not specified,
     * then the owner of the resources and the resource policy defaults to the account
     * of the identity provided in <code>CallerArn</code>. This parameter is required
     * only if you specify a resource-based policy and account that owns the resource
     * is different from the account that owns the simulated calling user
     * <code>CallerArn</code>.</p>
     */
    inline SimulatePrincipalPolicyRequest& WithResourceOwner(Aws::String&& value) { SetResourceOwner(std::move(value)); return *this;}

    /**
     * <p>An AWS account ID that specifies the owner of any simulated resource that
     * does not identify its owner in the resource ARN. Examples of resource ARNs
     * include an S3 bucket or object. If <code>ResourceOwner</code> is specified, it
     * is also used as the account owner of any <code>ResourcePolicy</code> included in
     * the simulation. If the <code>ResourceOwner</code> parameter is not specified,
     * then the owner of the resources and the resource policy defaults to the account
     * of the identity provided in <code>CallerArn</code>. This parameter is required
     * only if you specify a resource-based policy and account that owns the resource
     * is different from the account that owns the simulated calling user
     * <code>CallerArn</code>.</p>
     */
    inline SimulatePrincipalPolicyRequest& WithResourceOwner(const char* value) { SetResourceOwner(value); return *this;}


    /**
     * <p>The ARN of the IAM user that you want to specify as the simulated caller of
     * the API operations. If you do not specify a <code>CallerArn</code>, it defaults
     * to the ARN of the user that you specify in <code>PolicySourceArn</code>, if you
     * specified a user. If you include both a <code>PolicySourceArn</code> (for
     * example, <code>arn:aws:iam::123456789012:user/David</code>) and a
     * <code>CallerArn</code> (for example,
     * <code>arn:aws:iam::123456789012:user/Bob</code>), the result is that you
     * simulate calling the API operations as Bob, as if Bob had David's policies.</p>
     * <p>You can specify only the ARN of an IAM user. You cannot specify the ARN of an
     * assumed role, federated user, or a service principal.</p> <p>
     * <code>CallerArn</code> is required if you include a <code>ResourcePolicy</code>
     * and the <code>PolicySourceArn</code> is not the ARN for an IAM user. This is
     * required so that the resource-based policy's <code>Principal</code> element has
     * a value to use in evaluating the policy.</p> <p>For more information about ARNs,
     * see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">Amazon
     * Resource Names (ARNs)</a> in the <i>AWS General Reference</i>.</p>
     */
    inline const Aws::String& GetCallerArn() const{ return m_callerArn; }

    /**
     * <p>The ARN of the IAM user that you want to specify as the simulated caller of
     * the API operations. If you do not specify a <code>CallerArn</code>, it defaults
     * to the ARN of the user that you specify in <code>PolicySourceArn</code>, if you
     * specified a user. If you include both a <code>PolicySourceArn</code> (for
     * example, <code>arn:aws:iam::123456789012:user/David</code>) and a
     * <code>CallerArn</code> (for example,
     * <code>arn:aws:iam::123456789012:user/Bob</code>), the result is that you
     * simulate calling the API operations as Bob, as if Bob had David's policies.</p>
     * <p>You can specify only the ARN of an IAM user. You cannot specify the ARN of an
     * assumed role, federated user, or a service principal.</p> <p>
     * <code>CallerArn</code> is required if you include a <code>ResourcePolicy</code>
     * and the <code>PolicySourceArn</code> is not the ARN for an IAM user. This is
     * required so that the resource-based policy's <code>Principal</code> element has
     * a value to use in evaluating the policy.</p> <p>For more information about ARNs,
     * see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">Amazon
     * Resource Names (ARNs)</a> in the <i>AWS General Reference</i>.</p>
     */
    inline bool CallerArnHasBeenSet() const { return m_callerArnHasBeenSet; }

    /**
     * <p>The ARN of the IAM user that you want to specify as the simulated caller of
     * the API operations. If you do not specify a <code>CallerArn</code>, it defaults
     * to the ARN of the user that you specify in <code>PolicySourceArn</code>, if you
     * specified a user. If you include both a <code>PolicySourceArn</code> (for
     * example, <code>arn:aws:iam::123456789012:user/David</code>) and a
     * <code>CallerArn</code> (for example,
     * <code>arn:aws:iam::123456789012:user/Bob</code>), the result is that you
     * simulate calling the API operations as Bob, as if Bob had David's policies.</p>
     * <p>You can specify only the ARN of an IAM user. You cannot specify the ARN of an
     * assumed role, federated user, or a service principal.</p> <p>
     * <code>CallerArn</code> is required if you include a <code>ResourcePolicy</code>
     * and the <code>PolicySourceArn</code> is not the ARN for an IAM user. This is
     * required so that the resource-based policy's <code>Principal</code> element has
     * a value to use in evaluating the policy.</p> <p>For more information about ARNs,
     * see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">Amazon
     * Resource Names (ARNs)</a> in the <i>AWS General Reference</i>.</p>
     */
    inline void SetCallerArn(const Aws::String& value) { m_callerArnHasBeenSet = true; m_callerArn = value; }

    /**
     * <p>The ARN of the IAM user that you want to specify as the simulated caller of
     * the API operations. If you do not specify a <code>CallerArn</code>, it defaults
     * to the ARN of the user that you specify in <code>PolicySourceArn</code>, if you
     * specified a user. If you include both a <code>PolicySourceArn</code> (for
     * example, <code>arn:aws:iam::123456789012:user/David</code>) and a
     * <code>CallerArn</code> (for example,
     * <code>arn:aws:iam::123456789012:user/Bob</code>), the result is that you
     * simulate calling the API operations as Bob, as if Bob had David's policies.</p>
     * <p>You can specify only the ARN of an IAM user. You cannot specify the ARN of an
     * assumed role, federated user, or a service principal.</p> <p>
     * <code>CallerArn</code> is required if you include a <code>ResourcePolicy</code>
     * and the <code>PolicySourceArn</code> is not the ARN for an IAM user. This is
     * required so that the resource-based policy's <code>Principal</code> element has
     * a value to use in evaluating the policy.</p> <p>For more information about ARNs,
     * see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">Amazon
     * Resource Names (ARNs)</a> in the <i>AWS General Reference</i>.</p>
     */
    inline void SetCallerArn(Aws::String&& value) { m_callerArnHasBeenSet = true; m_callerArn = std::move(value); }

    /**
     * <p>The ARN of the IAM user that you want to specify as the simulated caller of
     * the API operations. If you do not specify a <code>CallerArn</code>, it defaults
     * to the ARN of the user that you specify in <code>PolicySourceArn</code>, if you
     * specified a user. If you include both a <code>PolicySourceArn</code> (for
     * example, <code>arn:aws:iam::123456789012:user/David</code>) and a
     * <code>CallerArn</code> (for example,
     * <code>arn:aws:iam::123456789012:user/Bob</code>), the result is that you
     * simulate calling the API operations as Bob, as if Bob had David's policies.</p>
     * <p>You can specify only the ARN of an IAM user. You cannot specify the ARN of an
     * assumed role, federated user, or a service principal.</p> <p>
     * <code>CallerArn</code> is required if you include a <code>ResourcePolicy</code>
     * and the <code>PolicySourceArn</code> is not the ARN for an IAM user. This is
     * required so that the resource-based policy's <code>Principal</code> element has
     * a value to use in evaluating the policy.</p> <p>For more information about ARNs,
     * see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">Amazon
     * Resource Names (ARNs)</a> in the <i>AWS General Reference</i>.</p>
     */
    inline void SetCallerArn(const char* value) { m_callerArnHasBeenSet = true; m_callerArn.assign(value); }

    /**
     * <p>The ARN of the IAM user that you want to specify as the simulated caller of
     * the API operations. If you do not specify a <code>CallerArn</code>, it defaults
     * to the ARN of the user that you specify in <code>PolicySourceArn</code>, if you
     * specified a user. If you include both a <code>PolicySourceArn</code> (for
     * example, <code>arn:aws:iam::123456789012:user/David</code>) and a
     * <code>CallerArn</code> (for example,
     * <code>arn:aws:iam::123456789012:user/Bob</code>), the result is that you
     * simulate calling the API operations as Bob, as if Bob had David's policies.</p>
     * <p>You can specify only the ARN of an IAM user. You cannot specify the ARN of an
     * assumed role, federated user, or a service principal.</p> <p>
     * <code>CallerArn</code> is required if you include a <code>ResourcePolicy</code>
     * and the <code>PolicySourceArn</code> is not the ARN for an IAM user. This is
     * required so that the resource-based policy's <code>Principal</code> element has
     * a value to use in evaluating the policy.</p> <p>For more information about ARNs,
     * see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">Amazon
     * Resource Names (ARNs)</a> in the <i>AWS General Reference</i>.</p>
     */
    inline SimulatePrincipalPolicyRequest& WithCallerArn(const Aws::String& value) { SetCallerArn(value); return *this;}

    /**
     * <p>The ARN of the IAM user that you want to specify as the simulated caller of
     * the API operations. If you do not specify a <code>CallerArn</code>, it defaults
     * to the ARN of the user that you specify in <code>PolicySourceArn</code>, if you
     * specified a user. If you include both a <code>PolicySourceArn</code> (for
     * example, <code>arn:aws:iam::123456789012:user/David</code>) and a
     * <code>CallerArn</code> (for example,
     * <code>arn:aws:iam::123456789012:user/Bob</code>), the result is that you
     * simulate calling the API operations as Bob, as if Bob had David's policies.</p>
     * <p>You can specify only the ARN of an IAM user. You cannot specify the ARN of an
     * assumed role, federated user, or a service principal.</p> <p>
     * <code>CallerArn</code> is required if you include a <code>ResourcePolicy</code>
     * and the <code>PolicySourceArn</code> is not the ARN for an IAM user. This is
     * required so that the resource-based policy's <code>Principal</code> element has
     * a value to use in evaluating the policy.</p> <p>For more information about ARNs,
     * see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">Amazon
     * Resource Names (ARNs)</a> in the <i>AWS General Reference</i>.</p>
     */
    inline SimulatePrincipalPolicyRequest& WithCallerArn(Aws::String&& value) { SetCallerArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the IAM user that you want to specify as the simulated caller of
     * the API operations. If you do not specify a <code>CallerArn</code>, it defaults
     * to the ARN of the user that you specify in <code>PolicySourceArn</code>, if you
     * specified a user. If you include both a <code>PolicySourceArn</code> (for
     * example, <code>arn:aws:iam::123456789012:user/David</code>) and a
     * <code>CallerArn</code> (for example,
     * <code>arn:aws:iam::123456789012:user/Bob</code>), the result is that you
     * simulate calling the API operations as Bob, as if Bob had David's policies.</p>
     * <p>You can specify only the ARN of an IAM user. You cannot specify the ARN of an
     * assumed role, federated user, or a service principal.</p> <p>
     * <code>CallerArn</code> is required if you include a <code>ResourcePolicy</code>
     * and the <code>PolicySourceArn</code> is not the ARN for an IAM user. This is
     * required so that the resource-based policy's <code>Principal</code> element has
     * a value to use in evaluating the policy.</p> <p>For more information about ARNs,
     * see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">Amazon
     * Resource Names (ARNs)</a> in the <i>AWS General Reference</i>.</p>
     */
    inline SimulatePrincipalPolicyRequest& WithCallerArn(const char* value) { SetCallerArn(value); return *this;}


    /**
     * <p>A list of context keys and corresponding values for the simulation to use.
     * Whenever a context key is evaluated in one of the simulated IAM permissions
     * policies, the corresponding value is supplied.</p>
     */
    inline const Aws::Vector<ContextEntry>& GetContextEntries() const{ return m_contextEntries; }

    /**
     * <p>A list of context keys and corresponding values for the simulation to use.
     * Whenever a context key is evaluated in one of the simulated IAM permissions
     * policies, the corresponding value is supplied.</p>
     */
    inline bool ContextEntriesHasBeenSet() const { return m_contextEntriesHasBeenSet; }

    /**
     * <p>A list of context keys and corresponding values for the simulation to use.
     * Whenever a context key is evaluated in one of the simulated IAM permissions
     * policies, the corresponding value is supplied.</p>
     */
    inline void SetContextEntries(const Aws::Vector<ContextEntry>& value) { m_contextEntriesHasBeenSet = true; m_contextEntries = value; }

    /**
     * <p>A list of context keys and corresponding values for the simulation to use.
     * Whenever a context key is evaluated in one of the simulated IAM permissions
     * policies, the corresponding value is supplied.</p>
     */
    inline void SetContextEntries(Aws::Vector<ContextEntry>&& value) { m_contextEntriesHasBeenSet = true; m_contextEntries = std::move(value); }

    /**
     * <p>A list of context keys and corresponding values for the simulation to use.
     * Whenever a context key is evaluated in one of the simulated IAM permissions
     * policies, the corresponding value is supplied.</p>
     */
    inline SimulatePrincipalPolicyRequest& WithContextEntries(const Aws::Vector<ContextEntry>& value) { SetContextEntries(value); return *this;}

    /**
     * <p>A list of context keys and corresponding values for the simulation to use.
     * Whenever a context key is evaluated in one of the simulated IAM permissions
     * policies, the corresponding value is supplied.</p>
     */
    inline SimulatePrincipalPolicyRequest& WithContextEntries(Aws::Vector<ContextEntry>&& value) { SetContextEntries(std::move(value)); return *this;}

    /**
     * <p>A list of context keys and corresponding values for the simulation to use.
     * Whenever a context key is evaluated in one of the simulated IAM permissions
     * policies, the corresponding value is supplied.</p>
     */
    inline SimulatePrincipalPolicyRequest& AddContextEntries(const ContextEntry& value) { m_contextEntriesHasBeenSet = true; m_contextEntries.push_back(value); return *this; }

    /**
     * <p>A list of context keys and corresponding values for the simulation to use.
     * Whenever a context key is evaluated in one of the simulated IAM permissions
     * policies, the corresponding value is supplied.</p>
     */
    inline SimulatePrincipalPolicyRequest& AddContextEntries(ContextEntry&& value) { m_contextEntriesHasBeenSet = true; m_contextEntries.push_back(std::move(value)); return *this; }


    /**
     * <p>Specifies the type of simulation to run. Different API operations that
     * support resource-based policies require different combinations of resources. By
     * specifying the type of simulation to run, you enable the policy simulator to
     * enforce the presence of the required resources to ensure reliable simulation
     * results. If your simulation does not match one of the following scenarios, then
     * you can omit this parameter. The following list shows each of the supported
     * scenario values and the resources that you must define to run the
     * simulation.</p> <p>Each of the EC2 scenarios requires that you specify instance,
     * image, and security group resources. If your scenario includes an EBS volume,
     * then you must specify that volume as a resource. If the EC2 scenario includes
     * VPC, then you must supply the network interface resource. If it includes an IP
     * subnet, then you must specify the subnet resource. For more information on the
     * EC2 scenario options, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/ec2-supported-platforms.html">Supported
     * platforms</a> in the <i>Amazon EC2 User Guide</i>.</p> <ul> <li> <p>
     * <b>EC2-Classic-InstanceStore</b> </p> <p>instance, image, security group</p>
     * </li> <li> <p> <b>EC2-Classic-EBS</b> </p> <p>instance, image, security group,
     * volume</p> </li> <li> <p> <b>EC2-VPC-InstanceStore</b> </p> <p>instance, image,
     * security group, network interface</p> </li> <li> <p>
     * <b>EC2-VPC-InstanceStore-Subnet</b> </p> <p>instance, image, security group,
     * network interface, subnet</p> </li> <li> <p> <b>EC2-VPC-EBS</b> </p>
     * <p>instance, image, security group, network interface, volume</p> </li> <li> <p>
     * <b>EC2-VPC-EBS-Subnet</b> </p> <p>instance, image, security group, network
     * interface, subnet, volume</p> </li> </ul>
     */
    inline const Aws::String& GetResourceHandlingOption() const{ return m_resourceHandlingOption; }

    /**
     * <p>Specifies the type of simulation to run. Different API operations that
     * support resource-based policies require different combinations of resources. By
     * specifying the type of simulation to run, you enable the policy simulator to
     * enforce the presence of the required resources to ensure reliable simulation
     * results. If your simulation does not match one of the following scenarios, then
     * you can omit this parameter. The following list shows each of the supported
     * scenario values and the resources that you must define to run the
     * simulation.</p> <p>Each of the EC2 scenarios requires that you specify instance,
     * image, and security group resources. If your scenario includes an EBS volume,
     * then you must specify that volume as a resource. If the EC2 scenario includes
     * VPC, then you must supply the network interface resource. If it includes an IP
     * subnet, then you must specify the subnet resource. For more information on the
     * EC2 scenario options, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/ec2-supported-platforms.html">Supported
     * platforms</a> in the <i>Amazon EC2 User Guide</i>.</p> <ul> <li> <p>
     * <b>EC2-Classic-InstanceStore</b> </p> <p>instance, image, security group</p>
     * </li> <li> <p> <b>EC2-Classic-EBS</b> </p> <p>instance, image, security group,
     * volume</p> </li> <li> <p> <b>EC2-VPC-InstanceStore</b> </p> <p>instance, image,
     * security group, network interface</p> </li> <li> <p>
     * <b>EC2-VPC-InstanceStore-Subnet</b> </p> <p>instance, image, security group,
     * network interface, subnet</p> </li> <li> <p> <b>EC2-VPC-EBS</b> </p>
     * <p>instance, image, security group, network interface, volume</p> </li> <li> <p>
     * <b>EC2-VPC-EBS-Subnet</b> </p> <p>instance, image, security group, network
     * interface, subnet, volume</p> </li> </ul>
     */
    inline bool ResourceHandlingOptionHasBeenSet() const { return m_resourceHandlingOptionHasBeenSet; }

    /**
     * <p>Specifies the type of simulation to run. Different API operations that
     * support resource-based policies require different combinations of resources. By
     * specifying the type of simulation to run, you enable the policy simulator to
     * enforce the presence of the required resources to ensure reliable simulation
     * results. If your simulation does not match one of the following scenarios, then
     * you can omit this parameter. The following list shows each of the supported
     * scenario values and the resources that you must define to run the
     * simulation.</p> <p>Each of the EC2 scenarios requires that you specify instance,
     * image, and security group resources. If your scenario includes an EBS volume,
     * then you must specify that volume as a resource. If the EC2 scenario includes
     * VPC, then you must supply the network interface resource. If it includes an IP
     * subnet, then you must specify the subnet resource. For more information on the
     * EC2 scenario options, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/ec2-supported-platforms.html">Supported
     * platforms</a> in the <i>Amazon EC2 User Guide</i>.</p> <ul> <li> <p>
     * <b>EC2-Classic-InstanceStore</b> </p> <p>instance, image, security group</p>
     * </li> <li> <p> <b>EC2-Classic-EBS</b> </p> <p>instance, image, security group,
     * volume</p> </li> <li> <p> <b>EC2-VPC-InstanceStore</b> </p> <p>instance, image,
     * security group, network interface</p> </li> <li> <p>
     * <b>EC2-VPC-InstanceStore-Subnet</b> </p> <p>instance, image, security group,
     * network interface, subnet</p> </li> <li> <p> <b>EC2-VPC-EBS</b> </p>
     * <p>instance, image, security group, network interface, volume</p> </li> <li> <p>
     * <b>EC2-VPC-EBS-Subnet</b> </p> <p>instance, image, security group, network
     * interface, subnet, volume</p> </li> </ul>
     */
    inline void SetResourceHandlingOption(const Aws::String& value) { m_resourceHandlingOptionHasBeenSet = true; m_resourceHandlingOption = value; }

    /**
     * <p>Specifies the type of simulation to run. Different API operations that
     * support resource-based policies require different combinations of resources. By
     * specifying the type of simulation to run, you enable the policy simulator to
     * enforce the presence of the required resources to ensure reliable simulation
     * results. If your simulation does not match one of the following scenarios, then
     * you can omit this parameter. The following list shows each of the supported
     * scenario values and the resources that you must define to run the
     * simulation.</p> <p>Each of the EC2 scenarios requires that you specify instance,
     * image, and security group resources. If your scenario includes an EBS volume,
     * then you must specify that volume as a resource. If the EC2 scenario includes
     * VPC, then you must supply the network interface resource. If it includes an IP
     * subnet, then you must specify the subnet resource. For more information on the
     * EC2 scenario options, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/ec2-supported-platforms.html">Supported
     * platforms</a> in the <i>Amazon EC2 User Guide</i>.</p> <ul> <li> <p>
     * <b>EC2-Classic-InstanceStore</b> </p> <p>instance, image, security group</p>
     * </li> <li> <p> <b>EC2-Classic-EBS</b> </p> <p>instance, image, security group,
     * volume</p> </li> <li> <p> <b>EC2-VPC-InstanceStore</b> </p> <p>instance, image,
     * security group, network interface</p> </li> <li> <p>
     * <b>EC2-VPC-InstanceStore-Subnet</b> </p> <p>instance, image, security group,
     * network interface, subnet</p> </li> <li> <p> <b>EC2-VPC-EBS</b> </p>
     * <p>instance, image, security group, network interface, volume</p> </li> <li> <p>
     * <b>EC2-VPC-EBS-Subnet</b> </p> <p>instance, image, security group, network
     * interface, subnet, volume</p> </li> </ul>
     */
    inline void SetResourceHandlingOption(Aws::String&& value) { m_resourceHandlingOptionHasBeenSet = true; m_resourceHandlingOption = std::move(value); }

    /**
     * <p>Specifies the type of simulation to run. Different API operations that
     * support resource-based policies require different combinations of resources. By
     * specifying the type of simulation to run, you enable the policy simulator to
     * enforce the presence of the required resources to ensure reliable simulation
     * results. If your simulation does not match one of the following scenarios, then
     * you can omit this parameter. The following list shows each of the supported
     * scenario values and the resources that you must define to run the
     * simulation.</p> <p>Each of the EC2 scenarios requires that you specify instance,
     * image, and security group resources. If your scenario includes an EBS volume,
     * then you must specify that volume as a resource. If the EC2 scenario includes
     * VPC, then you must supply the network interface resource. If it includes an IP
     * subnet, then you must specify the subnet resource. For more information on the
     * EC2 scenario options, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/ec2-supported-platforms.html">Supported
     * platforms</a> in the <i>Amazon EC2 User Guide</i>.</p> <ul> <li> <p>
     * <b>EC2-Classic-InstanceStore</b> </p> <p>instance, image, security group</p>
     * </li> <li> <p> <b>EC2-Classic-EBS</b> </p> <p>instance, image, security group,
     * volume</p> </li> <li> <p> <b>EC2-VPC-InstanceStore</b> </p> <p>instance, image,
     * security group, network interface</p> </li> <li> <p>
     * <b>EC2-VPC-InstanceStore-Subnet</b> </p> <p>instance, image, security group,
     * network interface, subnet</p> </li> <li> <p> <b>EC2-VPC-EBS</b> </p>
     * <p>instance, image, security group, network interface, volume</p> </li> <li> <p>
     * <b>EC2-VPC-EBS-Subnet</b> </p> <p>instance, image, security group, network
     * interface, subnet, volume</p> </li> </ul>
     */
    inline void SetResourceHandlingOption(const char* value) { m_resourceHandlingOptionHasBeenSet = true; m_resourceHandlingOption.assign(value); }

    /**
     * <p>Specifies the type of simulation to run. Different API operations that
     * support resource-based policies require different combinations of resources. By
     * specifying the type of simulation to run, you enable the policy simulator to
     * enforce the presence of the required resources to ensure reliable simulation
     * results. If your simulation does not match one of the following scenarios, then
     * you can omit this parameter. The following list shows each of the supported
     * scenario values and the resources that you must define to run the
     * simulation.</p> <p>Each of the EC2 scenarios requires that you specify instance,
     * image, and security group resources. If your scenario includes an EBS volume,
     * then you must specify that volume as a resource. If the EC2 scenario includes
     * VPC, then you must supply the network interface resource. If it includes an IP
     * subnet, then you must specify the subnet resource. For more information on the
     * EC2 scenario options, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/ec2-supported-platforms.html">Supported
     * platforms</a> in the <i>Amazon EC2 User Guide</i>.</p> <ul> <li> <p>
     * <b>EC2-Classic-InstanceStore</b> </p> <p>instance, image, security group</p>
     * </li> <li> <p> <b>EC2-Classic-EBS</b> </p> <p>instance, image, security group,
     * volume</p> </li> <li> <p> <b>EC2-VPC-InstanceStore</b> </p> <p>instance, image,
     * security group, network interface</p> </li> <li> <p>
     * <b>EC2-VPC-InstanceStore-Subnet</b> </p> <p>instance, image, security group,
     * network interface, subnet</p> </li> <li> <p> <b>EC2-VPC-EBS</b> </p>
     * <p>instance, image, security group, network interface, volume</p> </li> <li> <p>
     * <b>EC2-VPC-EBS-Subnet</b> </p> <p>instance, image, security group, network
     * interface, subnet, volume</p> </li> </ul>
     */
    inline SimulatePrincipalPolicyRequest& WithResourceHandlingOption(const Aws::String& value) { SetResourceHandlingOption(value); return *this;}

    /**
     * <p>Specifies the type of simulation to run. Different API operations that
     * support resource-based policies require different combinations of resources. By
     * specifying the type of simulation to run, you enable the policy simulator to
     * enforce the presence of the required resources to ensure reliable simulation
     * results. If your simulation does not match one of the following scenarios, then
     * you can omit this parameter. The following list shows each of the supported
     * scenario values and the resources that you must define to run the
     * simulation.</p> <p>Each of the EC2 scenarios requires that you specify instance,
     * image, and security group resources. If your scenario includes an EBS volume,
     * then you must specify that volume as a resource. If the EC2 scenario includes
     * VPC, then you must supply the network interface resource. If it includes an IP
     * subnet, then you must specify the subnet resource. For more information on the
     * EC2 scenario options, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/ec2-supported-platforms.html">Supported
     * platforms</a> in the <i>Amazon EC2 User Guide</i>.</p> <ul> <li> <p>
     * <b>EC2-Classic-InstanceStore</b> </p> <p>instance, image, security group</p>
     * </li> <li> <p> <b>EC2-Classic-EBS</b> </p> <p>instance, image, security group,
     * volume</p> </li> <li> <p> <b>EC2-VPC-InstanceStore</b> </p> <p>instance, image,
     * security group, network interface</p> </li> <li> <p>
     * <b>EC2-VPC-InstanceStore-Subnet</b> </p> <p>instance, image, security group,
     * network interface, subnet</p> </li> <li> <p> <b>EC2-VPC-EBS</b> </p>
     * <p>instance, image, security group, network interface, volume</p> </li> <li> <p>
     * <b>EC2-VPC-EBS-Subnet</b> </p> <p>instance, image, security group, network
     * interface, subnet, volume</p> </li> </ul>
     */
    inline SimulatePrincipalPolicyRequest& WithResourceHandlingOption(Aws::String&& value) { SetResourceHandlingOption(std::move(value)); return *this;}

    /**
     * <p>Specifies the type of simulation to run. Different API operations that
     * support resource-based policies require different combinations of resources. By
     * specifying the type of simulation to run, you enable the policy simulator to
     * enforce the presence of the required resources to ensure reliable simulation
     * results. If your simulation does not match one of the following scenarios, then
     * you can omit this parameter. The following list shows each of the supported
     * scenario values and the resources that you must define to run the
     * simulation.</p> <p>Each of the EC2 scenarios requires that you specify instance,
     * image, and security group resources. If your scenario includes an EBS volume,
     * then you must specify that volume as a resource. If the EC2 scenario includes
     * VPC, then you must supply the network interface resource. If it includes an IP
     * subnet, then you must specify the subnet resource. For more information on the
     * EC2 scenario options, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/ec2-supported-platforms.html">Supported
     * platforms</a> in the <i>Amazon EC2 User Guide</i>.</p> <ul> <li> <p>
     * <b>EC2-Classic-InstanceStore</b> </p> <p>instance, image, security group</p>
     * </li> <li> <p> <b>EC2-Classic-EBS</b> </p> <p>instance, image, security group,
     * volume</p> </li> <li> <p> <b>EC2-VPC-InstanceStore</b> </p> <p>instance, image,
     * security group, network interface</p> </li> <li> <p>
     * <b>EC2-VPC-InstanceStore-Subnet</b> </p> <p>instance, image, security group,
     * network interface, subnet</p> </li> <li> <p> <b>EC2-VPC-EBS</b> </p>
     * <p>instance, image, security group, network interface, volume</p> </li> <li> <p>
     * <b>EC2-VPC-EBS-Subnet</b> </p> <p>instance, image, security group, network
     * interface, subnet, volume</p> </li> </ul>
     */
    inline SimulatePrincipalPolicyRequest& WithResourceHandlingOption(const char* value) { SetResourceHandlingOption(value); return *this;}


    /**
     * <p>Use this only when paginating results to indicate the maximum number of items
     * you want in the response. If additional items exist beyond the maximum you
     * specify, the <code>IsTruncated</code> response element is <code>true</code>.</p>
     * <p>If you do not include this parameter, the number of items defaults to 100.
     * Note that IAM might return fewer results, even when there are more results
     * available. In that case, the <code>IsTruncated</code> response element returns
     * <code>true</code>, and <code>Marker</code> contains a value to include in the
     * subsequent call that tells the service where to continue from.</p>
     */
    inline int GetMaxItems() const{ return m_maxItems; }

    /**
     * <p>Use this only when paginating results to indicate the maximum number of items
     * you want in the response. If additional items exist beyond the maximum you
     * specify, the <code>IsTruncated</code> response element is <code>true</code>.</p>
     * <p>If you do not include this parameter, the number of items defaults to 100.
     * Note that IAM might return fewer results, even when there are more results
     * available. In that case, the <code>IsTruncated</code> response element returns
     * <code>true</code>, and <code>Marker</code> contains a value to include in the
     * subsequent call that tells the service where to continue from.</p>
     */
    inline bool MaxItemsHasBeenSet() const { return m_maxItemsHasBeenSet; }

    /**
     * <p>Use this only when paginating results to indicate the maximum number of items
     * you want in the response. If additional items exist beyond the maximum you
     * specify, the <code>IsTruncated</code> response element is <code>true</code>.</p>
     * <p>If you do not include this parameter, the number of items defaults to 100.
     * Note that IAM might return fewer results, even when there are more results
     * available. In that case, the <code>IsTruncated</code> response element returns
     * <code>true</code>, and <code>Marker</code> contains a value to include in the
     * subsequent call that tells the service where to continue from.</p>
     */
    inline void SetMaxItems(int value) { m_maxItemsHasBeenSet = true; m_maxItems = value; }

    /**
     * <p>Use this only when paginating results to indicate the maximum number of items
     * you want in the response. If additional items exist beyond the maximum you
     * specify, the <code>IsTruncated</code> response element is <code>true</code>.</p>
     * <p>If you do not include this parameter, the number of items defaults to 100.
     * Note that IAM might return fewer results, even when there are more results
     * available. In that case, the <code>IsTruncated</code> response element returns
     * <code>true</code>, and <code>Marker</code> contains a value to include in the
     * subsequent call that tells the service where to continue from.</p>
     */
    inline SimulatePrincipalPolicyRequest& WithMaxItems(int value) { SetMaxItems(value); return *this;}


    /**
     * <p>Use this parameter only when paginating results and only after you receive a
     * response indicating that the results are truncated. Set it to the value of the
     * <code>Marker</code> element in the response that you received to indicate where
     * the next call should start.</p>
     */
    inline const Aws::String& GetMarker() const{ return m_marker; }

    /**
     * <p>Use this parameter only when paginating results and only after you receive a
     * response indicating that the results are truncated. Set it to the value of the
     * <code>Marker</code> element in the response that you received to indicate where
     * the next call should start.</p>
     */
    inline bool MarkerHasBeenSet() const { return m_markerHasBeenSet; }

    /**
     * <p>Use this parameter only when paginating results and only after you receive a
     * response indicating that the results are truncated. Set it to the value of the
     * <code>Marker</code> element in the response that you received to indicate where
     * the next call should start.</p>
     */
    inline void SetMarker(const Aws::String& value) { m_markerHasBeenSet = true; m_marker = value; }

    /**
     * <p>Use this parameter only when paginating results and only after you receive a
     * response indicating that the results are truncated. Set it to the value of the
     * <code>Marker</code> element in the response that you received to indicate where
     * the next call should start.</p>
     */
    inline void SetMarker(Aws::String&& value) { m_markerHasBeenSet = true; m_marker = std::move(value); }

    /**
     * <p>Use this parameter only when paginating results and only after you receive a
     * response indicating that the results are truncated. Set it to the value of the
     * <code>Marker</code> element in the response that you received to indicate where
     * the next call should start.</p>
     */
    inline void SetMarker(const char* value) { m_markerHasBeenSet = true; m_marker.assign(value); }

    /**
     * <p>Use this parameter only when paginating results and only after you receive a
     * response indicating that the results are truncated. Set it to the value of the
     * <code>Marker</code> element in the response that you received to indicate where
     * the next call should start.</p>
     */
    inline SimulatePrincipalPolicyRequest& WithMarker(const Aws::String& value) { SetMarker(value); return *this;}

    /**
     * <p>Use this parameter only when paginating results and only after you receive a
     * response indicating that the results are truncated. Set it to the value of the
     * <code>Marker</code> element in the response that you received to indicate where
     * the next call should start.</p>
     */
    inline SimulatePrincipalPolicyRequest& WithMarker(Aws::String&& value) { SetMarker(std::move(value)); return *this;}

    /**
     * <p>Use this parameter only when paginating results and only after you receive a
     * response indicating that the results are truncated. Set it to the value of the
     * <code>Marker</code> element in the response that you received to indicate where
     * the next call should start.</p>
     */
    inline SimulatePrincipalPolicyRequest& WithMarker(const char* value) { SetMarker(value); return *this;}

  private:

    Aws::String m_policySourceArn;
    bool m_policySourceArnHasBeenSet;

    Aws::Vector<Aws::String> m_policyInputList;
    bool m_policyInputListHasBeenSet;

    Aws::Vector<Aws::String> m_permissionsBoundaryPolicyInputList;
    bool m_permissionsBoundaryPolicyInputListHasBeenSet;

    Aws::Vector<Aws::String> m_actionNames;
    bool m_actionNamesHasBeenSet;

    Aws::Vector<Aws::String> m_resourceArns;
    bool m_resourceArnsHasBeenSet;

    Aws::String m_resourcePolicy;
    bool m_resourcePolicyHasBeenSet;

    Aws::String m_resourceOwner;
    bool m_resourceOwnerHasBeenSet;

    Aws::String m_callerArn;
    bool m_callerArnHasBeenSet;

    Aws::Vector<ContextEntry> m_contextEntries;
    bool m_contextEntriesHasBeenSet;

    Aws::String m_resourceHandlingOption;
    bool m_resourceHandlingOptionHasBeenSet;

    int m_maxItems;
    bool m_maxItemsHasBeenSet;

    Aws::String m_marker;
    bool m_markerHasBeenSet;
  };

} // namespace Model
} // namespace IAM
} // namespace Aws
