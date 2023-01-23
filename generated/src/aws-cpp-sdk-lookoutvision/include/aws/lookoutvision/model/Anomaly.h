/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lookoutvision/LookoutforVision_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/lookoutvision/model/PixelAnomaly.h>
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
namespace LookoutforVision
{
namespace Model
{

  /**
   * <p>Information about an anomaly type found on an image by an image segmentation
   * model. For more information, see <a>DetectAnomalies</a>.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/lookoutvision-2020-11-20/Anomaly">AWS
   * API Reference</a></p>
   */
  class Anomaly
  {
  public:
    AWS_LOOKOUTFORVISION_API Anomaly();
    AWS_LOOKOUTFORVISION_API Anomaly(Aws::Utils::Json::JsonView jsonValue);
    AWS_LOOKOUTFORVISION_API Anomaly& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LOOKOUTFORVISION_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name of an anomaly type found in an image. <code>Name</code> maps to an
     * anomaly type in the training dataset, apart from the anomaly type
     * <code>background</code>. The service automatically inserts the
     * <code>background</code> anomaly type into the response from
     * <code>DetectAnomalies</code>. </p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of an anomaly type found in an image. <code>Name</code> maps to an
     * anomaly type in the training dataset, apart from the anomaly type
     * <code>background</code>. The service automatically inserts the
     * <code>background</code> anomaly type into the response from
     * <code>DetectAnomalies</code>. </p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of an anomaly type found in an image. <code>Name</code> maps to an
     * anomaly type in the training dataset, apart from the anomaly type
     * <code>background</code>. The service automatically inserts the
     * <code>background</code> anomaly type into the response from
     * <code>DetectAnomalies</code>. </p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of an anomaly type found in an image. <code>Name</code> maps to an
     * anomaly type in the training dataset, apart from the anomaly type
     * <code>background</code>. The service automatically inserts the
     * <code>background</code> anomaly type into the response from
     * <code>DetectAnomalies</code>. </p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of an anomaly type found in an image. <code>Name</code> maps to an
     * anomaly type in the training dataset, apart from the anomaly type
     * <code>background</code>. The service automatically inserts the
     * <code>background</code> anomaly type into the response from
     * <code>DetectAnomalies</code>. </p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of an anomaly type found in an image. <code>Name</code> maps to an
     * anomaly type in the training dataset, apart from the anomaly type
     * <code>background</code>. The service automatically inserts the
     * <code>background</code> anomaly type into the response from
     * <code>DetectAnomalies</code>. </p>
     */
    inline Anomaly& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of an anomaly type found in an image. <code>Name</code> maps to an
     * anomaly type in the training dataset, apart from the anomaly type
     * <code>background</code>. The service automatically inserts the
     * <code>background</code> anomaly type into the response from
     * <code>DetectAnomalies</code>. </p>
     */
    inline Anomaly& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of an anomaly type found in an image. <code>Name</code> maps to an
     * anomaly type in the training dataset, apart from the anomaly type
     * <code>background</code>. The service automatically inserts the
     * <code>background</code> anomaly type into the response from
     * <code>DetectAnomalies</code>. </p>
     */
    inline Anomaly& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>Information about the pixel mask that covers an anomaly type.</p>
     */
    inline const PixelAnomaly& GetPixelAnomaly() const{ return m_pixelAnomaly; }

    /**
     * <p>Information about the pixel mask that covers an anomaly type.</p>
     */
    inline bool PixelAnomalyHasBeenSet() const { return m_pixelAnomalyHasBeenSet; }

    /**
     * <p>Information about the pixel mask that covers an anomaly type.</p>
     */
    inline void SetPixelAnomaly(const PixelAnomaly& value) { m_pixelAnomalyHasBeenSet = true; m_pixelAnomaly = value; }

    /**
     * <p>Information about the pixel mask that covers an anomaly type.</p>
     */
    inline void SetPixelAnomaly(PixelAnomaly&& value) { m_pixelAnomalyHasBeenSet = true; m_pixelAnomaly = std::move(value); }

    /**
     * <p>Information about the pixel mask that covers an anomaly type.</p>
     */
    inline Anomaly& WithPixelAnomaly(const PixelAnomaly& value) { SetPixelAnomaly(value); return *this;}

    /**
     * <p>Information about the pixel mask that covers an anomaly type.</p>
     */
    inline Anomaly& WithPixelAnomaly(PixelAnomaly&& value) { SetPixelAnomaly(std::move(value)); return *this;}

  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    PixelAnomaly m_pixelAnomaly;
    bool m_pixelAnomalyHasBeenSet = false;
  };

} // namespace Model
} // namespace LookoutforVision
} // namespace Aws
