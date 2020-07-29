/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/guardduty/GuardDuty_EXPORTS.h>
#include <aws/guardduty/model/S3LogsConfiguration.h>
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
namespace GuardDuty
{
namespace Model
{

  /**
   * <p>Contains information about which data sources are enabled.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/guardduty-2017-11-28/DataSourceConfigurations">AWS
   * API Reference</a></p>
   */
  class AWS_GUARDDUTY_API DataSourceConfigurations
  {
  public:
    DataSourceConfigurations();
    DataSourceConfigurations(Aws::Utils::Json::JsonView jsonValue);
    DataSourceConfigurations& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Describes whether S3 data event logs are enabled as a data source.</p>
     */
    inline const S3LogsConfiguration& GetS3Logs() const{ return m_s3Logs; }

    /**
     * <p>Describes whether S3 data event logs are enabled as a data source.</p>
     */
    inline bool S3LogsHasBeenSet() const { return m_s3LogsHasBeenSet; }

    /**
     * <p>Describes whether S3 data event logs are enabled as a data source.</p>
     */
    inline void SetS3Logs(const S3LogsConfiguration& value) { m_s3LogsHasBeenSet = true; m_s3Logs = value; }

    /**
     * <p>Describes whether S3 data event logs are enabled as a data source.</p>
     */
    inline void SetS3Logs(S3LogsConfiguration&& value) { m_s3LogsHasBeenSet = true; m_s3Logs = std::move(value); }

    /**
     * <p>Describes whether S3 data event logs are enabled as a data source.</p>
     */
    inline DataSourceConfigurations& WithS3Logs(const S3LogsConfiguration& value) { SetS3Logs(value); return *this;}

    /**
     * <p>Describes whether S3 data event logs are enabled as a data source.</p>
     */
    inline DataSourceConfigurations& WithS3Logs(S3LogsConfiguration&& value) { SetS3Logs(std::move(value)); return *this;}

  private:

    S3LogsConfiguration m_s3Logs;
    bool m_s3LogsHasBeenSet;
  };

} // namespace Model
} // namespace GuardDuty
} // namespace Aws
