/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/config/ConfigService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/config/model/EvaluationMode.h>
#include <aws/core/utils/DateTime.h>
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
   * <p>Returns details of a resource evaluation.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/config-2014-11-12/ResourceEvaluation">AWS
   * API Reference</a></p>
   */
  class ResourceEvaluation
  {
  public:
    AWS_CONFIGSERVICE_API ResourceEvaluation();
    AWS_CONFIGSERVICE_API ResourceEvaluation(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONFIGSERVICE_API ResourceEvaluation& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONFIGSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The ResourceEvaluationId of a evaluation.</p>
     */
    inline const Aws::String& GetResourceEvaluationId() const{ return m_resourceEvaluationId; }

    /**
     * <p>The ResourceEvaluationId of a evaluation.</p>
     */
    inline bool ResourceEvaluationIdHasBeenSet() const { return m_resourceEvaluationIdHasBeenSet; }

    /**
     * <p>The ResourceEvaluationId of a evaluation.</p>
     */
    inline void SetResourceEvaluationId(const Aws::String& value) { m_resourceEvaluationIdHasBeenSet = true; m_resourceEvaluationId = value; }

    /**
     * <p>The ResourceEvaluationId of a evaluation.</p>
     */
    inline void SetResourceEvaluationId(Aws::String&& value) { m_resourceEvaluationIdHasBeenSet = true; m_resourceEvaluationId = std::move(value); }

    /**
     * <p>The ResourceEvaluationId of a evaluation.</p>
     */
    inline void SetResourceEvaluationId(const char* value) { m_resourceEvaluationIdHasBeenSet = true; m_resourceEvaluationId.assign(value); }

    /**
     * <p>The ResourceEvaluationId of a evaluation.</p>
     */
    inline ResourceEvaluation& WithResourceEvaluationId(const Aws::String& value) { SetResourceEvaluationId(value); return *this;}

    /**
     * <p>The ResourceEvaluationId of a evaluation.</p>
     */
    inline ResourceEvaluation& WithResourceEvaluationId(Aws::String&& value) { SetResourceEvaluationId(std::move(value)); return *this;}

    /**
     * <p>The ResourceEvaluationId of a evaluation.</p>
     */
    inline ResourceEvaluation& WithResourceEvaluationId(const char* value) { SetResourceEvaluationId(value); return *this;}


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
    inline ResourceEvaluation& WithEvaluationMode(const EvaluationMode& value) { SetEvaluationMode(value); return *this;}

    /**
     * <p>The mode of an evaluation. The valid values are Detective or Proactive.</p>
     */
    inline ResourceEvaluation& WithEvaluationMode(EvaluationMode&& value) { SetEvaluationMode(std::move(value)); return *this;}


    /**
     * <p>The starting time of an execution.</p>
     */
    inline const Aws::Utils::DateTime& GetEvaluationStartTimestamp() const{ return m_evaluationStartTimestamp; }

    /**
     * <p>The starting time of an execution.</p>
     */
    inline bool EvaluationStartTimestampHasBeenSet() const { return m_evaluationStartTimestampHasBeenSet; }

    /**
     * <p>The starting time of an execution.</p>
     */
    inline void SetEvaluationStartTimestamp(const Aws::Utils::DateTime& value) { m_evaluationStartTimestampHasBeenSet = true; m_evaluationStartTimestamp = value; }

    /**
     * <p>The starting time of an execution.</p>
     */
    inline void SetEvaluationStartTimestamp(Aws::Utils::DateTime&& value) { m_evaluationStartTimestampHasBeenSet = true; m_evaluationStartTimestamp = std::move(value); }

    /**
     * <p>The starting time of an execution.</p>
     */
    inline ResourceEvaluation& WithEvaluationStartTimestamp(const Aws::Utils::DateTime& value) { SetEvaluationStartTimestamp(value); return *this;}

    /**
     * <p>The starting time of an execution.</p>
     */
    inline ResourceEvaluation& WithEvaluationStartTimestamp(Aws::Utils::DateTime&& value) { SetEvaluationStartTimestamp(std::move(value)); return *this;}

  private:

    Aws::String m_resourceEvaluationId;
    bool m_resourceEvaluationIdHasBeenSet = false;

    EvaluationMode m_evaluationMode;
    bool m_evaluationModeHasBeenSet = false;

    Aws::Utils::DateTime m_evaluationStartTimestamp;
    bool m_evaluationStartTimestampHasBeenSet = false;
  };

} // namespace Model
} // namespace ConfigService
} // namespace Aws
