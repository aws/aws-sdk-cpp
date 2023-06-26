/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ivschat/Ivschat_EXPORTS.h>
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
namespace ivschat
{
namespace Model
{

  /**
   * <p>Specifies a CloudWatch Logs location where chat logs will be
   * stored.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ivschat-2020-07-14/CloudWatchLogsDestinationConfiguration">AWS
   * API Reference</a></p>
   */
  class CloudWatchLogsDestinationConfiguration
  {
  public:
    AWS_IVSCHAT_API CloudWatchLogsDestinationConfiguration();
    AWS_IVSCHAT_API CloudWatchLogsDestinationConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_IVSCHAT_API CloudWatchLogsDestinationConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IVSCHAT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Name of the Amazon Cloudwatch Logs destination where chat activity will be
     * logged.</p>
     */
    inline const Aws::String& GetLogGroupName() const{ return m_logGroupName; }

    /**
     * <p>Name of the Amazon Cloudwatch Logs destination where chat activity will be
     * logged.</p>
     */
    inline bool LogGroupNameHasBeenSet() const { return m_logGroupNameHasBeenSet; }

    /**
     * <p>Name of the Amazon Cloudwatch Logs destination where chat activity will be
     * logged.</p>
     */
    inline void SetLogGroupName(const Aws::String& value) { m_logGroupNameHasBeenSet = true; m_logGroupName = value; }

    /**
     * <p>Name of the Amazon Cloudwatch Logs destination where chat activity will be
     * logged.</p>
     */
    inline void SetLogGroupName(Aws::String&& value) { m_logGroupNameHasBeenSet = true; m_logGroupName = std::move(value); }

    /**
     * <p>Name of the Amazon Cloudwatch Logs destination where chat activity will be
     * logged.</p>
     */
    inline void SetLogGroupName(const char* value) { m_logGroupNameHasBeenSet = true; m_logGroupName.assign(value); }

    /**
     * <p>Name of the Amazon Cloudwatch Logs destination where chat activity will be
     * logged.</p>
     */
    inline CloudWatchLogsDestinationConfiguration& WithLogGroupName(const Aws::String& value) { SetLogGroupName(value); return *this;}

    /**
     * <p>Name of the Amazon Cloudwatch Logs destination where chat activity will be
     * logged.</p>
     */
    inline CloudWatchLogsDestinationConfiguration& WithLogGroupName(Aws::String&& value) { SetLogGroupName(std::move(value)); return *this;}

    /**
     * <p>Name of the Amazon Cloudwatch Logs destination where chat activity will be
     * logged.</p>
     */
    inline CloudWatchLogsDestinationConfiguration& WithLogGroupName(const char* value) { SetLogGroupName(value); return *this;}

  private:

    Aws::String m_logGroupName;
    bool m_logGroupNameHasBeenSet = false;
  };

} // namespace Model
} // namespace ivschat
} // namespace Aws
