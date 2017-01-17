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
#include <aws/iam/IAMRequest.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/iam/model/ContextEntry.h>

namespace Aws
{
namespace IAM
{
namespace Model
{

  /**
   */
  class AWS_IAM_API SimulateCustomPolicyRequest : public IAMRequest
  {
  public:
    SimulateCustomPolicyRequest();
    Aws::String SerializePayload() const override;

    /**
     * <p>A list of policy documents to include in the simulation. Each document is
     * specified as a string containing the complete, valid JSON text of an IAM policy.
     * Do not include any resource-based policies in this parameter. Any resource-based
     * policy must be submitted with the <code>ResourcePolicy</code> parameter. The
     * policies cannot be "scope-down" policies, such as you could include in a call to
     * <a
     * href="http://docs.aws.amazon.com/IAM/latest/APIReference/API_GetFederationToken.html">GetFederationToken</a>
     * or one of the <a
     * href="http://docs.aws.amazon.com/IAM/latest/APIReference/API_AssumeRole.html">AssumeRole</a>
     * APIs to restrict what a user can do while using the temporary credentials.</p>
     * <p>The <a href="http://wikipedia.org/wiki/regex">regex pattern</a> used to
     * validate this parameter is a string of characters consisting of any printable
     * ASCII character ranging from the space character (\u0020) through end of the
     * ASCII character range as well as the printable characters in the Basic Latin and
     * Latin-1 Supplement character set (through \u00FF). It also includes the special
     * characters tab (\u0009), line feed (\u000A), and carriage return (\u000D).</p>
     */
    inline const Aws::Vector<Aws::String>& GetPolicyInputList() const{ return m_policyInputList; }

    /**
     * <p>A list of policy documents to include in the simulation. Each document is
     * specified as a string containing the complete, valid JSON text of an IAM policy.
     * Do not include any resource-based policies in this parameter. Any resource-based
     * policy must be submitted with the <code>ResourcePolicy</code> parameter. The
     * policies cannot be "scope-down" policies, such as you could include in a call to
     * <a
     * href="http://docs.aws.amazon.com/IAM/latest/APIReference/API_GetFederationToken.html">GetFederationToken</a>
     * or one of the <a
     * href="http://docs.aws.amazon.com/IAM/latest/APIReference/API_AssumeRole.html">AssumeRole</a>
     * APIs to restrict what a user can do while using the temporary credentials.</p>
     * <p>The <a href="http://wikipedia.org/wiki/regex">regex pattern</a> used to
     * validate this parameter is a string of characters consisting of any printable
     * ASCII character ranging from the space character (\u0020) through end of the
     * ASCII character range as well as the printable characters in the Basic Latin and
     * Latin-1 Supplement character set (through \u00FF). It also includes the special
     * characters tab (\u0009), line feed (\u000A), and carriage return (\u000D).</p>
     */
    inline void SetPolicyInputList(const Aws::Vector<Aws::String>& value) { m_policyInputListHasBeenSet = true; m_policyInputList = value; }

    /**
     * <p>A list of policy documents to include in the simulation. Each document is
     * specified as a string containing the complete, valid JSON text of an IAM policy.
     * Do not include any resource-based policies in this parameter. Any resource-based
     * policy must be submitted with the <code>ResourcePolicy</code> parameter. The
     * policies cannot be "scope-down" policies, such as you could include in a call to
     * <a
     * href="http://docs.aws.amazon.com/IAM/latest/APIReference/API_GetFederationToken.html">GetFederationToken</a>
     * or one of the <a
     * href="http://docs.aws.amazon.com/IAM/latest/APIReference/API_AssumeRole.html">AssumeRole</a>
     * APIs to restrict what a user can do while using the temporary credentials.</p>
     * <p>The <a href="http://wikipedia.org/wiki/regex">regex pattern</a> used to
     * validate this parameter is a string of characters consisting of any printable
     * ASCII character ranging from the space character (\u0020) through end of the
     * ASCII character range as well as the printable characters in the Basic Latin and
     * Latin-1 Supplement character set (through \u00FF). It also includes the special
     * characters tab (\u0009), line feed (\u000A), and carriage return (\u000D).</p>
     */
    inline void SetPolicyInputList(Aws::Vector<Aws::String>&& value) { m_policyInputListHasBeenSet = true; m_policyInputList = value; }

    /**
     * <p>A list of policy documents to include in the simulation. Each document is
     * specified as a string containing the complete, valid JSON text of an IAM policy.
     * Do not include any resource-based policies in this parameter. Any resource-based
     * policy must be submitted with the <code>ResourcePolicy</code> parameter. The
     * policies cannot be "scope-down" policies, such as you could include in a call to
     * <a
     * href="http://docs.aws.amazon.com/IAM/latest/APIReference/API_GetFederationToken.html">GetFederationToken</a>
     * or one of the <a
     * href="http://docs.aws.amazon.com/IAM/latest/APIReference/API_AssumeRole.html">AssumeRole</a>
     * APIs to restrict what a user can do while using the temporary credentials.</p>
     * <p>The <a href="http://wikipedia.org/wiki/regex">regex pattern</a> used to
     * validate this parameter is a string of characters consisting of any printable
     * ASCII character ranging from the space character (\u0020) through end of the
     * ASCII character range as well as the printable characters in the Basic Latin and
     * Latin-1 Supplement character set (through \u00FF). It also includes the special
     * characters tab (\u0009), line feed (\u000A), and carriage return (\u000D).</p>
     */
    inline SimulateCustomPolicyRequest& WithPolicyInputList(const Aws::Vector<Aws::String>& value) { SetPolicyInputList(value); return *this;}

    /**
     * <p>A list of policy documents to include in the simulation. Each document is
     * specified as a string containing the complete, valid JSON text of an IAM policy.
     * Do not include any resource-based policies in this parameter. Any resource-based
     * policy must be submitted with the <code>ResourcePolicy</code> parameter. The
     * policies cannot be "scope-down" policies, such as you could include in a call to
     * <a
     * href="http://docs.aws.amazon.com/IAM/latest/APIReference/API_GetFederationToken.html">GetFederationToken</a>
     * or one of the <a
     * href="http://docs.aws.amazon.com/IAM/latest/APIReference/API_AssumeRole.html">AssumeRole</a>
     * APIs to restrict what a user can do while using the temporary credentials.</p>
     * <p>The <a href="http://wikipedia.org/wiki/regex">regex pattern</a> used to
     * validate this parameter is a string of characters consisting of any printable
     * ASCII character ranging from the space character (\u0020) through end of the
     * ASCII character range as well as the printable characters in the Basic Latin and
     * Latin-1 Supplement character set (through \u00FF). It also includes the special
     * characters tab (\u0009), line feed (\u000A), and carriage return (\u000D).</p>
     */
    inline SimulateCustomPolicyRequest& WithPolicyInputList(Aws::Vector<Aws::String>&& value) { SetPolicyInputList(value); return *this;}

