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
   * <p>The current configuration of S3 data event logs as a data source for the
   * organization.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/guardduty-2017-11-28/OrganizationS3LogsConfigurationResult">AWS
   * API Reference</a></p>
   */
  class AWS_GUARDDUTY_API OrganizationS3LogsConfigurationResult
  {
  public:
    OrganizationS3LogsConfigurationResult();
    OrganizationS3LogsConfigurationResult(Aws::Utils::Json::JsonView jsonValue);
    OrganizationS3LogsConfigurationResult& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>A value that describes whether S3 data event logs are automatically enabled
     * for new members of the organization.</p>
     */
    inline bool GetAutoEnable() const{ return m_autoEnable; }

    /**
     * <p>A value that describes whether S3 data event logs are automatically enabled
     * for new members of the organization.</p>
     */
    inline bool AutoEnableHasBeenSet() const { return m_autoEnableHasBeenSet; }

    /**
     * <p>A value that describes whether S3 data event logs are automatically enabled
     * for new members of the organization.</p>
     */
    inline void SetAutoEnable(bool value) { m_autoEnableHasBeenSet = true; m_autoEnable = value; }

    /**
     * <p>A value that describes whether S3 data event logs are automatically enabled
     * for new members of the organization.</p>
     */
    inline OrganizationS3LogsConfigurationResult& WithAutoEnable(bool value) { SetAutoEnable(value); return *this;}

  private:

    bool m_autoEnable;
    bool m_autoEnableHasBeenSet;
  };

} // namespace Model
} // namespace GuardDuty
} // namespace Aws
