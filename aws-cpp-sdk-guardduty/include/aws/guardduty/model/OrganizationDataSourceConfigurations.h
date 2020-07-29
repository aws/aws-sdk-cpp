/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/guardduty/GuardDuty_EXPORTS.h>
#include <aws/guardduty/model/OrganizationS3LogsConfiguration.h>
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
   * <p>An object that contains information on which data sources will be configured
   * to be automatically enabled for new members within the
   * organization.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/guardduty-2017-11-28/OrganizationDataSourceConfigurations">AWS
   * API Reference</a></p>
   */
  class AWS_GUARDDUTY_API OrganizationDataSourceConfigurations
  {
  public:
    OrganizationDataSourceConfigurations();
    OrganizationDataSourceConfigurations(Aws::Utils::Json::JsonView jsonValue);
    OrganizationDataSourceConfigurations& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Describes whether S3 data event logs are enabled for new members of the
     * organization.</p>
     */
    inline const OrganizationS3LogsConfiguration& GetS3Logs() const{ return m_s3Logs; }

    /**
     * <p>Describes whether S3 data event logs are enabled for new members of the
     * organization.</p>
     */
    inline bool S3LogsHasBeenSet() const { return m_s3LogsHasBeenSet; }

    /**
     * <p>Describes whether S3 data event logs are enabled for new members of the
     * organization.</p>
     */
    inline void SetS3Logs(const OrganizationS3LogsConfiguration& value) { m_s3LogsHasBeenSet = true; m_s3Logs = value; }

    /**
     * <p>Describes whether S3 data event logs are enabled for new members of the
     * organization.</p>
     */
    inline void SetS3Logs(OrganizationS3LogsConfiguration&& value) { m_s3LogsHasBeenSet = true; m_s3Logs = std::move(value); }

    /**
     * <p>Describes whether S3 data event logs are enabled for new members of the
     * organization.</p>
     */
    inline OrganizationDataSourceConfigurations& WithS3Logs(const OrganizationS3LogsConfiguration& value) { SetS3Logs(value); return *this;}

    /**
     * <p>Describes whether S3 data event logs are enabled for new members of the
     * organization.</p>
     */
    inline OrganizationDataSourceConfigurations& WithS3Logs(OrganizationS3LogsConfiguration&& value) { SetS3Logs(std::move(value)); return *this;}

  private:

    OrganizationS3LogsConfiguration m_s3Logs;
    bool m_s3LogsHasBeenSet;
  };

} // namespace Model
} // namespace GuardDuty
} // namespace Aws
