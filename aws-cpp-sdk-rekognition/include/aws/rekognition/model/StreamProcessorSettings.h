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
#include <aws/rekognition/Rekognition_EXPORTS.h>
#include <aws/rekognition/model/FaceSearchSettings.h>
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
namespace Rekognition
{
namespace Model
{

  /**
   * <p>Input parameters used to recognize faces in a streaming video analyzed by a
   * Amazon Rekognition stream processor.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/rekognition-2016-06-27/StreamProcessorSettings">AWS
   * API Reference</a></p>
   */
  class AWS_REKOGNITION_API StreamProcessorSettings
  {
  public:
    StreamProcessorSettings();
    StreamProcessorSettings(Aws::Utils::Json::JsonView jsonValue);
    StreamProcessorSettings& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Face search settings to use on a streaming video. </p>
     */
    inline const FaceSearchSettings& GetFaceSearch() const{ return m_faceSearch; }

    /**
     * <p>Face search settings to use on a streaming video. </p>
     */
    inline bool FaceSearchHasBeenSet() const { return m_faceSearchHasBeenSet; }

    /**
     * <p>Face search settings to use on a streaming video. </p>
     */
    inline void SetFaceSearch(const FaceSearchSettings& value) { m_faceSearchHasBeenSet = true; m_faceSearch = value; }

    /**
     * <p>Face search settings to use on a streaming video. </p>
     */
    inline void SetFaceSearch(FaceSearchSettings&& value) { m_faceSearchHasBeenSet = true; m_faceSearch = std::move(value); }

    /**
     * <p>Face search settings to use on a streaming video. </p>
     */
    inline StreamProcessorSettings& WithFaceSearch(const FaceSearchSettings& value) { SetFaceSearch(value); return *this;}

    /**
     * <p>Face search settings to use on a streaming video. </p>
     */
    inline StreamProcessorSettings& WithFaceSearch(FaceSearchSettings&& value) { SetFaceSearch(std::move(value)); return *this;}

  private:

    FaceSearchSettings m_faceSearch;
    bool m_faceSearchHasBeenSet;
  };

} // namespace Model
} // namespace Rekognition
} // namespace Aws
