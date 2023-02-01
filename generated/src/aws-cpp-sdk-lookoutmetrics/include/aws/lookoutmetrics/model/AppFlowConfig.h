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
   * <p>Details about an Amazon AppFlow flow datasource.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/lookoutmetrics-2017-07-25/AppFlowConfig">AWS
   * API Reference</a></p>
   */
  class AppFlowConfig
  {
  public:
    AWS_LOOKOUTMETRICS_API AppFlowConfig();
    AWS_LOOKOUTMETRICS_API AppFlowConfig(Aws::Utils::Json::JsonView jsonValue);
    AWS_LOOKOUTMETRICS_API AppFlowConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LOOKOUTMETRICS_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>An IAM role that gives Amazon Lookout for Metrics permission to access the
     * flow.</p>
     */
    inline const Aws::String& GetRoleArn() const{ return m_roleArn; }

    /**
     * <p>An IAM role that gives Amazon Lookout for Metrics permission to access the
     * flow.</p>
     */
    inline bool RoleArnHasBeenSet() const { return m_roleArnHasBeenSet; }

    /**
     * <p>An IAM role that gives Amazon Lookout for Metrics permission to access the
     * flow.</p>
     */
    inline void SetRoleArn(const Aws::String& value) { m_roleArnHasBeenSet = true; m_roleArn = value; }

    /**
     * <p>An IAM role that gives Amazon Lookout for Metrics permission to access the
     * flow.</p>
     */
    inline void SetRoleArn(Aws::String&& value) { m_roleArnHasBeenSet = true; m_roleArn = std::move(value); }

    /**
     * <p>An IAM role that gives Amazon Lookout for Metrics permission to access the
     * flow.</p>
     */
    inline void SetRoleArn(const char* value) { m_roleArnHasBeenSet = true; m_roleArn.assign(value); }

    /**
     * <p>An IAM role that gives Amazon Lookout for Metrics permission to access the
     * flow.</p>
     */
    inline AppFlowConfig& WithRoleArn(const Aws::String& value) { SetRoleArn(value); return *this;}

    /**
     * <p>An IAM role that gives Amazon Lookout for Metrics permission to access the
     * flow.</p>
     */
    inline AppFlowConfig& WithRoleArn(Aws::String&& value) { SetRoleArn(std::move(value)); return *this;}

    /**
     * <p>An IAM role that gives Amazon Lookout for Metrics permission to access the
     * flow.</p>
     */
    inline AppFlowConfig& WithRoleArn(const char* value) { SetRoleArn(value); return *this;}


    /**
     * <p> name of the flow.</p>
     */
    inline const Aws::String& GetFlowName() const{ return m_flowName; }

    /**
     * <p> name of the flow.</p>
     */
    inline bool FlowNameHasBeenSet() const { return m_flowNameHasBeenSet; }

    /**
     * <p> name of the flow.</p>
     */
    inline void SetFlowName(const Aws::String& value) { m_flowNameHasBeenSet = true; m_flowName = value; }

    /**
     * <p> name of the flow.</p>
     */
    inline void SetFlowName(Aws::String&& value) { m_flowNameHasBeenSet = true; m_flowName = std::move(value); }

    /**
     * <p> name of the flow.</p>
     */
    inline void SetFlowName(const char* value) { m_flowNameHasBeenSet = true; m_flowName.assign(value); }

    /**
     * <p> name of the flow.</p>
     */
    inline AppFlowConfig& WithFlowName(const Aws::String& value) { SetFlowName(value); return *this;}

    /**
     * <p> name of the flow.</p>
     */
    inline AppFlowConfig& WithFlowName(Aws::String&& value) { SetFlowName(std::move(value)); return *this;}

    /**
     * <p> name of the flow.</p>
     */
    inline AppFlowConfig& WithFlowName(const char* value) { SetFlowName(value); return *this;}

  private:

    Aws::String m_roleArn;
    bool m_roleArnHasBeenSet = false;

    Aws::String m_flowName;
    bool m_flowNameHasBeenSet = false;
  };

} // namespace Model
} // namespace LookoutMetrics
} // namespace Aws