    /**
     * <p>A list of policy documents to include in the simulation. Each document is
     * specified as a string containing the complete, valid JSON text of an IAM policy.
     * Do not include any resource-based policies in this parameter. Any resource-based
     * policy must be submitted with the <code>ResourcePolicy</code> parameter. The
     * policies cannot be "scope-down" policies, such as you could include in a call to
     * <a
     * href="http://docs.aws.amazon.com/IAM/latest/APIReference/API_GetFederationToken.html">GetFederationToken</a>
     * or one of the <a
     * href="http://docs.aws.amazon.com/IAM/latest/APIReference/API_AssumeRole.html">AssumeRole</a>
     * APIs to restrict what a user can do while using the temporary credentials.</p>
     * <p>The <a href="http://wikipedia.org/wiki/regex">regex pattern</a> used to
     * validate this parameter is a string of characters consisting of any printable
     * ASCII character ranging from the space character (\u0020) through end of the
     * ASCII character range as well as the printable characters in the Basic Latin and
     * Latin-1 Supplement character set (through \u00FF). It also includes the special
     * characters tab (\u0009), line feed (\u000A), and carriage return (\u000D).</p>
     */
    inline SimulateCustomPolicyRequest& AddPolicyInputList(const Aws::String& value) { m_policyInputListHasBeenSet = true; m_policyInputList.push_back(value); return *this; }

    /**
     * <p>A list of policy documents to include in the simulation. Each document is
     * specified as a string containing the complete, valid JSON text of an IAM policy.
     * Do not include any resource-based policies in this parameter. Any resource-based
     * policy must be submitted with the <code>ResourcePolicy</code> parameter. The
     * policies cannot be "scope-down" policies, such as you could include in a call to
     * <a
     * href="http://docs.aws.amazon.com/IAM/latest/APIReference/API_GetFederationToken.html">GetFederationToken</a>
     * or one of the <a
     * href="http://docs.aws.amazon.com/IAM/latest/APIReference/API_AssumeRole.html">AssumeRole</a>
     * APIs to restrict what a user can do while using the temporary credentials.</p>
     * <p>The <a href="http://wikipedia.org/wiki/regex">regex pattern</a> used to
     * validate this parameter is a string of characters consisting of any printable
     * ASCII character ranging from the space character (\u0020) through end of the
     * ASCII character range as well as the printable characters in the Basic Latin and
     * Latin-1 Supplement character set (through \u00FF). It also includes the special
     * characters tab (\u0009), line feed (\u000A), and carriage return (\u000D).</p>
     */
    inline SimulateCustomPolicyRequest& AddPolicyInputList(Aws::String&& value) { m_policyInputListHasBeenSet = true; m_policyInputList.push_back(value); return *this; }

    /**
     * <p>A list of policy documents to include in the simulation. Each document is
     * specified as a string containing the complete, valid JSON text of an IAM policy.
     * Do not include any resource-based policies in this parameter. Any resource-based
     * policy must be submitted with the <code>ResourcePolicy</code> parameter. The
     * policies cannot be "scope-down" policies, such as you could include in a call to
     * <a
     * href="http://docs.aws.amazon.com/IAM/latest/APIReference/API_GetFederationToken.html">GetFederationToken</a>
     * or one of the <a
     * href="http://docs.aws.amazon.com/IAM/latest/APIReference/API_AssumeRole.html">AssumeRole</a>
     * APIs to restrict what a user can do while using the temporary credentials.</p>
     * <p>The <a href="http://wikipedia.org/wiki/regex">regex pattern</a> used to
     * validate this parameter is a string of characters consisting of any printable
     * ASCII character ranging from the space character (\u0020) through end of the
     * ASCII character range as well as the printable characters in the Basic Latin and
     * Latin-1 Supplement character set (through \u00FF). It also includes the special
     * characters tab (\u0009), line feed (\u000A), and carriage return (\u000D).</p>
     */
    inline SimulateCustomPolicyRequest& AddPolicyInputList(const char* value) { m_policyInputListHasBeenSet = true; m_policyInputList.push_back(value); return *this; }

    /**
     * <p>A list of names of API actions to evaluate in the simulation. Each action is
     * evaluated against each resource. Each action must include the service
     * identifier, such as <code>iam:CreateUser</code>.</p>
     */
    inline const Aws::Vector<Aws::String>& GetActionNames() const{ return m_actionNames; }

    /**
     * <p>A list of names of API actions to evaluate in the simulation. Each action is
     * evaluated against each resource. Each action must include the service
     * identifier, such as <code>iam:CreateUser</code>.</p>
     */
    inline void SetActionNames(const Aws::Vector<Aws::String>& value) { m_actionNamesHasBeenSet = true; m_actionNames = value; }

    /**
     * <p>A list of names of API actions to evaluate in the simulation. Each action is
     * evaluated against each resource. Each action must include the service
     * identifier, such as <code>iam:CreateUser</code>.</p>
     */
    inline void SetActionNames(Aws::Vector<Aws::String>&& value) { m_actionNamesHasBeenSet = true; m_actionNames = value; }

    /**
     * <p>A list of names of API actions to evaluate in the simulation. Each action is
     * evaluated against each resource. Each action must include the service
     * identifier, such as <code>iam:CreateUser</code>.</p>
     */
    inline SimulateCustomPolicyRequest& WithActionNames(const Aws::Vector<Aws::String>& value) { SetActionNames(value); return *this;}

    /**
     * <p>A list of names of API actions to evaluate in the simulation. Each action is
     * evaluated against each resource. Each action must include the service
     * identifier, such as <code>iam:CreateUser</code>.</p>
     */
    inline SimulateCustomPolicyRequest& WithActionNames(Aws::Vector<Aws::String>&& value) { SetActionNames(value); return *this;}

    /**
     * <p>A list of names of API actions to evaluate in the simulation. Each action is
     * evaluated against each resource. Each action must include the service
     * identifier, such as <code>iam:CreateUser</code>.</p>
     */
    inline SimulateCustomPolicyRequest& AddActionNames(const Aws::String& value) { m_actionNamesHasBeenSet = true; m_actionNames.push_back(value); return *this; }

    /**
     * <p>A list of names of API actions to evaluate in the simulation. Each action is
     * evaluated against each resource. Each action must include the service
     * identifier, such as <code>iam:CreateUser</code>.</p>
     */
    inline SimulateCustomPolicyRequest& AddActionNames(Aws::String&& value) { m_actionNamesHasBeenSet = true; m_actionNames.push_back(value); return *this; }

    /**
     * <p>A list of names of API actions to evaluate in the simulation. Each action is
     * evaluated against each resource. Each action must include the service
     * identifier, such as <code>iam:CreateUser</code>.</p>
     */
    inline SimulateCustomPolicyRequest& AddActionNames(const char* value) { m_actionNamesHasBeenSet = true; m_actionNames.push_back(value); return *this; }

