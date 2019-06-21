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
#include <aws/iam/model/PolicyEvaluationDecisionType.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/iam/model/OrganizationsDecisionDetail.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/iam/model/Statement.h>
#include <aws/iam/model/ResourceSpecificResult.h>
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
   * <p>Contains the results of a simulation.</p> <p>This data type is used by the
   * return parameter of <code> <a>SimulateCustomPolicy</a> </code> and <code>
   * <a>SimulatePrincipalPolicy</a> </code>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iam-2010-05-08/EvaluationResult">AWS
   * API Reference</a></p>
   */
  class AWS_IAM_API EvaluationResult
  {
  public:
    EvaluationResult();
    EvaluationResult(const Aws::Utils::Xml::XmlNode& xmlNode);
    EvaluationResult& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p>The name of the API operation tested on the indicated resource.</p>
     */
    inline const Aws::String& GetEvalActionName() const{ return m_evalActionName; }

    /**
     * <p>The name of the API operation tested on the indicated resource.</p>
     */
    inline bool EvalActionNameHasBeenSet() const { return m_evalActionNameHasBeenSet; }

    /**
     * <p>The name of the API operation tested on the indicated resource.</p>
     */
    inline void SetEvalActionName(const Aws::String& value) { m_evalActionNameHasBeenSet = true; m_evalActionName = value; }

    /**
     * <p>The name of the API operation tested on the indicated resource.</p>
     */
    inline void SetEvalActionName(Aws::String&& value) { m_evalActionNameHasBeenSet = true; m_evalActionName = std::move(value); }

    /**
     * <p>The name of the API operation tested on the indicated resource.</p>
     */
    inline void SetEvalActionName(const char* value) { m_evalActionNameHasBeenSet = true; m_evalActionName.assign(value); }

    /**
     * <p>The name of the API operation tested on the indicated resource.</p>
     */
    inline EvaluationResult& WithEvalActionName(const Aws::String& value) { SetEvalActionName(value); return *this;}

    /**
     * <p>The name of the API operation tested on the indicated resource.</p>
     */
    inline EvaluationResult& WithEvalActionName(Aws::String&& value) { SetEvalActionName(std::move(value)); return *this;}

    /**
     * <p>The name of the API operation tested on the indicated resource.</p>
     */
    inline EvaluationResult& WithEvalActionName(const char* value) { SetEvalActionName(value); return *this;}


    /**
     * <p>The ARN of the resource that the indicated API operation was tested on.</p>
     */
    inline const Aws::String& GetEvalResourceName() const{ return m_evalResourceName; }

    /**
     * <p>The ARN of the resource that the indicated API operation was tested on.</p>
     */
    inline bool EvalResourceNameHasBeenSet() const { return m_evalResourceNameHasBeenSet; }

    /**
     * <p>The ARN of the resource that the indicated API operation was tested on.</p>
     */
    inline void SetEvalResourceName(const Aws::String& value) { m_evalResourceNameHasBeenSet = true; m_evalResourceName = value; }

    /**
     * <p>The ARN of the resource that the indicated API operation was tested on.</p>
     */
    inline void SetEvalResourceName(Aws::String&& value) { m_evalResourceNameHasBeenSet = true; m_evalResourceName = std::move(value); }

    /**
     * <p>The ARN of the resource that the indicated API operation was tested on.</p>
     */
    inline void SetEvalResourceName(const char* value) { m_evalResourceNameHasBeenSet = true; m_evalResourceName.assign(value); }

    /**
     * <p>The ARN of the resource that the indicated API operation was tested on.</p>
     */
    inline EvaluationResult& WithEvalResourceName(const Aws::String& value) { SetEvalResourceName(value); return *this;}

    /**
     * <p>The ARN of the resource that the indicated API operation was tested on.</p>
     */
    inline EvaluationResult& WithEvalResourceName(Aws::String&& value) { SetEvalResourceName(std::move(value)); return *this;}

    /**
     * <p>The ARN of the resource that the indicated API operation was tested on.</p>
     */
    inline EvaluationResult& WithEvalResourceName(const char* value) { SetEvalResourceName(value); return *this;}


    /**
     * <p>The result of the simulation.</p>
     */
    inline const PolicyEvaluationDecisionType& GetEvalDecision() const{ return m_evalDecision; }

    /**
     * <p>The result of the simulation.</p>
     */
    inline bool EvalDecisionHasBeenSet() const { return m_evalDecisionHasBeenSet; }

    /**
     * <p>The result of the simulation.</p>
     */
    inline void SetEvalDecision(const PolicyEvaluationDecisionType& value) { m_evalDecisionHasBeenSet = true; m_evalDecision = value; }

    /**
     * <p>The result of the simulation.</p>
     */
    inline void SetEvalDecision(PolicyEvaluationDecisionType&& value) { m_evalDecisionHasBeenSet = true; m_evalDecision = std::move(value); }

    /**
     * <p>The result of the simulation.</p>
     */
    inline EvaluationResult& WithEvalDecision(const PolicyEvaluationDecisionType& value) { SetEvalDecision(value); return *this;}

    /**
     * <p>The result of the simulation.</p>
     */
    inline EvaluationResult& WithEvalDecision(PolicyEvaluationDecisionType&& value) { SetEvalDecision(std::move(value)); return *this;}


    /**
     * <p>A list of the statements in the input policies that determine the result for
     * this scenario. Remember that even if multiple statements allow the operation on
     * the resource, if only one statement denies that operation, then the explicit
     * deny overrides any allow. In addition, the deny statement is the only entry
     * included in the result.</p>
     */
    inline const Aws::Vector<Statement>& GetMatchedStatements() const{ return m_matchedStatements; }

    /**
     * <p>A list of the statements in the input policies that determine the result for
     * this scenario. Remember that even if multiple statements allow the operation on
     * the resource, if only one statement denies that operation, then the explicit
     * deny overrides any allow. In addition, the deny statement is the only entry
     * included in the result.</p>
     */
    inline bool MatchedStatementsHasBeenSet() const { return m_matchedStatementsHasBeenSet; }

    /**
     * <p>A list of the statements in the input policies that determine the result for
     * this scenario. Remember that even if multiple statements allow the operation on
     * the resource, if only one statement denies that operation, then the explicit
     * deny overrides any allow. In addition, the deny statement is the only entry
     * included in the result.</p>
     */
    inline void SetMatchedStatements(const Aws::Vector<Statement>& value) { m_matchedStatementsHasBeenSet = true; m_matchedStatements = value; }

    /**
     * <p>A list of the statements in the input policies that determine the result for
     * this scenario. Remember that even if multiple statements allow the operation on
     * the resource, if only one statement denies that operation, then the explicit
     * deny overrides any allow. In addition, the deny statement is the only entry
     * included in the result.</p>
     */
    inline void SetMatchedStatements(Aws::Vector<Statement>&& value) { m_matchedStatementsHasBeenSet = true; m_matchedStatements = std::move(value); }

    /**
     * <p>A list of the statements in the input policies that determine the result for
     * this scenario. Remember that even if multiple statements allow the operation on
     * the resource, if only one statement denies that operation, then the explicit
     * deny overrides any allow. In addition, the deny statement is the only entry
     * included in the result.</p>
     */
    inline EvaluationResult& WithMatchedStatements(const Aws::Vector<Statement>& value) { SetMatchedStatements(value); return *this;}

    /**
     * <p>A list of the statements in the input policies that determine the result for
     * this scenario. Remember that even if multiple statements allow the operation on
     * the resource, if only one statement denies that operation, then the explicit
     * deny overrides any allow. In addition, the deny statement is the only entry
     * included in the result.</p>
     */
    inline EvaluationResult& WithMatchedStatements(Aws::Vector<Statement>&& value) { SetMatchedStatements(std::move(value)); return *this;}

    /**
     * <p>A list of the statements in the input policies that determine the result for
     * this scenario. Remember that even if multiple statements allow the operation on
     * the resource, if only one statement denies that operation, then the explicit
     * deny overrides any allow. In addition, the deny statement is the only entry
     * included in the result.</p>
     */
    inline EvaluationResult& AddMatchedStatements(const Statement& value) { m_matchedStatementsHasBeenSet = true; m_matchedStatements.push_back(value); return *this; }

    /**
     * <p>A list of the statements in the input policies that determine the result for
     * this scenario. Remember that even if multiple statements allow the operation on
     * the resource, if only one statement denies that operation, then the explicit
     * deny overrides any allow. In addition, the deny statement is the only entry
     * included in the result.</p>
     */
    inline EvaluationResult& AddMatchedStatements(Statement&& value) { m_matchedStatementsHasBeenSet = true; m_matchedStatements.push_back(std::move(value)); return *this; }


    /**
     * <p>A list of context keys that are required by the included input policies but
     * that were not provided by one of the input parameters. This list is used when
     * the resource in a simulation is "*", either explicitly, or when the
     * <code>ResourceArns</code> parameter blank. If you include a list of resources,
     * then any missing context values are instead included under the
     * <code>ResourceSpecificResults</code> section. To discover the context keys used
     * by a set of policies, you can call <a>GetContextKeysForCustomPolicy</a> or
     * <a>GetContextKeysForPrincipalPolicy</a>.</p>
     */
    inline const Aws::Vector<Aws::String>& GetMissingContextValues() const{ return m_missingContextValues; }

    /**
     * <p>A list of context keys that are required by the included input policies but
     * that were not provided by one of the input parameters. This list is used when
     * the resource in a simulation is "*", either explicitly, or when the
     * <code>ResourceArns</code> parameter blank. If you include a list of resources,
     * then any missing context values are instead included under the
     * <code>ResourceSpecificResults</code> section. To discover the context keys used
     * by a set of policies, you can call <a>GetContextKeysForCustomPolicy</a> or
     * <a>GetContextKeysForPrincipalPolicy</a>.</p>
     */
    inline bool MissingContextValuesHasBeenSet() const { return m_missingContextValuesHasBeenSet; }

    /**
     * <p>A list of context keys that are required by the included input policies but
     * that were not provided by one of the input parameters. This list is used when
     * the resource in a simulation is "*", either explicitly, or when the
     * <code>ResourceArns</code> parameter blank. If you include a list of resources,
     * then any missing context values are instead included under the
     * <code>ResourceSpecificResults</code> section. To discover the context keys used
     * by a set of policies, you can call <a>GetContextKeysForCustomPolicy</a> or
     * <a>GetContextKeysForPrincipalPolicy</a>.</p>
     */
    inline void SetMissingContextValues(const Aws::Vector<Aws::String>& value) { m_missingContextValuesHasBeenSet = true; m_missingContextValues = value; }

    /**
     * <p>A list of context keys that are required by the included input policies but
     * that were not provided by one of the input parameters. This list is used when
     * the resource in a simulation is "*", either explicitly, or when the
     * <code>ResourceArns</code> parameter blank. If you include a list of resources,
     * then any missing context values are instead included under the
     * <code>ResourceSpecificResults</code> section. To discover the context keys used
     * by a set of policies, you can call <a>GetContextKeysForCustomPolicy</a> or
     * <a>GetContextKeysForPrincipalPolicy</a>.</p>
     */
    inline void SetMissingContextValues(Aws::Vector<Aws::String>&& value) { m_missingContextValuesHasBeenSet = true; m_missingContextValues = std::move(value); }

    /**
     * <p>A list of context keys that are required by the included input policies but
     * that were not provided by one of the input parameters. This list is used when
     * the resource in a simulation is "*", either explicitly, or when the
     * <code>ResourceArns</code> parameter blank. If you include a list of resources,
     * then any missing context values are instead included under the
     * <code>ResourceSpecificResults</code> section. To discover the context keys used
     * by a set of policies, you can call <a>GetContextKeysForCustomPolicy</a> or
     * <a>GetContextKeysForPrincipalPolicy</a>.</p>
     */
    inline EvaluationResult& WithMissingContextValues(const Aws::Vector<Aws::String>& value) { SetMissingContextValues(value); return *this;}

    /**
     * <p>A list of context keys that are required by the included input policies but
     * that were not provided by one of the input parameters. This list is used when
     * the resource in a simulation is "*", either explicitly, or when the
     * <code>ResourceArns</code> parameter blank. If you include a list of resources,
     * then any missing context values are instead included under the
     * <code>ResourceSpecificResults</code> section. To discover the context keys used
     * by a set of policies, you can call <a>GetContextKeysForCustomPolicy</a> or
     * <a>GetContextKeysForPrincipalPolicy</a>.</p>
     */
    inline EvaluationResult& WithMissingContextValues(Aws::Vector<Aws::String>&& value) { SetMissingContextValues(std::move(value)); return *this;}

    /**
     * <p>A list of context keys that are required by the included input policies but
     * that were not provided by one of the input parameters. This list is used when
     * the resource in a simulation is "*", either explicitly, or when the
     * <code>ResourceArns</code> parameter blank. If you include a list of resources,
     * then any missing context values are instead included under the
     * <code>ResourceSpecificResults</code> section. To discover the context keys used
     * by a set of policies, you can call <a>GetContextKeysForCustomPolicy</a> or
     * <a>GetContextKeysForPrincipalPolicy</a>.</p>
     */
    inline EvaluationResult& AddMissingContextValues(const Aws::String& value) { m_missingContextValuesHasBeenSet = true; m_missingContextValues.push_back(value); return *this; }

    /**
     * <p>A list of context keys that are required by the included input policies but
     * that were not provided by one of the input parameters. This list is used when
     * the resource in a simulation is "*", either explicitly, or when the
     * <code>ResourceArns</code> parameter blank. If you include a list of resources,
     * then any missing context values are instead included under the
     * <code>ResourceSpecificResults</code> section. To discover the context keys used
     * by a set of policies, you can call <a>GetContextKeysForCustomPolicy</a> or
     * <a>GetContextKeysForPrincipalPolicy</a>.</p>
     */
    inline EvaluationResult& AddMissingContextValues(Aws::String&& value) { m_missingContextValuesHasBeenSet = true; m_missingContextValues.push_back(std::move(value)); return *this; }

    /**
     * <p>A list of context keys that are required by the included input policies but
     * that were not provided by one of the input parameters. This list is used when
     * the resource in a simulation is "*", either explicitly, or when the
     * <code>ResourceArns</code> parameter blank. If you include a list of resources,
     * then any missing context values are instead included under the
     * <code>ResourceSpecificResults</code> section. To discover the context keys used
     * by a set of policies, you can call <a>GetContextKeysForCustomPolicy</a> or
     * <a>GetContextKeysForPrincipalPolicy</a>.</p>
     */
    inline EvaluationResult& AddMissingContextValues(const char* value) { m_missingContextValuesHasBeenSet = true; m_missingContextValues.push_back(value); return *this; }


    /**
     * <p>A structure that details how Organizations and its service control policies
     * affect the results of the simulation. Only applies if the simulated user's
     * account is part of an organization.</p>
     */
    inline const OrganizationsDecisionDetail& GetOrganizationsDecisionDetail() const{ return m_organizationsDecisionDetail; }

    /**
     * <p>A structure that details how Organizations and its service control policies
     * affect the results of the simulation. Only applies if the simulated user's
     * account is part of an organization.</p>
     */
    inline bool OrganizationsDecisionDetailHasBeenSet() const { return m_organizationsDecisionDetailHasBeenSet; }

    /**
     * <p>A structure that details how Organizations and its service control policies
     * affect the results of the simulation. Only applies if the simulated user's
     * account is part of an organization.</p>
     */
    inline void SetOrganizationsDecisionDetail(const OrganizationsDecisionDetail& value) { m_organizationsDecisionDetailHasBeenSet = true; m_organizationsDecisionDetail = value; }

    /**
     * <p>A structure that details how Organizations and its service control policies
     * affect the results of the simulation. Only applies if the simulated user's
     * account is part of an organization.</p>
     */
    inline void SetOrganizationsDecisionDetail(OrganizationsDecisionDetail&& value) { m_organizationsDecisionDetailHasBeenSet = true; m_organizationsDecisionDetail = std::move(value); }

    /**
     * <p>A structure that details how Organizations and its service control policies
     * affect the results of the simulation. Only applies if the simulated user's
     * account is part of an organization.</p>
     */
    inline EvaluationResult& WithOrganizationsDecisionDetail(const OrganizationsDecisionDetail& value) { SetOrganizationsDecisionDetail(value); return *this;}

    /**
     * <p>A structure that details how Organizations and its service control policies
     * affect the results of the simulation. Only applies if the simulated user's
     * account is part of an organization.</p>
     */
    inline EvaluationResult& WithOrganizationsDecisionDetail(OrganizationsDecisionDetail&& value) { SetOrganizationsDecisionDetail(std::move(value)); return *this;}


    /**
     * <p>Additional details about the results of the evaluation decision. When there
     * are both IAM policies and resource policies, this parameter explains how each
     * set of policies contributes to the final evaluation decision. When simulating
     * cross-account access to a resource, both the resource-based policy and the
     * caller's IAM policy must grant access. See <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/id_roles_compare-resource-policies.html">How
     * IAM Roles Differ from Resource-based Policies</a> </p>
     */
    inline const Aws::Map<Aws::String, PolicyEvaluationDecisionType>& GetEvalDecisionDetails() const{ return m_evalDecisionDetails; }

    /**
     * <p>Additional details about the results of the evaluation decision. When there
     * are both IAM policies and resource policies, this parameter explains how each
     * set of policies contributes to the final evaluation decision. When simulating
     * cross-account access to a resource, both the resource-based policy and the
     * caller's IAM policy must grant access. See <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/id_roles_compare-resource-policies.html">How
     * IAM Roles Differ from Resource-based Policies</a> </p>
     */
    inline bool EvalDecisionDetailsHasBeenSet() const { return m_evalDecisionDetailsHasBeenSet; }

    /**
     * <p>Additional details about the results of the evaluation decision. When there
     * are both IAM policies and resource policies, this parameter explains how each
     * set of policies contributes to the final evaluation decision. When simulating
     * cross-account access to a resource, both the resource-based policy and the
     * caller's IAM policy must grant access. See <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/id_roles_compare-resource-policies.html">How
     * IAM Roles Differ from Resource-based Policies</a> </p>
     */
    inline void SetEvalDecisionDetails(const Aws::Map<Aws::String, PolicyEvaluationDecisionType>& value) { m_evalDecisionDetailsHasBeenSet = true; m_evalDecisionDetails = value; }

    /**
     * <p>Additional details about the results of the evaluation decision. When there
     * are both IAM policies and resource policies, this parameter explains how each
     * set of policies contributes to the final evaluation decision. When simulating
     * cross-account access to a resource, both the resource-based policy and the
     * caller's IAM policy must grant access. See <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/id_roles_compare-resource-policies.html">How
     * IAM Roles Differ from Resource-based Policies</a> </p>
     */
    inline void SetEvalDecisionDetails(Aws::Map<Aws::String, PolicyEvaluationDecisionType>&& value) { m_evalDecisionDetailsHasBeenSet = true; m_evalDecisionDetails = std::move(value); }

    /**
     * <p>Additional details about the results of the evaluation decision. When there
     * are both IAM policies and resource policies, this parameter explains how each
     * set of policies contributes to the final evaluation decision. When simulating
     * cross-account access to a resource, both the resource-based policy and the
     * caller's IAM policy must grant access. See <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/id_roles_compare-resource-policies.html">How
     * IAM Roles Differ from Resource-based Policies</a> </p>
     */
    inline EvaluationResult& WithEvalDecisionDetails(const Aws::Map<Aws::String, PolicyEvaluationDecisionType>& value) { SetEvalDecisionDetails(value); return *this;}

    /**
     * <p>Additional details about the results of the evaluation decision. When there
     * are both IAM policies and resource policies, this parameter explains how each
     * set of policies contributes to the final evaluation decision. When simulating
     * cross-account access to a resource, both the resource-based policy and the
     * caller's IAM policy must grant access. See <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/id_roles_compare-resource-policies.html">How
     * IAM Roles Differ from Resource-based Policies</a> </p>
     */
    inline EvaluationResult& WithEvalDecisionDetails(Aws::Map<Aws::String, PolicyEvaluationDecisionType>&& value) { SetEvalDecisionDetails(std::move(value)); return *this;}

    /**
     * <p>Additional details about the results of the evaluation decision. When there
     * are both IAM policies and resource policies, this parameter explains how each
     * set of policies contributes to the final evaluation decision. When simulating
     * cross-account access to a resource, both the resource-based policy and the
     * caller's IAM policy must grant access. See <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/id_roles_compare-resource-policies.html">How
     * IAM Roles Differ from Resource-based Policies</a> </p>
     */
    inline EvaluationResult& AddEvalDecisionDetails(const Aws::String& key, const PolicyEvaluationDecisionType& value) { m_evalDecisionDetailsHasBeenSet = true; m_evalDecisionDetails.emplace(key, value); return *this; }

    /**
     * <p>Additional details about the results of the evaluation decision. When there
     * are both IAM policies and resource policies, this parameter explains how each
     * set of policies contributes to the final evaluation decision. When simulating
     * cross-account access to a resource, both the resource-based policy and the
     * caller's IAM policy must grant access. See <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/id_roles_compare-resource-policies.html">How
     * IAM Roles Differ from Resource-based Policies</a> </p>
     */
    inline EvaluationResult& AddEvalDecisionDetails(Aws::String&& key, const PolicyEvaluationDecisionType& value) { m_evalDecisionDetailsHasBeenSet = true; m_evalDecisionDetails.emplace(std::move(key), value); return *this; }

    /**
     * <p>Additional details about the results of the evaluation decision. When there
     * are both IAM policies and resource policies, this parameter explains how each
     * set of policies contributes to the final evaluation decision. When simulating
     * cross-account access to a resource, both the resource-based policy and the
     * caller's IAM policy must grant access. See <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/id_roles_compare-resource-policies.html">How
     * IAM Roles Differ from Resource-based Policies</a> </p>
     */
    inline EvaluationResult& AddEvalDecisionDetails(const Aws::String& key, PolicyEvaluationDecisionType&& value) { m_evalDecisionDetailsHasBeenSet = true; m_evalDecisionDetails.emplace(key, std::move(value)); return *this; }

    /**
     * <p>Additional details about the results of the evaluation decision. When there
     * are both IAM policies and resource policies, this parameter explains how each
     * set of policies contributes to the final evaluation decision. When simulating
     * cross-account access to a resource, both the resource-based policy and the
     * caller's IAM policy must grant access. See <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/id_roles_compare-resource-policies.html">How
     * IAM Roles Differ from Resource-based Policies</a> </p>
     */
    inline EvaluationResult& AddEvalDecisionDetails(Aws::String&& key, PolicyEvaluationDecisionType&& value) { m_evalDecisionDetailsHasBeenSet = true; m_evalDecisionDetails.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>Additional details about the results of the evaluation decision. When there
     * are both IAM policies and resource policies, this parameter explains how each
     * set of policies contributes to the final evaluation decision. When simulating
     * cross-account access to a resource, both the resource-based policy and the
     * caller's IAM policy must grant access. See <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/id_roles_compare-resource-policies.html">How
     * IAM Roles Differ from Resource-based Policies</a> </p>
     */
    inline EvaluationResult& AddEvalDecisionDetails(const char* key, PolicyEvaluationDecisionType&& value) { m_evalDecisionDetailsHasBeenSet = true; m_evalDecisionDetails.emplace(key, std::move(value)); return *this; }

    /**
     * <p>Additional details about the results of the evaluation decision. When there
     * are both IAM policies and resource policies, this parameter explains how each
     * set of policies contributes to the final evaluation decision. When simulating
     * cross-account access to a resource, both the resource-based policy and the
     * caller's IAM policy must grant access. See <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/id_roles_compare-resource-policies.html">How
     * IAM Roles Differ from Resource-based Policies</a> </p>
     */
    inline EvaluationResult& AddEvalDecisionDetails(const char* key, const PolicyEvaluationDecisionType& value) { m_evalDecisionDetailsHasBeenSet = true; m_evalDecisionDetails.emplace(key, value); return *this; }


    /**
     * <p>The individual results of the simulation of the API operation specified in
     * EvalActionName on each resource.</p>
     */
    inline const Aws::Vector<ResourceSpecificResult>& GetResourceSpecificResults() const{ return m_resourceSpecificResults; }

    /**
     * <p>The individual results of the simulation of the API operation specified in
     * EvalActionName on each resource.</p>
     */
    inline bool ResourceSpecificResultsHasBeenSet() const { return m_resourceSpecificResultsHasBeenSet; }

    /**
     * <p>The individual results of the simulation of the API operation specified in
     * EvalActionName on each resource.</p>
     */
    inline void SetResourceSpecificResults(const Aws::Vector<ResourceSpecificResult>& value) { m_resourceSpecificResultsHasBeenSet = true; m_resourceSpecificResults = value; }

    /**
     * <p>The individual results of the simulation of the API operation specified in
     * EvalActionName on each resource.</p>
     */
    inline void SetResourceSpecificResults(Aws::Vector<ResourceSpecificResult>&& value) { m_resourceSpecificResultsHasBeenSet = true; m_resourceSpecificResults = std::move(value); }

    /**
     * <p>The individual results of the simulation of the API operation specified in
     * EvalActionName on each resource.</p>
     */
    inline EvaluationResult& WithResourceSpecificResults(const Aws::Vector<ResourceSpecificResult>& value) { SetResourceSpecificResults(value); return *this;}

    /**
     * <p>The individual results of the simulation of the API operation specified in
     * EvalActionName on each resource.</p>
     */
    inline EvaluationResult& WithResourceSpecificResults(Aws::Vector<ResourceSpecificResult>&& value) { SetResourceSpecificResults(std::move(value)); return *this;}

    /**
     * <p>The individual results of the simulation of the API operation specified in
     * EvalActionName on each resource.</p>
     */
    inline EvaluationResult& AddResourceSpecificResults(const ResourceSpecificResult& value) { m_resourceSpecificResultsHasBeenSet = true; m_resourceSpecificResults.push_back(value); return *this; }

    /**
     * <p>The individual results of the simulation of the API operation specified in
     * EvalActionName on each resource.</p>
     */
    inline EvaluationResult& AddResourceSpecificResults(ResourceSpecificResult&& value) { m_resourceSpecificResultsHasBeenSet = true; m_resourceSpecificResults.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_evalActionName;
    bool m_evalActionNameHasBeenSet;

    Aws::String m_evalResourceName;
    bool m_evalResourceNameHasBeenSet;

    PolicyEvaluationDecisionType m_evalDecision;
    bool m_evalDecisionHasBeenSet;

    Aws::Vector<Statement> m_matchedStatements;
    bool m_matchedStatementsHasBeenSet;

    Aws::Vector<Aws::String> m_missingContextValues;
    bool m_missingContextValuesHasBeenSet;

    OrganizationsDecisionDetail m_organizationsDecisionDetail;
    bool m_organizationsDecisionDetailHasBeenSet;

    Aws::Map<Aws::String, PolicyEvaluationDecisionType> m_evalDecisionDetails;
    bool m_evalDecisionDetailsHasBeenSet;

    Aws::Vector<ResourceSpecificResult> m_resourceSpecificResults;
    bool m_resourceSpecificResultsHasBeenSet;
  };

} // namespace Model
} // namespace IAM
} // namespace Aws
