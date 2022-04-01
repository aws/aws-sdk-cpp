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
   * <p>Describes whether S3 data event logs will be enabled as a data
   * source.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/guardduty-2017-11-28/S3LogsConfiguration">AWS
   * API Reference</a></p>
   */
  class AWS_GUARDDUTY_API S3LogsConfiguration
  {
  public:
    S3LogsConfiguration();
    S3LogsConfiguration(Aws::Utils::Json::JsonView jsonValue);
    S3LogsConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p> The status of S3 data event logs as a data source.</p>
     */
    inline bool GetEnable() const{ return m_enable; }

    /**
     * <p> The status of S3 data event logs as a data source.</p>
     */
    inline bool EnableHasBeenSet() const { return m_enableHasBeenSet; }

    /**
     * <p> The status of S3 data event logs as a data source.</p>
     */
    inline void SetEnable(bool value) { m_enableHasBeenSet = true; m_enable = value; }

    /**
     * <p> The status of S3 data event logs as a data source.</p>
     */
    inline S3LogsConfiguration& WithEnable(bool value) { SetEnable(value); return *this;}

  private:

    bool m_enable;
    bool m_enableHasBeenSet;
  };

} // namespace Model
} // namespace GuardDuty
} // namespace Aws
