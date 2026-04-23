/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#pragma once
#include <aws/medialive/MediaLive_EXPORTS.h>
#include <aws/medialive/model/Scte35SegmentationDescriptor.h>
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
namespace MediaLive
{
namespace Model
{

  /**
   * SCTE-35 Descriptor settings.<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/Scte35DescriptorSettings">AWS
   * API Reference</a></p>
   */
  class AWS_MEDIALIVE_API Scte35DescriptorSettings
  {
  public:
    Scte35DescriptorSettings();
    Scte35DescriptorSettings(Aws::Utils::Json::JsonView jsonValue);
    Scte35DescriptorSettings& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * SCTE-35 Segmentation Descriptor.
     */
    inline const Scte35SegmentationDescriptor& GetSegmentationDescriptorScte35DescriptorSettings() const{ return m_segmentationDescriptorScte35DescriptorSettings; }

    /**
     * SCTE-35 Segmentation Descriptor.
     */
    inline bool SegmentationDescriptorScte35DescriptorSettingsHasBeenSet() const { return m_segmentationDescriptorScte35DescriptorSettingsHasBeenSet; }

    /**
     * SCTE-35 Segmentation Descriptor.
     */
    inline void SetSegmentationDescriptorScte35DescriptorSettings(const Scte35SegmentationDescriptor& value) { m_segmentationDescriptorScte35DescriptorSettingsHasBeenSet = true; m_segmentationDescriptorScte35DescriptorSettings = value; }

    /**
     * SCTE-35 Segmentation Descriptor.
     */
    inline void SetSegmentationDescriptorScte35DescriptorSettings(Scte35SegmentationDescriptor&& value) { m_segmentationDescriptorScte35DescriptorSettingsHasBeenSet = true; m_segmentationDescriptorScte35DescriptorSettings = std::move(value); }

    /**
     * SCTE-35 Segmentation Descriptor.
     */
    inline Scte35DescriptorSettings& WithSegmentationDescriptorScte35DescriptorSettings(const Scte35SegmentationDescriptor& value) { SetSegmentationDescriptorScte35DescriptorSettings(value); return *this;}

    /**
     * SCTE-35 Segmentation Descriptor.
     */
    inline Scte35DescriptorSettings& WithSegmentationDescriptorScte35DescriptorSettings(Scte35SegmentationDescriptor&& value) { SetSegmentationDescriptorScte35DescriptorSettings(std::move(value)); return *this;}

  private:

    Scte35SegmentationDescriptor m_segmentationDescriptorScte35DescriptorSettings;
    bool m_segmentationDescriptorScte35DescriptorSettingsHasBeenSet;
  };

} // namespace Model
} // namespace MediaLive
} // namespace Aws
