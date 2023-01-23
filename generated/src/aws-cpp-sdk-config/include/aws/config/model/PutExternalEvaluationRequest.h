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
    AWS_CONFIGSERVICE_API PutExternalEvaluationRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "PutExternalEvaluation"; }

    AWS_CONFIGSERVICE_API Aws::String SerializePayload() const override;

    AWS_CONFIGSERVICE_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The name of the Config rule.</p>
     */
    inline const Aws::String& GetConfigRuleName() const{ return m_configRuleName; }

    /**
     * <p>The name of the Config rule.</p>
     */
    inline bool ConfigRuleNameHasBeenSet() const { return m_configRuleNameHasBeenSet; }

    /**
     * <p>The name of the Config rule.</p>
     */
    inline void SetConfigRuleName(const Aws::String& value) { m_configRuleNameHasBeenSet = true; m_configRuleName = value; }

    /**
     * <p>The name of the Config rule.</p>
     */
    inline void SetConfigRuleName(Aws::String&& value) { m_configRuleNameHasBeenSet = true; m_configRuleName = std::move(value); }

    /**
     * <p>The name of the Config rule.</p>
     */
    inline void SetConfigRuleName(const char* value) { m_configRuleNameHasBeenSet = true; m_configRuleName.assign(value); }

    /**
     * <p>The name of the Config rule.</p>
     */
    inline PutExternalEvaluationRequest& WithConfigRuleName(const Aws::String& value) { SetConfigRuleName(value); return *this;}

    /**
     * <p>The name of the Config rule.</p>
     */
    inline PutExternalEvaluationRequest& WithConfigRuleName(Aws::String&& value) { SetConfigRuleName(std::move(value)); return *this;}

    /**
     * <p>The name of the Config rule.</p>
     */
    inline PutExternalEvaluationRequest& WithConfigRuleName(const char* value) { SetConfigRuleName(value); return *this;}


    /**
     * <p>An <code>ExternalEvaluation</code> object that provides details about
     * compliance.</p>
     */
    inline const ExternalEvaluation& GetExternalEvaluation() const{ return m_externalEvaluation; }

    /**
     * <p>An <code>ExternalEvaluation</code> object that provides details about
     * compliance.</p>
     */
    inline bool ExternalEvaluationHasBeenSet() const { return m_externalEvaluationHasBeenSet; }

    /**
     * <p>An <code>ExternalEvaluation</code> object that provides details about
     * compliance.</p>
     */
    inline void SetExternalEvaluation(const ExternalEvaluation& value) { m_externalEvaluationHasBeenSet = true; m_externalEvaluation = value; }

    /**
     * <p>An <code>ExternalEvaluation</code> object that provides details about
     * compliance.</p>
     */
    inline void SetExternalEvaluation(ExternalEvaluation&& value) { m_externalEvaluationHasBeenSet = true; m_externalEvaluation = std::move(value); }

    /**
     * <p>An <code>ExternalEvaluation</code> object that provides details about
     * compliance.</p>
     */
    inline PutExternalEvaluationRequest& WithExternalEvaluation(const ExternalEvaluation& value) { SetExternalEvaluation(value); return *this;}

    /**
     * <p>An <code>ExternalEvaluation</code> object that provides details about
     * compliance.</p>
     */
    inline PutExternalEvaluationRequest& WithExternalEvaluation(ExternalEvaluation&& value) { SetExternalEvaluation(std::move(value)); return *this;}

  private:

    Aws::String m_configRuleName;
    bool m_configRuleNameHasBeenSet = false;

    ExternalEvaluation m_externalEvaluation;
    bool m_externalEvaluationHasBeenSet = false;
  };

} // namespace Model
} // namespace ConfigService
} // namespace Aws
