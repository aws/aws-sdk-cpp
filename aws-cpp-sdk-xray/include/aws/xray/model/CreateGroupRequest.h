/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/xray/XRay_EXPORTS.h>
#include <aws/xray/XRayRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/xray/model/InsightsConfiguration.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/xray/model/Tag.h>
#include <utility>

namespace Aws
{
namespace XRay
{
namespace Model
{

  /**
   */
  class CreateGroupRequest : public XRayRequest
  {
  public:
    AWS_XRAY_API CreateGroupRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateGroup"; }

    AWS_XRAY_API Aws::String SerializePayload() const override;


    /**
     * <p>The case-sensitive name of the new group. Default is a reserved name and
     * names must be unique.</p>
     */
    inline const Aws::String& GetGroupName() const{ return m_groupName; }

    /**
     * <p>The case-sensitive name of the new group. Default is a reserved name and
     * names must be unique.</p>
     */
    inline bool GroupNameHasBeenSet() const { return m_groupNameHasBeenSet; }

    /**
     * <p>The case-sensitive name of the new group. Default is a reserved name and
     * names must be unique.</p>
     */
    inline void SetGroupName(const Aws::String& value) { m_groupNameHasBeenSet = true; m_groupName = value; }

    /**
     * <p>The case-sensitive name of the new group. Default is a reserved name and
     * names must be unique.</p>
     */
    inline void SetGroupName(Aws::String&& value) { m_groupNameHasBeenSet = true; m_groupName = std::move(value); }

    /**
     * <p>The case-sensitive name of the new group. Default is a reserved name and
     * names must be unique.</p>
     */
    inline void SetGroupName(const char* value) { m_groupNameHasBeenSet = true; m_groupName.assign(value); }

    /**
     * <p>The case-sensitive name of the new group. Default is a reserved name and
     * names must be unique.</p>
     */
    inline CreateGroupRequest& WithGroupName(const Aws::String& value) { SetGroupName(value); return *this;}

    /**
     * <p>The case-sensitive name of the new group. Default is a reserved name and
     * names must be unique.</p>
     */
    inline CreateGroupRequest& WithGroupName(Aws::String&& value) { SetGroupName(std::move(value)); return *this;}

    /**
     * <p>The case-sensitive name of the new group. Default is a reserved name and
     * names must be unique.</p>
     */
    inline CreateGroupRequest& WithGroupName(const char* value) { SetGroupName(value); return *this;}


    /**
     * <p>The filter expression defining criteria by which to group traces.</p>
     */
    inline const Aws::String& GetFilterExpression() const{ return m_filterExpression; }

    /**
     * <p>The filter expression defining criteria by which to group traces.</p>
     */
    inline bool FilterExpressionHasBeenSet() const { return m_filterExpressionHasBeenSet; }

    /**
     * <p>The filter expression defining criteria by which to group traces.</p>
     */
    inline void SetFilterExpression(const Aws::String& value) { m_filterExpressionHasBeenSet = true; m_filterExpression = value; }

    /**
     * <p>The filter expression defining criteria by which to group traces.</p>
     */
    inline void SetFilterExpression(Aws::String&& value) { m_filterExpressionHasBeenSet = true; m_filterExpression = std::move(value); }

    /**
     * <p>The filter expression defining criteria by which to group traces.</p>
     */
    inline void SetFilterExpression(const char* value) { m_filterExpressionHasBeenSet = true; m_filterExpression.assign(value); }

    /**
     * <p>The filter expression defining criteria by which to group traces.</p>
     */
    inline CreateGroupRequest& WithFilterExpression(const Aws::String& value) { SetFilterExpression(value); return *this;}

    /**
     * <p>The filter expression defining criteria by which to group traces.</p>
     */
    inline CreateGroupRequest& WithFilterExpression(Aws::String&& value) { SetFilterExpression(std::move(value)); return *this;}

    /**
     * <p>The filter expression defining criteria by which to group traces.</p>
     */
    inline CreateGroupRequest& WithFilterExpression(const char* value) { SetFilterExpression(value); return *this;}


    /**
     * <p>The structure containing configurations related to insights.</p> <ul> <li>
     * <p>The InsightsEnabled boolean can be set to true to enable insights for the new
     * group or false to disable insights for the new group.</p> </li> <li> <p>The
     * NotificationsEnabled boolean can be set to true to enable insights notifications
     * for the new group. Notifications may only be enabled on a group with
     * InsightsEnabled set to true.</p> </li> </ul>
     */
    inline const InsightsConfiguration& GetInsightsConfiguration() const{ return m_insightsConfiguration; }

    /**
     * <p>The structure containing configurations related to insights.</p> <ul> <li>
     * <p>The InsightsEnabled boolean can be set to true to enable insights for the new
     * group or false to disable insights for the new group.</p> </li> <li> <p>The
     * NotificationsEnabled boolean can be set to true to enable insights notifications
     * for the new group. Notifications may only be enabled on a group with
     * InsightsEnabled set to true.</p> </li> </ul>
     */
    inline bool InsightsConfigurationHasBeenSet() const { return m_insightsConfigurationHasBeenSet; }

