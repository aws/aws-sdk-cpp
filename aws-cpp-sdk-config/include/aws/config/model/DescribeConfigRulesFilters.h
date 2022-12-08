/**
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
   * if the filter is not defined, this API returns an unfiltered list.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/config-2014-11-12/DescribeConfigRulesFilters">AWS
   * API Reference</a></p>
   */
  class DescribeConfigRulesFilters
  {
  public:
    AWS_CONFIGSERVICE_API DescribeConfigRulesFilters();
    AWS_CONFIGSERVICE_API DescribeConfigRulesFilters(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONFIGSERVICE_API DescribeConfigRulesFilters& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONFIGSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


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
    inline DescribeConfigRulesFilters& WithEvaluationMode(const EvaluationMode& value) { SetEvaluationMode(value); return *this;}

    /**
     * <p>The mode of an evaluation. The valid values are Detective or Proactive.</p>
     */
    inline DescribeConfigRulesFilters& WithEvaluationMode(EvaluationMode&& value) { SetEvaluationMode(std::move(value)); return *this;}

  private:

    EvaluationMode m_evaluationMode;
    bool m_evaluationModeHasBeenSet = false;
  };

} // namespace Model
} // namespace ConfigService
} // namespace Aws
