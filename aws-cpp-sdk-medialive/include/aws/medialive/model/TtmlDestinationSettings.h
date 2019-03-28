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
#include <aws/medialive/model/TtmlDestinationStyleControl.h>
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
   * Ttml Destination Settings<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/TtmlDestinationSettings">AWS
   * API Reference</a></p>
   */
  class AWS_MEDIALIVE_API TtmlDestinationSettings
  {
  public:
    TtmlDestinationSettings();
    TtmlDestinationSettings(Aws::Utils::Json::JsonView jsonValue);
    TtmlDestinationSettings& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * When set to passthrough, passes through style and position information from a
     * TTML-like input source (TTML, SMPTE-TT, CFF-TT) to the CFF-TT output or TTML
     * output.
     */
    inline const TtmlDestinationStyleControl& GetStyleControl() const{ return m_styleControl; }

    /**
     * When set to passthrough, passes through style and position information from a
     * TTML-like input source (TTML, SMPTE-TT, CFF-TT) to the CFF-TT output or TTML
     * output.
     */
    inline bool StyleControlHasBeenSet() const { return m_styleControlHasBeenSet; }

    /**
     * When set to passthrough, passes through style and position information from a
     * TTML-like input source (TTML, SMPTE-TT, CFF-TT) to the CFF-TT output or TTML
     * output.
     */
    inline void SetStyleControl(const TtmlDestinationStyleControl& value) { m_styleControlHasBeenSet = true; m_styleControl = value; }

    /**
     * When set to passthrough, passes through style and position information from a
     * TTML-like input source (TTML, SMPTE-TT, CFF-TT) to the CFF-TT output or TTML
     * output.
     */
    inline void SetStyleControl(TtmlDestinationStyleControl&& value) { m_styleControlHasBeenSet = true; m_styleControl = std::move(value); }

    /**
     * When set to passthrough, passes through style and position information from a
     * TTML-like input source (TTML, SMPTE-TT, CFF-TT) to the CFF-TT output or TTML
     * output.
     */
    inline TtmlDestinationSettings& WithStyleControl(const TtmlDestinationStyleControl& value) { SetStyleControl(value); return *this;}

    /**
     * When set to passthrough, passes through style and position information from a
     * TTML-like input source (TTML, SMPTE-TT, CFF-TT) to the CFF-TT output or TTML
     * output.
     */
    inline TtmlDestinationSettings& WithStyleControl(TtmlDestinationStyleControl&& value) { SetStyleControl(std::move(value)); return *this;}

  private:

    TtmlDestinationStyleControl m_styleControl;
    bool m_styleControlHasBeenSet;
  };

} // namespace Model
} // namespace MediaLive
} // namespace Aws