    /**
     * <p>The structure containing configurations related to insights.</p> <ul> <li>
     * <p>The InsightsEnabled boolean can be set to true to enable insights for the new
     * group or false to disable insights for the new group.</p> </li> <li> <p>The
     * NotificationsEnabled boolean can be set to true to enable insights notifications
     * for the new group. Notifications may only be enabled on a group with
     * InsightsEnabled set to true.</p> </li> </ul>
     */
    inline void SetInsightsConfiguration(const InsightsConfiguration& value) { m_insightsConfigurationHasBeenSet = true; m_insightsConfiguration = value; }

    /**
     * <p>The structure containing configurations related to insights.</p> <ul> <li>
     * <p>The InsightsEnabled boolean can be set to true to enable insights for the new
     * group or false to disable insights for the new group.</p> </li> <li> <p>The
     * NotificationsEnabled boolean can be set to true to enable insights notifications
     * for the new group. Notifications may only be enabled on a group with
     * InsightsEnabled set to true.</p> </li> </ul>
     */
    inline void SetInsightsConfiguration(InsightsConfiguration&& value) { m_insightsConfigurationHasBeenSet = true; m_insightsConfiguration = std::move(value); }

    /**
     * <p>The structure containing configurations related to insights.</p> <ul> <li>
     * <p>The InsightsEnabled boolean can be set to true to enable insights for the new
     * group or false to disable insights for the new group.</p> </li> <li> <p>The
     * NotificationsEnabled boolean can be set to true to enable insights notifications
     * for the new group. Notifications may only be enabled on a group with
     * InsightsEnabled set to true.</p> </li> </ul>
     */
    inline CreateGroupRequest& WithInsightsConfiguration(const InsightsConfiguration& value) { SetInsightsConfiguration(value); return *this;}

    /**
     * <p>The structure containing configurations related to insights.</p> <ul> <li>
     * <p>The InsightsEnabled boolean can be set to true to enable insights for the new
     * group or false to disable insights for the new group.</p> </li> <li> <p>The
     * NotificationsEnabled boolean can be set to true to enable insights notifications
     * for the new group. Notifications may only be enabled on a group with
     * InsightsEnabled set to true.</p> </li> </ul>
     */
    inline CreateGroupRequest& WithInsightsConfiguration(InsightsConfiguration&& value) { SetInsightsConfiguration(std::move(value)); return *this;}


    /**
     * <p>A map that contains one or more tag keys and tag values to attach to an X-Ray
     * group. For more information about ways to use tags, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws_tagging.html">Tagging
     * Amazon Web Services resources</a> in the <i>Amazon Web Services General
     * Reference</i>.</p> <p>The following restrictions apply to tags:</p> <ul> <li>
     * <p>Maximum number of user-applied tags per resource: 50</p> </li> <li>
     * <p>Maximum tag key length: 128 Unicode characters</p> </li> <li> <p>Maximum tag
     * value length: 256 Unicode characters</p> </li> <li> <p>Valid values for key and
     * value: a-z, A-Z, 0-9, space, and the following characters: _ . : / = + - and
     * @</p> </li> <li> <p>Tag keys and values are case sensitive.</p> </li> <li>
     * <p>Don't use <code>aws:</code> as a prefix for keys; it's reserved for Amazon
     * Web Services use.</p> </li> </ul>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }

    /**
     * <p>A map that contains one or more tag keys and tag values to attach to an X-Ray
     * group. For more information about ways to use tags, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws_tagging.html">Tagging
     * Amazon Web Services resources</a> in the <i>Amazon Web Services General
     * Reference</i>.</p> <p>The following restrictions apply to tags:</p> <ul> <li>
     * <p>Maximum number of user-applied tags per resource: 50</p> </li> <li>
     * <p>Maximum tag key length: 128 Unicode characters</p> </li> <li> <p>Maximum tag
     * value length: 256 Unicode characters</p> </li> <li> <p>Valid values for key and
     * value: a-z, A-Z, 0-9, space, and the following characters: _ . : / = + - and
     * @</p> </li> <li> <p>Tag keys and values are case sensitive.</p> </li> <li>
     * <p>Don't use <code>aws:</code> as a prefix for keys; it's reserved for Amazon
     * Web Services use.</p> </li> </ul>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>A map that contains one or more tag keys and tag values to attach to an X-Ray
     * group. For more information about ways to use tags, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws_tagging.html">Tagging
     * Amazon Web Services resources</a> in the <i>Amazon Web Services General
     * Reference</i>.</p> <p>The following restrictions apply to tags:</p> <ul> <li>
     * <p>Maximum number of user-applied tags per resource: 50</p> </li> <li>
     * <p>Maximum tag key length: 128 Unicode characters</p> </li> <li> <p>Maximum tag
     * value length: 256 Unicode characters</p> </li> <li> <p>Valid values for key and
     * value: a-z, A-Z, 0-9, space, and the following characters: _ . : / = + - and
     * @</p> </li> <li> <p>Tag keys and values are case sensitive.</p> </li> <li>
     * <p>Don't use <code>aws:</code> as a prefix for keys; it's reserved for Amazon
     * Web Services use.</p> </li> </ul>
     */
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>A map that contains one or more tag keys and tag values to attach to an X-Ray
     * group. For more information about ways to use tags, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws_tagging.html">Tagging
     * Amazon Web Services resources</a> in the <i>Amazon Web Services General
     * Reference</i>.</p> <p>The following restrictions apply to tags:</p> <ul> <li>
     * <p>Maximum number of user-applied tags per resource: 50</p> </li> <li>
     * <p>Maximum tag key length: 128 Unicode characters</p> </li> <li> <p>Maximum tag
     * value length: 256 Unicode characters</p> </li> <li> <p>Valid values for key and
     * value: a-z, A-Z, 0-9, space, and the following characters: _ . : / = + - and
     * @</p> </li> <li> <p>Tag keys and values are case sensitive.</p> </li> <li>
     * <p>Don't use <code>aws:</code> as a prefix for keys; it's reserved for Amazon
     * Web Services use.</p> </li> </ul>
     */
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>A map that contains one or more tag keys and tag values to attach to an X-Ray
     * group. For more information about ways to use tags, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws_tagging.html">Tagging
     * Amazon Web Services resources</a> in the <i>Amazon Web Services General
     * Reference</i>.</p> <p>The following restrictions apply to tags:</p> <ul> <li>
     * <p>Maximum number of user-applied tags per resource: 50</p> </li> <li>
     * <p>Maximum tag key length: 128 Unicode characters</p> </li> <li> <p>Maximum tag
     * value length: 256 Unicode characters</p> </li> <li> <p>Valid values for key and
     * value: a-z, A-Z, 0-9, space, and the following characters: _ . : / = + - and
     * @</p> </li> <li> <p>Tag keys and values are case sensitive.</p> </li> <li>
     * <p>Don't use <code>aws:</code> as a prefix for keys; it's reserved for Amazon
     * Web Services use.</p> </li> </ul>
     */
    inline CreateGroupRequest& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}

