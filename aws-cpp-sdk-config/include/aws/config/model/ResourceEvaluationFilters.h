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
    AWS_CONFIGSERVICE_API ResourceEvaluationFilters();
    AWS_CONFIGSERVICE_API ResourceEvaluationFilters(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONFIGSERVICE_API ResourceEvaluationFilters& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONFIGSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Filters all resource evaluations results based on an evaluation mode. the
     * valid value for this API is <code>Proactive</code>.</p>
     */
    inline const EvaluationMode& GetEvaluationMode() const{ return m_evaluationMode; }

    /**
     * <p>Filters all resource evaluations results based on an evaluation mode. the
     * valid value for this API is <code>Proactive</code>.</p>
     */
    inline bool EvaluationModeHasBeenSet() const { return m_evaluationModeHasBeenSet; }

    /**
     * <p>Filters all resource evaluations results based on an evaluation mode. the
     * valid value for this API is <code>Proactive</code>.</p>
     */
    inline void SetEvaluationMode(const EvaluationMode& value) { m_evaluationModeHasBeenSet = true; m_evaluationMode = value; }

    /**
     * <p>Filters all resource evaluations results based on an evaluation mode. the
     * valid value for this API is <code>Proactive</code>.</p>
     */
    inline void SetEvaluationMode(EvaluationMode&& value) { m_evaluationModeHasBeenSet = true; m_evaluationMode = std::move(value); }

    /**
     * <p>Filters all resource evaluations results based on an evaluation mode. the
     * valid value for this API is <code>Proactive</code>.</p>
     */
    inline ResourceEvaluationFilters& WithEvaluationMode(const EvaluationMode& value) { SetEvaluationMode(value); return *this;}

    /**
     * <p>Filters all resource evaluations results based on an evaluation mode. the
     * valid value for this API is <code>Proactive</code>.</p>
     */
    inline ResourceEvaluationFilters& WithEvaluationMode(EvaluationMode&& value) { SetEvaluationMode(std::move(value)); return *this;}


    /**
     * <p>Returns a <code>TimeWindow</code> object.</p>
     */
    inline const TimeWindow& GetTimeWindow() const{ return m_timeWindow; }

    /**
     * <p>Returns a <code>TimeWindow</code> object.</p>
     */
    inline bool TimeWindowHasBeenSet() const { return m_timeWindowHasBeenSet; }

    /**
     * <p>Returns a <code>TimeWindow</code> object.</p>
     */
    inline void SetTimeWindow(const TimeWindow& value) { m_timeWindowHasBeenSet = true; m_timeWindow = value; }

    /**
     * <p>Returns a <code>TimeWindow</code> object.</p>
     */
    inline void SetTimeWindow(TimeWindow&& value) { m_timeWindowHasBeenSet = true; m_timeWindow = std::move(value); }

    /**
     * <p>Returns a <code>TimeWindow</code> object.</p>
     */
    inline ResourceEvaluationFilters& WithTimeWindow(const TimeWindow& value) { SetTimeWindow(value); return *this;}

    /**
     * <p>Returns a <code>TimeWindow</code> object.</p>
     */
    inline ResourceEvaluationFilters& WithTimeWindow(TimeWindow&& value) { SetTimeWindow(std::move(value)); return *this;}


    /**
     * <p>Filters evaluations for a given infrastructure deployment. For example: CFN
     * Stack.</p>
     */
    inline const Aws::String& GetEvaluationContextIdentifier() const{ return m_evaluationContextIdentifier; }

    /**
     * <p>Filters evaluations for a given infrastructure deployment. For example: CFN
     * Stack.</p>
     */
    inline bool EvaluationContextIdentifierHasBeenSet() const { return m_evaluationContextIdentifierHasBeenSet; }

    /**
     * <p>Filters evaluations for a given infrastructure deployment. For example: CFN
     * Stack.</p>
     */
    inline void SetEvaluationContextIdentifier(const Aws::String& value) { m_evaluationContextIdentifierHasBeenSet = true; m_evaluationContextIdentifier = value; }

    /**
     * <p>Filters evaluations for a given infrastructure deployment. For example: CFN
     * Stack.</p>
     */
    inline void SetEvaluationContextIdentifier(Aws::String&& value) { m_evaluationContextIdentifierHasBeenSet = true; m_evaluationContextIdentifier = std::move(value); }

    /**
     * <p>Filters evaluations for a given infrastructure deployment. For example: CFN
     * Stack.</p>
     */
    inline void SetEvaluationContextIdentifier(const char* value) { m_evaluationContextIdentifierHasBeenSet = true; m_evaluationContextIdentifier.assign(value); }

    /**
     * <p>Filters evaluations for a given infrastructure deployment. For example: CFN
     * Stack.</p>
     */
    inline ResourceEvaluationFilters& WithEvaluationContextIdentifier(const Aws::String& value) { SetEvaluationContextIdentifier(value); return *this;}

    /**
     * <p>Filters evaluations for a given infrastructure deployment. For example: CFN
     * Stack.</p>
     */
    inline ResourceEvaluationFilters& WithEvaluationContextIdentifier(Aws::String&& value) { SetEvaluationContextIdentifier(std::move(value)); return *this;}

    /**
     * <p>Filters evaluations for a given infrastructure deployment. For example: CFN
     * Stack.</p>
     */
    inline ResourceEvaluationFilters& WithEvaluationContextIdentifier(const char* value) { SetEvaluationContextIdentifier(value); return *this;}

  private:

    EvaluationMode m_evaluationMode;
    bool m_evaluationModeHasBeenSet = false;

    TimeWindow m_timeWindow;
    bool m_timeWindowHasBeenSet = false;

    Aws::String m_evaluationContextIdentifier;
    bool m_evaluationContextIdentifierHasBeenSet = false;
  };

} // namespace Model
} // namespace ConfigService
} // namespace Aws
