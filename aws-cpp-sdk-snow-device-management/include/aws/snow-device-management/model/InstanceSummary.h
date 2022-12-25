/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/snow-device-management/SnowDeviceManagement_EXPORTS.h>
#include <aws/snow-device-management/model/Instance.h>
#include <aws/core/utils/DateTime.h>
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
namespace SnowDeviceManagement
{
namespace Model
{

  /**
   * <p>The details about the instance.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/snow-device-management-2021-08-04/InstanceSummary">AWS
   * API Reference</a></p>
   */
  class InstanceSummary
  {
  public:
    AWS_SNOWDEVICEMANAGEMENT_API InstanceSummary();
    AWS_SNOWDEVICEMANAGEMENT_API InstanceSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_SNOWDEVICEMANAGEMENT_API InstanceSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SNOWDEVICEMANAGEMENT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>A structure containing details about the instance.</p>
     */
    inline const Instance& GetInstance() const{ return m_instance; }

    /**
     * <p>A structure containing details about the instance.</p>
     */
    inline bool InstanceHasBeenSet() const { return m_instanceHasBeenSet; }

    /**
     * <p>A structure containing details about the instance.</p>
     */
    inline void SetInstance(const Instance& value) { m_instanceHasBeenSet = true; m_instance = value; }

    /**
     * <p>A structure containing details about the instance.</p>
     */
    inline void SetInstance(Instance&& value) { m_instanceHasBeenSet = true; m_instance = std::move(value); }

    /**
     * <p>A structure containing details about the instance.</p>
     */
    inline InstanceSummary& WithInstance(const Instance& value) { SetInstance(value); return *this;}

    /**
     * <p>A structure containing details about the instance.</p>
     */
    inline InstanceSummary& WithInstance(Instance&& value) { SetInstance(std::move(value)); return *this;}


    /**
     * <p>When the instance summary was last updated.</p>
     */
    inline const Aws::Utils::DateTime& GetLastUpdatedAt() const{ return m_lastUpdatedAt; }

    /**
     * <p>When the instance summary was last updated.</p>
     */
    inline bool LastUpdatedAtHasBeenSet() const { return m_lastUpdatedAtHasBeenSet; }

    /**
     * <p>When the instance summary was last updated.</p>
     */
    inline void SetLastUpdatedAt(const Aws::Utils::DateTime& value) { m_lastUpdatedAtHasBeenSet = true; m_lastUpdatedAt = value; }

    /**
     * <p>When the instance summary was last updated.</p>
     */
    inline void SetLastUpdatedAt(Aws::Utils::DateTime&& value) { m_lastUpdatedAtHasBeenSet = true; m_lastUpdatedAt = std::move(value); }

    /**
     * <p>When the instance summary was last updated.</p>
     */
    inline InstanceSummary& WithLastUpdatedAt(const Aws::Utils::DateTime& value) { SetLastUpdatedAt(value); return *this;}

    /**
     * <p>When the instance summary was last updated.</p>
     */
    inline InstanceSummary& WithLastUpdatedAt(Aws::Utils::DateTime&& value) { SetLastUpdatedAt(std::move(value)); return *this;}

  private:

    Instance m_instance;
    bool m_instanceHasBeenSet = false;

    Aws::Utils::DateTime m_lastUpdatedAt;
    bool m_lastUpdatedAtHasBeenSet = false;
  };

} // namespace Model
} // namespace SnowDeviceManagement
} // namespace Aws
