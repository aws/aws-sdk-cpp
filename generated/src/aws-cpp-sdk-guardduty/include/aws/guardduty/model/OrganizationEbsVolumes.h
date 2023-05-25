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
   * <p>Organization-wide EBS volumes scan configuration.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/guardduty-2017-11-28/OrganizationEbsVolumes">AWS
   * API Reference</a></p>
   */
  class OrganizationEbsVolumes
  {
  public:
    AWS_GUARDDUTY_API OrganizationEbsVolumes();
    AWS_GUARDDUTY_API OrganizationEbsVolumes(Aws::Utils::Json::JsonView jsonValue);
    AWS_GUARDDUTY_API OrganizationEbsVolumes& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GUARDDUTY_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Whether scanning EBS volumes should be auto-enabled for new members joining
     * the organization.</p>
     */
    inline bool GetAutoEnable() const{ return m_autoEnable; }

    /**
     * <p>Whether scanning EBS volumes should be auto-enabled for new members joining
     * the organization.</p>
     */
    inline bool AutoEnableHasBeenSet() const { return m_autoEnableHasBeenSet; }

    /**
     * <p>Whether scanning EBS volumes should be auto-enabled for new members joining
     * the organization.</p>
     */
    inline void SetAutoEnable(bool value) { m_autoEnableHasBeenSet = true; m_autoEnable = value; }

    /**
     * <p>Whether scanning EBS volumes should be auto-enabled for new members joining
     * the organization.</p>
     */
    inline OrganizationEbsVolumes& WithAutoEnable(bool value) { SetAutoEnable(value); return *this;}

  private:

    bool m_autoEnable;
    bool m_autoEnableHasBeenSet = false;
  };

} // namespace Model
} // namespace GuardDuty
} // namespace Aws
