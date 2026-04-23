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
#include <aws/medialive/model/OutputLocationRef.h>
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
   * Frame Capture Group Settings<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/FrameCaptureGroupSettings">AWS
   * API Reference</a></p>
   */
  class AWS_MEDIALIVE_API FrameCaptureGroupSettings
  {
  public:
    FrameCaptureGroupSettings();
    FrameCaptureGroupSettings(Aws::Utils::Json::JsonView jsonValue);
    FrameCaptureGroupSettings& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * The destination for the frame capture files. Either the URI for an Amazon S3
     * bucket and object, plus a file name prefix (for example,
     * s3ssl://sportsDelivery/highlights/20180820/curling_) or the URI for a MediaStore
     * container, plus a file name prefix (for example,
     * mediastoressl://sportsDelivery/20180820/curling_). The final file names consist
     * of the prefix from the destination field (for example, "curling_") + name
     * modifier + the counter (5 digits, starting from 00001) + extension (which is
     * always .jpg).  For example, curlingLow.00001.jpg
     */
    inline const OutputLocationRef& GetDestination() const{ return m_destination; }

    /**
     * The destination for the frame capture files. Either the URI for an Amazon S3
     * bucket and object, plus a file name prefix (for example,
     * s3ssl://sportsDelivery/highlights/20180820/curling_) or the URI for a MediaStore
     * container, plus a file name prefix (for example,
     * mediastoressl://sportsDelivery/20180820/curling_). The final file names consist
     * of the prefix from the destination field (for example, "curling_") + name
     * modifier + the counter (5 digits, starting from 00001) + extension (which is
     * always .jpg).  For example, curlingLow.00001.jpg
     */
    inline bool DestinationHasBeenSet() const { return m_destinationHasBeenSet; }

    /**
     * The destination for the frame capture files. Either the URI for an Amazon S3
     * bucket and object, plus a file name prefix (for example,
     * s3ssl://sportsDelivery/highlights/20180820/curling_) or the URI for a MediaStore
     * container, plus a file name prefix (for example,
     * mediastoressl://sportsDelivery/20180820/curling_). The final file names consist
     * of the prefix from the destination field (for example, "curling_") + name
     * modifier + the counter (5 digits, starting from 00001) + extension (which is
     * always .jpg).  For example, curlingLow.00001.jpg
     */
    inline void SetDestination(const OutputLocationRef& value) { m_destinationHasBeenSet = true; m_destination = value; }

    /**
     * The destination for the frame capture files. Either the URI for an Amazon S3
     * bucket and object, plus a file name prefix (for example,
     * s3ssl://sportsDelivery/highlights/20180820/curling_) or the URI for a MediaStore
     * container, plus a file name prefix (for example,
     * mediastoressl://sportsDelivery/20180820/curling_). The final file names consist
     * of the prefix from the destination field (for example, "curling_") + name
     * modifier + the counter (5 digits, starting from 00001) + extension (which is
     * always .jpg).  For example, curlingLow.00001.jpg
     */
    inline void SetDestination(OutputLocationRef&& value) { m_destinationHasBeenSet = true; m_destination = std::move(value); }

    /**
     * The destination for the frame capture files. Either the URI for an Amazon S3
     * bucket and object, plus a file name prefix (for example,
     * s3ssl://sportsDelivery/highlights/20180820/curling_) or the URI for a MediaStore
     * container, plus a file name prefix (for example,
     * mediastoressl://sportsDelivery/20180820/curling_). The final file names consist
     * of the prefix from the destination field (for example, "curling_") + name
     * modifier + the counter (5 digits, starting from 00001) + extension (which is
     * always .jpg).  For example, curlingLow.00001.jpg
     */
    inline FrameCaptureGroupSettings& WithDestination(const OutputLocationRef& value) { SetDestination(value); return *this;}

    /**
     * The destination for the frame capture files. Either the URI for an Amazon S3
     * bucket and object, plus a file name prefix (for example,
     * s3ssl://sportsDelivery/highlights/20180820/curling_) or the URI for a MediaStore
     * container, plus a file name prefix (for example,
     * mediastoressl://sportsDelivery/20180820/curling_). The final file names consist
     * of the prefix from the destination field (for example, "curling_") + name
     * modifier + the counter (5 digits, starting from 00001) + extension (which is
     * always .jpg).  For example, curlingLow.00001.jpg
     */
    inline FrameCaptureGroupSettings& WithDestination(OutputLocationRef&& value) { SetDestination(std::move(value)); return *this;}

  private:

    OutputLocationRef m_destination;
    bool m_destinationHasBeenSet;
  };

} // namespace Model
} // namespace MediaLive
} // namespace Aws
