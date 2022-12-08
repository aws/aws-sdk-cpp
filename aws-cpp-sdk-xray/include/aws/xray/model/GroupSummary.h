/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/xray/XRay_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/xray/model/InsightsConfiguration.h>
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
namespace XRay
{
namespace Model
{

  /**
   * <p>Details for a group without metadata.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/xray-2016-04-12/GroupSummary">AWS
   * API Reference</a></p>
   */
  class GroupSummary
  {
  public:
    AWS_XRAY_API GroupSummary();
    AWS_XRAY_API GroupSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_XRAY_API GroupSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_XRAY_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The unique case-sensitive name of the group.</p>
     */
    inline const Aws::String& GetGroupName() const{ return m_groupName; }

    /**
     * <p>The unique case-sensitive name of the group.</p>
     */
    inline bool GroupNameHasBeenSet() const { return m_groupNameHasBeenSet; }

    /**
     * <p>The unique case-sensitive name of the group.</p>
     */
    inline void SetGroupName(const Aws::String& value) { m_groupNameHasBeenSet = true; m_groupName = value; }

    /**
     * <p>The unique case-sensitive name of the group.</p>
     */
    inline void SetGroupName(Aws::String&& value) { m_groupNameHasBeenSet = true; m_groupName = std::move(value); }

    /**
     * <p>The unique case-sensitive name of the group.</p>
     */
    inline void SetGroupName(const char* value) { m_groupNameHasBeenSet = true; m_groupName.assign(value); }

    /**
     * <p>The unique case-sensitive name of the group.</p>
     */
    inline GroupSummary& WithGroupName(const Aws::String& value) { SetGroupName(value); return *this;}

    /**
     * <p>The unique case-sensitive name of the group.</p>
     */
    inline GroupSummary& WithGroupName(Aws::String&& value) { SetGroupName(std::move(value)); return *this;}

    /**
     * <p>The unique case-sensitive name of the group.</p>
     */
    inline GroupSummary& WithGroupName(const char* value) { SetGroupName(value); return *this;}


    /**
     * <p>The ARN of the group generated based on the GroupName.</p>
     */
    inline const Aws::String& GetGroupARN() const{ return m_groupARN; }

    /**
     * <p>The ARN of the group generated based on the GroupName.</p>
     */
    inline bool GroupARNHasBeenSet() const { return m_groupARNHasBeenSet; }

    /**
     * <p>The ARN of the group generated based on the GroupName.</p>
     */
    inline void SetGroupARN(const Aws::String& value) { m_groupARNHasBeenSet = true; m_groupARN = value; }

    /**
     * <p>The ARN of the group generated based on the GroupName.</p>
     */
    inline void SetGroupARN(Aws::String&& value) { m_groupARNHasBeenSet = true; m_groupARN = std::move(value); }

    /**
     * <p>The ARN of the group generated based on the GroupName.</p>
     */
    inline void SetGroupARN(const char* value) { m_groupARNHasBeenSet = true; m_groupARN.assign(value); }

    /**
     * <p>The ARN of the group generated based on the GroupName.</p>
     */
    inline GroupSummary& WithGroupARN(const Aws::String& value) { SetGroupARN(value); return *this;}

    /**
     * <p>The ARN of the group generated based on the GroupName.</p>
     */
    inline GroupSummary& WithGroupARN(Aws::String&& value) { SetGroupARN(std::move(value)); return *this;}

    /**
     * <p>The ARN of the group generated based on the GroupName.</p>
     */
    inline GroupSummary& WithGroupARN(const char* value) { SetGroupARN(value); return *this;}


    /**
     * <p>The filter expression defining the parameters to include traces.</p>
     */
    inline const Aws::String& GetFilterExpression() const{ return m_filterExpression; }

    /**
     * <p>The filter expression defining the parameters to include traces.</p>
     */
    inline bool FilterExpressionHasBeenSet() const { return m_filterExpressionHasBeenSet; }

    /**
     * <p>The filter expression defining the parameters to include traces.</p>
     */
    inline void SetFilterExpression(const Aws::String& value) { m_filterExpressionHasBeenSet = true; m_filterExpression = value; }

    /**
     * <p>The filter expression defining the parameters to include traces.</p>
     */
    inline void SetFilterExpression(Aws::String&& value) { m_filterExpressionHasBeenSet = true; m_filterExpression = std::move(value); }

    /**
     * <p>The filter expression defining the parameters to include traces.</p>
     */
    inline void SetFilterExpression(const char* value) { m_filterExpressionHasBeenSet = true; m_filterExpression.assign(value); }

