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
#include <aws/mediapackage-vod/MediaPackageVod_EXPORTS.h>
#include <aws/mediapackage-vod/model/StreamOrder.h>
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
namespace MediaPackageVod
{
namespace Model
{

  /**
   * A StreamSelection configuration.<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mediapackage-vod-2018-11-07/StreamSelection">AWS
   * API Reference</a></p>
   */
  class AWS_MEDIAPACKAGEVOD_API StreamSelection
  {
  public:
    StreamSelection();
    StreamSelection(Aws::Utils::Json::JsonView jsonValue);
    StreamSelection& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * The maximum video bitrate (bps) to include in output.
     */
    inline int GetMaxVideoBitsPerSecond() const{ return m_maxVideoBitsPerSecond; }

    /**
     * The maximum video bitrate (bps) to include in output.
     */
    inline bool MaxVideoBitsPerSecondHasBeenSet() const { return m_maxVideoBitsPerSecondHasBeenSet; }

    /**
     * The maximum video bitrate (bps) to include in output.
     */
    inline void SetMaxVideoBitsPerSecond(int value) { m_maxVideoBitsPerSecondHasBeenSet = true; m_maxVideoBitsPerSecond = value; }

    /**
     * The maximum video bitrate (bps) to include in output.
     */
    inline StreamSelection& WithMaxVideoBitsPerSecond(int value) { SetMaxVideoBitsPerSecond(value); return *this;}


    /**
     * The minimum video bitrate (bps) to include in output.
     */
    inline int GetMinVideoBitsPerSecond() const{ return m_minVideoBitsPerSecond; }

    /**
     * The minimum video bitrate (bps) to include in output.
     */
    inline bool MinVideoBitsPerSecondHasBeenSet() const { return m_minVideoBitsPerSecondHasBeenSet; }

    /**
     * The minimum video bitrate (bps) to include in output.
     */
    inline void SetMinVideoBitsPerSecond(int value) { m_minVideoBitsPerSecondHasBeenSet = true; m_minVideoBitsPerSecond = value; }

    /**
     * The minimum video bitrate (bps) to include in output.
     */
    inline StreamSelection& WithMinVideoBitsPerSecond(int value) { SetMinVideoBitsPerSecond(value); return *this;}


    /**
     * A directive that determines the order of streams in the output.
     */
    inline const StreamOrder& GetStreamOrder() const{ return m_streamOrder; }

    /**
     * A directive that determines the order of streams in the output.
     */
    inline bool StreamOrderHasBeenSet() const { return m_streamOrderHasBeenSet; }

    /**
     * A directive that determines the order of streams in the output.
     */
    inline void SetStreamOrder(const StreamOrder& value) { m_streamOrderHasBeenSet = true; m_streamOrder = value; }

    /**
     * A directive that determines the order of streams in the output.
     */
    inline void SetStreamOrder(StreamOrder&& value) { m_streamOrderHasBeenSet = true; m_streamOrder = std::move(value); }

    /**
     * A directive that determines the order of streams in the output.
     */
    inline StreamSelection& WithStreamOrder(const StreamOrder& value) { SetStreamOrder(value); return *this;}

    /**
     * A directive that determines the order of streams in the output.
     */
    inline StreamSelection& WithStreamOrder(StreamOrder&& value) { SetStreamOrder(std::move(value)); return *this;}

  private:

    int m_maxVideoBitsPerSecond;
    bool m_maxVideoBitsPerSecondHasBeenSet;

    int m_minVideoBitsPerSecond;
    bool m_minVideoBitsPerSecondHasBeenSet;

    StreamOrder m_streamOrder;
    bool m_streamOrderHasBeenSet;
  };

} // namespace Model
} // namespace MediaPackageVod
} // namespace Aws
