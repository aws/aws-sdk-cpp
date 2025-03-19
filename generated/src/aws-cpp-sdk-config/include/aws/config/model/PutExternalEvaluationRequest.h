/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/config/ConfigService_EXPORTS.h>
#include <aws/config/ConfigServiceRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/config/model/ExternalEvaluation.h>
#include <utility>

namespace Aws
{
namespace ConfigService
{
namespace Model
{

  /**
   */
  class PutExternalEvaluationRequest : public ConfigServiceRequest
  {
  public:
    AWS_CONFIGSERVICE_API PutExternalEvaluationRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "PutExternalEvaluation"; }

    AWS_CONFIGSERVICE_API Aws::String SerializePayload() const override;

    AWS_CONFIGSERVICE_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The name of the Config rule.</p>
     */
    inline const Aws::String& GetConfigRuleName() const { return m_configRuleName; }
    inline bool ConfigRuleNameHasBeenSet() const { return m_configRuleNameHasBeenSet; }
    template<typename ConfigRuleNameT = Aws::String>
    void SetConfigRuleName(ConfigRuleNameT&& value) { m_configRuleNameHasBeenSet = true; m_configRuleName = std::forward<ConfigRuleNameT>(value); }
    template<typename ConfigRuleNameT = Aws::String>
    PutExternalEvaluationRequest& WithConfigRuleName(ConfigRuleNameT&& value) { SetConfigRuleName(std::forward<ConfigRuleNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An <code>ExternalEvaluation</code> object that provides details about
     * compliance.</p>
     */
    inline const ExternalEvaluation& GetExternalEvaluation() const { return m_externalEvaluation; }
    inline bool ExternalEvaluationHasBeenSet() const { return m_externalEvaluationHasBeenSet; }
    template<typename ExternalEvaluationT = ExternalEvaluation>
    void SetExternalEvaluation(ExternalEvaluationT&& value) { m_externalEvaluationHasBeenSet = true; m_externalEvaluation = std::forward<ExternalEvaluationT>(value); }
    template<typename ExternalEvaluationT = ExternalEvaluation>
    PutExternalEvaluationRequest& WithExternalEvaluation(ExternalEvaluationT&& value) { SetExternalEvaluation(std::forward<ExternalEvaluationT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_configRuleName;
    bool m_configRuleNameHasBeenSet = false;

    ExternalEvaluation m_externalEvaluation;
    bool m_externalEvaluationHasBeenSet = false;
  };

} // namespace Model
} // namespace ConfigService
} // namespace Aws
