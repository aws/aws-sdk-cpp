/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/
#pragma once
#include <aws/elasticmapreduce/EMR_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/elasticmapreduce/model/HadoopStepConfig.h>
#include <aws/elasticmapreduce/model/ActionOnFailure.h>
#include <aws/elasticmapreduce/model/StepStatus.h>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace EMR
{
namespace Model
{

  /**
   * <p>This represents a step in a cluster.</p>
   */
  class AWS_EMR_API Step
  {
  public:
    Step();
    Step(const Aws::Utils::Json::JsonValue& jsonValue);
    Step& operator=(const Aws::Utils::Json::JsonValue& jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;

    /**
     * <p>The identifier of the cluster step.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }

    /**
     * <p>The identifier of the cluster step.</p>
     */
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }

    /**
     * <p>The identifier of the cluster step.</p>
     */
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = value; }

    /**
     * <p>The identifier of the cluster step.</p>
     */
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }

    /**
     * <p>The identifier of the cluster step.</p>
     */
    inline Step& WithId(const Aws::String& value) { SetId(value); return *this;}

    /**
     * <p>The identifier of the cluster step.</p>
     */
    inline Step& WithId(Aws::String&& value) { SetId(value); return *this;}

    /**
     * <p>The identifier of the cluster step.</p>
     */
    inline Step& WithId(const char* value) { SetId(value); return *this;}

    /**
     * <p>The name of the cluster step.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the cluster step.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the cluster step.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the cluster step.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the cluster step.</p>
     */
    inline Step& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the cluster step.</p>
     */
    inline Step& WithName(Aws::String&& value) { SetName(value); return *this;}

    /**
     * <p>The name of the cluster step.</p>
     */
    inline Step& WithName(const char* value) { SetName(value); return *this;}

    /**
     * <p>The Hadoop job configuration of the cluster step.</p>
     */
    inline const HadoopStepConfig& GetConfig() const{ return m_config; }

    /**
     * <p>The Hadoop job configuration of the cluster step.</p>
     */
    inline void SetConfig(const HadoopStepConfig& value) { m_configHasBeenSet = true; m_config = value; }

    /**
     * <p>The Hadoop job configuration of the cluster step.</p>
     */
    inline void SetConfig(HadoopStepConfig&& value) { m_configHasBeenSet = true; m_config = value; }

    /**
     * <p>The Hadoop job configuration of the cluster step.</p>
     */
    inline Step& WithConfig(const HadoopStepConfig& value) { SetConfig(value); return *this;}

    /**
     * <p>The Hadoop job configuration of the cluster step.</p>
     */
    inline Step& WithConfig(HadoopStepConfig&& value) { SetConfig(value); return *this;}

    /**
     * <p>This specifies what action to take when the cluster step fails. Possible
     * values are TERMINATE_CLUSTER, CANCEL_AND_WAIT, and CONTINUE.</p>
     */
    inline const ActionOnFailure& GetActionOnFailure() const{ return m_actionOnFailure; }

    /**
     * <p>This specifies what action to take when the cluster step fails. Possible
     * values are TERMINATE_CLUSTER, CANCEL_AND_WAIT, and CONTINUE.</p>
     */
    inline void SetActionOnFailure(const ActionOnFailure& value) { m_actionOnFailureHasBeenSet = true; m_actionOnFailure = value; }

    /**
     * <p>This specifies what action to take when the cluster step fails. Possible
     * values are TERMINATE_CLUSTER, CANCEL_AND_WAIT, and CONTINUE.</p>
     */
    inline void SetActionOnFailure(ActionOnFailure&& value) { m_actionOnFailureHasBeenSet = true; m_actionOnFailure = value; }

    /**
     * <p>This specifies what action to take when the cluster step fails. Possible
     * values are TERMINATE_CLUSTER, CANCEL_AND_WAIT, and CONTINUE.</p>
     */
    inline Step& WithActionOnFailure(const ActionOnFailure& value) { SetActionOnFailure(value); return *this;}

    /**
     * <p>This specifies what action to take when the cluster step fails. Possible
     * values are TERMINATE_CLUSTER, CANCEL_AND_WAIT, and CONTINUE.</p>
     */
    inline Step& WithActionOnFailure(ActionOnFailure&& value) { SetActionOnFailure(value); return *this;}

    /**
     * <p>The current execution status details of the cluster step.</p>
     */
    inline const StepStatus& GetStatus() const{ return m_status; }

    /**
     * <p>The current execution status details of the cluster step.</p>
     */
    inline void SetStatus(const StepStatus& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>The current execution status details of the cluster step.</p>
     */
    inline void SetStatus(StepStatus&& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>The current execution status details of the cluster step.</p>
     */
    inline Step& WithStatus(const StepStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>The current execution status details of the cluster step.</p>
     */
    inline Step& WithStatus(StepStatus&& value) { SetStatus(value); return *this;}

  private:
    Aws::String m_id;
    bool m_idHasBeenSet;
    Aws::String m_name;
    bool m_nameHasBeenSet;
    HadoopStepConfig m_config;
    bool m_configHasBeenSet;
    ActionOnFailure m_actionOnFailure;
    bool m_actionOnFailureHasBeenSet;
    StepStatus m_status;
    bool m_statusHasBeenSet;
  };

} // namespace Model
} // namespace EMR
} // namespace Aws
