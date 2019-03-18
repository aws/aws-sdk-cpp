/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/fsx/FSx_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/fsx/model/DataRepositoryConfiguration.h>
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
namespace FSx
{
namespace Model
{

  /**
   * <p>The configuration for the Amazon FSx for Lustre file system.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/fsx-2018-03-01/LustreFileSystemConfiguration">AWS
   * API Reference</a></p>
   */
  class AWS_FSX_API LustreFileSystemConfiguration
  {
  public:
    LustreFileSystemConfiguration();
    LustreFileSystemConfiguration(Aws::Utils::Json::JsonView jsonValue);
    LustreFileSystemConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The UTC time that you want to begin your weekly maintenance window.</p>
     */
    inline const Aws::String& GetWeeklyMaintenanceStartTime() const{ return m_weeklyMaintenanceStartTime; }

    /**
     * <p>The UTC time that you want to begin your weekly maintenance window.</p>
     */
    inline bool WeeklyMaintenanceStartTimeHasBeenSet() const { return m_weeklyMaintenanceStartTimeHasBeenSet; }

    /**
     * <p>The UTC time that you want to begin your weekly maintenance window.</p>
     */
    inline void SetWeeklyMaintenanceStartTime(const Aws::String& value) { m_weeklyMaintenanceStartTimeHasBeenSet = true; m_weeklyMaintenanceStartTime = value; }

    /**
     * <p>The UTC time that you want to begin your weekly maintenance window.</p>
     */
    inline void SetWeeklyMaintenanceStartTime(Aws::String&& value) { m_weeklyMaintenanceStartTimeHasBeenSet = true; m_weeklyMaintenanceStartTime = std::move(value); }

    /**
     * <p>The UTC time that you want to begin your weekly maintenance window.</p>
     */
    inline void SetWeeklyMaintenanceStartTime(const char* value) { m_weeklyMaintenanceStartTimeHasBeenSet = true; m_weeklyMaintenanceStartTime.assign(value); }

    /**
     * <p>The UTC time that you want to begin your weekly maintenance window.</p>
     */
    inline LustreFileSystemConfiguration& WithWeeklyMaintenanceStartTime(const Aws::String& value) { SetWeeklyMaintenanceStartTime(value); return *this;}

    /**
     * <p>The UTC time that you want to begin your weekly maintenance window.</p>
     */
    inline LustreFileSystemConfiguration& WithWeeklyMaintenanceStartTime(Aws::String&& value) { SetWeeklyMaintenanceStartTime(std::move(value)); return *this;}

    /**
     * <p>The UTC time that you want to begin your weekly maintenance window.</p>
     */
    inline LustreFileSystemConfiguration& WithWeeklyMaintenanceStartTime(const char* value) { SetWeeklyMaintenanceStartTime(value); return *this;}


    
    inline const DataRepositoryConfiguration& GetDataRepositoryConfiguration() const{ return m_dataRepositoryConfiguration; }

    
    inline bool DataRepositoryConfigurationHasBeenSet() const { return m_dataRepositoryConfigurationHasBeenSet; }

    
    inline void SetDataRepositoryConfiguration(const DataRepositoryConfiguration& value) { m_dataRepositoryConfigurationHasBeenSet = true; m_dataRepositoryConfiguration = value; }

    
    inline void SetDataRepositoryConfiguration(DataRepositoryConfiguration&& value) { m_dataRepositoryConfigurationHasBeenSet = true; m_dataRepositoryConfiguration = std::move(value); }

    
    inline LustreFileSystemConfiguration& WithDataRepositoryConfiguration(const DataRepositoryConfiguration& value) { SetDataRepositoryConfiguration(value); return *this;}

    
    inline LustreFileSystemConfiguration& WithDataRepositoryConfiguration(DataRepositoryConfiguration&& value) { SetDataRepositoryConfiguration(std::move(value)); return *this;}

  private:

    Aws::String m_weeklyMaintenanceStartTime;
    bool m_weeklyMaintenanceStartTimeHasBeenSet;

    DataRepositoryConfiguration m_dataRepositoryConfiguration;
    bool m_dataRepositoryConfigurationHasBeenSet;
  };

} // namespace Model
} // namespace FSx
} // namespace Aws
