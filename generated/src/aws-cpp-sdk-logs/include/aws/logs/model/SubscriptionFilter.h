/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/logs/CloudWatchLogs_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/logs/model/Distribution.h>
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
   * <p>Represents a subscription filter.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/logs-2014-03-28/SubscriptionFilter">AWS
   * API Reference</a></p>
   */
  class SubscriptionFilter
  {
  public:
    AWS_CLOUDWATCHLOGS_API SubscriptionFilter();
    AWS_CLOUDWATCHLOGS_API SubscriptionFilter(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLOUDWATCHLOGS_API SubscriptionFilter& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLOUDWATCHLOGS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the subscription filter.</p>
     */
    inline const Aws::String& GetFilterName() const{ return m_filterName; }
    inline bool FilterNameHasBeenSet() const { return m_filterNameHasBeenSet; }
    inline void SetFilterName(const Aws::String& value) { m_filterNameHasBeenSet = true; m_filterName = value; }
    inline void SetFilterName(Aws::String&& value) { m_filterNameHasBeenSet = true; m_filterName = std::move(value); }
    inline void SetFilterName(const char* value) { m_filterNameHasBeenSet = true; m_filterName.assign(value); }
    inline SubscriptionFilter& WithFilterName(const Aws::String& value) { SetFilterName(value); return *this;}
    inline SubscriptionFilter& WithFilterName(Aws::String&& value) { SetFilterName(std::move(value)); return *this;}
    inline SubscriptionFilter& WithFilterName(const char* value) { SetFilterName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the log group.</p>
     */
    inline const Aws::String& GetLogGroupName() const{ return m_logGroupName; }
    inline bool LogGroupNameHasBeenSet() const { return m_logGroupNameHasBeenSet; }
    inline void SetLogGroupName(const Aws::String& value) { m_logGroupNameHasBeenSet = true; m_logGroupName = value; }
    inline void SetLogGroupName(Aws::String&& value) { m_logGroupNameHasBeenSet = true; m_logGroupName = std::move(value); }
    inline void SetLogGroupName(const char* value) { m_logGroupNameHasBeenSet = true; m_logGroupName.assign(value); }
    inline SubscriptionFilter& WithLogGroupName(const Aws::String& value) { SetLogGroupName(value); return *this;}
    inline SubscriptionFilter& WithLogGroupName(Aws::String&& value) { SetLogGroupName(std::move(value)); return *this;}
    inline SubscriptionFilter& WithLogGroupName(const char* value) { SetLogGroupName(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetFilterPattern() const{ return m_filterPattern; }
    inline bool FilterPatternHasBeenSet() const { return m_filterPatternHasBeenSet; }
    inline void SetFilterPattern(const Aws::String& value) { m_filterPatternHasBeenSet = true; m_filterPattern = value; }
    inline void SetFilterPattern(Aws::String&& value) { m_filterPatternHasBeenSet = true; m_filterPattern = std::move(value); }
    inline void SetFilterPattern(const char* value) { m_filterPatternHasBeenSet = true; m_filterPattern.assign(value); }
    inline SubscriptionFilter& WithFilterPattern(const Aws::String& value) { SetFilterPattern(value); return *this;}
    inline SubscriptionFilter& WithFilterPattern(Aws::String&& value) { SetFilterPattern(std::move(value)); return *this;}
    inline SubscriptionFilter& WithFilterPattern(const char* value) { SetFilterPattern(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the destination.</p>
     */
    inline const Aws::String& GetDestinationArn() const{ return m_destinationArn; }
    inline bool DestinationArnHasBeenSet() const { return m_destinationArnHasBeenSet; }
    inline void SetDestinationArn(const Aws::String& value) { m_destinationArnHasBeenSet = true; m_destinationArn = value; }
    inline void SetDestinationArn(Aws::String&& value) { m_destinationArnHasBeenSet = true; m_destinationArn = std::move(value); }
    inline void SetDestinationArn(const char* value) { m_destinationArnHasBeenSet = true; m_destinationArn.assign(value); }
    inline SubscriptionFilter& WithDestinationArn(const Aws::String& value) { SetDestinationArn(value); return *this;}
    inline SubscriptionFilter& WithDestinationArn(Aws::String&& value) { SetDestinationArn(std::move(value)); return *this;}
    inline SubscriptionFilter& WithDestinationArn(const char* value) { SetDestinationArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p/>
     */
    inline const Aws::String& GetRoleArn() const{ return m_roleArn; }
    inline bool RoleArnHasBeenSet() const { return m_roleArnHasBeenSet; }
    inline void SetRoleArn(const Aws::String& value) { m_roleArnHasBeenSet = true; m_roleArn = value; }
    inline void SetRoleArn(Aws::String&& value) { m_roleArnHasBeenSet = true; m_roleArn = std::move(value); }
    inline void SetRoleArn(const char* value) { m_roleArnHasBeenSet = true; m_roleArn.assign(value); }
    inline SubscriptionFilter& WithRoleArn(const Aws::String& value) { SetRoleArn(value); return *this;}
    inline SubscriptionFilter& WithRoleArn(Aws::String&& value) { SetRoleArn(std::move(value)); return *this;}
    inline SubscriptionFilter& WithRoleArn(const char* value) { SetRoleArn(value); return *this;}
    ///@}

    ///@{
    
    inline const Distribution& GetDistribution() const{ return m_distribution; }
    inline bool DistributionHasBeenSet() const { return m_distributionHasBeenSet; }
    inline void SetDistribution(const Distribution& value) { m_distributionHasBeenSet = true; m_distribution = value; }
    inline void SetDistribution(Distribution&& value) { m_distributionHasBeenSet = true; m_distribution = std::move(value); }
    inline SubscriptionFilter& WithDistribution(const Distribution& value) { SetDistribution(value); return *this;}
    inline SubscriptionFilter& WithDistribution(Distribution&& value) { SetDistribution(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>This parameter is valid only for log groups that have an active log
     * transformer. For more information about log transformers, see <a
     * href="https://docs.aws.amazon.com/AmazonCloudWatchLogs/latest/APIReference/API_PutTransformer.html">PutTransformer</a>.</p>
     * <p>If this value is <code>true</code>, the subscription filter is applied on the
     * transformed version of the log events instead of the original ingested log
     * events.</p>
     */
    inline bool GetApplyOnTransformedLogs() const{ return m_applyOnTransformedLogs; }
    inline bool ApplyOnTransformedLogsHasBeenSet() const { return m_applyOnTransformedLogsHasBeenSet; }
    inline void SetApplyOnTransformedLogs(bool value) { m_applyOnTransformedLogsHasBeenSet = true; m_applyOnTransformedLogs = value; }
    inline SubscriptionFilter& WithApplyOnTransformedLogs(bool value) { SetApplyOnTransformedLogs(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The creation time of the subscription filter, expressed as the number of
     * milliseconds after <code>Jan 1, 1970 00:00:00 UTC</code>.</p>
     */
    inline long long GetCreationTime() const{ return m_creationTime; }
    inline bool CreationTimeHasBeenSet() const { return m_creationTimeHasBeenSet; }
    inline void SetCreationTime(long long value) { m_creationTimeHasBeenSet = true; m_creationTime = value; }
    inline SubscriptionFilter& WithCreationTime(long long value) { SetCreationTime(value); return *this;}
    ///@}
  private:

    Aws::String m_filterName;
    bool m_filterNameHasBeenSet = false;

    Aws::String m_logGroupName;
    bool m_logGroupNameHasBeenSet = false;

    Aws::String m_filterPattern;
    bool m_filterPatternHasBeenSet = false;

    Aws::String m_destinationArn;
    bool m_destinationArnHasBeenSet = false;

    Aws::String m_roleArn;
    bool m_roleArnHasBeenSet = false;

    Distribution m_distribution;
    bool m_distributionHasBeenSet = false;

    bool m_applyOnTransformedLogs;
    bool m_applyOnTransformedLogsHasBeenSet = false;

    long long m_creationTime;
    bool m_creationTimeHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudWatchLogs
} // namespace Aws
