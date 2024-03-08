/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/config/ConfigService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/config/model/RecordingFrequency.h>
#include <aws/config/model/ResourceType.h>
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
namespace ConfigService
{
namespace Model
{

  /**
   * <p>An object for you to specify your overrides for the recording
   * mode.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/config-2014-11-12/RecordingModeOverride">AWS
   * API Reference</a></p>
   */
  class RecordingModeOverride
  {
  public:
    AWS_CONFIGSERVICE_API RecordingModeOverride();
    AWS_CONFIGSERVICE_API RecordingModeOverride(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONFIGSERVICE_API RecordingModeOverride& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONFIGSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>A description that you provide for the override.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>A description that you provide for the override.</p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>A description that you provide for the override.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>A description that you provide for the override.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>A description that you provide for the override.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>A description that you provide for the override.</p>
     */
    inline RecordingModeOverride& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>A description that you provide for the override.</p>
     */
    inline RecordingModeOverride& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>A description that you provide for the override.</p>
     */
    inline RecordingModeOverride& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>A comma-separated list that specifies which resource types Config includes in
     * the override.</p>  <p>Daily recording is not supported for the
     * following resource types:</p> <ul> <li> <p>
     * <code>AWS::Config::ResourceCompliance</code> </p> </li> <li> <p>
     * <code>AWS::Config::ConformancePackCompliance</code> </p> </li> <li> <p>
     * <code>AWS::Config::ConfigurationRecorder</code> </p> </li> </ul> 
     */
    inline const Aws::Vector<ResourceType>& GetResourceTypes() const{ return m_resourceTypes; }

    /**
     * <p>A comma-separated list that specifies which resource types Config includes in
     * the override.</p>  <p>Daily recording is not supported for the
     * following resource types:</p> <ul> <li> <p>
     * <code>AWS::Config::ResourceCompliance</code> </p> </li> <li> <p>
     * <code>AWS::Config::ConformancePackCompliance</code> </p> </li> <li> <p>
     * <code>AWS::Config::ConfigurationRecorder</code> </p> </li> </ul> 
     */
    inline bool ResourceTypesHasBeenSet() const { return m_resourceTypesHasBeenSet; }

    /**
     * <p>A comma-separated list that specifies which resource types Config includes in
     * the override.</p>  <p>Daily recording is not supported for the
     * following resource types:</p> <ul> <li> <p>
     * <code>AWS::Config::ResourceCompliance</code> </p> </li> <li> <p>
     * <code>AWS::Config::ConformancePackCompliance</code> </p> </li> <li> <p>
     * <code>AWS::Config::ConfigurationRecorder</code> </p> </li> </ul> 
     */
    inline void SetResourceTypes(const Aws::Vector<ResourceType>& value) { m_resourceTypesHasBeenSet = true; m_resourceTypes = value; }

    /**
     * <p>A comma-separated list that specifies which resource types Config includes in
     * the override.</p>  <p>Daily recording is not supported for the
     * following resource types:</p> <ul> <li> <p>
     * <code>AWS::Config::ResourceCompliance</code> </p> </li> <li> <p>
     * <code>AWS::Config::ConformancePackCompliance</code> </p> </li> <li> <p>
     * <code>AWS::Config::ConfigurationRecorder</code> </p> </li> </ul> 
     */
    inline void SetResourceTypes(Aws::Vector<ResourceType>&& value) { m_resourceTypesHasBeenSet = true; m_resourceTypes = std::move(value); }

    /**
     * <p>A comma-separated list that specifies which resource types Config includes in
     * the override.</p>  <p>Daily recording is not supported for the
     * following resource types:</p> <ul> <li> <p>
     * <code>AWS::Config::ResourceCompliance</code> </p> </li> <li> <p>
     * <code>AWS::Config::ConformancePackCompliance</code> </p> </li> <li> <p>
     * <code>AWS::Config::ConfigurationRecorder</code> </p> </li> </ul> 
     */
    inline RecordingModeOverride& WithResourceTypes(const Aws::Vector<ResourceType>& value) { SetResourceTypes(value); return *this;}

    /**
     * <p>A comma-separated list that specifies which resource types Config includes in
     * the override.</p>  <p>Daily recording is not supported for the
     * following resource types:</p> <ul> <li> <p>
     * <code>AWS::Config::ResourceCompliance</code> </p> </li> <li> <p>
     * <code>AWS::Config::ConformancePackCompliance</code> </p> </li> <li> <p>
     * <code>AWS::Config::ConfigurationRecorder</code> </p> </li> </ul> 
     */
    inline RecordingModeOverride& WithResourceTypes(Aws::Vector<ResourceType>&& value) { SetResourceTypes(std::move(value)); return *this;}

    /**
     * <p>A comma-separated list that specifies which resource types Config includes in
     * the override.</p>  <p>Daily recording is not supported for the
     * following resource types:</p> <ul> <li> <p>
     * <code>AWS::Config::ResourceCompliance</code> </p> </li> <li> <p>
     * <code>AWS::Config::ConformancePackCompliance</code> </p> </li> <li> <p>
     * <code>AWS::Config::ConfigurationRecorder</code> </p> </li> </ul> 
     */
    inline RecordingModeOverride& AddResourceTypes(const ResourceType& value) { m_resourceTypesHasBeenSet = true; m_resourceTypes.push_back(value); return *this; }

    /**
     * <p>A comma-separated list that specifies which resource types Config includes in
     * the override.</p>  <p>Daily recording is not supported for the
     * following resource types:</p> <ul> <li> <p>
     * <code>AWS::Config::ResourceCompliance</code> </p> </li> <li> <p>
     * <code>AWS::Config::ConformancePackCompliance</code> </p> </li> <li> <p>
     * <code>AWS::Config::ConfigurationRecorder</code> </p> </li> </ul> 
     */
    inline RecordingModeOverride& AddResourceTypes(ResourceType&& value) { m_resourceTypesHasBeenSet = true; m_resourceTypes.push_back(std::move(value)); return *this; }


    /**
     * <p>The recording frequency that will be applied to all the resource types
     * specified in the override.</p> <ul> <li> <p>Continuous recording allows you to
     * record configuration changes continuously whenever a change occurs.</p> </li>
     * <li> <p>Daily recording allows you to receive a configuration item (CI)
     * representing the most recent state of your resources over the last 24-hour
     * period, only if it’s different from the previous CI recorded. </p> </li> </ul>
     *  <p>Firewall Manager depends on continuous recording to monitor your
     * resources. If you are using Firewall Manager, it is recommended that you set the
     * recording frequency to Continuous.</p> 
     */
    inline const RecordingFrequency& GetRecordingFrequency() const{ return m_recordingFrequency; }

    /**
     * <p>The recording frequency that will be applied to all the resource types
     * specified in the override.</p> <ul> <li> <p>Continuous recording allows you to
     * record configuration changes continuously whenever a change occurs.</p> </li>
     * <li> <p>Daily recording allows you to receive a configuration item (CI)
     * representing the most recent state of your resources over the last 24-hour
     * period, only if it’s different from the previous CI recorded. </p> </li> </ul>
     *  <p>Firewall Manager depends on continuous recording to monitor your
     * resources. If you are using Firewall Manager, it is recommended that you set the
     * recording frequency to Continuous.</p> 
     */
    inline bool RecordingFrequencyHasBeenSet() const { return m_recordingFrequencyHasBeenSet; }

    /**
     * <p>The recording frequency that will be applied to all the resource types
     * specified in the override.</p> <ul> <li> <p>Continuous recording allows you to
     * record configuration changes continuously whenever a change occurs.</p> </li>
     * <li> <p>Daily recording allows you to receive a configuration item (CI)
     * representing the most recent state of your resources over the last 24-hour
     * period, only if it’s different from the previous CI recorded. </p> </li> </ul>
     *  <p>Firewall Manager depends on continuous recording to monitor your
     * resources. If you are using Firewall Manager, it is recommended that you set the
     * recording frequency to Continuous.</p> 
     */
    inline void SetRecordingFrequency(const RecordingFrequency& value) { m_recordingFrequencyHasBeenSet = true; m_recordingFrequency = value; }

    /**
     * <p>The recording frequency that will be applied to all the resource types
     * specified in the override.</p> <ul> <li> <p>Continuous recording allows you to
     * record configuration changes continuously whenever a change occurs.</p> </li>
     * <li> <p>Daily recording allows you to receive a configuration item (CI)
     * representing the most recent state of your resources over the last 24-hour
     * period, only if it’s different from the previous CI recorded. </p> </li> </ul>
     *  <p>Firewall Manager depends on continuous recording to monitor your
     * resources. If you are using Firewall Manager, it is recommended that you set the
     * recording frequency to Continuous.</p> 
     */
    inline void SetRecordingFrequency(RecordingFrequency&& value) { m_recordingFrequencyHasBeenSet = true; m_recordingFrequency = std::move(value); }

    /**
     * <p>The recording frequency that will be applied to all the resource types
     * specified in the override.</p> <ul> <li> <p>Continuous recording allows you to
     * record configuration changes continuously whenever a change occurs.</p> </li>
     * <li> <p>Daily recording allows you to receive a configuration item (CI)
     * representing the most recent state of your resources over the last 24-hour
     * period, only if it’s different from the previous CI recorded. </p> </li> </ul>
     *  <p>Firewall Manager depends on continuous recording to monitor your
     * resources. If you are using Firewall Manager, it is recommended that you set the
     * recording frequency to Continuous.</p> 
     */
    inline RecordingModeOverride& WithRecordingFrequency(const RecordingFrequency& value) { SetRecordingFrequency(value); return *this;}

    /**
     * <p>The recording frequency that will be applied to all the resource types
     * specified in the override.</p> <ul> <li> <p>Continuous recording allows you to
     * record configuration changes continuously whenever a change occurs.</p> </li>
     * <li> <p>Daily recording allows you to receive a configuration item (CI)
     * representing the most recent state of your resources over the last 24-hour
     * period, only if it’s different from the previous CI recorded. </p> </li> </ul>
     *  <p>Firewall Manager depends on continuous recording to monitor your
     * resources. If you are using Firewall Manager, it is recommended that you set the
     * recording frequency to Continuous.</p> 
     */
    inline RecordingModeOverride& WithRecordingFrequency(RecordingFrequency&& value) { SetRecordingFrequency(std::move(value)); return *this;}

  private:

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::Vector<ResourceType> m_resourceTypes;
    bool m_resourceTypesHasBeenSet = false;

    RecordingFrequency m_recordingFrequency;
    bool m_recordingFrequencyHasBeenSet = false;
  };

} // namespace Model
} // namespace ConfigService
} // namespace Aws
