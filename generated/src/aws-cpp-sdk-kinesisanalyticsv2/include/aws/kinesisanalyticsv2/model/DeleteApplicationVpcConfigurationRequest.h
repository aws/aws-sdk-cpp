/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/kinesisanalyticsv2/KinesisAnalyticsV2_EXPORTS.h>
#include <aws/kinesisanalyticsv2/KinesisAnalyticsV2Request.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace KinesisAnalyticsV2
{
namespace Model
{

  /**
   */
  class DeleteApplicationVpcConfigurationRequest : public KinesisAnalyticsV2Request
  {
  public:
    AWS_KINESISANALYTICSV2_API DeleteApplicationVpcConfigurationRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DeleteApplicationVpcConfiguration"; }

    AWS_KINESISANALYTICSV2_API Aws::String SerializePayload() const override;

    AWS_KINESISANALYTICSV2_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The name of an existing application.</p>
     */
    inline const Aws::String& GetApplicationName() const{ return m_applicationName; }
    inline bool ApplicationNameHasBeenSet() const { return m_applicationNameHasBeenSet; }
    inline void SetApplicationName(const Aws::String& value) { m_applicationNameHasBeenSet = true; m_applicationName = value; }
    inline void SetApplicationName(Aws::String&& value) { m_applicationNameHasBeenSet = true; m_applicationName = std::move(value); }
    inline void SetApplicationName(const char* value) { m_applicationNameHasBeenSet = true; m_applicationName.assign(value); }
    inline DeleteApplicationVpcConfigurationRequest& WithApplicationName(const Aws::String& value) { SetApplicationName(value); return *this;}
    inline DeleteApplicationVpcConfigurationRequest& WithApplicationName(Aws::String&& value) { SetApplicationName(std::move(value)); return *this;}
    inline DeleteApplicationVpcConfigurationRequest& WithApplicationName(const char* value) { SetApplicationName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The current application version ID. You must provide the
     * <code>CurrentApplicationVersionId</code> or the <code>ConditionalToken</code>.
     * You can retrieve the application version ID using <a>DescribeApplication</a>.
     * For better concurrency support, use the <code>ConditionalToken</code> parameter
     * instead of <code>CurrentApplicationVersionId</code>.</p>
     */
    inline long long GetCurrentApplicationVersionId() const{ return m_currentApplicationVersionId; }
    inline bool CurrentApplicationVersionIdHasBeenSet() const { return m_currentApplicationVersionIdHasBeenSet; }
    inline void SetCurrentApplicationVersionId(long long value) { m_currentApplicationVersionIdHasBeenSet = true; m_currentApplicationVersionId = value; }
    inline DeleteApplicationVpcConfigurationRequest& WithCurrentApplicationVersionId(long long value) { SetCurrentApplicationVersionId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the VPC configuration to delete.</p>
     */
    inline const Aws::String& GetVpcConfigurationId() const{ return m_vpcConfigurationId; }
    inline bool VpcConfigurationIdHasBeenSet() const { return m_vpcConfigurationIdHasBeenSet; }
    inline void SetVpcConfigurationId(const Aws::String& value) { m_vpcConfigurationIdHasBeenSet = true; m_vpcConfigurationId = value; }
    inline void SetVpcConfigurationId(Aws::String&& value) { m_vpcConfigurationIdHasBeenSet = true; m_vpcConfigurationId = std::move(value); }
    inline void SetVpcConfigurationId(const char* value) { m_vpcConfigurationIdHasBeenSet = true; m_vpcConfigurationId.assign(value); }
    inline DeleteApplicationVpcConfigurationRequest& WithVpcConfigurationId(const Aws::String& value) { SetVpcConfigurationId(value); return *this;}
    inline DeleteApplicationVpcConfigurationRequest& WithVpcConfigurationId(Aws::String&& value) { SetVpcConfigurationId(std::move(value)); return *this;}
    inline DeleteApplicationVpcConfigurationRequest& WithVpcConfigurationId(const char* value) { SetVpcConfigurationId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A value you use to implement strong concurrency for application updates. You
     * must provide the <code>CurrentApplicationVersionId</code> or the
     * <code>ConditionalToken</code>. You get the application's current
     * <code>ConditionalToken</code> using <a>DescribeApplication</a>. For better
     * concurrency support, use the <code>ConditionalToken</code> parameter instead of
     * <code>CurrentApplicationVersionId</code>.</p>
     */
    inline const Aws::String& GetConditionalToken() const{ return m_conditionalToken; }
    inline bool ConditionalTokenHasBeenSet() const { return m_conditionalTokenHasBeenSet; }
    inline void SetConditionalToken(const Aws::String& value) { m_conditionalTokenHasBeenSet = true; m_conditionalToken = value; }
    inline void SetConditionalToken(Aws::String&& value) { m_conditionalTokenHasBeenSet = true; m_conditionalToken = std::move(value); }
    inline void SetConditionalToken(const char* value) { m_conditionalTokenHasBeenSet = true; m_conditionalToken.assign(value); }
    inline DeleteApplicationVpcConfigurationRequest& WithConditionalToken(const Aws::String& value) { SetConditionalToken(value); return *this;}
    inline DeleteApplicationVpcConfigurationRequest& WithConditionalToken(Aws::String&& value) { SetConditionalToken(std::move(value)); return *this;}
    inline DeleteApplicationVpcConfigurationRequest& WithConditionalToken(const char* value) { SetConditionalToken(value); return *this;}
    ///@}
  private:

    Aws::String m_applicationName;
    bool m_applicationNameHasBeenSet = false;

    long long m_currentApplicationVersionId;
    bool m_currentApplicationVersionIdHasBeenSet = false;

    Aws::String m_vpcConfigurationId;
    bool m_vpcConfigurationIdHasBeenSet = false;

    Aws::String m_conditionalToken;
    bool m_conditionalTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace KinesisAnalyticsV2
} // namespace Aws
