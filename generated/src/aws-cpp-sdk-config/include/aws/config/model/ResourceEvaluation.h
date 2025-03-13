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
    AWS_CONFIGSERVICE_API ResourceEvaluation() = default;
    AWS_CONFIGSERVICE_API ResourceEvaluation(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONFIGSERVICE_API ResourceEvaluation& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONFIGSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The ResourceEvaluationId of a evaluation.</p>
     */
    inline const Aws::String& GetResourceEvaluationId() const { return m_resourceEvaluationId; }
    inline bool ResourceEvaluationIdHasBeenSet() const { return m_resourceEvaluationIdHasBeenSet; }
    template<typename ResourceEvaluationIdT = Aws::String>
    void SetResourceEvaluationId(ResourceEvaluationIdT&& value) { m_resourceEvaluationIdHasBeenSet = true; m_resourceEvaluationId = std::forward<ResourceEvaluationIdT>(value); }
    template<typename ResourceEvaluationIdT = Aws::String>
    ResourceEvaluation& WithResourceEvaluationId(ResourceEvaluationIdT&& value) { SetResourceEvaluationId(std::forward<ResourceEvaluationIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The mode of an evaluation. The valid values are Detective or Proactive.</p>
     */
    inline EvaluationMode GetEvaluationMode() const { return m_evaluationMode; }
    inline bool EvaluationModeHasBeenSet() const { return m_evaluationModeHasBeenSet; }
    inline void SetEvaluationMode(EvaluationMode value) { m_evaluationModeHasBeenSet = true; m_evaluationMode = value; }
    inline ResourceEvaluation& WithEvaluationMode(EvaluationMode value) { SetEvaluationMode(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The starting time of an execution.</p>
     */
    inline const Aws::Utils::DateTime& GetEvaluationStartTimestamp() const { return m_evaluationStartTimestamp; }
    inline bool EvaluationStartTimestampHasBeenSet() const { return m_evaluationStartTimestampHasBeenSet; }
    template<typename EvaluationStartTimestampT = Aws::Utils::DateTime>
    void SetEvaluationStartTimestamp(EvaluationStartTimestampT&& value) { m_evaluationStartTimestampHasBeenSet = true; m_evaluationStartTimestamp = std::forward<EvaluationStartTimestampT>(value); }
    template<typename EvaluationStartTimestampT = Aws::Utils::DateTime>
    ResourceEvaluation& WithEvaluationStartTimestamp(EvaluationStartTimestampT&& value) { SetEvaluationStartTimestamp(std::forward<EvaluationStartTimestampT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_resourceEvaluationId;
    bool m_resourceEvaluationIdHasBeenSet = false;

    EvaluationMode m_evaluationMode{EvaluationMode::NOT_SET};
    bool m_evaluationModeHasBeenSet = false;

    Aws::Utils::DateTime m_evaluationStartTimestamp{};
    bool m_evaluationStartTimestampHasBeenSet = false;
  };

} // namespace Model
} // namespace ConfigService
} // namespace Aws
