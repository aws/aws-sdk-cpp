/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iam/IAM_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/iam/model/PolicyEvaluationDecisionType.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/iam/model/OrganizationsDecisionDetail.h>
#include <aws/iam/model/PermissionsBoundaryDecisionDetail.h>
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
   * return parameter of <code> <a
   * href="https://docs.aws.amazon.com/IAM/latest/APIReference/API_SimulateCustomPolicy.html">SimulateCustomPolicy</a>
   * </code> and <code> <a
   * href="https://docs.aws.amazon.com/IAM/latest/APIReference/API_SimulatePrincipalPolicy.html">SimulatePrincipalPolicy</a>
   * </code>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iam-2010-05-08/EvaluationResult">AWS
   * API Reference</a></p>
   */
  class EvaluationResult
  {
  public:
    AWS_IAM_API EvaluationResult() = default;
    AWS_IAM_API EvaluationResult(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_IAM_API EvaluationResult& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_IAM_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_IAM_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>The name of the API operation tested on the indicated resource.</p>
     */
    inline const Aws::String& GetEvalActionName() const { return m_evalActionName; }
    inline bool EvalActionNameHasBeenSet() const { return m_evalActionNameHasBeenSet; }
    template<typename EvalActionNameT = Aws::String>
    void SetEvalActionName(EvalActionNameT&& value) { m_evalActionNameHasBeenSet = true; m_evalActionName = std::forward<EvalActionNameT>(value); }
    template<typename EvalActionNameT = Aws::String>
    EvaluationResult& WithEvalActionName(EvalActionNameT&& value) { SetEvalActionName(std::forward<EvalActionNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the resource that the indicated API operation was tested on.</p>
     */
    inline const Aws::String& GetEvalResourceName() const { return m_evalResourceName; }
    inline bool EvalResourceNameHasBeenSet() const { return m_evalResourceNameHasBeenSet; }
    template<typename EvalResourceNameT = Aws::String>
    void SetEvalResourceName(EvalResourceNameT&& value) { m_evalResourceNameHasBeenSet = true; m_evalResourceName = std::forward<EvalResourceNameT>(value); }
    template<typename EvalResourceNameT = Aws::String>
    EvaluationResult& WithEvalResourceName(EvalResourceNameT&& value) { SetEvalResourceName(std::forward<EvalResourceNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The result of the simulation.</p>
     */
    inline PolicyEvaluationDecisionType GetEvalDecision() const { return m_evalDecision; }
    inline bool EvalDecisionHasBeenSet() const { return m_evalDecisionHasBeenSet; }
    inline void SetEvalDecision(PolicyEvaluationDecisionType value) { m_evalDecisionHasBeenSet = true; m_evalDecision = value; }
    inline EvaluationResult& WithEvalDecision(PolicyEvaluationDecisionType value) { SetEvalDecision(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of the statements in the input policies that determine the result for
     * this scenario. Remember that even if multiple statements allow the operation on
     * the resource, if only one statement denies that operation, then the explicit
     * deny overrides any allow. In addition, the deny statement is the only entry
     * included in the result.</p>
     */
    inline const Aws::Vector<Statement>& GetMatchedStatements() const { return m_matchedStatements; }
    inline bool MatchedStatementsHasBeenSet() const { return m_matchedStatementsHasBeenSet; }
    template<typename MatchedStatementsT = Aws::Vector<Statement>>
    void SetMatchedStatements(MatchedStatementsT&& value) { m_matchedStatementsHasBeenSet = true; m_matchedStatements = std::forward<MatchedStatementsT>(value); }
    template<typename MatchedStatementsT = Aws::Vector<Statement>>
    EvaluationResult& WithMatchedStatements(MatchedStatementsT&& value) { SetMatchedStatements(std::forward<MatchedStatementsT>(value)); return *this;}
    template<typename MatchedStatementsT = Statement>
    EvaluationResult& AddMatchedStatements(MatchedStatementsT&& value) { m_matchedStatementsHasBeenSet = true; m_matchedStatements.emplace_back(std::forward<MatchedStatementsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A list of context keys that are required by the included input policies but
     * that were not provided by one of the input parameters. This list is used when
     * the resource in a simulation is "*", either explicitly, or when the
     * <code>ResourceArns</code> parameter blank. If you include a list of resources,
     * then any missing context values are instead included under the
     * <code>ResourceSpecificResults</code> section. To discover the context keys used
     * by a set of policies, you can call <a
     * href="https://docs.aws.amazon.com/IAM/latest/APIReference/API_GetContextKeysForCustomPolicy.html">GetContextKeysForCustomPolicy</a>
     * or <a
     * href="https://docs.aws.amazon.com/IAM/latest/APIReference/API_GetContextKeysForPrincipalPolicy.html">GetContextKeysForPrincipalPolicy</a>.</p>
     */
    inline const Aws::Vector<Aws::String>& GetMissingContextValues() const { return m_missingContextValues; }
    inline bool MissingContextValuesHasBeenSet() const { return m_missingContextValuesHasBeenSet; }
    template<typename MissingContextValuesT = Aws::Vector<Aws::String>>
    void SetMissingContextValues(MissingContextValuesT&& value) { m_missingContextValuesHasBeenSet = true; m_missingContextValues = std::forward<MissingContextValuesT>(value); }
    template<typename MissingContextValuesT = Aws::Vector<Aws::String>>
    EvaluationResult& WithMissingContextValues(MissingContextValuesT&& value) { SetMissingContextValues(std::forward<MissingContextValuesT>(value)); return *this;}
    template<typename MissingContextValuesT = Aws::String>
    EvaluationResult& AddMissingContextValues(MissingContextValuesT&& value) { m_missingContextValuesHasBeenSet = true; m_missingContextValues.emplace_back(std::forward<MissingContextValuesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A structure that details how Organizations and its service control policies
     * affect the results of the simulation. Only applies if the simulated user's
     * account is part of an organization.</p>
     */
    inline const OrganizationsDecisionDetail& GetOrganizationsDecisionDetail() const { return m_organizationsDecisionDetail; }
    inline bool OrganizationsDecisionDetailHasBeenSet() const { return m_organizationsDecisionDetailHasBeenSet; }
    template<typename OrganizationsDecisionDetailT = OrganizationsDecisionDetail>
    void SetOrganizationsDecisionDetail(OrganizationsDecisionDetailT&& value) { m_organizationsDecisionDetailHasBeenSet = true; m_organizationsDecisionDetail = std::forward<OrganizationsDecisionDetailT>(value); }
    template<typename OrganizationsDecisionDetailT = OrganizationsDecisionDetail>
    EvaluationResult& WithOrganizationsDecisionDetail(OrganizationsDecisionDetailT&& value) { SetOrganizationsDecisionDetail(std::forward<OrganizationsDecisionDetailT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Contains information about the effect that a permissions boundary has on a
     * policy simulation when the boundary is applied to an IAM entity.</p>
     */
    inline const PermissionsBoundaryDecisionDetail& GetPermissionsBoundaryDecisionDetail() const { return m_permissionsBoundaryDecisionDetail; }
    inline bool PermissionsBoundaryDecisionDetailHasBeenSet() const { return m_permissionsBoundaryDecisionDetailHasBeenSet; }
    template<typename PermissionsBoundaryDecisionDetailT = PermissionsBoundaryDecisionDetail>
    void SetPermissionsBoundaryDecisionDetail(PermissionsBoundaryDecisionDetailT&& value) { m_permissionsBoundaryDecisionDetailHasBeenSet = true; m_permissionsBoundaryDecisionDetail = std::forward<PermissionsBoundaryDecisionDetailT>(value); }
    template<typename PermissionsBoundaryDecisionDetailT = PermissionsBoundaryDecisionDetail>
    EvaluationResult& WithPermissionsBoundaryDecisionDetail(PermissionsBoundaryDecisionDetailT&& value) { SetPermissionsBoundaryDecisionDetail(std::forward<PermissionsBoundaryDecisionDetailT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Additional details about the results of the cross-account evaluation
     * decision. This parameter is populated for only cross-account simulations. It
     * contains a brief summary of how each policy type contributes to the final
     * evaluation decision.</p> <p>If the simulation evaluates policies within the same
     * account and includes a resource ARN, then the parameter is present but the
     * response is empty. If the simulation evaluates policies within the same account
     * and specifies all resources (<code>*</code>), then the parameter is not
     * returned.</p> <p>When you make a cross-account request, Amazon Web Services
     * evaluates the request in the trusting account and the trusted account. The
     * request is allowed only if both evaluations return <code>true</code>. For more
     * information about how policies are evaluated, see <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/reference_policies_evaluation-logic.html#policy-eval-basics">Evaluating
     * policies within a single account</a>.</p> <p>If an Organizations SCP included in
     * the evaluation denies access, the simulation ends. In this case, policy
     * evaluation does not proceed any further and this parameter is not returned.</p>
     */
    inline const Aws::Map<Aws::String, PolicyEvaluationDecisionType>& GetEvalDecisionDetails() const { return m_evalDecisionDetails; }
    inline bool EvalDecisionDetailsHasBeenSet() const { return m_evalDecisionDetailsHasBeenSet; }
    template<typename EvalDecisionDetailsT = Aws::Map<Aws::String, PolicyEvaluationDecisionType>>
    void SetEvalDecisionDetails(EvalDecisionDetailsT&& value) { m_evalDecisionDetailsHasBeenSet = true; m_evalDecisionDetails = std::forward<EvalDecisionDetailsT>(value); }
    template<typename EvalDecisionDetailsT = Aws::Map<Aws::String, PolicyEvaluationDecisionType>>
    EvaluationResult& WithEvalDecisionDetails(EvalDecisionDetailsT&& value) { SetEvalDecisionDetails(std::forward<EvalDecisionDetailsT>(value)); return *this;}
    inline EvaluationResult& AddEvalDecisionDetails(Aws::String key, PolicyEvaluationDecisionType value) {
      m_evalDecisionDetailsHasBeenSet = true; m_evalDecisionDetails.emplace(key, value); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>The individual results of the simulation of the API operation specified in
     * EvalActionName on each resource.</p>
     */
    inline const Aws::Vector<ResourceSpecificResult>& GetResourceSpecificResults() const { return m_resourceSpecificResults; }
    inline bool ResourceSpecificResultsHasBeenSet() const { return m_resourceSpecificResultsHasBeenSet; }
    template<typename ResourceSpecificResultsT = Aws::Vector<ResourceSpecificResult>>
    void SetResourceSpecificResults(ResourceSpecificResultsT&& value) { m_resourceSpecificResultsHasBeenSet = true; m_resourceSpecificResults = std::forward<ResourceSpecificResultsT>(value); }
    template<typename ResourceSpecificResultsT = Aws::Vector<ResourceSpecificResult>>
    EvaluationResult& WithResourceSpecificResults(ResourceSpecificResultsT&& value) { SetResourceSpecificResults(std::forward<ResourceSpecificResultsT>(value)); return *this;}
    template<typename ResourceSpecificResultsT = ResourceSpecificResult>
    EvaluationResult& AddResourceSpecificResults(ResourceSpecificResultsT&& value) { m_resourceSpecificResultsHasBeenSet = true; m_resourceSpecificResults.emplace_back(std::forward<ResourceSpecificResultsT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_evalActionName;
    bool m_evalActionNameHasBeenSet = false;

    Aws::String m_evalResourceName;
    bool m_evalResourceNameHasBeenSet = false;

    PolicyEvaluationDecisionType m_evalDecision{PolicyEvaluationDecisionType::NOT_SET};
    bool m_evalDecisionHasBeenSet = false;

    Aws::Vector<Statement> m_matchedStatements;
    bool m_matchedStatementsHasBeenSet = false;

    Aws::Vector<Aws::String> m_missingContextValues;
    bool m_missingContextValuesHasBeenSet = false;

    OrganizationsDecisionDetail m_organizationsDecisionDetail;
    bool m_organizationsDecisionDetailHasBeenSet = false;

    PermissionsBoundaryDecisionDetail m_permissionsBoundaryDecisionDetail;
    bool m_permissionsBoundaryDecisionDetailHasBeenSet = false;

    Aws::Map<Aws::String, PolicyEvaluationDecisionType> m_evalDecisionDetails;
    bool m_evalDecisionDetailsHasBeenSet = false;

    Aws::Vector<ResourceSpecificResult> m_resourceSpecificResults;
    bool m_resourceSpecificResultsHasBeenSet = false;
  };

} // namespace Model
} // namespace IAM
} // namespace Aws