    /**
     * <p>A list of ARNs of AWS resources to include in the simulation. If this
     * parameter is not provided then the value defaults to <code>*</code> (all
     * resources). Each API in the <code>ActionNames</code> parameter is evaluated for
     * each resource in this list. The simulation determines the access result (allowed
     * or denied) of each combination and reports it in the response.</p> <p>The
     * simulation does not automatically retrieve policies for the specified resources.
     * If you want to include a resource policy in the simulation, then you must
     * include the policy as a string in the <code>ResourcePolicy</code> parameter.</p>
     * <p>If you include a <code>ResourcePolicy</code>, then it must be applicable to
     * all of the resources included in the simulation or you receive an invalid input
     * error.</p> <p>For more information about ARNs, see <a
     * href="http://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">Amazon
     * Resource Names (ARNs) and AWS Service Namespaces</a> in the <i>AWS General
     * Reference</i>.</p>
     */
    inline const Aws::Vector<Aws::String>& GetResourceArns() const{ return m_resourceArns; }

    /**
     * <p>A list of ARNs of AWS resources to include in the simulation. If this
     * parameter is not provided then the value defaults to <code>*</code> (all
     * resources). Each API in the <code>ActionNames</code> parameter is evaluated for
     * each resource in this list. The simulation determines the access result (allowed
     * or denied) of each combination and reports it in the response.</p> <p>The
     * simulation does not automatically retrieve policies for the specified resources.
     * If you want to include a resource policy in the simulation, then you must
     * include the policy as a string in the <code>ResourcePolicy</code> parameter.</p>
     * <p>If you include a <code>ResourcePolicy</code>, then it must be applicable to
     * all of the resources included in the simulation or you receive an invalid input
     * error.</p> <p>For more information about ARNs, see <a
     * href="http://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">Amazon
     * Resource Names (ARNs) and AWS Service Namespaces</a> in the <i>AWS General
     * Reference</i>.</p>
     */
    inline void SetResourceArns(const Aws::Vector<Aws::String>& value) { m_resourceArnsHasBeenSet = true; m_resourceArns = value; }

    /**
     * <p>A list of ARNs of AWS resources to include in the simulation. If this
     * parameter is not provided then the value defaults to <code>*</code> (all
     * resources). Each API in the <code>ActionNames</code> parameter is evaluated for
     * each resource in this list. The simulation determines the access result (allowed
     * or denied) of each combination and reports it in the response.</p> <p>The
     * simulation does not automatically retrieve policies for the specified resources.
     * If you want to include a resource policy in the simulation, then you must
     * include the policy as a string in the <code>ResourcePolicy</code> parameter.</p>
     * <p>If you include a <code>ResourcePolicy</code>, then it must be applicable to
     * all of the resources included in the simulation or you receive an invalid input
     * error.</p> <p>For more information about ARNs, see <a
     * href="http://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">Amazon
     * Resource Names (ARNs) and AWS Service Namespaces</a> in the <i>AWS General
     * Reference</i>.</p>
     */
    inline void SetResourceArns(Aws::Vector<Aws::String>&& value) { m_resourceArnsHasBeenSet = true; m_resourceArns = value; }

    /**
     * <p>A list of ARNs of AWS resources to include in the simulation. If this
     * parameter is not provided then the value defaults to <code>*</code> (all
     * resources). Each API in the <code>ActionNames</code> parameter is evaluated for
     * each resource in this list. The simulation determines the access result (allowed
     * or denied) of each combination and reports it in the response.</p> <p>The
     * simulation does not automatically retrieve policies for the specified resources.
     * If you want to include a resource policy in the simulation, then you must
     * include the policy as a string in the <code>ResourcePolicy</code> parameter.</p>
     * <p>If you include a <code>ResourcePolicy</code>, then it must be applicable to
     * all of the resources included in the simulation or you receive an invalid input
     * error.</p> <p>For more information about ARNs, see <a
     * href="http://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">Amazon
     * Resource Names (ARNs) and AWS Service Namespaces</a> in the <i>AWS General
     * Reference</i>.</p>
     */
    inline SimulateCustomPolicyRequest& WithResourceArns(const Aws::Vector<Aws::String>& value) { SetResourceArns(value); return *this;}

    /**
     * <p>A list of ARNs of AWS resources to include in the simulation. If this
     * parameter is not provided then the value defaults to <code>*</code> (all
     * resources). Each API in the <code>ActionNames</code> parameter is evaluated for
     * each resource in this list. The simulation determines the access result (allowed
     * or denied) of each combination and reports it in the response.</p> <p>The
     * simulation does not automatically retrieve policies for the specified resources.
     * If you want to include a resource policy in the simulation, then you must
     * include the policy as a string in the <code>ResourcePolicy</code> parameter.</p>
     * <p>If you include a <code>ResourcePolicy</code>, then it must be applicable to
     * all of the resources included in the simulation or you receive an invalid input
     * error.</p> <p>For more information about ARNs, see <a
     * href="http://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">Amazon
     * Resource Names (ARNs) and AWS Service Namespaces</a> in the <i>AWS General
     * Reference</i>.</p>
     */
    inline SimulateCustomPolicyRequest& WithResourceArns(Aws::Vector<Aws::String>&& value) { SetResourceArns(value); return *this;}

    /**
     * <p>A list of ARNs of AWS resources to include in the simulation. If this
     * parameter is not provided then the value defaults to <code>*</code> (all
     * resources). Each API in the <code>ActionNames</code> parameter is evaluated for
     * each resource in this list. The simulation determines the access result (allowed
     * or denied) of each combination and reports it in the response.</p> <p>The
     * simulation does not automatically retrieve policies for the specified resources.
     * If you want to include a resource policy in the simulation, then you must
     * include the policy as a string in the <code>ResourcePolicy</code> parameter.</p>
     * <p>If you include a <code>ResourcePolicy</code>, then it must be applicable to
     * all of the resources included in the simulation or you receive an invalid input
     * error.</p> <p>For more information about ARNs, see <a
     * href="http://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">Amazon
     * Resource Names (ARNs) and AWS Service Namespaces</a> in the <i>AWS General
     * Reference</i>.</p>
     */
    inline SimulateCustomPolicyRequest& AddResourceArns(const Aws::String& value) { m_resourceArnsHasBeenSet = true; m_resourceArns.push_back(value); return *this; }

    /**
     * <p>A list of ARNs of AWS resources to include in the simulation. If this
     * parameter is not provided then the value defaults to <code>*</code> (all
     * resources). Each API in the <code>ActionNames</code> parameter is evaluated for
     * each resource in this list. The simulation determines the access result (allowed
     * or denied) of each combination and reports it in the response.</p> <p>The
     * simulation does not automatically retrieve policies for the specified resources.
     * If you want to include a resource policy in the simulation, then you must
     * include the policy as a string in the <code>ResourcePolicy</code> parameter.</p>
     * <p>If you include a <code>ResourcePolicy</code>, then it must be applicable to
     * all of the resources included in the simulation or you receive an invalid input
     * error.</p> <p>For more information about ARNs, see <a
     * href="http://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">Amazon
     * Resource Names (ARNs) and AWS Service Namespaces</a> in the <i>AWS General
     * Reference</i>.</p>
     */
    inline SimulateCustomPolicyRequest& AddResourceArns(Aws::String&& value) { m_resourceArnsHasBeenSet = true; m_resourceArns.push_back(value); return *this; }

