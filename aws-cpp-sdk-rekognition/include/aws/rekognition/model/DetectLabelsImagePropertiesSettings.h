/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/rekognition/Rekognition_EXPORTS.h>

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
namespace Rekognition
{
namespace Model
{

  /**
   * <p>Settings for the IMAGE_PROPERTIES feature type.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/rekognition-2016-06-27/DetectLabelsImagePropertiesSettings">AWS
   * API Reference</a></p>
   */
  class DetectLabelsImagePropertiesSettings
  {
  public:
    AWS_REKOGNITION_API DetectLabelsImagePropertiesSettings();
    AWS_REKOGNITION_API DetectLabelsImagePropertiesSettings(Aws::Utils::Json::JsonView jsonValue);
    AWS_REKOGNITION_API DetectLabelsImagePropertiesSettings& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_REKOGNITION_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The maximum number of dominant colors to return when detecting labels in an
     * image. The default value is 10.</p>
     */
    inline int GetMaxDominantColors() const{ return m_maxDominantColors; }

    /**
     * <p>The maximum number of dominant colors to return when detecting labels in an
     * image. The default value is 10.</p>
     */
    inline bool MaxDominantColorsHasBeenSet() const { return m_maxDominantColorsHasBeenSet; }

    /**
     * <p>The maximum number of dominant colors to return when detecting labels in an
     * image. The default value is 10.</p>
     */
    inline void SetMaxDominantColors(int value) { m_maxDominantColorsHasBeenSet = true; m_maxDominantColors = value; }

    /**
     * <p>The maximum number of dominant colors to return when detecting labels in an
     * image. The default value is 10.</p>
     */
    inline DetectLabelsImagePropertiesSettings& WithMaxDominantColors(int value) { SetMaxDominantColors(value); return *this;}

  private:

    int m_maxDominantColors;
    bool m_maxDominantColorsHasBeenSet = false;
  };

} // namespace Model
} // namespace Rekognition
} // namespace Aws
