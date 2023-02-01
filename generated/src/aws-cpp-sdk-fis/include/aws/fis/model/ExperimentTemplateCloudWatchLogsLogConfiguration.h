/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/fis/FIS_EXPORTS.h>
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
namespace FIS
{
namespace Model
{

  /**
   * <p>Describes the configuration for experiment logging to Amazon CloudWatch
   * Logs.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/fis-2020-12-01/ExperimentTemplateCloudWatchLogsLogConfiguration">AWS
   * API Reference</a></p>
   */
  class ExperimentTemplateCloudWatchLogsLogConfiguration
  {
  public:
    AWS_FIS_API ExperimentTemplateCloudWatchLogsLogConfiguration();
    AWS_FIS_API ExperimentTemplateCloudWatchLogsLogConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_FIS_API ExperimentTemplateCloudWatchLogsLogConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_FIS_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The Amazon Resource Name (ARN) of the destination Amazon CloudWatch Logs log
     * group.</p>
     */
    inline const Aws::String& GetLogGroupArn() const{ return m_logGroupArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the destination Amazon CloudWatch Logs log
     * group.</p>
     */
    inline bool LogGroupArnHasBeenSet() const { return m_logGroupArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the destination Amazon CloudWatch Logs log
     * group.</p>
     */
    inline void SetLogGroupArn(const Aws::String& value) { m_logGroupArnHasBeenSet = true; m_logGroupArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the destination Amazon CloudWatch Logs log
     * group.</p>
     */
    inline void SetLogGroupArn(Aws::String&& value) { m_logGroupArnHasBeenSet = true; m_logGroupArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the destination Amazon CloudWatch Logs log
     * group.</p>
     */
    inline void SetLogGroupArn(const char* value) { m_logGroupArnHasBeenSet = true; m_logGroupArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the destination Amazon CloudWatch Logs log
     * group.</p>
     */
    inline ExperimentTemplateCloudWatchLogsLogConfiguration& WithLogGroupArn(const Aws::String& value) { SetLogGroupArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the destination Amazon CloudWatch Logs log
     * group.</p>
     */
    inline ExperimentTemplateCloudWatchLogsLogConfiguration& WithLogGroupArn(Aws::String&& value) { SetLogGroupArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the destination Amazon CloudWatch Logs log
     * group.</p>
     */
    inline ExperimentTemplateCloudWatchLogsLogConfiguration& WithLogGroupArn(const char* value) { SetLogGroupArn(value); return *this;}

  private:

    Aws::String m_logGroupArn;
    bool m_logGroupArnHasBeenSet = false;
  };

} // namespace Model
} // namespace FIS
} // namespace Aws
