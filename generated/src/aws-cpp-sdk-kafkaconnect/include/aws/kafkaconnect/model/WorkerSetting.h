﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/kafkaconnect/KafkaConnect_EXPORTS.h>
#include <aws/kafkaconnect/model/CapacityDescription.h>
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
   * <p>Details about worker setting of a connector</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/kafkaconnect-2021-09-14/WorkerSetting">AWS
   * API Reference</a></p>
   */
  class WorkerSetting
  {
  public:
    AWS_KAFKACONNECT_API WorkerSetting();
    AWS_KAFKACONNECT_API WorkerSetting(Aws::Utils::Json::JsonView jsonValue);
    AWS_KAFKACONNECT_API WorkerSetting& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_KAFKACONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    
    inline const CapacityDescription& GetCapacity() const{ return m_capacity; }
    inline bool CapacityHasBeenSet() const { return m_capacityHasBeenSet; }
    inline void SetCapacity(const CapacityDescription& value) { m_capacityHasBeenSet = true; m_capacity = value; }
    inline void SetCapacity(CapacityDescription&& value) { m_capacityHasBeenSet = true; m_capacity = std::move(value); }
    inline WorkerSetting& WithCapacity(const CapacityDescription& value) { SetCapacity(value); return *this;}
    inline WorkerSetting& WithCapacity(CapacityDescription&& value) { SetCapacity(std::move(value)); return *this;}
    ///@}
  private:

    CapacityDescription m_capacity;
    bool m_capacityHasBeenSet = false;
  };

} // namespace Model
} // namespace KafkaConnect
} // namespace Aws
