/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/guardduty/GuardDuty_EXPORTS.h>

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
namespace GuardDuty
{
namespace Model
{

  /**
   * <p>Describes whether Kubernetes audit logs are enabled as a data
   * source.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/guardduty-2017-11-28/KubernetesAuditLogsConfiguration">AWS
   * API Reference</a></p>
   */
  class KubernetesAuditLogsConfiguration
  {
  public:
    AWS_GUARDDUTY_API KubernetesAuditLogsConfiguration();
    AWS_GUARDDUTY_API KubernetesAuditLogsConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_GUARDDUTY_API KubernetesAuditLogsConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GUARDDUTY_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The status of Kubernetes audit logs as a data source.</p>
     */
    inline bool GetEnable() const{ return m_enable; }

    /**
     * <p>The status of Kubernetes audit logs as a data source.</p>
     */
    inline bool EnableHasBeenSet() const { return m_enableHasBeenSet; }

    /**
     * <p>The status of Kubernetes audit logs as a data source.</p>
     */
    inline void SetEnable(bool value) { m_enableHasBeenSet = true; m_enable = value; }

    /**
     * <p>The status of Kubernetes audit logs as a data source.</p>
     */
    inline KubernetesAuditLogsConfiguration& WithEnable(bool value) { SetEnable(value); return *this;}

  private:

    bool m_enable;
    bool m_enableHasBeenSet = false;
  };

} // namespace Model
} // namespace GuardDuty
} // namespace Aws
