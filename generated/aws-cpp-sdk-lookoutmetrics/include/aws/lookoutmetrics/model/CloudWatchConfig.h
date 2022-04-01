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
   * <p>Details about an Amazon CloudWatch datasource.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/lookoutmetrics-2017-07-25/CloudWatchConfig">AWS
   * API Reference</a></p>
   */
  class AWS_LOOKOUTMETRICS_API CloudWatchConfig
  {
  public:
    CloudWatchConfig();
    CloudWatchConfig(Aws::Utils::Json::JsonView jsonValue);
    CloudWatchConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>An IAM role that gives Amazon Lookout for Metrics permission to access data
     * in Amazon CloudWatch.</p>
     */
    inline const Aws::String& GetRoleArn() const{ return m_roleArn; }

    /**
     * <p>An IAM role that gives Amazon Lookout for Metrics permission to access data
     * in Amazon CloudWatch.</p>
     */
    inline bool RoleArnHasBeenSet() const { return m_roleArnHasBeenSet; }

    /**
     * <p>An IAM role that gives Amazon Lookout for Metrics permission to access data
     * in Amazon CloudWatch.</p>
     */
    inline void SetRoleArn(const Aws::String& value) { m_roleArnHasBeenSet = true; m_roleArn = value; }

    /**
     * <p>An IAM role that gives Amazon Lookout for Metrics permission to access data
     * in Amazon CloudWatch.</p>
     */
    inline void SetRoleArn(Aws::String&& value) { m_roleArnHasBeenSet = true; m_roleArn = std::move(value); }

    /**
     * <p>An IAM role that gives Amazon Lookout for Metrics permission to access data
     * in Amazon CloudWatch.</p>
     */
    inline void SetRoleArn(const char* value) { m_roleArnHasBeenSet = true; m_roleArn.assign(value); }

    /**
     * <p>An IAM role that gives Amazon Lookout for Metrics permission to access data
     * in Amazon CloudWatch.</p>
     */
    inline CloudWatchConfig& WithRoleArn(const Aws::String& value) { SetRoleArn(value); return *this;}

    /**
     * <p>An IAM role that gives Amazon Lookout for Metrics permission to access data
     * in Amazon CloudWatch.</p>
     */
    inline CloudWatchConfig& WithRoleArn(Aws::String&& value) { SetRoleArn(std::move(value)); return *this;}

    /**
     * <p>An IAM role that gives Amazon Lookout for Metrics permission to access data
     * in Amazon CloudWatch.</p>
     */
    inline CloudWatchConfig& WithRoleArn(const char* value) { SetRoleArn(value); return *this;}

  private:

    Aws::String m_roleArn;
    bool m_roleArnHasBeenSet;
  };

} // namespace Model
} // namespace LookoutMetrics
} // namespace Aws
