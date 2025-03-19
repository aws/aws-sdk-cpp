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
    AWS_CHIMESDKMEDIAPIPELINES_API UpdateMediaInsightsPipelineConfigurationRequest() = default;

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
    inline const Aws::String& GetIdentifier() const { return m_identifier; }
    inline bool IdentifierHasBeenSet() const { return m_identifierHasBeenSet; }
    template<typename IdentifierT = Aws::String>
    void SetIdentifier(IdentifierT&& value) { m_identifierHasBeenSet = true; m_identifier = std::forward<IdentifierT>(value); }
    template<typename IdentifierT = Aws::String>
    UpdateMediaInsightsPipelineConfigurationRequest& WithIdentifier(IdentifierT&& value) { SetIdentifier(std::forward<IdentifierT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the role used by the service to access Amazon Web Services
     * resources.</p>
     */
    inline const Aws::String& GetResourceAccessRoleArn() const { return m_resourceAccessRoleArn; }
    inline bool ResourceAccessRoleArnHasBeenSet() const { return m_resourceAccessRoleArnHasBeenSet; }
    template<typename ResourceAccessRoleArnT = Aws::String>
    void SetResourceAccessRoleArn(ResourceAccessRoleArnT&& value) { m_resourceAccessRoleArnHasBeenSet = true; m_resourceAccessRoleArn = std::forward<ResourceAccessRoleArnT>(value); }
    template<typename ResourceAccessRoleArnT = Aws::String>
    UpdateMediaInsightsPipelineConfigurationRequest& WithResourceAccessRoleArn(ResourceAccessRoleArnT&& value) { SetResourceAccessRoleArn(std::forward<ResourceAccessRoleArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The configuration settings for real-time alerts for the media insights
     * pipeline.</p>
     */
    inline const RealTimeAlertConfiguration& GetRealTimeAlertConfiguration() const { return m_realTimeAlertConfiguration; }
    inline bool RealTimeAlertConfigurationHasBeenSet() const { return m_realTimeAlertConfigurationHasBeenSet; }
    template<typename RealTimeAlertConfigurationT = RealTimeAlertConfiguration>
    void SetRealTimeAlertConfiguration(RealTimeAlertConfigurationT&& value) { m_realTimeAlertConfigurationHasBeenSet = true; m_realTimeAlertConfiguration = std::forward<RealTimeAlertConfigurationT>(value); }
    template<typename RealTimeAlertConfigurationT = RealTimeAlertConfiguration>
    UpdateMediaInsightsPipelineConfigurationRequest& WithRealTimeAlertConfiguration(RealTimeAlertConfigurationT&& value) { SetRealTimeAlertConfiguration(std::forward<RealTimeAlertConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The elements in the request, such as a processor for Amazon Transcribe or a
     * sink for a Kinesis Data Stream..</p>
     */
    inline const Aws::Vector<MediaInsightsPipelineConfigurationElement>& GetElements() const { return m_elements; }
    inline bool ElementsHasBeenSet() const { return m_elementsHasBeenSet; }
    template<typename ElementsT = Aws::Vector<MediaInsightsPipelineConfigurationElement>>
    void SetElements(ElementsT&& value) { m_elementsHasBeenSet = true; m_elements = std::forward<ElementsT>(value); }
    template<typename ElementsT = Aws::Vector<MediaInsightsPipelineConfigurationElement>>
    UpdateMediaInsightsPipelineConfigurationRequest& WithElements(ElementsT&& value) { SetElements(std::forward<ElementsT>(value)); return *this;}
    template<typename ElementsT = MediaInsightsPipelineConfigurationElement>
    UpdateMediaInsightsPipelineConfigurationRequest& AddElements(ElementsT&& value) { m_elementsHasBeenSet = true; m_elements.emplace_back(std::forward<ElementsT>(value)); return *this; }
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
