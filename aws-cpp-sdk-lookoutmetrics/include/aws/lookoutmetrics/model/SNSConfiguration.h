/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lookoutmetrics/LookoutMetrics_EXPORTS.h>
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
namespace LookoutMetrics
{
namespace Model
{

  /**
   * <p>Contains information about the SNS topic to which you want to send your
   * alerts and the IAM role that has access to that topic.</p><p><h3>See Also:</h3> 
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/lookoutmetrics-2017-07-25/SNSConfiguration">AWS
   * API Reference</a></p>
   */
  class AWS_LOOKOUTMETRICS_API SNSConfiguration
  {
  public:
    SNSConfiguration();
    SNSConfiguration(Aws::Utils::Json::JsonView jsonValue);
    SNSConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>THe ARN of the IAM role that has access to the target SNS topic.</p>
     */
    inline const Aws::String& GetRoleArn() const{ return m_roleArn; }

    /**
     * <p>THe ARN of the IAM role that has access to the target SNS topic.</p>
     */
    inline bool RoleArnHasBeenSet() const { return m_roleArnHasBeenSet; }

    /**
     * <p>THe ARN of the IAM role that has access to the target SNS topic.</p>
     */
    inline void SetRoleArn(const Aws::String& value) { m_roleArnHasBeenSet = true; m_roleArn = value; }

    /**
     * <p>THe ARN of the IAM role that has access to the target SNS topic.</p>
     */
    inline void SetRoleArn(Aws::String&& value) { m_roleArnHasBeenSet = true; m_roleArn = std::move(value); }

    /**
     * <p>THe ARN of the IAM role that has access to the target SNS topic.</p>
     */
    inline void SetRoleArn(const char* value) { m_roleArnHasBeenSet = true; m_roleArn.assign(value); }

    /**
     * <p>THe ARN of the IAM role that has access to the target SNS topic.</p>
     */
    inline SNSConfiguration& WithRoleArn(const Aws::String& value) { SetRoleArn(value); return *this;}

    /**
     * <p>THe ARN of the IAM role that has access to the target SNS topic.</p>
     */
    inline SNSConfiguration& WithRoleArn(Aws::String&& value) { SetRoleArn(std::move(value)); return *this;}

    /**
     * <p>THe ARN of the IAM role that has access to the target SNS topic.</p>
     */
    inline SNSConfiguration& WithRoleArn(const char* value) { SetRoleArn(value); return *this;}


    /**
     * <p>The ARN of the target SNS topic.</p>
     */
    inline const Aws::String& GetSnsTopicArn() const{ return m_snsTopicArn; }

    /**
     * <p>The ARN of the target SNS topic.</p>
     */
    inline bool SnsTopicArnHasBeenSet() const { return m_snsTopicArnHasBeenSet; }

    /**
     * <p>The ARN of the target SNS topic.</p>
     */
    inline void SetSnsTopicArn(const Aws::String& value) { m_snsTopicArnHasBeenSet = true; m_snsTopicArn = value; }

    /**
     * <p>The ARN of the target SNS topic.</p>
     */
    inline void SetSnsTopicArn(Aws::String&& value) { m_snsTopicArnHasBeenSet = true; m_snsTopicArn = std::move(value); }

    /**
     * <p>The ARN of the target SNS topic.</p>
     */
    inline void SetSnsTopicArn(const char* value) { m_snsTopicArnHasBeenSet = true; m_snsTopicArn.assign(value); }

    /**
     * <p>The ARN of the target SNS topic.</p>
     */
    inline SNSConfiguration& WithSnsTopicArn(const Aws::String& value) { SetSnsTopicArn(value); return *this;}

    /**
     * <p>The ARN of the target SNS topic.</p>
     */
    inline SNSConfiguration& WithSnsTopicArn(Aws::String&& value) { SetSnsTopicArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the target SNS topic.</p>
     */
    inline SNSConfiguration& WithSnsTopicArn(const char* value) { SetSnsTopicArn(value); return *this;}

  private:

    Aws::String m_roleArn;
    bool m_roleArnHasBeenSet;

    Aws::String m_snsTopicArn;
    bool m_snsTopicArnHasBeenSet;
  };

} // namespace Model
} // namespace LookoutMetrics
} // namespace Aws
