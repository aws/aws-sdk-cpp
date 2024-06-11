﻿/**
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
   * <p>Describes whether S3 data event logs will be automatically enabled for new
   * members of the organization.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/guardduty-2017-11-28/OrganizationS3LogsConfiguration">AWS
   * API Reference</a></p>
   */
  class OrganizationS3LogsConfiguration
  {
  public:
    AWS_GUARDDUTY_API OrganizationS3LogsConfiguration();
    AWS_GUARDDUTY_API OrganizationS3LogsConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_GUARDDUTY_API OrganizationS3LogsConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GUARDDUTY_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>A value that contains information on whether S3 data event logs will be
     * enabled automatically as a data source for the organization.</p>
     */
    inline bool GetAutoEnable() const{ return m_autoEnable; }
    inline bool AutoEnableHasBeenSet() const { return m_autoEnableHasBeenSet; }
    inline void SetAutoEnable(bool value) { m_autoEnableHasBeenSet = true; m_autoEnable = value; }
    inline OrganizationS3LogsConfiguration& WithAutoEnable(bool value) { SetAutoEnable(value); return *this;}
    ///@}
  private:

    bool m_autoEnable;
    bool m_autoEnableHasBeenSet = false;
  };

} // namespace Model
} // namespace GuardDuty
} // namespace Aws