    /**
     * <p>A list of ARNs of AWS resources to include in the simulation. If this
     * parameter is not provided then the value defaults to <code>*</code> (all
     * resources). Each API in the <code>ActionNames</code> parameter is evaluated for
     * each resource in this list. The simulation determines the access result (allowed
     * or denied) of each combination and reports it in the response.</p> <p>The
     * simulation does not automatically retrieve policies for the specified resources.
     * If you want to include a resource policy in the simulation, then you must
     * include the policy as a string in the <code>ResourcePolicy</code> parameter.</p>
     * <p>If you include a <code>ResourcePolicy</code>, then it must be applicable to
     * all of the resources included in the simulation or you receive an invalid input
     * error.</p> <p>For more information about ARNs, see <a
     * href="http://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">Amazon
     * Resource Names (ARNs) and AWS Service Namespaces</a> in the <i>AWS General
     * Reference</i>.</p>
     */
    inline SimulateCustomPolicyRequest& AddResourceArns(const char* value) { m_resourceArnsHasBeenSet = true; m_resourceArns.push_back(value); return *this; }

    /**
     * <p>A resource-based policy to include in the simulation provided as a string.
     * Each resource in the simulation is treated as if it had this policy attached.
     * You can include only one resource-based policy in a simulation.</p> <p>The <a
     * href="http://wikipedia.org/wiki/regex">regex pattern</a> used to validate this
     * parameter is a string of characters consisting of any printable ASCII character
     * ranging from the space character (\u0020) through end of the ASCII character
     * range as well as the printable characters in the Basic Latin and Latin-1
     * Supplement character set (through \u00FF). It also includes the special
     * characters tab (\u0009), line feed (\u000A), and carriage return (\u000D).</p>
     */
    inline const Aws::String& GetResourcePolicy() const{ return m_resourcePolicy; }

    /**
     * <p>A resource-based policy to include in the simulation provided as a string.
     * Each resource in the simulation is treated as if it had this policy attached.
     * You can include only one resource-based policy in a simulation.</p> <p>The <a
     * href="http://wikipedia.org/wiki/regex">regex pattern</a> used to validate this
     * parameter is a string of characters consisting of any printable ASCII character
     * ranging from the space character (\u0020) through end of the ASCII character
     * range as well as the printable characters in the Basic Latin and Latin-1
     * Supplement character set (through \u00FF). It also includes the special
     * characters tab (\u0009), line feed (\u000A), and carriage return (\u000D).</p>
     */
    inline void SetResourcePolicy(const Aws::String& value) { m_resourcePolicyHasBeenSet = true; m_resourcePolicy = value; }

    /**
     * <p>A resource-based policy to include in the simulation provided as a string.
     * Each resource in the simulation is treated as if it had this policy attached.
     * You can include only one resource-based policy in a simulation.</p> <p>The <a
     * href="http://wikipedia.org/wiki/regex">regex pattern</a> used to validate this
     * parameter is a string of characters consisting of any printable ASCII character
     * ranging from the space character (\u0020) through end of the ASCII character
     * range as well as the printable characters in the Basic Latin and Latin-1
     * Supplement character set (through \u00FF). It also includes the special
     * characters tab (\u0009), line feed (\u000A), and carriage return (\u000D).</p>
     */
    inline void SetResourcePolicy(Aws::String&& value) { m_resourcePolicyHasBeenSet = true; m_resourcePolicy = value; }

    /**
     * <p>A resource-based policy to include in the simulation provided as a string.
     * Each resource in the simulation is treated as if it had this policy attached.
     * You can include only one resource-based policy in a simulation.</p> <p>The <a
     * href="http://wikipedia.org/wiki/regex">regex pattern</a> used to validate this
     * parameter is a string of characters consisting of any printable ASCII character
     * ranging from the space character (\u0020) through end of the ASCII character
     * range as well as the printable characters in the Basic Latin and Latin-1
     * Supplement character set (through \u00FF). It also includes the special
     * characters tab (\u0009), line feed (\u000A), and carriage return (\u000D).</p>
     */
    inline void SetResourcePolicy(const char* value) { m_resourcePolicyHasBeenSet = true; m_resourcePolicy.assign(value); }

    /**
     * <p>A resource-based policy to include in the simulation provided as a string.
     * Each resource in the simulation is treated as if it had this policy attached.
     * You can include only one resource-based policy in a simulation.</p> <p>The <a
     * href="http://wikipedia.org/wiki/regex">regex pattern</a> used to validate this
     * parameter is a string of characters consisting of any printable ASCII character
     * ranging from the space character (\u0020) through end of the ASCII character
     * range as well as the printable characters in the Basic Latin and Latin-1
     * Supplement character set (through \u00FF). It also includes the special
     * characters tab (\u0009), line feed (\u000A), and carriage return (\u000D).</p>
     */
    inline SimulateCustomPolicyRequest& WithResourcePolicy(const Aws::String& value) { SetResourcePolicy(value); return *this;}

    /**
     * <p>A resource-based policy to include in the simulation provided as a string.
     * Each resource in the simulation is treated as if it had this policy attached.
     * You can include only one resource-based policy in a simulation.</p> <p>The <a
     * href="http://wikipedia.org/wiki/regex">regex pattern</a> used to validate this
     * parameter is a string of characters consisting of any printable ASCII character
     * ranging from the space character (\u0020) through end of the ASCII character
     * range as well as the printable characters in the Basic Latin and Latin-1
     * Supplement character set (through \u00FF). It also includes the special
     * characters tab (\u0009), line feed (\u000A), and carriage return (\u000D).</p>
     */
    inline SimulateCustomPolicyRequest& WithResourcePolicy(Aws::String&& value) { SetResourcePolicy(value); return *this;}

    /**
     * <p>A resource-based policy to include in the simulation provided as a string.
     * Each resource in the simulation is treated as if it had this policy attached.
     * You can include only one resource-based policy in a simulation.</p> <p>The <a
     * href="http://wikipedia.org/wiki/regex">regex pattern</a> used to validate this
     * parameter is a string of characters consisting of any printable ASCII character
     * ranging from the space character (\u0020) through end of the ASCII character
     * range as well as the printable characters in the Basic Latin and Latin-1
     * Supplement character set (through \u00FF). It also includes the special
     * characters tab (\u0009), line feed (\u000A), and carriage return (\u000D).</p>
     */
    inline SimulateCustomPolicyRequest& WithResourcePolicy(const char* value) { SetResourcePolicy(value); return *this;}

    /**
     * <p>An AWS account ID that specifies the owner of any simulated resource that
     * does not identify its owner in the resource ARN, such as an S3 bucket or object.
     * If <code>ResourceOwner</code> is specified, it is also used as the account owner
     * of any <code>ResourcePolicy</code> included in the simulation. If the
     * <code>ResourceOwner</code> parameter is not specified, then the owner of the
     * resources and the resource policy defaults to the account of the identity
     * provided in <code>CallerArn</code>. This parameter is required only if you
     * specify a resource-based policy and account that owns the resource is different
     * from the account that owns the simulated calling user
     * <code>CallerArn</code>.</p>
     */
    inline const Aws::String& GetResourceOwner() const{ return m_resourceOwner; }

