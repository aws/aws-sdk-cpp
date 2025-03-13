/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/config/ConfigService_EXPORTS.h>
#include <aws/config/model/EvaluationMode.h>
#include <aws/config/model/TimeWindow.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
   * <p>Returns details of a resource evaluation based on the selected
   * filter.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/config-2014-11-12/ResourceEvaluationFilters">AWS
   * API Reference</a></p>
   */
  class ResourceEvaluationFilters
  {
  public:
    AWS_CONFIGSERVICE_API ResourceEvaluationFilters() = default;
    AWS_CONFIGSERVICE_API ResourceEvaluationFilters(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONFIGSERVICE_API ResourceEvaluationFilters& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONFIGSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Filters all resource evaluations results based on an evaluation mode.</p>
     *  <p>Currently, <code>DECTECTIVE</code> is not supported as a valid
     * value. Ignore other documentation stating otherwise.</p> 
     */
    inline EvaluationMode GetEvaluationMode() const { return m_evaluationMode; }
    inline bool EvaluationModeHasBeenSet() const { return m_evaluationModeHasBeenSet; }
    inline void SetEvaluationMode(EvaluationMode value) { m_evaluationModeHasBeenSet = true; m_evaluationMode = value; }
    inline ResourceEvaluationFilters& WithEvaluationMode(EvaluationMode value) { SetEvaluationMode(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Returns a <code>TimeWindow</code> object.</p>
     */
    inline const TimeWindow& GetTimeWindow() const { return m_timeWindow; }
    inline bool TimeWindowHasBeenSet() const { return m_timeWindowHasBeenSet; }
    template<typename TimeWindowT = TimeWindow>
    void SetTimeWindow(TimeWindowT&& value) { m_timeWindowHasBeenSet = true; m_timeWindow = std::forward<TimeWindowT>(value); }
    template<typename TimeWindowT = TimeWindow>
    ResourceEvaluationFilters& WithTimeWindow(TimeWindowT&& value) { SetTimeWindow(std::forward<TimeWindowT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Filters evaluations for a given infrastructure deployment. For example: CFN
     * Stack.</p>
     */
    inline const Aws::String& GetEvaluationContextIdentifier() const { return m_evaluationContextIdentifier; }
    inline bool EvaluationContextIdentifierHasBeenSet() const { return m_evaluationContextIdentifierHasBeenSet; }
    template<typename EvaluationContextIdentifierT = Aws::String>
    void SetEvaluationContextIdentifier(EvaluationContextIdentifierT&& value) { m_evaluationContextIdentifierHasBeenSet = true; m_evaluationContextIdentifier = std::forward<EvaluationContextIdentifierT>(value); }
    template<typename EvaluationContextIdentifierT = Aws::String>
    ResourceEvaluationFilters& WithEvaluationContextIdentifier(EvaluationContextIdentifierT&& value) { SetEvaluationContextIdentifier(std::forward<EvaluationContextIdentifierT>(value)); return *this;}
    ///@}
  private:

    EvaluationMode m_evaluationMode{EvaluationMode::NOT_SET};
    bool m_evaluationModeHasBeenSet = false;

    TimeWindow m_timeWindow;
    bool m_timeWindowHasBeenSet = false;

    Aws::String m_evaluationContextIdentifier;
    bool m_evaluationContextIdentifierHasBeenSet = false;
  };

} // namespace Model
} // namespace ConfigService
} // namespace Aws
