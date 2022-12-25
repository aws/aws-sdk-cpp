/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/states/SFN_EXPORTS.h>
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
namespace SFN
{
namespace Model
{

  /**
   * <p/><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/states-2016-11-23/CloudWatchLogsLogGroup">AWS
   * API Reference</a></p>
   */
  class CloudWatchLogsLogGroup
  {
  public:
    AWS_SFN_API CloudWatchLogsLogGroup();
    AWS_SFN_API CloudWatchLogsLogGroup(Aws::Utils::Json::JsonView jsonValue);
    AWS_SFN_API CloudWatchLogsLogGroup& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SFN_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The ARN of the the CloudWatch log group to which you want your logs emitted
     * to. The ARN must end with <code>:*</code> </p>
     */
    inline const Aws::String& GetLogGroupArn() const{ return m_logGroupArn; }

    /**
     * <p>The ARN of the the CloudWatch log group to which you want your logs emitted
     * to. The ARN must end with <code>:*</code> </p>
     */
    inline bool LogGroupArnHasBeenSet() const { return m_logGroupArnHasBeenSet; }

    /**
     * <p>The ARN of the the CloudWatch log group to which you want your logs emitted
     * to. The ARN must end with <code>:*</code> </p>
     */
    inline void SetLogGroupArn(const Aws::String& value) { m_logGroupArnHasBeenSet = true; m_logGroupArn = value; }

    /**
     * <p>The ARN of the the CloudWatch log group to which you want your logs emitted
     * to. The ARN must end with <code>:*</code> </p>
     */
    inline void SetLogGroupArn(Aws::String&& value) { m_logGroupArnHasBeenSet = true; m_logGroupArn = std::move(value); }

    /**
     * <p>The ARN of the the CloudWatch log group to which you want your logs emitted
     * to. The ARN must end with <code>:*</code> </p>
     */
    inline void SetLogGroupArn(const char* value) { m_logGroupArnHasBeenSet = true; m_logGroupArn.assign(value); }

    /**
     * <p>The ARN of the the CloudWatch log group to which you want your logs emitted
     * to. The ARN must end with <code>:*</code> </p>
     */
    inline CloudWatchLogsLogGroup& WithLogGroupArn(const Aws::String& value) { SetLogGroupArn(value); return *this;}

    /**
     * <p>The ARN of the the CloudWatch log group to which you want your logs emitted
     * to. The ARN must end with <code>:*</code> </p>
     */
    inline CloudWatchLogsLogGroup& WithLogGroupArn(Aws::String&& value) { SetLogGroupArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the the CloudWatch log group to which you want your logs emitted
     * to. The ARN must end with <code>:*</code> </p>
     */
    inline CloudWatchLogsLogGroup& WithLogGroupArn(const char* value) { SetLogGroupArn(value); return *this;}

  private:

    Aws::String m_logGroupArn;
    bool m_logGroupArnHasBeenSet = false;
  };

} // namespace Model
} // namespace SFN
} // namespace Aws
