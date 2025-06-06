﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/kafkaconnect/KafkaConnect_EXPORTS.h>
#include <aws/kafkaconnect/model/WorkerLogDelivery.h>
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
namespace KafkaConnect
{
namespace Model
{

  /**
   * <p>Details about log delivery.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/kafkaconnect-2021-09-14/LogDelivery">AWS
   * API Reference</a></p>
   */
  class LogDelivery
  {
  public:
    AWS_KAFKACONNECT_API LogDelivery() = default;
    AWS_KAFKACONNECT_API LogDelivery(Aws::Utils::Json::JsonView jsonValue);
    AWS_KAFKACONNECT_API LogDelivery& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_KAFKACONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The workers can send worker logs to different destination types. This
     * configuration specifies the details of these destinations.</p>
     */
    inline const WorkerLogDelivery& GetWorkerLogDelivery() const { return m_workerLogDelivery; }
    inline bool WorkerLogDeliveryHasBeenSet() const { return m_workerLogDeliveryHasBeenSet; }
    template<typename WorkerLogDeliveryT = WorkerLogDelivery>
    void SetWorkerLogDelivery(WorkerLogDeliveryT&& value) { m_workerLogDeliveryHasBeenSet = true; m_workerLogDelivery = std::forward<WorkerLogDeliveryT>(value); }
    template<typename WorkerLogDeliveryT = WorkerLogDelivery>
    LogDelivery& WithWorkerLogDelivery(WorkerLogDeliveryT&& value) { SetWorkerLogDelivery(std::forward<WorkerLogDeliveryT>(value)); return *this;}
    ///@}
  private:

    WorkerLogDelivery m_workerLogDelivery;
    bool m_workerLogDeliveryHasBeenSet = false;
  };

} // namespace Model
} // namespace KafkaConnect
} // namespace Aws
