/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/logs/CloudWatchLogs_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace CloudWatchLogs
{
namespace Model
{

  /**
   * <p>This structure contains delivery configurations that apply only when the
   * delivery destination resource is an S3 bucket.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/logs-2014-03-28/S3DeliveryConfiguration">AWS
   * API Reference</a></p>
   */
  class S3DeliveryConfiguration
  {
  public:
    AWS_CLOUDWATCHLOGS_API S3DeliveryConfiguration();
    AWS_CLOUDWATCHLOGS_API S3DeliveryConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLOUDWATCHLOGS_API S3DeliveryConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLOUDWATCHLOGS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>This string allows re-configuring the S3 object prefix to contain either
     * static or variable sections. The valid variables to use in the suffix path will
     * vary by each log source. To find the values supported for the suffix path for
     * each log source, use the <a
     * href="https://docs.aws.amazon.com/AmazonCloudWatchLogs/latest/APIReference/API_DescribeConfigurationTemplates.html">DescribeConfigurationTemplates</a>
     * operation and check the <code>allowedSuffixPathFields</code> field in the
     * response.</p>
     */
    inline const Aws::String& GetSuffixPath() const{ return m_suffixPath; }
    inline bool SuffixPathHasBeenSet() const { return m_suffixPathHasBeenSet; }
    inline void SetSuffixPath(const Aws::String& value) { m_suffixPathHasBeenSet = true; m_suffixPath = value; }
    inline void SetSuffixPath(Aws::String&& value) { m_suffixPathHasBeenSet = true; m_suffixPath = std::move(value); }
    inline void SetSuffixPath(const char* value) { m_suffixPathHasBeenSet = true; m_suffixPath.assign(value); }
    inline S3DeliveryConfiguration& WithSuffixPath(const Aws::String& value) { SetSuffixPath(value); return *this;}
    inline S3DeliveryConfiguration& WithSuffixPath(Aws::String&& value) { SetSuffixPath(std::move(value)); return *this;}
    inline S3DeliveryConfiguration& WithSuffixPath(const char* value) { SetSuffixPath(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>This parameter causes the S3 objects that contain delivered logs to use a
     * prefix structure that allows for integration with Apache Hive.</p>
     */
    inline bool GetEnableHiveCompatiblePath() const{ return m_enableHiveCompatiblePath; }
    inline bool EnableHiveCompatiblePathHasBeenSet() const { return m_enableHiveCompatiblePathHasBeenSet; }
    inline void SetEnableHiveCompatiblePath(bool value) { m_enableHiveCompatiblePathHasBeenSet = true; m_enableHiveCompatiblePath = value; }
    inline S3DeliveryConfiguration& WithEnableHiveCompatiblePath(bool value) { SetEnableHiveCompatiblePath(value); return *this;}
    ///@}
  private:

    Aws::String m_suffixPath;
    bool m_suffixPathHasBeenSet = false;

    bool m_enableHiveCompatiblePath;
    bool m_enableHiveCompatiblePathHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudWatchLogs
} // namespace Aws
