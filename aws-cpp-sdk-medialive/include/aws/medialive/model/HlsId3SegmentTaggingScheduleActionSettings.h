/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/medialive/MediaLive_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
   * Settings for the action to insert a user-defined ID3 tag in each HLS
   * segment<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/HlsId3SegmentTaggingScheduleActionSettings">AWS
   * API Reference</a></p>
   */
  class HlsId3SegmentTaggingScheduleActionSettings
  {
  public:
    AWS_MEDIALIVE_API HlsId3SegmentTaggingScheduleActionSettings();
    AWS_MEDIALIVE_API HlsId3SegmentTaggingScheduleActionSettings(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIALIVE_API HlsId3SegmentTaggingScheduleActionSettings& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIALIVE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * ID3 tag to insert into each segment. Supports special keyword identifiers to
     * substitute in segment-related values.\nSupported keyword identifiers:
     * https://docs.aws.amazon.com/medialive/latest/ug/variable-data-identifiers.html
     */
    inline const Aws::String& GetTag() const{ return m_tag; }

    /**
     * ID3 tag to insert into each segment. Supports special keyword identifiers to
     * substitute in segment-related values.\nSupported keyword identifiers:
     * https://docs.aws.amazon.com/medialive/latest/ug/variable-data-identifiers.html
     */
    inline bool TagHasBeenSet() const { return m_tagHasBeenSet; }

    /**
     * ID3 tag to insert into each segment. Supports special keyword identifiers to
     * substitute in segment-related values.\nSupported keyword identifiers:
     * https://docs.aws.amazon.com/medialive/latest/ug/variable-data-identifiers.html
     */
    inline void SetTag(const Aws::String& value) { m_tagHasBeenSet = true; m_tag = value; }

    /**
     * ID3 tag to insert into each segment. Supports special keyword identifiers to
     * substitute in segment-related values.\nSupported keyword identifiers:
     * https://docs.aws.amazon.com/medialive/latest/ug/variable-data-identifiers.html
     */
    inline void SetTag(Aws::String&& value) { m_tagHasBeenSet = true; m_tag = std::move(value); }

    /**
     * ID3 tag to insert into each segment. Supports special keyword identifiers to
     * substitute in segment-related values.\nSupported keyword identifiers:
     * https://docs.aws.amazon.com/medialive/latest/ug/variable-data-identifiers.html
     */
    inline void SetTag(const char* value) { m_tagHasBeenSet = true; m_tag.assign(value); }

    /**
     * ID3 tag to insert into each segment. Supports special keyword identifiers to
     * substitute in segment-related values.\nSupported keyword identifiers:
     * https://docs.aws.amazon.com/medialive/latest/ug/variable-data-identifiers.html
     */
    inline HlsId3SegmentTaggingScheduleActionSettings& WithTag(const Aws::String& value) { SetTag(value); return *this;}

    /**
     * ID3 tag to insert into each segment. Supports special keyword identifiers to
     * substitute in segment-related values.\nSupported keyword identifiers:
     * https://docs.aws.amazon.com/medialive/latest/ug/variable-data-identifiers.html
     */
    inline HlsId3SegmentTaggingScheduleActionSettings& WithTag(Aws::String&& value) { SetTag(std::move(value)); return *this;}

    /**
     * ID3 tag to insert into each segment. Supports special keyword identifiers to
     * substitute in segment-related values.\nSupported keyword identifiers:
     * https://docs.aws.amazon.com/medialive/latest/ug/variable-data-identifiers.html
     */
    inline HlsId3SegmentTaggingScheduleActionSettings& WithTag(const char* value) { SetTag(value); return *this;}

  private:

    Aws::String m_tag;
    bool m_tagHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaLive
} // namespace Aws