    /**
     * <p>An AWS account ID that specifies the owner of any simulated resource that
     * does not identify its owner in the resource ARN, such as an S3 bucket or object.
     * If <code>ResourceOwner</code> is specified, it is also used as the account owner
     * of any <code>ResourcePolicy</code> included in the simulation. If the
     * <code>ResourceOwner</code> parameter is not specified, then the owner of the
     * resources and the resource policy defaults to the account of the identity
     * provided in <code>CallerArn</code>. This parameter is required only if you
     * specify a resource-based policy and account that owns the resource is different
     * from the account that owns the simulated calling user
     * <code>CallerArn</code>.</p>
     */
    inline void SetResourceOwner(const Aws::String& value) { m_resourceOwnerHasBeenSet = true; m_resourceOwner = value; }

    /**
     * <p>An AWS account ID that specifies the owner of any simulated resource that
     * does not identify its owner in the resource ARN, such as an S3 bucket or object.
     * If <code>ResourceOwner</code> is specified, it is also used as the account owner
     * of any <code>ResourcePolicy</code> included in the simulation. If the
     * <code>ResourceOwner</code> parameter is not specified, then the owner of the
     * resources and the resource policy defaults to the account of the identity
     * provided in <code>CallerArn</code>. This parameter is required only if you
     * specify a resource-based policy and account that owns the resource is different
     * from the account that owns the simulated calling user
     * <code>CallerArn</code>.</p>
     */
    inline void SetResourceOwner(Aws::String&& value) { m_resourceOwnerHasBeenSet = true; m_resourceOwner = value; }

    /**
     * <p>An AWS account ID that specifies the owner of any simulated resource that
     * does not identify its owner in the resource ARN, such as an S3 bucket or object.
     * If <code>ResourceOwner</code> is specified, it is also used as the account owner
     * of any <code>ResourcePolicy</code> included in the simulation. If the
     * <code>ResourceOwner</code> parameter is not specified, then the owner of the
     * resources and the resource policy defaults to the account of the identity
     * provided in <code>CallerArn</code>. This parameter is required only if you
     * specify a resource-based policy and account that owns the resource is different
     * from the account that owns the simulated calling user
     * <code>CallerArn</code>.</p>
     */
    inline void SetResourceOwner(const char* value) { m_resourceOwnerHasBeenSet = true; m_resourceOwner.assign(value); }

    /**
     * <p>An AWS account ID that specifies the owner of any simulated resource that
     * does not identify its owner in the resource ARN, such as an S3 bucket or object.
     * If <code>ResourceOwner</code> is specified, it is also used as the account owner
     * of any <code>ResourcePolicy</code> included in the simulation. If the
     * <code>ResourceOwner</code> parameter is not specified, then the owner of the
     * resources and the resource policy defaults to the account of the identity
     * provided in <code>CallerArn</code>. This parameter is required only if you
     * specify a resource-based policy and account that owns the resource is different
     * from the account that owns the simulated calling user
     * <code>CallerArn</code>.</p>
     */
    inline SimulateCustomPolicyRequest& WithResourceOwner(const Aws::String& value) { SetResourceOwner(value); return *this;}

    /**
     * <p>An AWS account ID that specifies the owner of any simulated resource that
     * does not identify its owner in the resource ARN, such as an S3 bucket or object.
     * If <code>ResourceOwner</code> is specified, it is also used as the account owner
     * of any <code>ResourcePolicy</code> included in the simulation. If the
     * <code>ResourceOwner</code> parameter is not specified, then the owner of the
     * resources and the resource policy defaults to the account of the identity
     * provided in <code>CallerArn</code>. This parameter is required only if you
     * specify a resource-based policy and account that owns the resource is different
     * from the account that owns the simulated calling user
     * <code>CallerArn</code>.</p>
     */
    inline SimulateCustomPolicyRequest& WithResourceOwner(Aws::String&& value) { SetResourceOwner(value); return *this;}

    /**
     * <p>An AWS account ID that specifies the owner of any simulated resource that
     * does not identify its owner in the resource ARN, such as an S3 bucket or object.
     * If <code>ResourceOwner</code> is specified, it is also used as the account owner
     * of any <code>ResourcePolicy</code> included in the simulation. If the
     * <code>ResourceOwner</code> parameter is not specified, then the owner of the
     * resources and the resource policy defaults to the account of the identity
     * provided in <code>CallerArn</code>. This parameter is required only if you
     * specify a resource-based policy and account that owns the resource is different
     * from the account that owns the simulated calling user
     * <code>CallerArn</code>.</p>
     */
    inline SimulateCustomPolicyRequest& WithResourceOwner(const char* value) { SetResourceOwner(value); return *this;}

    /**
     * <p>The ARN of the IAM user that you want to use as the simulated caller of the
     * APIs. <code>CallerArn</code> is required if you include a
     * <code>ResourcePolicy</code> so that the policy's <code>Principal</code> element
     * has a value to use in evaluating the policy.</p> <p>You can specify only the ARN
     * of an IAM user. You cannot specify the ARN of an assumed role, federated user,
     * or a service principal.</p>
     */
    inline const Aws::String& GetCallerArn() const{ return m_callerArn; }

    /**
     * <p>The ARN of the IAM user that you want to use as the simulated caller of the
     * APIs. <code>CallerArn</code> is required if you include a
     * <code>ResourcePolicy</code> so that the policy's <code>Principal</code> element
     * has a value to use in evaluating the policy.</p> <p>You can specify only the ARN
     * of an IAM user. You cannot specify the ARN of an assumed role, federated user,
     * or a service principal.</p>
     */
    inline void SetCallerArn(const Aws::String& value) { m_callerArnHasBeenSet = true; m_callerArn = value; }

    /**
     * <p>The ARN of the IAM user that you want to use as the simulated caller of the
     * APIs. <code>CallerArn</code> is required if you include a
     * <code>ResourcePolicy</code> so that the policy's <code>Principal</code> element
     * has a value to use in evaluating the policy.</p> <p>You can specify only the ARN
     * of an IAM user. You cannot specify the ARN of an assumed role, federated user,
     * or a service principal.</p>
     */
    inline void SetCallerArn(Aws::String&& value) { m_callerArnHasBeenSet = true; m_callerArn = value; }

    /**
     * <p>The ARN of the IAM user that you want to use as the simulated caller of the
     * APIs. <code>CallerArn</code> is required if you include a
     * <code>ResourcePolicy</code> so that the policy's <code>Principal</code> element
     * has a value to use in evaluating the policy.</p> <p>You can specify only the ARN
     * of an IAM user. You cannot specify the ARN of an assumed role, federated user,
     * or a service principal.</p>
     */
    inline void SetCallerArn(const char* value) { m_callerArnHasBeenSet = true; m_callerArn.assign(value); }