    /**
     * <p>A map that contains one or more tag keys and tag values to attach to an X-Ray
     * group. For more information about ways to use tags, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws_tagging.html">Tagging
     * Amazon Web Services resources</a> in the <i>Amazon Web Services General
     * Reference</i>.</p> <p>The following restrictions apply to tags:</p> <ul> <li>
     * <p>Maximum number of user-applied tags per resource: 50</p> </li> <li>
     * <p>Maximum tag key length: 128 Unicode characters</p> </li> <li> <p>Maximum tag
     * value length: 256 Unicode characters</p> </li> <li> <p>Valid values for key and
     * value: a-z, A-Z, 0-9, space, and the following characters: _ . : / = + - and
     * @</p> </li> <li> <p>Tag keys and values are case sensitive.</p> </li> <li>
     * <p>Don't use <code>aws:</code> as a prefix for keys; it's reserved for Amazon
     * Web Services use.</p> </li> </ul>
     */
    inline CreateGroupRequest& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>A map that contains one or more tag keys and tag values to attach to an X-Ray
     * group. For more information about ways to use tags, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws_tagging.html">Tagging
     * Amazon Web Services resources</a> in the <i>Amazon Web Services General
     * Reference</i>.</p> <p>The following restrictions apply to tags:</p> <ul> <li>
     * <p>Maximum number of user-applied tags per resource: 50</p> </li> <li>
     * <p>Maximum tag key length: 128 Unicode characters</p> </li> <li> <p>Maximum tag
     * value length: 256 Unicode characters</p> </li> <li> <p>Valid values for key and
     * value: a-z, A-Z, 0-9, space, and the following characters: _ . : / = + - and
     * @</p> </li> <li> <p>Tag keys and values are case sensitive.</p> </li> <li>
     * <p>Don't use <code>aws:</code> as a prefix for keys; it's reserved for Amazon
     * Web Services use.</p> </li> </ul>
     */
    inline CreateGroupRequest& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }

    /**
     * <p>A map that contains one or more tag keys and tag values to attach to an X-Ray
     * group. For more information about ways to use tags, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws_tagging.html">Tagging
     * Amazon Web Services resources</a> in the <i>Amazon Web Services General
     * Reference</i>.</p> <p>The following restrictions apply to tags:</p> <ul> <li>
     * <p>Maximum number of user-applied tags per resource: 50</p> </li> <li>
     * <p>Maximum tag key length: 128 Unicode characters</p> </li> <li> <p>Maximum tag
     * value length: 256 Unicode characters</p> </li> <li> <p>Valid values for key and
     * value: a-z, A-Z, 0-9, space, and the following characters: _ . : / = + - and
     * @</p> </li> <li> <p>Tag keys and values are case sensitive.</p> </li> <li>
     * <p>Don't use <code>aws:</code> as a prefix for keys; it's reserved for Amazon
     * Web Services use.</p> </li> </ul>
     */
    inline CreateGroupRequest& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_groupName;
    bool m_groupNameHasBeenSet = false;

    Aws::String m_filterExpression;
    bool m_filterExpressionHasBeenSet = false;

    InsightsConfiguration m_insightsConfiguration;
    bool m_insightsConfigurationHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace XRay
} // namespace Aws
