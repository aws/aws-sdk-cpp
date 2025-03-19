/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/apprunner/AppRunner_EXPORTS.h>
#include <aws/apprunner/AppRunnerRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/apprunner/model/TraceConfiguration.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/apprunner/model/Tag.h>
#include <utility>

namespace Aws
{
namespace AppRunner
{
namespace Model
{

  /**
   */
  class CreateObservabilityConfigurationRequest : public AppRunnerRequest
  {
  public:
    AWS_APPRUNNER_API CreateObservabilityConfigurationRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateObservabilityConfiguration"; }

    AWS_APPRUNNER_API Aws::String SerializePayload() const override;

    AWS_APPRUNNER_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>A name for the observability configuration. When you use it for the first
     * time in an Amazon Web Services Region, App Runner creates revision number
     * <code>1</code> of this name. When you use the same name in subsequent calls, App
     * Runner creates incremental revisions of the configuration.</p>  <p>The
     * name <code>DefaultConfiguration</code> is reserved. You can't use it to create a
     * new observability configuration, and you can't create a revision of it.</p>
     * <p>When you want to use your own observability configuration for your App Runner
     * service, <i>create a configuration with a different name</i>, and then provide
     * it when you create or update your service.</p> 
     */
    inline const Aws::String& GetObservabilityConfigurationName() const { return m_observabilityConfigurationName; }
    inline bool ObservabilityConfigurationNameHasBeenSet() const { return m_observabilityConfigurationNameHasBeenSet; }
    template<typename ObservabilityConfigurationNameT = Aws::String>
    void SetObservabilityConfigurationName(ObservabilityConfigurationNameT&& value) { m_observabilityConfigurationNameHasBeenSet = true; m_observabilityConfigurationName = std::forward<ObservabilityConfigurationNameT>(value); }
    template<typename ObservabilityConfigurationNameT = Aws::String>
    CreateObservabilityConfigurationRequest& WithObservabilityConfigurationName(ObservabilityConfigurationNameT&& value) { SetObservabilityConfigurationName(std::forward<ObservabilityConfigurationNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The configuration of the tracing feature within this observability
     * configuration. If you don't specify it, App Runner doesn't enable tracing.</p>
     */
    inline const TraceConfiguration& GetTraceConfiguration() const { return m_traceConfiguration; }
    inline bool TraceConfigurationHasBeenSet() const { return m_traceConfigurationHasBeenSet; }
    template<typename TraceConfigurationT = TraceConfiguration>
    void SetTraceConfiguration(TraceConfigurationT&& value) { m_traceConfigurationHasBeenSet = true; m_traceConfiguration = std::forward<TraceConfigurationT>(value); }
    template<typename TraceConfigurationT = TraceConfiguration>
    CreateObservabilityConfigurationRequest& WithTraceConfiguration(TraceConfigurationT&& value) { SetTraceConfiguration(std::forward<TraceConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of metadata items that you can associate with your observability
     * configuration resource. A tag is a key-value pair.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const { return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    template<typename TagsT = Aws::Vector<Tag>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Vector<Tag>>
    CreateObservabilityConfigurationRequest& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsT = Tag>
    CreateObservabilityConfigurationRequest& AddTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags.emplace_back(std::forward<TagsT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_observabilityConfigurationName;
    bool m_observabilityConfigurationNameHasBeenSet = false;

    TraceConfiguration m_traceConfiguration;
    bool m_traceConfigurationHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace AppRunner
} // namespace Aws
