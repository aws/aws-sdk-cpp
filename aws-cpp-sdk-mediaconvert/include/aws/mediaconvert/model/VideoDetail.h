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
#include <aws/mediaconvert/MediaConvert_EXPORTS.h>

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
namespace MediaConvert
{
namespace Model
{

  /**
   * Contains details about the output's video stream<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconvert-2017-08-29/VideoDetail">AWS
   * API Reference</a></p>
   */
  class AWS_MEDIACONVERT_API VideoDetail
  {
  public:
    VideoDetail();
    VideoDetail(Aws::Utils::Json::JsonView jsonValue);
    VideoDetail& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * Height in pixels for the output
     */
    inline int GetHeightInPx() const{ return m_heightInPx; }

    /**
     * Height in pixels for the output
     */
    inline bool HeightInPxHasBeenSet() const { return m_heightInPxHasBeenSet; }

    /**
     * Height in pixels for the output
     */
    inline void SetHeightInPx(int value) { m_heightInPxHasBeenSet = true; m_heightInPx = value; }

    /**
     * Height in pixels for the output
     */
    inline VideoDetail& WithHeightInPx(int value) { SetHeightInPx(value); return *this;}


    /**
     * Width in pixels for the output
     */
    inline int GetWidthInPx() const{ return m_widthInPx; }

    /**
     * Width in pixels for the output
     */
    inline bool WidthInPxHasBeenSet() const { return m_widthInPxHasBeenSet; }

    /**
     * Width in pixels for the output
     */
    inline void SetWidthInPx(int value) { m_widthInPxHasBeenSet = true; m_widthInPx = value; }

    /**
     * Width in pixels for the output
     */
    inline VideoDetail& WithWidthInPx(int value) { SetWidthInPx(value); return *this;}

  private:

    int m_heightInPx;
    bool m_heightInPxHasBeenSet;

    int m_widthInPx;
    bool m_widthInPxHasBeenSet;
  };

} // namespace Model
} // namespace MediaConvert
} // namespace Aws
