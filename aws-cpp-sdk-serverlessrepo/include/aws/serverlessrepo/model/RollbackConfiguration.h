/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/serverlessrepo/ServerlessApplicationRepository_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/serverlessrepo/model/RollbackTrigger.h>
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
namespace ServerlessApplicationRepository
{
namespace Model
{

  /**
   * <p>This property corresponds to the <i>AWS CloudFormation <a
   * href="https://docs.aws.amazon.com/goto/WebAPI/cloudformation-2010-05-15/RollbackConfiguration">RollbackConfiguration</a>

   * </i> Data Type.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/serverlessrepo-2017-09-08/RollbackConfiguration">AWS
   * API Reference</a></p>
   */
  class RollbackConfiguration
  {
  public:
    AWS_SERVERLESSAPPLICATIONREPOSITORY_API RollbackConfiguration();
    AWS_SERVERLESSAPPLICATIONREPOSITORY_API RollbackConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_SERVERLESSAPPLICATIONREPOSITORY_API RollbackConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SERVERLESSAPPLICATIONREPOSITORY_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>This property corresponds to the content of the same name for the <i>AWS
     * CloudFormation <a
     * href="https://docs.aws.amazon.com/goto/WebAPI/cloudformation-2010-05-15/RollbackConfiguration">RollbackConfiguration</a>

     * </i> Data Type.</p>
     */
    inline int GetMonitoringTimeInMinutes() const{ return m_monitoringTimeInMinutes; }

    /**
     * <p>This property corresponds to the content of the same name for the <i>AWS
     * CloudFormation <a
     * href="https://docs.aws.amazon.com/goto/WebAPI/cloudformation-2010-05-15/RollbackConfiguration">RollbackConfiguration</a>

     * </i> Data Type.</p>
     */
    inline bool MonitoringTimeInMinutesHasBeenSet() const { return m_monitoringTimeInMinutesHasBeenSet; }

    /**
     * <p>This property corresponds to the content of the same name for the <i>AWS
     * CloudFormation <a
     * href="https://docs.aws.amazon.com/goto/WebAPI/cloudformation-2010-05-15/RollbackConfiguration">RollbackConfiguration</a>

     * </i> Data Type.</p>
     */
    inline void SetMonitoringTimeInMinutes(int value) { m_monitoringTimeInMinutesHasBeenSet = true; m_monitoringTimeInMinutes = value; }

    /**
     * <p>This property corresponds to the content of the same name for the <i>AWS
     * CloudFormation <a
     * href="https://docs.aws.amazon.com/goto/WebAPI/cloudformation-2010-05-15/RollbackConfiguration">RollbackConfiguration</a>

     * </i> Data Type.</p>
     */
    inline RollbackConfiguration& WithMonitoringTimeInMinutes(int value) { SetMonitoringTimeInMinutes(value); return *this;}


    /**
     * <p>This property corresponds to the content of the same name for the <i>AWS
     * CloudFormation <a
     * href="https://docs.aws.amazon.com/goto/WebAPI/cloudformation-2010-05-15/RollbackConfiguration">RollbackConfiguration</a>

     * </i> Data Type.</p>
     */
    inline const Aws::Vector<RollbackTrigger>& GetRollbackTriggers() const{ return m_rollbackTriggers; }

    /**
     * <p>This property corresponds to the content of the same name for the <i>AWS
     * CloudFormation <a
     * href="https://docs.aws.amazon.com/goto/WebAPI/cloudformation-2010-05-15/RollbackConfiguration">RollbackConfiguration</a>

     * </i> Data Type.</p>
     */
    inline bool RollbackTriggersHasBeenSet() const { return m_rollbackTriggersHasBeenSet; }

    /**
     * <p>This property corresponds to the content of the same name for the <i>AWS
     * CloudFormation <a
     * href="https://docs.aws.amazon.com/goto/WebAPI/cloudformation-2010-05-15/RollbackConfiguration">RollbackConfiguration</a>

     * </i> Data Type.</p>
     */
    inline void SetRollbackTriggers(const Aws::Vector<RollbackTrigger>& value) { m_rollbackTriggersHasBeenSet = true; m_rollbackTriggers = value; }

    /**
     * <p>This property corresponds to the content of the same name for the <i>AWS
     * CloudFormation <a
     * href="https://docs.aws.amazon.com/goto/WebAPI/cloudformation-2010-05-15/RollbackConfiguration">RollbackConfiguration</a>

     * </i> Data Type.</p>
     */
    inline void SetRollbackTriggers(Aws::Vector<RollbackTrigger>&& value) { m_rollbackTriggersHasBeenSet = true; m_rollbackTriggers = std::move(value); }

    /**
     * <p>This property corresponds to the content of the same name for the <i>AWS
     * CloudFormation <a
     * href="https://docs.aws.amazon.com/goto/WebAPI/cloudformation-2010-05-15/RollbackConfiguration">RollbackConfiguration</a>

     * </i> Data Type.</p>
     */
    inline RollbackConfiguration& WithRollbackTriggers(const Aws::Vector<RollbackTrigger>& value) { SetRollbackTriggers(value); return *this;}

    /**
     * <p>This property corresponds to the content of the same name for the <i>AWS
     * CloudFormation <a
     * href="https://docs.aws.amazon.com/goto/WebAPI/cloudformation-2010-05-15/RollbackConfiguration">RollbackConfiguration</a>

     * </i> Data Type.</p>
     */
    inline RollbackConfiguration& WithRollbackTriggers(Aws::Vector<RollbackTrigger>&& value) { SetRollbackTriggers(std::move(value)); return *this;}

    /**
     * <p>This property corresponds to the content of the same name for the <i>AWS
     * CloudFormation <a
     * href="https://docs.aws.amazon.com/goto/WebAPI/cloudformation-2010-05-15/RollbackConfiguration">RollbackConfiguration</a>

     * </i> Data Type.</p>
     */
    inline RollbackConfiguration& AddRollbackTriggers(const RollbackTrigger& value) { m_rollbackTriggersHasBeenSet = true; m_rollbackTriggers.push_back(value); return *this; }

    /**
     * <p>This property corresponds to the content of the same name for the <i>AWS
     * CloudFormation <a
     * href="https://docs.aws.amazon.com/goto/WebAPI/cloudformation-2010-05-15/RollbackConfiguration">RollbackConfiguration</a>

     * </i> Data Type.</p>
     */
    inline RollbackConfiguration& AddRollbackTriggers(RollbackTrigger&& value) { m_rollbackTriggersHasBeenSet = true; m_rollbackTriggers.push_back(std::move(value)); return *this; }

  private:

    int m_monitoringTimeInMinutes;
    bool m_monitoringTimeInMinutesHasBeenSet = false;

    Aws::Vector<RollbackTrigger> m_rollbackTriggers;
    bool m_rollbackTriggersHasBeenSet = false;
  };

} // namespace Model
} // namespace ServerlessApplicationRepository
} // namespace Aws
