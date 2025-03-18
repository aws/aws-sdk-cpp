/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotfleetwise/IoTFleetWise_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace IoTFleetWise
{
namespace Model
{

  /**
   * <p>The registered Amazon Timestream resources that Amazon Web Services IoT
   * FleetWise edge agent software can transfer your vehicle data to.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iotfleetwise-2021-06-17/TimestreamResources">AWS
   * API Reference</a></p>
   */
  class TimestreamResources
  {
  public:
    AWS_IOTFLEETWISE_API TimestreamResources() = default;
    AWS_IOTFLEETWISE_API TimestreamResources(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTFLEETWISE_API TimestreamResources& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTFLEETWISE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the registered Amazon Timestream database.</p>
     */
    inline const Aws::String& GetTimestreamDatabaseName() const { return m_timestreamDatabaseName; }
    inline bool TimestreamDatabaseNameHasBeenSet() const { return m_timestreamDatabaseNameHasBeenSet; }
    template<typename TimestreamDatabaseNameT = Aws::String>
    void SetTimestreamDatabaseName(TimestreamDatabaseNameT&& value) { m_timestreamDatabaseNameHasBeenSet = true; m_timestreamDatabaseName = std::forward<TimestreamDatabaseNameT>(value); }
    template<typename TimestreamDatabaseNameT = Aws::String>
    TimestreamResources& WithTimestreamDatabaseName(TimestreamDatabaseNameT&& value) { SetTimestreamDatabaseName(std::forward<TimestreamDatabaseNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the registered Amazon Timestream database table.</p>
     */
    inline const Aws::String& GetTimestreamTableName() const { return m_timestreamTableName; }
    inline bool TimestreamTableNameHasBeenSet() const { return m_timestreamTableNameHasBeenSet; }
    template<typename TimestreamTableNameT = Aws::String>
    void SetTimestreamTableName(TimestreamTableNameT&& value) { m_timestreamTableNameHasBeenSet = true; m_timestreamTableName = std::forward<TimestreamTableNameT>(value); }
    template<typename TimestreamTableNameT = Aws::String>
    TimestreamResources& WithTimestreamTableName(TimestreamTableNameT&& value) { SetTimestreamTableName(std::forward<TimestreamTableNameT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_timestreamDatabaseName;
    bool m_timestreamDatabaseNameHasBeenSet = false;

    Aws::String m_timestreamTableName;
    bool m_timestreamTableNameHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTFleetWise
} // namespace Aws
