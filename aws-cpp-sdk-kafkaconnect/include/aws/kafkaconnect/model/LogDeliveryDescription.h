/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/kafkaconnect/KafkaConnect_EXPORTS.h>
#include <aws/kafkaconnect/model/WorkerLogDeliveryDescription.h>
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
   * <p>The description of the log delivery settings.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/kafkaconnect-2021-09-14/LogDeliveryDescription">AWS
   * API Reference</a></p>
   */
  class LogDeliveryDescription
  {
  public:
    AWS_KAFKACONNECT_API LogDeliveryDescription();
    AWS_KAFKACONNECT_API LogDeliveryDescription(Aws::Utils::Json::JsonView jsonValue);
    AWS_KAFKACONNECT_API LogDeliveryDescription& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_KAFKACONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The workers can send worker logs to different destination types. This
     * configuration specifies the details of these destinations.</p>
     */
    inline const WorkerLogDeliveryDescription& GetWorkerLogDelivery() const{ return m_workerLogDelivery; }

    /**
     * <p>The workers can send worker logs to different destination types. This
     * configuration specifies the details of these destinations.</p>
     */
    inline bool WorkerLogDeliveryHasBeenSet() const { return m_workerLogDeliveryHasBeenSet; }

    /**
     * <p>The workers can send worker logs to different destination types. This
     * configuration specifies the details of these destinations.</p>
     */
    inline void SetWorkerLogDelivery(const WorkerLogDeliveryDescription& value) { m_workerLogDeliveryHasBeenSet = true; m_workerLogDelivery = value; }

    /**
     * <p>The workers can send worker logs to different destination types. This
     * configuration specifies the details of these destinations.</p>
     */
    inline void SetWorkerLogDelivery(WorkerLogDeliveryDescription&& value) { m_workerLogDeliveryHasBeenSet = true; m_workerLogDelivery = std::move(value); }

    /**
     * <p>The workers can send worker logs to different destination types. This
     * configuration specifies the details of these destinations.</p>
     */
    inline LogDeliveryDescription& WithWorkerLogDelivery(const WorkerLogDeliveryDescription& value) { SetWorkerLogDelivery(value); return *this;}

    /**
     * <p>The workers can send worker logs to different destination types. This
     * configuration specifies the details of these destinations.</p>
     */
    inline LogDeliveryDescription& WithWorkerLogDelivery(WorkerLogDeliveryDescription&& value) { SetWorkerLogDelivery(std::move(value)); return *this;}

  private:

    WorkerLogDeliveryDescription m_workerLogDelivery;
    bool m_workerLogDeliveryHasBeenSet = false;
  };

} // namespace Model
} // namespace KafkaConnect
} // namespace Aws
