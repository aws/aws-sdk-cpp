/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock/Bedrock_EXPORTS.h>
#include <aws/bedrock/model/CustomMetricDefinition.h>
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
namespace Bedrock
{
namespace Model
{

  /**
   * <p>An array item definining a single custom metric for use in an Amazon Bedrock
   * evaluation job.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-2023-04-20/AutomatedEvaluationCustomMetricSource">AWS
   * API Reference</a></p>
   */
  class AutomatedEvaluationCustomMetricSource
  {
  public:
    AWS_BEDROCK_API AutomatedEvaluationCustomMetricSource() = default;
    AWS_BEDROCK_API AutomatedEvaluationCustomMetricSource(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCK_API AutomatedEvaluationCustomMetricSource& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCK_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The definition of a custom metric for use in an Amazon Bedrock evaluation
     * job.</p>
     */
    inline const CustomMetricDefinition& GetCustomMetricDefinition() const { return m_customMetricDefinition; }
    inline bool CustomMetricDefinitionHasBeenSet() const { return m_customMetricDefinitionHasBeenSet; }
    template<typename CustomMetricDefinitionT = CustomMetricDefinition>
    void SetCustomMetricDefinition(CustomMetricDefinitionT&& value) { m_customMetricDefinitionHasBeenSet = true; m_customMetricDefinition = std::forward<CustomMetricDefinitionT>(value); }
    template<typename CustomMetricDefinitionT = CustomMetricDefinition>
    AutomatedEvaluationCustomMetricSource& WithCustomMetricDefinition(CustomMetricDefinitionT&& value) { SetCustomMetricDefinition(std::forward<CustomMetricDefinitionT>(value)); return *this;}
    ///@}
  private:

    CustomMetricDefinition m_customMetricDefinition;
    bool m_customMetricDefinitionHasBeenSet = false;
  };

} // namespace Model
} // namespace Bedrock
} // namespace Aws
