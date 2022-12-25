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
    AWS_IOTFLEETWISE_API TimestreamResources();
    AWS_IOTFLEETWISE_API TimestreamResources(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTFLEETWISE_API TimestreamResources& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTFLEETWISE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name of the registered Amazon Timestream database.</p>
     */
    inline const Aws::String& GetTimestreamDatabaseName() const{ return m_timestreamDatabaseName; }

    /**
     * <p>The name of the registered Amazon Timestream database.</p>
     */
    inline bool TimestreamDatabaseNameHasBeenSet() const { return m_timestreamDatabaseNameHasBeenSet; }

    /**
     * <p>The name of the registered Amazon Timestream database.</p>
     */
    inline void SetTimestreamDatabaseName(const Aws::String& value) { m_timestreamDatabaseNameHasBeenSet = true; m_timestreamDatabaseName = value; }

    /**
     * <p>The name of the registered Amazon Timestream database.</p>
     */
    inline void SetTimestreamDatabaseName(Aws::String&& value) { m_timestreamDatabaseNameHasBeenSet = true; m_timestreamDatabaseName = std::move(value); }

    /**
     * <p>The name of the registered Amazon Timestream database.</p>
     */
    inline void SetTimestreamDatabaseName(const char* value) { m_timestreamDatabaseNameHasBeenSet = true; m_timestreamDatabaseName.assign(value); }

    /**
     * <p>The name of the registered Amazon Timestream database.</p>
     */
    inline TimestreamResources& WithTimestreamDatabaseName(const Aws::String& value) { SetTimestreamDatabaseName(value); return *this;}

    /**
     * <p>The name of the registered Amazon Timestream database.</p>
     */
    inline TimestreamResources& WithTimestreamDatabaseName(Aws::String&& value) { SetTimestreamDatabaseName(std::move(value)); return *this;}

    /**
     * <p>The name of the registered Amazon Timestream database.</p>
     */
    inline TimestreamResources& WithTimestreamDatabaseName(const char* value) { SetTimestreamDatabaseName(value); return *this;}


    /**
     * <p>The name of the registered Amazon Timestream database table.</p>
     */
    inline const Aws::String& GetTimestreamTableName() const{ return m_timestreamTableName; }

    /**
     * <p>The name of the registered Amazon Timestream database table.</p>
     */
    inline bool TimestreamTableNameHasBeenSet() const { return m_timestreamTableNameHasBeenSet; }

    /**
     * <p>The name of the registered Amazon Timestream database table.</p>
     */
    inline void SetTimestreamTableName(const Aws::String& value) { m_timestreamTableNameHasBeenSet = true; m_timestreamTableName = value; }

    /**
     * <p>The name of the registered Amazon Timestream database table.</p>
     */
    inline void SetTimestreamTableName(Aws::String&& value) { m_timestreamTableNameHasBeenSet = true; m_timestreamTableName = std::move(value); }

    /**
     * <p>The name of the registered Amazon Timestream database table.</p>
     */
    inline void SetTimestreamTableName(const char* value) { m_timestreamTableNameHasBeenSet = true; m_timestreamTableName.assign(value); }

    /**
     * <p>The name of the registered Amazon Timestream database table.</p>
     */
    inline TimestreamResources& WithTimestreamTableName(const Aws::String& value) { SetTimestreamTableName(value); return *this;}

    /**
     * <p>The name of the registered Amazon Timestream database table.</p>
     */
    inline TimestreamResources& WithTimestreamTableName(Aws::String&& value) { SetTimestreamTableName(std::move(value)); return *this;}

    /**
     * <p>The name of the registered Amazon Timestream database table.</p>
     */
    inline TimestreamResources& WithTimestreamTableName(const char* value) { SetTimestreamTableName(value); return *this;}

  private:

    Aws::String m_timestreamDatabaseName;
    bool m_timestreamDatabaseNameHasBeenSet = false;

    Aws::String m_timestreamTableName;
    bool m_timestreamTableNameHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTFleetWise
} // namespace Aws
