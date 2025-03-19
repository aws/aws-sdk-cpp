/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/elasticmapreduce/EMR_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/elasticmapreduce/model/HadoopStepConfig.h>
#include <aws/elasticmapreduce/model/ActionOnFailure.h>
#include <aws/elasticmapreduce/model/StepStatus.h>
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
namespace EMR
{
namespace Model
{

  /**
   * <p>The summary of the cluster step.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/elasticmapreduce-2009-03-31/StepSummary">AWS
   * API Reference</a></p>
   */
  class StepSummary
  {
  public:
    AWS_EMR_API StepSummary() = default;
    AWS_EMR_API StepSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_EMR_API StepSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_EMR_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The identifier of the cluster step.</p>
     */
    inline const Aws::String& GetId() const { return m_id; }
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
    template<typename IdT = Aws::String>
    void SetId(IdT&& value) { m_idHasBeenSet = true; m_id = std::forward<IdT>(value); }
    template<typename IdT = Aws::String>
    StepSummary& WithId(IdT&& value) { SetId(std::forward<IdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the cluster step.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    StepSummary& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Hadoop job configuration of the cluster step.</p>
     */
    inline const HadoopStepConfig& GetConfig() const { return m_config; }
    inline bool ConfigHasBeenSet() const { return m_configHasBeenSet; }
    template<typename ConfigT = HadoopStepConfig>
    void SetConfig(ConfigT&& value) { m_configHasBeenSet = true; m_config = std::forward<ConfigT>(value); }
    template<typename ConfigT = HadoopStepConfig>
    StepSummary& WithConfig(ConfigT&& value) { SetConfig(std::forward<ConfigT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The action to take when the cluster step fails. Possible values are
     * TERMINATE_CLUSTER, CANCEL_AND_WAIT, and CONTINUE. TERMINATE_JOB_FLOW is
     * available for backward compatibility.</p>
     */
    inline ActionOnFailure GetActionOnFailure() const { return m_actionOnFailure; }
    inline bool ActionOnFailureHasBeenSet() const { return m_actionOnFailureHasBeenSet; }
    inline void SetActionOnFailure(ActionOnFailure value) { m_actionOnFailureHasBeenSet = true; m_actionOnFailure = value; }
    inline StepSummary& WithActionOnFailure(ActionOnFailure value) { SetActionOnFailure(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The current execution status details of the cluster step.</p>
     */
    inline const StepStatus& GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    template<typename StatusT = StepStatus>
    void SetStatus(StatusT&& value) { m_statusHasBeenSet = true; m_status = std::forward<StatusT>(value); }
    template<typename StatusT = StepStatus>
    StepSummary& WithStatus(StatusT&& value) { SetStatus(std::forward<StatusT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    HadoopStepConfig m_config;
    bool m_configHasBeenSet = false;

    ActionOnFailure m_actionOnFailure{ActionOnFailure::NOT_SET};
    bool m_actionOnFailureHasBeenSet = false;

    StepStatus m_status;
    bool m_statusHasBeenSet = false;
  };

} // namespace Model
} // namespace EMR
} // namespace Aws
