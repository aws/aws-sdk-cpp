/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/chime-sdk-media-pipelines/ChimeSDKMediaPipelines_EXPORTS.h>
#include <aws/chime-sdk-media-pipelines/ChimeSDKMediaPipelinesRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/chime-sdk-media-pipelines/model/RealTimeAlertConfiguration.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/chime-sdk-media-pipelines/model/MediaInsightsPipelineConfigurationElement.h>
#include <utility>

namespace Aws
{
namespace ChimeSDKMediaPipelines
{
namespace Model
{

  /**
   */
  class UpdateMediaInsightsPipelineConfigurationRequest : public ChimeSDKMediaPipelinesRequest
  {
  public:
    AWS_CHIMESDKMEDIAPIPELINES_API UpdateMediaInsightsPipelineConfigurationRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateMediaInsightsPipelineConfiguration"; }

    AWS_CHIMESDKMEDIAPIPELINES_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The unique identifier for the resource to be updated. Valid values include
     * the name and ARN of the media insights pipeline configuration.</p>
     */
    inline const Aws::String& GetIdentifier() const{ return m_identifier; }
    inline bool IdentifierHasBeenSet() const { return m_identifierHasBeenSet; }
    inline void SetIdentifier(const Aws::String& value) { m_identifierHasBeenSet = true; m_identifier = value; }
    inline void SetIdentifier(Aws::String&& value) { m_identifierHasBeenSet = true; m_identifier = std::move(value); }
    inline void SetIdentifier(const char* value) { m_identifierHasBeenSet = true; m_identifier.assign(value); }
    inline UpdateMediaInsightsPipelineConfigurationRequest& WithIdentifier(const Aws::String& value) { SetIdentifier(value); return *this;}
    inline UpdateMediaInsightsPipelineConfigurationRequest& WithIdentifier(Aws::String&& value) { SetIdentifier(std::move(value)); return *this;}
    inline UpdateMediaInsightsPipelineConfigurationRequest& WithIdentifier(const char* value) { SetIdentifier(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the role used by the service to access Amazon Web Services
     * resources.</p>
     */
    inline const Aws::String& GetResourceAccessRoleArn() const{ return m_resourceAccessRoleArn; }
    inline bool ResourceAccessRoleArnHasBeenSet() const { return m_resourceAccessRoleArnHasBeenSet; }
    inline void SetResourceAccessRoleArn(const Aws::String& value) { m_resourceAccessRoleArnHasBeenSet = true; m_resourceAccessRoleArn = value; }
    inline void SetResourceAccessRoleArn(Aws::String&& value) { m_resourceAccessRoleArnHasBeenSet = true; m_resourceAccessRoleArn = std::move(value); }
    inline void SetResourceAccessRoleArn(const char* value) { m_resourceAccessRoleArnHasBeenSet = true; m_resourceAccessRoleArn.assign(value); }
    inline UpdateMediaInsightsPipelineConfigurationRequest& WithResourceAccessRoleArn(const Aws::String& value) { SetResourceAccessRoleArn(value); return *this;}
    inline UpdateMediaInsightsPipelineConfigurationRequest& WithResourceAccessRoleArn(Aws::String&& value) { SetResourceAccessRoleArn(std::move(value)); return *this;}
    inline UpdateMediaInsightsPipelineConfigurationRequest& WithResourceAccessRoleArn(const char* value) { SetResourceAccessRoleArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The configuration settings for real-time alerts for the media insights
     * pipeline.</p>
     */
    inline const RealTimeAlertConfiguration& GetRealTimeAlertConfiguration() const{ return m_realTimeAlertConfiguration; }
    inline bool RealTimeAlertConfigurationHasBeenSet() const { return m_realTimeAlertConfigurationHasBeenSet; }
    inline void SetRealTimeAlertConfiguration(const RealTimeAlertConfiguration& value) { m_realTimeAlertConfigurationHasBeenSet = true; m_realTimeAlertConfiguration = value; }
    inline void SetRealTimeAlertConfiguration(RealTimeAlertConfiguration&& value) { m_realTimeAlertConfigurationHasBeenSet = true; m_realTimeAlertConfiguration = std::move(value); }
    inline UpdateMediaInsightsPipelineConfigurationRequest& WithRealTimeAlertConfiguration(const RealTimeAlertConfiguration& value) { SetRealTimeAlertConfiguration(value); return *this;}
    inline UpdateMediaInsightsPipelineConfigurationRequest& WithRealTimeAlertConfiguration(RealTimeAlertConfiguration&& value) { SetRealTimeAlertConfiguration(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The elements in the request, such as a processor for Amazon Transcribe or a
     * sink for a Kinesis Data Stream..</p>
     */
    inline const Aws::Vector<MediaInsightsPipelineConfigurationElement>& GetElements() const{ return m_elements; }
    inline bool ElementsHasBeenSet() const { return m_elementsHasBeenSet; }
    inline void SetElements(const Aws::Vector<MediaInsightsPipelineConfigurationElement>& value) { m_elementsHasBeenSet = true; m_elements = value; }
    inline void SetElements(Aws::Vector<MediaInsightsPipelineConfigurationElement>&& value) { m_elementsHasBeenSet = true; m_elements = std::move(value); }
    inline UpdateMediaInsightsPipelineConfigurationRequest& WithElements(const Aws::Vector<MediaInsightsPipelineConfigurationElement>& value) { SetElements(value); return *this;}
    inline UpdateMediaInsightsPipelineConfigurationRequest& WithElements(Aws::Vector<MediaInsightsPipelineConfigurationElement>&& value) { SetElements(std::move(value)); return *this;}
    inline UpdateMediaInsightsPipelineConfigurationRequest& AddElements(const MediaInsightsPipelineConfigurationElement& value) { m_elementsHasBeenSet = true; m_elements.push_back(value); return *this; }
    inline UpdateMediaInsightsPipelineConfigurationRequest& AddElements(MediaInsightsPipelineConfigurationElement&& value) { m_elementsHasBeenSet = true; m_elements.push_back(std::move(value)); return *this; }
    ///@}
  private:

    Aws::String m_identifier;
    bool m_identifierHasBeenSet = false;

    Aws::String m_resourceAccessRoleArn;
    bool m_resourceAccessRoleArnHasBeenSet = false;

    RealTimeAlertConfiguration m_realTimeAlertConfiguration;
    bool m_realTimeAlertConfigurationHasBeenSet = false;

    Aws::Vector<MediaInsightsPipelineConfigurationElement> m_elements;
    bool m_elementsHasBeenSet = false;
  };

} // namespace Model
} // namespace ChimeSDKMediaPipelines
} // namespace Aws