    /**
     * <p>The ARN of the IAM user that you want to use as the simulated caller of the
     * APIs. <code>CallerArn</code> is required if you include a
     * <code>ResourcePolicy</code> so that the policy's <code>Principal</code> element
     * has a value to use in evaluating the policy.</p> <p>You can specify only the ARN
     * of an IAM user. You cannot specify the ARN of an assumed role, federated user,
     * or a service principal.</p>
     */
    inline SimulateCustomPolicyRequest& WithCallerArn(const Aws::String& value) { SetCallerArn(value); return *this;}

    /**
     * <p>The ARN of the IAM user that you want to use as the simulated caller of the
     * APIs. <code>CallerArn</code> is required if you include a
     * <code>ResourcePolicy</code> so that the policy's <code>Principal</code> element
     * has a value to use in evaluating the policy.</p> <p>You can specify only the ARN
     * of an IAM user. You cannot specify the ARN of an assumed role, federated user,
     * or a service principal.</p>
     */
    inline SimulateCustomPolicyRequest& WithCallerArn(Aws::String&& value) { SetCallerArn(value); return *this;}

    /**
     * <p>The ARN of the IAM user that you want to use as the simulated caller of the
     * APIs. <code>CallerArn</code> is required if you include a
     * <code>ResourcePolicy</code> so that the policy's <code>Principal</code> element
     * has a value to use in evaluating the policy.</p> <p>You can specify only the ARN
     * of an IAM user. You cannot specify the ARN of an assumed role, federated user,
     * or a service principal.</p>
     */
    inline SimulateCustomPolicyRequest& WithCallerArn(const char* value) { SetCallerArn(value); return *this;}

    /**
     * <p>A list of context keys and corresponding values for the simulation to use.
     * Whenever a context key is evaluated in one of the simulated IAM permission
     * policies, the corresponding value is supplied.</p>
     */
    inline const Aws::Vector<ContextEntry>& GetContextEntries() const{ return m_contextEntries; }

    /**
     * <p>A list of context keys and corresponding values for the simulation to use.
     * Whenever a context key is evaluated in one of the simulated IAM permission
     * policies, the corresponding value is supplied.</p>
     */
    inline void SetContextEntries(const Aws::Vector<ContextEntry>& value) { m_contextEntriesHasBeenSet = true; m_contextEntries = value; }

    /**
     * <p>A list of context keys and corresponding values for the simulation to use.
     * Whenever a context key is evaluated in one of the simulated IAM permission
     * policies, the corresponding value is supplied.</p>
     */
    inline void SetContextEntries(Aws::Vector<ContextEntry>&& value) { m_contextEntriesHasBeenSet = true; m_contextEntries = value; }

    /**
     * <p>A list of context keys and corresponding values for the simulation to use.
     * Whenever a context key is evaluated in one of the simulated IAM permission
     * policies, the corresponding value is supplied.</p>
     */
    inline SimulateCustomPolicyRequest& WithContextEntries(const Aws::Vector<ContextEntry>& value) { SetContextEntries(value); return *this;}

    /**
     * <p>A list of context keys and corresponding values for the simulation to use.
     * Whenever a context key is evaluated in one of the simulated IAM permission
     * policies, the corresponding value is supplied.</p>
     */
    inline SimulateCustomPolicyRequest& WithContextEntries(Aws::Vector<ContextEntry>&& value) { SetContextEntries(value); return *this;}

    /**
     * <p>A list of context keys and corresponding values for the simulation to use.
     * Whenever a context key is evaluated in one of the simulated IAM permission
     * policies, the corresponding value is supplied.</p>
     */
    inline SimulateCustomPolicyRequest& AddContextEntries(const ContextEntry& value) { m_contextEntriesHasBeenSet = true; m_contextEntries.push_back(value); return *this; }

    /**
     * <p>A list of context keys and corresponding values for the simulation to use.
     * Whenever a context key is evaluated in one of the simulated IAM permission
     * policies, the corresponding value is supplied.</p>
     */
    inline SimulateCustomPolicyRequest& AddContextEntries(ContextEntry&& value) { m_contextEntriesHasBeenSet = true; m_contextEntries.push_back(value); return *this; }

    /**
     * <p>Specifies the type of simulation to run. Different APIs that support
     * resource-based policies require different combinations of resources. By
     * specifying the type of simulation to run, you enable the policy simulator to
     * enforce the presence of the required resources to ensure reliable simulation
     * results. If your simulation does not match one of the following scenarios, then
     * you can omit this parameter. The following list shows each of the supported
     * scenario values and the resources that you must define to run the
     * simulation.</p> <p>Each of the EC2 scenarios requires that you specify instance,
     * image, and security-group resources. If your scenario includes an EBS volume,
     * then you must specify that volume as a resource. If the EC2 scenario includes
     * VPC, then you must supply the network-interface resource. If it includes an IP
     * subnet, then you must specify the subnet resource. For more information on the
     * EC2 scenario options, see <a
     * href="http://docs.aws.amazon.com/AWSEC2/latest/UserGuide/ec2-supported-platforms.html">Supported
     * Platforms</a> in the <i>AWS EC2 User Guide</i>.</p> <ul> <li> <p>
     * <b>EC2-Classic-InstanceStore</b> </p> <p>instance, image, security-group</p>
     * </li> <li> <p> <b>EC2-Classic-EBS</b> </p> <p>instance, image, security-group,
     * volume</p> </li> <li> <p> <b>EC2-VPC-InstanceStore</b> </p> <p>instance, image,
     * security-group, network-interface</p> </li> <li> <p>
     * <b>EC2-VPC-InstanceStore-Subnet</b> </p> <p>instance, image, security-group,
     * network-interface, subnet</p> </li> <li> <p> <b>EC2-VPC-EBS</b> </p>
     * <p>instance, image, security-group, network-interface, volume</p> </li> <li> <p>
     * <b>EC2-VPC-EBS-Subnet</b> </p> <p>instance, image, security-group,
     * network-interface, subnet, volume</p> </li> </ul>
     */
    inline const Aws::String& GetResourceHandlingOption() const{ return m_resourceHandlingOption; }

    /**
     * <p>Specifies the type of simulation to run. Different APIs that support
     * resource-based policies require different combinations of resources. By
     * specifying the type of simulation to run, you enable the policy simulator to
     * enforce the presence of the required resources to ensure reliable simulation
     * results. If your simulation does not match one of the following scenarios, then
     * you can omit this parameter. The following list shows each of the supported
     * scenario values and the resources that you must define to run the
     * simulation.</p> <p>Each of the EC2 scenarios requires that you specify instance,
     * image, and security-group resources. If your scenario includes an EBS volume,
     * then you must specify that volume as a resource. If the EC2 scenario includes
     * VPC, then you must supply the network-interface resource. If it includes an IP
     * subnet, then you must specify the subnet resource. For more information on the
     * EC2 scenario options, see <a
     * href="http://docs.aws.amazon.com/AWSEC2/latest/UserGuide/ec2-supported-platforms.html">Supported
     * Platforms</a> in the <i>AWS EC2 User Guide</i>.</p> <ul> <li> <p>
     * <b>EC2-Classic-InstanceStore</b> </p> <p>instance, image, security-group</p>
     * </li> <li> <p> <b>EC2-Classic-EBS</b> </p> <p>instance, image, security-group,
     * volume</p> </li> <li> <p> <b>EC2-VPC-InstanceStore</b> </p> <p>instance, image,
     * security-group, network-interface</p> </li> <li> <p>
     * <b>EC2-VPC-InstanceStore-Subnet</b> </p> <p>instance, image, security-group,
     * network-interface, subnet</p> </li> <li> <p> <b>EC2-VPC-EBS</b> </p>
     * <p>instance, image, security-group, network-interface, volume</p> </li> <li> <p>
     * <b>EC2-VPC-EBS-Subnet</b> </p> <p>instance, image, security-group,
     * network-interface, subnet, volume</p> </li> </ul>
     */
    inline void SetResourceHandlingOption(const Aws::String& value) { m_resourceHandlingOptionHasBeenSet = true; m_resourceHandlingOption = value; }

