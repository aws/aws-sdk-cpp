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
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/iam/model/PermissionsBoundaryDecisionDetail.h>
#include <aws/iam/model/Statement.h>
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
   * <p>Contains the result of the simulation of a single API operation call on a
   * single resource.</p> <p>This data type is used by a member of the <a
   * href="https://docs.aws.amazon.com/IAM/latest/APIReference/API_EvaluationResult.html">EvaluationResult</a>
   * data type.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iam-2010-05-08/ResourceSpecificResult">AWS
   * API Reference</a></p>
   */
  class ResourceSpecificResult
  {
  public:
    AWS_IAM_API ResourceSpecificResult() = default;
    AWS_IAM_API ResourceSpecificResult(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_IAM_API ResourceSpecificResult& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_IAM_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_IAM_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>The name of the simulated resource, in Amazon Resource Name (ARN) format.</p>
     */
    inline const Aws::String& GetEvalResourceName() const { return m_evalResourceName; }
    inline bool EvalResourceNameHasBeenSet() const { return m_evalResourceNameHasBeenSet; }
    template<typename EvalResourceNameT = Aws::String>
    void SetEvalResourceName(EvalResourceNameT&& value) { m_evalResourceNameHasBeenSet = true; m_evalResourceName = std::forward<EvalResourceNameT>(value); }
    template<typename EvalResourceNameT = Aws::String>
    ResourceSpecificResult& WithEvalResourceName(EvalResourceNameT&& value) { SetEvalResourceName(std::forward<EvalResourceNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The result of the simulation of the simulated API operation on the resource
     * specified in <code>EvalResourceName</code>.</p>
     */
    inline PolicyEvaluationDecisionType GetEvalResourceDecision() const { return m_evalResourceDecision; }
    inline bool EvalResourceDecisionHasBeenSet() const { return m_evalResourceDecisionHasBeenSet; }
    inline void SetEvalResourceDecision(PolicyEvaluationDecisionType value) { m_evalResourceDecisionHasBeenSet = true; m_evalResourceDecision = value; }
    inline ResourceSpecificResult& WithEvalResourceDecision(PolicyEvaluationDecisionType value) { SetEvalResourceDecision(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of the statements in the input policies that determine the result for
     * this part of the simulation. Remember that even if multiple statements allow the
     * operation on the resource, if <i>any</i> statement denies that operation, then
     * the explicit deny overrides any allow. In addition, the deny statement is the
     * only entry included in the result.</p>
     */
    inline const Aws::Vector<Statement>& GetMatchedStatements() const { return m_matchedStatements; }
    inline bool MatchedStatementsHasBeenSet() const { return m_matchedStatementsHasBeenSet; }
    template<typename MatchedStatementsT = Aws::Vector<Statement>>
    void SetMatchedStatements(MatchedStatementsT&& value) { m_matchedStatementsHasBeenSet = true; m_matchedStatements = std::forward<MatchedStatementsT>(value); }
    template<typename MatchedStatementsT = Aws::Vector<Statement>>
    ResourceSpecificResult& WithMatchedStatements(MatchedStatementsT&& value) { SetMatchedStatements(std::forward<MatchedStatementsT>(value)); return *this;}
    template<typename MatchedStatementsT = Statement>
    ResourceSpecificResult& AddMatchedStatements(MatchedStatementsT&& value) { m_matchedStatementsHasBeenSet = true; m_matchedStatements.emplace_back(std::forward<MatchedStatementsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A list of context keys that are required by the included input policies but
     * that were not provided by one of the input parameters. This list is used when a
     * list of ARNs is included in the <code>ResourceArns</code> parameter instead of
     * "*". If you do not specify individual resources, by setting
     * <code>ResourceArns</code> to "*" or by not including the
     * <code>ResourceArns</code> parameter, then any missing context values are instead
     * included under the <code>EvaluationResults</code> section. To discover the
     * context keys used by a set of policies, you can call <a
     * href="https://docs.aws.amazon.com/IAM/latest/APIReference/API_GetContextKeysForCustomPolicy.html">GetContextKeysForCustomPolicy</a>
     * or <a
     * href="https://docs.aws.amazon.com/IAM/latest/APIReference/API_GetContextKeysForPrincipalPolicy.html">GetContextKeysForPrincipalPolicy</a>.</p>
     */
    inline const Aws::Vector<Aws::String>& GetMissingContextValues() const { return m_missingContextValues; }
    inline bool MissingContextValuesHasBeenSet() const { return m_missingContextValuesHasBeenSet; }
    template<typename MissingContextValuesT = Aws::Vector<Aws::String>>
    void SetMissingContextValues(MissingContextValuesT&& value) { m_missingContextValuesHasBeenSet = true; m_missingContextValues = std::forward<MissingContextValuesT>(value); }
    template<typename MissingContextValuesT = Aws::Vector<Aws::String>>
    ResourceSpecificResult& WithMissingContextValues(MissingContextValuesT&& value) { SetMissingContextValues(std::forward<MissingContextValuesT>(value)); return *this;}
    template<typename MissingContextValuesT = Aws::String>
    ResourceSpecificResult& AddMissingContextValues(MissingContextValuesT&& value) { m_missingContextValuesHasBeenSet = true; m_missingContextValues.emplace_back(std::forward<MissingContextValuesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Additional details about the results of the evaluation decision on a single
     * resource. This parameter is returned only for cross-account simulations. This
     * parameter explains how each policy type contributes to the resource-specific
     * evaluation decision.</p>
     */
    inline const Aws::Map<Aws::String, PolicyEvaluationDecisionType>& GetEvalDecisionDetails() const { return m_evalDecisionDetails; }
    inline bool EvalDecisionDetailsHasBeenSet() const { return m_evalDecisionDetailsHasBeenSet; }
    template<typename EvalDecisionDetailsT = Aws::Map<Aws::String, PolicyEvaluationDecisionType>>
    void SetEvalDecisionDetails(EvalDecisionDetailsT&& value) { m_evalDecisionDetailsHasBeenSet = true; m_evalDecisionDetails = std::forward<EvalDecisionDetailsT>(value); }
    template<typename EvalDecisionDetailsT = Aws::Map<Aws::String, PolicyEvaluationDecisionType>>
    ResourceSpecificResult& WithEvalDecisionDetails(EvalDecisionDetailsT&& value) { SetEvalDecisionDetails(std::forward<EvalDecisionDetailsT>(value)); return *this;}
    inline ResourceSpecificResult& AddEvalDecisionDetails(Aws::String key, PolicyEvaluationDecisionType value) {
      m_evalDecisionDetailsHasBeenSet = true; m_evalDecisionDetails.emplace(key, value); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>Contains information about the effect that a permissions boundary has on a
     * policy simulation when that boundary is applied to an IAM entity.</p>
     */
    inline const PermissionsBoundaryDecisionDetail& GetPermissionsBoundaryDecisionDetail() const { return m_permissionsBoundaryDecisionDetail; }
    inline bool PermissionsBoundaryDecisionDetailHasBeenSet() const { return m_permissionsBoundaryDecisionDetailHasBeenSet; }
    template<typename PermissionsBoundaryDecisionDetailT = PermissionsBoundaryDecisionDetail>
    void SetPermissionsBoundaryDecisionDetail(PermissionsBoundaryDecisionDetailT&& value) { m_permissionsBoundaryDecisionDetailHasBeenSet = true; m_permissionsBoundaryDecisionDetail = std::forward<PermissionsBoundaryDecisionDetailT>(value); }
    template<typename PermissionsBoundaryDecisionDetailT = PermissionsBoundaryDecisionDetail>
    ResourceSpecificResult& WithPermissionsBoundaryDecisionDetail(PermissionsBoundaryDecisionDetailT&& value) { SetPermissionsBoundaryDecisionDetail(std::forward<PermissionsBoundaryDecisionDetailT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_evalResourceName;
    bool m_evalResourceNameHasBeenSet = false;

    PolicyEvaluationDecisionType m_evalResourceDecision{PolicyEvaluationDecisionType::NOT_SET};
    bool m_evalResourceDecisionHasBeenSet = false;

    Aws::Vector<Statement> m_matchedStatements;
    bool m_matchedStatementsHasBeenSet = false;

    Aws::Vector<Aws::String> m_missingContextValues;
    bool m_missingContextValuesHasBeenSet = false;

    Aws::Map<Aws::String, PolicyEvaluationDecisionType> m_evalDecisionDetails;
    bool m_evalDecisionDetailsHasBeenSet = false;

    PermissionsBoundaryDecisionDetail m_permissionsBoundaryDecisionDetail;
    bool m_permissionsBoundaryDecisionDetailHasBeenSet = false;
  };

} // namespace Model
} // namespace IAM
} // namespace Aws
