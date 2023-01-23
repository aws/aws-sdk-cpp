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
   * <p>Organization-wide Kubernetes audit logs configuration.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/guardduty-2017-11-28/OrganizationKubernetesAuditLogsConfiguration">AWS
   * API Reference</a></p>
   */
  class OrganizationKubernetesAuditLogsConfiguration
  {
  public:
    AWS_GUARDDUTY_API OrganizationKubernetesAuditLogsConfiguration();
    AWS_GUARDDUTY_API OrganizationKubernetesAuditLogsConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_GUARDDUTY_API OrganizationKubernetesAuditLogsConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GUARDDUTY_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>A value that contains information on whether Kubernetes audit logs should be
     * enabled automatically as a data source for the organization.</p>
     */
    inline bool GetAutoEnable() const{ return m_autoEnable; }

    /**
     * <p>A value that contains information on whether Kubernetes audit logs should be
     * enabled automatically as a data source for the organization.</p>
     */
    inline bool AutoEnableHasBeenSet() const { return m_autoEnableHasBeenSet; }

    /**
     * <p>A value that contains information on whether Kubernetes audit logs should be
     * enabled automatically as a data source for the organization.</p>
     */
    inline void SetAutoEnable(bool value) { m_autoEnableHasBeenSet = true; m_autoEnable = value; }

    /**
     * <p>A value that contains information on whether Kubernetes audit logs should be
     * enabled automatically as a data source for the organization.</p>
     */
    inline OrganizationKubernetesAuditLogsConfiguration& WithAutoEnable(bool value) { SetAutoEnable(value); return *this;}

  private:

    bool m_autoEnable;
    bool m_autoEnableHasBeenSet = false;
  };

} // namespace Model
} // namespace GuardDuty
} // namespace Aws
