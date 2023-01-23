/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/glue/Glue_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/glue/model/DataQualityRuleResultStatus.h>
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
namespace Glue
{
namespace Model
{

  /**
   * <p>Describes the result of the evaluation of a data quality rule.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/DataQualityRuleResult">AWS
   * API Reference</a></p>
   */
  class DataQualityRuleResult
  {
  public:
    AWS_GLUE_API DataQualityRuleResult();
    AWS_GLUE_API DataQualityRuleResult(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API DataQualityRuleResult& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name of the data quality rule.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the data quality rule.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the data quality rule.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the data quality rule.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the data quality rule.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the data quality rule.</p>
     */
    inline DataQualityRuleResult& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the data quality rule.</p>
     */
    inline DataQualityRuleResult& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the data quality rule.</p>
     */
    inline DataQualityRuleResult& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>A description of the data quality rule.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>A description of the data quality rule.</p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>A description of the data quality rule.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>A description of the data quality rule.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>A description of the data quality rule.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>A description of the data quality rule.</p>
     */
    inline DataQualityRuleResult& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>A description of the data quality rule.</p>
     */
    inline DataQualityRuleResult& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>A description of the data quality rule.</p>
     */
    inline DataQualityRuleResult& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>An evaluation message.</p>
     */
    inline const Aws::String& GetEvaluationMessage() const{ return m_evaluationMessage; }

    /**
     * <p>An evaluation message.</p>
     */
    inline bool EvaluationMessageHasBeenSet() const { return m_evaluationMessageHasBeenSet; }

    /**
     * <p>An evaluation message.</p>
     */
    inline void SetEvaluationMessage(const Aws::String& value) { m_evaluationMessageHasBeenSet = true; m_evaluationMessage = value; }

    /**
     * <p>An evaluation message.</p>
     */
    inline void SetEvaluationMessage(Aws::String&& value) { m_evaluationMessageHasBeenSet = true; m_evaluationMessage = std::move(value); }

    /**
     * <p>An evaluation message.</p>
     */
    inline void SetEvaluationMessage(const char* value) { m_evaluationMessageHasBeenSet = true; m_evaluationMessage.assign(value); }

    /**
     * <p>An evaluation message.</p>
     */
    inline DataQualityRuleResult& WithEvaluationMessage(const Aws::String& value) { SetEvaluationMessage(value); return *this;}

    /**
     * <p>An evaluation message.</p>
     */
    inline DataQualityRuleResult& WithEvaluationMessage(Aws::String&& value) { SetEvaluationMessage(std::move(value)); return *this;}

    /**
     * <p>An evaluation message.</p>
     */
    inline DataQualityRuleResult& WithEvaluationMessage(const char* value) { SetEvaluationMessage(value); return *this;}


    /**
     * <p>A pass or fail status for the rule.</p>
     */
    inline const DataQualityRuleResultStatus& GetResult() const{ return m_result; }

    /**
     * <p>A pass or fail status for the rule.</p>
     */
    inline bool ResultHasBeenSet() const { return m_resultHasBeenSet; }

    /**
     * <p>A pass or fail status for the rule.</p>
     */
    inline void SetResult(const DataQualityRuleResultStatus& value) { m_resultHasBeenSet = true; m_result = value; }

    /**
     * <p>A pass or fail status for the rule.</p>
     */
    inline void SetResult(DataQualityRuleResultStatus&& value) { m_resultHasBeenSet = true; m_result = std::move(value); }

    /**
     * <p>A pass or fail status for the rule.</p>
     */
    inline DataQualityRuleResult& WithResult(const DataQualityRuleResultStatus& value) { SetResult(value); return *this;}

    /**
     * <p>A pass or fail status for the rule.</p>
     */
    inline DataQualityRuleResult& WithResult(DataQualityRuleResultStatus&& value) { SetResult(std::move(value)); return *this;}

  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::String m_evaluationMessage;
    bool m_evaluationMessageHasBeenSet = false;

    DataQualityRuleResultStatus m_result;
    bool m_resultHasBeenSet = false;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