    /**
     * <p>Specifies the type of simulation to run. Different APIs that support
     * resource-based policies require different combinations of resources. By
     * specifying the type of simulation to run, you enable the policy simulator to
     * enforce the presence of the required resources to ensure reliable simulation
     * results. If your simulation does not match one of the following scenarios, then
     * you can omit this parameter. The following list shows each of the supported
     * scenario values and the resources that you must define to run the
     * simulation.</p> <p>Each of the EC2 scenarios requires that you specify instance,
     * image, and security-group resources. If your scenario includes an EBS volume,
     * then you must specify that volume as a resource. If the EC2 scenario includes
     * VPC, then you must supply the network-interface resource. If it includes an IP
     * subnet, then you must specify the subnet resource. For more information on the
     * EC2 scenario options, see <a
     * href="http://docs.aws.amazon.com/AWSEC2/latest/UserGuide/ec2-supported-platforms.html">Supported
     * Platforms</a> in the <i>AWS EC2 User Guide</i>.</p> <ul> <li> <p>
     * <b>EC2-Classic-InstanceStore</b> </p> <p>instance, image, security-group</p>
     * </li> <li> <p> <b>EC2-Classic-EBS</b> </p> <p>instance, image, security-group,
     * volume</p> </li> <li> <p> <b>EC2-VPC-InstanceStore</b> </p> <p>instance, image,
     * security-group, network-interface</p> </li> <li> <p>
     * <b>EC2-VPC-InstanceStore-Subnet</b> </p> <p>instance, image, security-group,
     * network-interface, subnet</p> </li> <li> <p> <b>EC2-VPC-EBS</b> </p>
     * <p>instance, image, security-group, network-interface, volume</p> </li> <li> <p>
     * <b>EC2-VPC-EBS-Subnet</b> </p> <p>instance, image, security-group,
     * network-interface, subnet, volume</p> </li> </ul>
     */
    inline void SetResourceHandlingOption(Aws::String&& value) { m_resourceHandlingOptionHasBeenSet = true; m_resourceHandlingOption = value; }

    /**
     * <p>Specifies the type of simulation to run. Different APIs that support
     * resource-based policies require different combinations of resources. By
     * specifying the type of simulation to run, you enable the policy simulator to
     * enforce the presence of the required resources to ensure reliable simulation
     * results. If your simulation does not match one of the following scenarios, then
     * you can omit this parameter. The following list shows each of the supported
     * scenario values and the resources that you must define to run the
     * simulation.</p> <p>Each of the EC2 scenarios requires that you specify instance,
     * image, and security-group resources. If your scenario includes an EBS volume,
     * then you must specify that volume as a resource. If the EC2 scenario includes
     * VPC, then you must supply the network-interface resource. If it includes an IP
     * subnet, then you must specify the subnet resource. For more information on the
     * EC2 scenario options, see <a
     * href="http://docs.aws.amazon.com/AWSEC2/latest/UserGuide/ec2-supported-platforms.html">Supported
     * Platforms</a> in the <i>AWS EC2 User Guide</i>.</p> <ul> <li> <p>
     * <b>EC2-Classic-InstanceStore</b> </p> <p>instance, image, security-group</p>
     * </li> <li> <p> <b>EC2-Classic-EBS</b> </p> <p>instance, image, security-group,
     * volume</p> </li> <li> <p> <b>EC2-VPC-InstanceStore</b> </p> <p>instance, image,
     * security-group, network-interface</p> </li> <li> <p>
     * <b>EC2-VPC-InstanceStore-Subnet</b> </p> <p>instance, image, security-group,
     * network-interface, subnet</p> </li> <li> <p> <b>EC2-VPC-EBS</b> </p>
     * <p>instance, image, security-group, network-interface, volume</p> </li> <li> <p>
     * <b>EC2-VPC-EBS-Subnet</b> </p> <p>instance, image, security-group,
     * network-interface, subnet, volume</p> </li> </ul>
     */
    inline void SetResourceHandlingOption(const char* value) { m_resourceHandlingOptionHasBeenSet = true; m_resourceHandlingOption.assign(value); }

    /**
     * <p>Specifies the type of simulation to run. Different APIs that support
     * resource-based policies require different combinations of resources. By
     * specifying the type of simulation to run, you enable the policy simulator to
     * enforce the presence of the required resources to ensure reliable simulation
     * results. If your simulation does not match one of the following scenarios, then
     * you can omit this parameter. The following list shows each of the supported
     * scenario values and the resources that you must define to run the
     * simulation.</p> <p>Each of the EC2 scenarios requires that you specify instance,
     * image, and security-group resources. If your scenario includes an EBS volume,
     * then you must specify that volume as a resource. If the EC2 scenario includes
     * VPC, then you must supply the network-interface resource. If it includes an IP
     * subnet, then you must specify the subnet resource. For more information on the
     * EC2 scenario options, see <a
     * href="http://docs.aws.amazon.com/AWSEC2/latest/UserGuide/ec2-supported-platforms.html">Supported
     * Platforms</a> in the <i>AWS EC2 User Guide</i>.</p> <ul> <li> <p>
     * <b>EC2-Classic-InstanceStore</b> </p> <p>instance, image, security-group</p>
     * </li> <li> <p> <b>EC2-Classic-EBS</b> </p> <p>instance, image, security-group,
     * volume</p> </li> <li> <p> <b>EC2-VPC-InstanceStore</b> </p> <p>instance, image,
     * security-group, network-interface</p> </li> <li> <p>
     * <b>EC2-VPC-InstanceStore-Subnet</b> </p> <p>instance, image, security-group,
     * network-interface, subnet</p> </li> <li> <p> <b>EC2-VPC-EBS</b> </p>
     * <p>instance, image, security-group, network-interface, volume</p> </li> <li> <p>
     * <b>EC2-VPC-EBS-Subnet</b> </p> <p>instance, image, security-group,
     * network-interface, subnet, volume</p> </li> </ul>
     */
    inline SimulateCustomPolicyRequest& WithResourceHandlingOption(const Aws::String& value) { SetResourceHandlingOption(value); return *this;}

