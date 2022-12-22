/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/medialive/MediaLive_EXPORTS.h>

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
   * Ancillary Source Settings<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/AncillarySourceSettings">AWS
   * API Reference</a></p>
   */
  class AncillarySourceSettings
  {
  public:
    AWS_MEDIALIVE_API AncillarySourceSettings();
    AWS_MEDIALIVE_API AncillarySourceSettings(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIALIVE_API AncillarySourceSettings& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIALIVE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * Specifies the number (1 to 4) of the captions channel you want to extract from
     * the ancillary captions. If you plan to convert the ancillary captions to another
     * format, complete this field. If you plan to choose Embedded as the captions
     * destination in the output (to pass through all the channels in the ancillary
     * captions), leave this field blank because MediaLive ignores the field.
     */
    inline int GetSourceAncillaryChannelNumber() const{ return m_sourceAncillaryChannelNumber; }

    /**
     * Specifies the number (1 to 4) of the captions channel you want to extract from
     * the ancillary captions. If you plan to convert the ancillary captions to another
     * format, complete this field. If you plan to choose Embedded as the captions
     * destination in the output (to pass through all the channels in the ancillary
     * captions), leave this field blank because MediaLive ignores the field.
     */
    inline bool SourceAncillaryChannelNumberHasBeenSet() const { return m_sourceAncillaryChannelNumberHasBeenSet; }

    /**
     * Specifies the number (1 to 4) of the captions channel you want to extract from
     * the ancillary captions. If you plan to convert the ancillary captions to another
     * format, complete this field. If you plan to choose Embedded as the captions
     * destination in the output (to pass through all the channels in the ancillary
     * captions), leave this field blank because MediaLive ignores the field.
     */
    inline void SetSourceAncillaryChannelNumber(int value) { m_sourceAncillaryChannelNumberHasBeenSet = true; m_sourceAncillaryChannelNumber = value; }

    /**
     * Specifies the number (1 to 4) of the captions channel you want to extract from
     * the ancillary captions. If you plan to convert the ancillary captions to another
     * format, complete this field. If you plan to choose Embedded as the captions
     * destination in the output (to pass through all the channels in the ancillary
     * captions), leave this field blank because MediaLive ignores the field.
     */
    inline AncillarySourceSettings& WithSourceAncillaryChannelNumber(int value) { SetSourceAncillaryChannelNumber(value); return *this;}

  private:

    int m_sourceAncillaryChannelNumber;
    bool m_sourceAncillaryChannelNumberHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaLive
} // namespace Aws
