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
    AWS_CONFIGSERVICE_API RecordingModeOverride() = default;
    AWS_CONFIGSERVICE_API RecordingModeOverride(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONFIGSERVICE_API RecordingModeOverride& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONFIGSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>A description that you provide for the override.</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    RecordingModeOverride& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A comma-separated list that specifies which resource types Config includes in
     * the override.</p>  <p>Daily recording cannot be specified for the
     * following resource types:</p> <ul> <li> <p>
     * <code>AWS::Config::ResourceCompliance</code> </p> </li> <li> <p>
     * <code>AWS::Config::ConformancePackCompliance</code> </p> </li> <li> <p>
     * <code>AWS::Config::ConfigurationRecorder</code> </p> </li> </ul> 
     */
    inline const Aws::Vector<ResourceType>& GetResourceTypes() const { return m_resourceTypes; }
    inline bool ResourceTypesHasBeenSet() const { return m_resourceTypesHasBeenSet; }
    template<typename ResourceTypesT = Aws::Vector<ResourceType>>
    void SetResourceTypes(ResourceTypesT&& value) { m_resourceTypesHasBeenSet = true; m_resourceTypes = std::forward<ResourceTypesT>(value); }
    template<typename ResourceTypesT = Aws::Vector<ResourceType>>
    RecordingModeOverride& WithResourceTypes(ResourceTypesT&& value) { SetResourceTypes(std::forward<ResourceTypesT>(value)); return *this;}
    inline RecordingModeOverride& AddResourceTypes(ResourceType value) { m_resourceTypesHasBeenSet = true; m_resourceTypes.push_back(value); return *this; }
    ///@}

    ///@{
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
    inline RecordingFrequency GetRecordingFrequency() const { return m_recordingFrequency; }
    inline bool RecordingFrequencyHasBeenSet() const { return m_recordingFrequencyHasBeenSet; }
    inline void SetRecordingFrequency(RecordingFrequency value) { m_recordingFrequencyHasBeenSet = true; m_recordingFrequency = value; }
    inline RecordingModeOverride& WithRecordingFrequency(RecordingFrequency value) { SetRecordingFrequency(value); return *this;}
    ///@}
  private:

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::Vector<ResourceType> m_resourceTypes;
    bool m_resourceTypesHasBeenSet = false;

    RecordingFrequency m_recordingFrequency{RecordingFrequency::NOT_SET};
    bool m_recordingFrequencyHasBeenSet = false;
  };

} // namespace Model
} // namespace ConfigService
} // namespace Aws