    /**
     * <p>Specifies the type of simulation to run. Different APIs that support
     * resource-based policies require different combinations of resources. By
     * specifying the type of simulation to run, you enable the policy simulator to
     * enforce the presence of the required resources to ensure reliable simulation
     * results. If your simulation does not match one of the following scenarios, then
     * you can omit this parameter. The following list shows each of the supported
     * scenario values and the resources that you must define to run the
     * simulation.</p> <p>Each of the EC2 scenarios requires that you specify instance,
     * image, and security-group resources. If your scenario includes an EBS volume,
     * then you must specify that volume as a resource. If the EC2 scenario includes
     * VPC, then you must supply the network-interface resource. If it includes an IP
     * subnet, then you must specify the subnet resource. For more information on the
     * EC2 scenario options, see <a
     * href="http://docs.aws.amazon.com/AWSEC2/latest/UserGuide/ec2-supported-platforms.html">Supported
     * Platforms</a> in the <i>AWS EC2 User Guide</i>.</p> <ul> <li> <p>
     * <b>EC2-Classic-InstanceStore</b> </p> <p>instance, image, security-group</p>
     * </li> <li> <p> <b>EC2-Classic-EBS</b> </p> <p>instance, image, security-group,
     * volume</p> </li> <li> <p> <b>EC2-VPC-InstanceStore</b> </p> <p>instance, image,
     * security-group, network-interface</p> </li> <li> <p>
     * <b>EC2-VPC-InstanceStore-Subnet</b> </p> <p>instance, image, security-group,
     * network-interface, subnet</p> </li> <li> <p> <b>EC2-VPC-EBS</b> </p>
     * <p>instance, image, security-group, network-interface, volume</p> </li> <li> <p>
     * <b>EC2-VPC-EBS-Subnet</b> </p> <p>instance, image, security-group,
     * network-interface, subnet, volume</p> </li> </ul>
     */
    inline SimulateCustomPolicyRequest& WithResourceHandlingOption(Aws::String&& value) { SetResourceHandlingOption(value); return *this;}

    /**
     * <p>Specifies the type of simulation to run. Different APIs that support
     * resource-based policies require different combinations of resources. By
     * specifying the type of simulation to run, you enable the policy simulator to
     * enforce the presence of the required resources to ensure reliable simulation
     * results. If your simulation does not match one of the following scenarios, then
     * you can omit this parameter. The following list shows each of the supported
     * scenario values and the resources that you must define to run the
     * simulation.</p> <p>Each of the EC2 scenarios requires that you specify instance,
     * image, and security-group resources. If your scenario includes an EBS volume,
     * then you must specify that volume as a resource. If the EC2 scenario includes
     * VPC, then you must supply the network-interface resource. If it includes an IP
     * subnet, then you must specify the subnet resource. For more information on the
     * EC2 scenario options, see <a
     * href="http://docs.aws.amazon.com/AWSEC2/latest/UserGuide/ec2-supported-platforms.html">Supported
     * Platforms</a> in the <i>AWS EC2 User Guide</i>.</p> <ul> <li> <p>
     * <b>EC2-Classic-InstanceStore</b> </p> <p>instance, image, security-group</p>
     * </li> <li> <p> <b>EC2-Classic-EBS</b> </p> <p>instance, image, security-group,
     * volume</p> </li> <li> <p> <b>EC2-VPC-InstanceStore</b> </p> <p>instance, image,
     * security-group, network-interface</p> </li> <li> <p>
     * <b>EC2-VPC-InstanceStore-Subnet</b> </p> <p>instance, image, security-group,
     * network-interface, subnet</p> </li> <li> <p> <b>EC2-VPC-EBS</b> </p>
     * <p>instance, image, security-group, network-interface, volume</p> </li> <li> <p>
     * <b>EC2-VPC-EBS-Subnet</b> </p> <p>instance, image, security-group,
     * network-interface, subnet, volume</p> </li> </ul>
     */
    inline SimulateCustomPolicyRequest& WithResourceHandlingOption(const char* value) { SetResourceHandlingOption(value); return *this;}

    /**
     * <p>(Optional) Use this only when paginating results to indicate the maximum
     * number of items you want in the response. If additional items exist beyond the
     * maximum you specify, the <code>IsTruncated</code> response element is
     * <code>true</code>.</p> <p>If you do not include this parameter, it defaults to
     * 100. Note that IAM might return fewer results, even when there are more results
     * available. In that case, the <code>IsTruncated</code> response element returns
     * <code>true</code> and <code>Marker</code> contains a value to include in the
     * subsequent call that tells the service where to continue from.</p>
     */
    inline int GetMaxItems() const{ return m_maxItems; }

    /**
     * <p>(Optional) Use this only when paginating results to indicate the maximum
     * number of items you want in the response. If additional items exist beyond the
     * maximum you specify, the <code>IsTruncated</code> response element is
     * <code>true</code>.</p> <p>If you do not include this parameter, it defaults to
     * 100. Note that IAM might return fewer results, even when there are more results
     * available. In that case, the <code>IsTruncated</code> response element returns
     * <code>true</code> and <code>Marker</code> contains a value to include in the
     * subsequent call that tells the service where to continue from.</p>
     */
    inline void SetMaxItems(int value) { m_maxItemsHasBeenSet = true; m_maxItems = value; }

    /**
     * <p>(Optional) Use this only when paginating results to indicate the maximum
     * number of items you want in the response. If additional items exist beyond the
     * maximum you specify, the <code>IsTruncated</code> response element is
     * <code>true</code>.</p> <p>If you do not include this parameter, it defaults to
     * 100. Note that IAM might return fewer results, even when there are more results
     * available. In that case, the <code>IsTruncated</code> response element returns
     * <code>true</code> and <code>Marker</code> contains a value to include in the
     * subsequent call that tells the service where to continue from.</p>
     */
    inline SimulateCustomPolicyRequest& WithMaxItems(int value) { SetMaxItems(value); return *this;}

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
    inline void SetMarker(const Aws::String& value) { m_markerHasBeenSet = true; m_marker = value; }

    /**
     * <p>Use this parameter only when paginating results and only after you receive a
     * response indicating that the results are truncated. Set it to the value of the
     * <code>Marker</code> element in the response that you received to indicate where
     * the next call should start.</p>
     */
    inline void SetMarker(Aws::String&& value) { m_markerHasBeenSet = true; m_marker = value; }

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
    inline SimulateCustomPolicyRequest& WithMarker(const Aws::String& value) { SetMarker(value); return *this;}

    /**
     * <p>Use this parameter only when paginating results and only after you receive a
     * response indicating that the results are truncated. Set it to the value of the
     * <code>Marker</code> element in the response that you received to indicate where
     * the next call should start.</p>
     */
    inline SimulateCustomPolicyRequest& WithMarker(Aws::String&& value) { SetMarker(value); return *this;}

    /**
     * <p>Use this parameter only when paginating results and only after you receive a
     * response indicating that the results are truncated. Set it to the value of the
     * <code>Marker</code> element in the response that you received to indicate where
     * the next call should start.</p>
     */
    inline SimulateCustomPolicyRequest& WithMarker(const char* value) { SetMarker(value); return *this;}

  private:
    Aws::Vector<Aws::String> m_policyInputList;
    bool m_policyInputListHasBeenSet;
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
