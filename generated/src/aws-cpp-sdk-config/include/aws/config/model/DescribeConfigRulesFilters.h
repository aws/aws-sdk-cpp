﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/config/ConfigService_EXPORTS.h>
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
   * <p>Returns a filtered list of Detective or Proactive Config rules. By default,
   * if the filter is not defined, this API returns an unfiltered list. For more
   * information on Detective or Proactive Config rules, see <a
   * href="https://docs.aws.amazon.com/config/latest/developerguide/evaluate-config-rules.html">
   * <b>Evaluation Mode</b> </a> in the <i>Config Developer Guide</i>.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/config-2014-11-12/DescribeConfigRulesFilters">AWS
   * API Reference</a></p>
   */
  class DescribeConfigRulesFilters
  {
  public:
    AWS_CONFIGSERVICE_API DescribeConfigRulesFilters() = default;
    AWS_CONFIGSERVICE_API DescribeConfigRulesFilters(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONFIGSERVICE_API DescribeConfigRulesFilters& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONFIGSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The mode of an evaluation. The valid values are Detective or Proactive.</p>
     */
    inline EvaluationMode GetEvaluationMode() const { return m_evaluationMode; }
    inline bool EvaluationModeHasBeenSet() const { return m_evaluationModeHasBeenSet; }
    inline void SetEvaluationMode(EvaluationMode value) { m_evaluationModeHasBeenSet = true; m_evaluationMode = value; }
    inline DescribeConfigRulesFilters& WithEvaluationMode(EvaluationMode value) { SetEvaluationMode(value); return *this;}
    ///@}
  private:

    EvaluationMode m_evaluationMode{EvaluationMode::NOT_SET};
    bool m_evaluationModeHasBeenSet = false;
  };

} // namespace Model
} // namespace ConfigService
} // namespace Aws
