﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/kafkaconnect/KafkaConnect_EXPORTS.h>

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
namespace KafkaConnect
{
namespace Model
{

  /**
   * <p>An update to a connector's fixed capacity.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/kafkaconnect-2021-09-14/ProvisionedCapacityUpdate">AWS
   * API Reference</a></p>
   */
  class AWS_KAFKACONNECT_API ProvisionedCapacityUpdate
  {
  public:
    ProvisionedCapacityUpdate();
    ProvisionedCapacityUpdate(Aws::Utils::Json::JsonView jsonValue);
    ProvisionedCapacityUpdate& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The number of microcontroller units (MCUs) allocated to each connector
     * worker. The valid values are 1,2,4,8.</p>
     */
    inline int GetMcuCount() const{ return m_mcuCount; }

    /**
     * <p>The number of microcontroller units (MCUs) allocated to each connector
     * worker. The valid values are 1,2,4,8.</p>
     */
    inline bool McuCountHasBeenSet() const { return m_mcuCountHasBeenSet; }

    /**
     * <p>The number of microcontroller units (MCUs) allocated to each connector
     * worker. The valid values are 1,2,4,8.</p>
     */
    inline void SetMcuCount(int value) { m_mcuCountHasBeenSet = true; m_mcuCount = value; }

    /**
     * <p>The number of microcontroller units (MCUs) allocated to each connector
     * worker. The valid values are 1,2,4,8.</p>
     */
    inline ProvisionedCapacityUpdate& WithMcuCount(int value) { SetMcuCount(value); return *this;}


    /**
     * <p>The number of workers that are allocated to the connector.</p>
     */
    inline int GetWorkerCount() const{ return m_workerCount; }

    /**
     * <p>The number of workers that are allocated to the connector.</p>
     */
    inline bool WorkerCountHasBeenSet() const { return m_workerCountHasBeenSet; }

    /**
     * <p>The number of workers that are allocated to the connector.</p>
     */
    inline void SetWorkerCount(int value) { m_workerCountHasBeenSet = true; m_workerCount = value; }

    /**
     * <p>The number of workers that are allocated to the connector.</p>
     */
    inline ProvisionedCapacityUpdate& WithWorkerCount(int value) { SetWorkerCount(value); return *this;}

  private:

    int m_mcuCount;
    bool m_mcuCountHasBeenSet;

    int m_workerCount;
    bool m_workerCountHasBeenSet;
  };

} // namespace Model
} // namespace KafkaConnect
} // namespace Aws
