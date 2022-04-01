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
  class AWS_KAFKACONNECT_API LogDelivery
  {
  public:
    LogDelivery();
    LogDelivery(Aws::Utils::Json::JsonView jsonValue);
    LogDelivery& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The workers can send worker logs to different destination types. This
     * configuration specifies the details of these destinations.</p>
     */
    inline const WorkerLogDelivery& GetWorkerLogDelivery() const{ return m_workerLogDelivery; }

    /**
     * <p>The workers can send worker logs to different destination types. This
     * configuration specifies the details of these destinations.</p>
     */
    inline bool WorkerLogDeliveryHasBeenSet() const { return m_workerLogDeliveryHasBeenSet; }

    /**
     * <p>The workers can send worker logs to different destination types. This
     * configuration specifies the details of these destinations.</p>
     */
    inline void SetWorkerLogDelivery(const WorkerLogDelivery& value) { m_workerLogDeliveryHasBeenSet = true; m_workerLogDelivery = value; }

    /**
     * <p>The workers can send worker logs to different destination types. This
     * configuration specifies the details of these destinations.</p>
     */
    inline void SetWorkerLogDelivery(WorkerLogDelivery&& value) { m_workerLogDeliveryHasBeenSet = true; m_workerLogDelivery = std::move(value); }

    /**
     * <p>The workers can send worker logs to different destination types. This
     * configuration specifies the details of these destinations.</p>
     */
    inline LogDelivery& WithWorkerLogDelivery(const WorkerLogDelivery& value) { SetWorkerLogDelivery(value); return *this;}

    /**
     * <p>The workers can send worker logs to different destination types. This
     * configuration specifies the details of these destinations.</p>
     */
    inline LogDelivery& WithWorkerLogDelivery(WorkerLogDelivery&& value) { SetWorkerLogDelivery(std::move(value)); return *this;}

  private:

    WorkerLogDelivery m_workerLogDelivery;
    bool m_workerLogDeliveryHasBeenSet;
  };

} // namespace Model
} // namespace KafkaConnect
} // namespace Aws
