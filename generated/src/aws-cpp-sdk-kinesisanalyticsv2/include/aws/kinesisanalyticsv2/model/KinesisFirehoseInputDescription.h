/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/kinesisanalyticsv2/KinesisAnalyticsV2_EXPORTS.h>
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
namespace KinesisAnalyticsV2
{
namespace Model
{

  /**
   * <p>Describes the Amazon Kinesis Data Firehose delivery stream that is configured
   * as the streaming source in the application input configuration. </p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/kinesisanalyticsv2-2018-05-23/KinesisFirehoseInputDescription">AWS
   * API Reference</a></p>
   */
  class KinesisFirehoseInputDescription
  {
  public:
    AWS_KINESISANALYTICSV2_API KinesisFirehoseInputDescription();
    AWS_KINESISANALYTICSV2_API KinesisFirehoseInputDescription(Aws::Utils::Json::JsonView jsonValue);
    AWS_KINESISANALYTICSV2_API KinesisFirehoseInputDescription& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_KINESISANALYTICSV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The Amazon Resource Name (ARN) of the delivery stream.</p>
     */
    inline const Aws::String& GetResourceARN() const{ return m_resourceARN; }

    /**
     * <p>The Amazon Resource Name (ARN) of the delivery stream.</p>
     */
    inline bool ResourceARNHasBeenSet() const { return m_resourceARNHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the delivery stream.</p>
     */
    inline void SetResourceARN(const Aws::String& value) { m_resourceARNHasBeenSet = true; m_resourceARN = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the delivery stream.</p>
     */
    inline void SetResourceARN(Aws::String&& value) { m_resourceARNHasBeenSet = true; m_resourceARN = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the delivery stream.</p>
     */
    inline void SetResourceARN(const char* value) { m_resourceARNHasBeenSet = true; m_resourceARN.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the delivery stream.</p>
     */
    inline KinesisFirehoseInputDescription& WithResourceARN(const Aws::String& value) { SetResourceARN(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the delivery stream.</p>
     */
    inline KinesisFirehoseInputDescription& WithResourceARN(Aws::String&& value) { SetResourceARN(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the delivery stream.</p>
     */
    inline KinesisFirehoseInputDescription& WithResourceARN(const char* value) { SetResourceARN(value); return *this;}


    /**
     * <p>The ARN of the IAM role that Kinesis Data Analytics assumes to access the
     * stream.</p>  <p>Provided for backward compatibility. Applications that are
     * created with the current API version have an application-level service execution
     * role rather than a resource-level role.</p> 
     */
    inline const Aws::String& GetRoleARN() const{ return m_roleARN; }

    /**
     * <p>The ARN of the IAM role that Kinesis Data Analytics assumes to access the
     * stream.</p>  <p>Provided for backward compatibility. Applications that are
     * created with the current API version have an application-level service execution
     * role rather than a resource-level role.</p> 
     */
    inline bool RoleARNHasBeenSet() const { return m_roleARNHasBeenSet; }

    /**
     * <p>The ARN of the IAM role that Kinesis Data Analytics assumes to access the
     * stream.</p>  <p>Provided for backward compatibility. Applications that are
     * created with the current API version have an application-level service execution
     * role rather than a resource-level role.</p> 
     */
    inline void SetRoleARN(const Aws::String& value) { m_roleARNHasBeenSet = true; m_roleARN = value; }

    /**
     * <p>The ARN of the IAM role that Kinesis Data Analytics assumes to access the
     * stream.</p>  <p>Provided for backward compatibility. Applications that are
     * created with the current API version have an application-level service execution
     * role rather than a resource-level role.</p> 
     */
    inline void SetRoleARN(Aws::String&& value) { m_roleARNHasBeenSet = true; m_roleARN = std::move(value); }

    /**
     * <p>The ARN of the IAM role that Kinesis Data Analytics assumes to access the
     * stream.</p>  <p>Provided for backward compatibility. Applications that are
     * created with the current API version have an application-level service execution
     * role rather than a resource-level role.</p> 
     */
    inline void SetRoleARN(const char* value) { m_roleARNHasBeenSet = true; m_roleARN.assign(value); }

    /**
     * <p>The ARN of the IAM role that Kinesis Data Analytics assumes to access the
     * stream.</p>  <p>Provided for backward compatibility. Applications that are
     * created with the current API version have an application-level service execution
     * role rather than a resource-level role.</p> 
     */
    inline KinesisFirehoseInputDescription& WithRoleARN(const Aws::String& value) { SetRoleARN(value); return *this;}

    /**
     * <p>The ARN of the IAM role that Kinesis Data Analytics assumes to access the
     * stream.</p>  <p>Provided for backward compatibility. Applications that are
     * created with the current API version have an application-level service execution
     * role rather than a resource-level role.</p> 
     */
    inline KinesisFirehoseInputDescription& WithRoleARN(Aws::String&& value) { SetRoleARN(std::move(value)); return *this;}

    /**
     * <p>The ARN of the IAM role that Kinesis Data Analytics assumes to access the
     * stream.</p>  <p>Provided for backward compatibility. Applications that are
     * created with the current API version have an application-level service execution
     * role rather than a resource-level role.</p> 
     */
    inline KinesisFirehoseInputDescription& WithRoleARN(const char* value) { SetRoleARN(value); return *this;}

  private:

    Aws::String m_resourceARN;
    bool m_resourceARNHasBeenSet = false;

    Aws::String m_roleARN;
    bool m_roleARNHasBeenSet = false;
  };

} // namespace Model
} // namespace KinesisAnalyticsV2
} // namespace Aws
