/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/config/ConfigService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/config/model/EvaluationMode.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace ConfigService
{
namespace Model
{

  /**
   * <p>Identifies an Config rule that evaluated an Amazon Web Services resource, and
   * provides the type and ID of the resource that the rule evaluated.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/config-2014-11-12/EvaluationResultQualifier">AWS
   * API Reference</a></p>
   */
  class EvaluationResultQualifier
  {
  public:
    AWS_CONFIGSERVICE_API EvaluationResultQualifier();
    AWS_CONFIGSERVICE_API EvaluationResultQualifier(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONFIGSERVICE_API EvaluationResultQualifier& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONFIGSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name of the Config rule that was used in the evaluation.</p>
     */
    inline const Aws::String& GetConfigRuleName() const{ return m_configRuleName; }

    /**
     * <p>The name of the Config rule that was used in the evaluation.</p>
     */
    inline bool ConfigRuleNameHasBeenSet() const { return m_configRuleNameHasBeenSet; }

    /**
     * <p>The name of the Config rule that was used in the evaluation.</p>
     */
    inline void SetConfigRuleName(const Aws::String& value) { m_configRuleNameHasBeenSet = true; m_configRuleName = value; }

    /**
     * <p>The name of the Config rule that was used in the evaluation.</p>
     */
    inline void SetConfigRuleName(Aws::String&& value) { m_configRuleNameHasBeenSet = true; m_configRuleName = std::move(value); }

    /**
     * <p>The name of the Config rule that was used in the evaluation.</p>
     */
    inline void SetConfigRuleName(const char* value) { m_configRuleNameHasBeenSet = true; m_configRuleName.assign(value); }

    /**
     * <p>The name of the Config rule that was used in the evaluation.</p>
     */
    inline EvaluationResultQualifier& WithConfigRuleName(const Aws::String& value) { SetConfigRuleName(value); return *this;}

    /**
     * <p>The name of the Config rule that was used in the evaluation.</p>
     */
    inline EvaluationResultQualifier& WithConfigRuleName(Aws::String&& value) { SetConfigRuleName(std::move(value)); return *this;}

    /**
     * <p>The name of the Config rule that was used in the evaluation.</p>
     */
    inline EvaluationResultQualifier& WithConfigRuleName(const char* value) { SetConfigRuleName(value); return *this;}


    /**
     * <p>The type of Amazon Web Services resource that was evaluated.</p>
     */
    inline const Aws::String& GetResourceType() const{ return m_resourceType; }

    /**
     * <p>The type of Amazon Web Services resource that was evaluated.</p>
     */
    inline bool ResourceTypeHasBeenSet() const { return m_resourceTypeHasBeenSet; }

    /**
     * <p>The type of Amazon Web Services resource that was evaluated.</p>
     */
    inline void SetResourceType(const Aws::String& value) { m_resourceTypeHasBeenSet = true; m_resourceType = value; }

    /**
     * <p>The type of Amazon Web Services resource that was evaluated.</p>
     */
    inline void SetResourceType(Aws::String&& value) { m_resourceTypeHasBeenSet = true; m_resourceType = std::move(value); }

    /**
     * <p>The type of Amazon Web Services resource that was evaluated.</p>
     */
    inline void SetResourceType(const char* value) { m_resourceTypeHasBeenSet = true; m_resourceType.assign(value); }

    /**
     * <p>The type of Amazon Web Services resource that was evaluated.</p>
     */
    inline EvaluationResultQualifier& WithResourceType(const Aws::String& value) { SetResourceType(value); return *this;}

    /**
     * <p>The type of Amazon Web Services resource that was evaluated.</p>
     */
    inline EvaluationResultQualifier& WithResourceType(Aws::String&& value) { SetResourceType(std::move(value)); return *this;}

    /**
     * <p>The type of Amazon Web Services resource that was evaluated.</p>
     */
    inline EvaluationResultQualifier& WithResourceType(const char* value) { SetResourceType(value); return *this;}


    /**
     * <p>The ID of the evaluated Amazon Web Services resource.</p>
     */
    inline const Aws::String& GetResourceId() const{ return m_resourceId; }

    /**
     * <p>The ID of the evaluated Amazon Web Services resource.</p>
     */
    inline bool ResourceIdHasBeenSet() const { return m_resourceIdHasBeenSet; }

    /**
     * <p>The ID of the evaluated Amazon Web Services resource.</p>
     */
    inline void SetResourceId(const Aws::String& value) { m_resourceIdHasBeenSet = true; m_resourceId = value; }

    /**
     * <p>The ID of the evaluated Amazon Web Services resource.</p>
     */
    inline void SetResourceId(Aws::String&& value) { m_resourceIdHasBeenSet = true; m_resourceId = std::move(value); }

    /**
     * <p>The ID of the evaluated Amazon Web Services resource.</p>
     */
    inline void SetResourceId(const char* value) { m_resourceIdHasBeenSet = true; m_resourceId.assign(value); }

    /**
     * <p>The ID of the evaluated Amazon Web Services resource.</p>
     */
    inline EvaluationResultQualifier& WithResourceId(const Aws::String& value) { SetResourceId(value); return *this;}

    /**
     * <p>The ID of the evaluated Amazon Web Services resource.</p>
     */
    inline EvaluationResultQualifier& WithResourceId(Aws::String&& value) { SetResourceId(std::move(value)); return *this;}

    /**
     * <p>The ID of the evaluated Amazon Web Services resource.</p>
     */
    inline EvaluationResultQualifier& WithResourceId(const char* value) { SetResourceId(value); return *this;}


    /**
     * <p>The mode of an evaluation. The valid values are Detective or Proactive.</p>
     */
    inline const EvaluationMode& GetEvaluationMode() const{ return m_evaluationMode; }

    /**
     * <p>The mode of an evaluation. The valid values are Detective or Proactive.</p>
     */
    inline bool EvaluationModeHasBeenSet() const { return m_evaluationModeHasBeenSet; }

    /**
     * <p>The mode of an evaluation. The valid values are Detective or Proactive.</p>
     */
    inline void SetEvaluationMode(const EvaluationMode& value) { m_evaluationModeHasBeenSet = true; m_evaluationMode = value; }

    /**
     * <p>The mode of an evaluation. The valid values are Detective or Proactive.</p>
     */
    inline void SetEvaluationMode(EvaluationMode&& value) { m_evaluationModeHasBeenSet = true; m_evaluationMode = std::move(value); }

    /**
     * <p>The mode of an evaluation. The valid values are Detective or Proactive.</p>
     */
    inline EvaluationResultQualifier& WithEvaluationMode(const EvaluationMode& value) { SetEvaluationMode(value); return *this;}

    /**
     * <p>The mode of an evaluation. The valid values are Detective or Proactive.</p>
     */
    inline EvaluationResultQualifier& WithEvaluationMode(EvaluationMode&& value) { SetEvaluationMode(std::move(value)); return *this;}

  private:

    Aws::String m_configRuleName;
    bool m_configRuleNameHasBeenSet = false;

    Aws::String m_resourceType;
    bool m_resourceTypeHasBeenSet = false;

    Aws::String m_resourceId;
    bool m_resourceIdHasBeenSet = false;

    EvaluationMode m_evaluationMode;
    bool m_evaluationModeHasBeenSet = false;
  };

} // namespace Model
} // namespace ConfigService
} // namespace Aws