    /**
     * <p>The filter expression defining the parameters to include traces.</p>
     */
    inline GroupSummary& WithFilterExpression(const Aws::String& value) { SetFilterExpression(value); return *this;}

    /**
     * <p>The filter expression defining the parameters to include traces.</p>
     */
    inline GroupSummary& WithFilterExpression(Aws::String&& value) { SetFilterExpression(std::move(value)); return *this;}

    /**
     * <p>The filter expression defining the parameters to include traces.</p>
     */
    inline GroupSummary& WithFilterExpression(const char* value) { SetFilterExpression(value); return *this;}


    /**
     * <p>The structure containing configurations related to insights.</p> <ul> <li>
     * <p>The InsightsEnabled boolean can be set to true to enable insights for the
     * group or false to disable insights for the group.</p> </li> <li> <p>The
     * NotificationsEnabled boolean can be set to true to enable insights
     * notifications. Notifications can only be enabled on a group with InsightsEnabled
     * set to true.</p> </li> </ul>
     */
    inline const InsightsConfiguration& GetInsightsConfiguration() const{ return m_insightsConfiguration; }

    /**
     * <p>The structure containing configurations related to insights.</p> <ul> <li>
     * <p>The InsightsEnabled boolean can be set to true to enable insights for the
     * group or false to disable insights for the group.</p> </li> <li> <p>The
     * NotificationsEnabled boolean can be set to true to enable insights
     * notifications. Notifications can only be enabled on a group with InsightsEnabled
     * set to true.</p> </li> </ul>
     */
    inline bool InsightsConfigurationHasBeenSet() const { return m_insightsConfigurationHasBeenSet; }

    /**
     * <p>The structure containing configurations related to insights.</p> <ul> <li>
     * <p>The InsightsEnabled boolean can be set to true to enable insights for the
     * group or false to disable insights for the group.</p> </li> <li> <p>The
     * NotificationsEnabled boolean can be set to true to enable insights
     * notifications. Notifications can only be enabled on a group with InsightsEnabled
     * set to true.</p> </li> </ul>
     */
    inline void SetInsightsConfiguration(const InsightsConfiguration& value) { m_insightsConfigurationHasBeenSet = true; m_insightsConfiguration = value; }

    /**
     * <p>The structure containing configurations related to insights.</p> <ul> <li>
     * <p>The InsightsEnabled boolean can be set to true to enable insights for the
     * group or false to disable insights for the group.</p> </li> <li> <p>The
     * NotificationsEnabled boolean can be set to true to enable insights
     * notifications. Notifications can only be enabled on a group with InsightsEnabled
     * set to true.</p> </li> </ul>
     */
    inline void SetInsightsConfiguration(InsightsConfiguration&& value) { m_insightsConfigurationHasBeenSet = true; m_insightsConfiguration = std::move(value); }

    /**
     * <p>The structure containing configurations related to insights.</p> <ul> <li>
     * <p>The InsightsEnabled boolean can be set to true to enable insights for the
     * group or false to disable insights for the group.</p> </li> <li> <p>The
     * NotificationsEnabled boolean can be set to true to enable insights
     * notifications. Notifications can only be enabled on a group with InsightsEnabled
     * set to true.</p> </li> </ul>
     */
    inline GroupSummary& WithInsightsConfiguration(const InsightsConfiguration& value) { SetInsightsConfiguration(value); return *this;}

    /**
     * <p>The structure containing configurations related to insights.</p> <ul> <li>
     * <p>The InsightsEnabled boolean can be set to true to enable insights for the
     * group or false to disable insights for the group.</p> </li> <li> <p>The
     * NotificationsEnabled boolean can be set to true to enable insights
     * notifications. Notifications can only be enabled on a group with InsightsEnabled
     * set to true.</p> </li> </ul>
     */
    inline GroupSummary& WithInsightsConfiguration(InsightsConfiguration&& value) { SetInsightsConfiguration(std::move(value)); return *this;}

  private:

    Aws::String m_groupName;
    bool m_groupNameHasBeenSet = false;

    Aws::String m_groupARN;
    bool m_groupARNHasBeenSet = false;

    Aws::String m_filterExpression;
    bool m_filterExpressionHasBeenSet = false;

    InsightsConfiguration m_insightsConfiguration;
    bool m_insightsConfigurationHasBeenSet = false;
  };

} // namespace Model
} // namespace XRay
} // namespace Aws
