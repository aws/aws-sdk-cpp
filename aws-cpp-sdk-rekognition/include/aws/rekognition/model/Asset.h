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
#include <aws/rekognition/model/GroundTruthManifest.h>
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
   * <p>Assets are the images that you use to train and evaluate a model version.
   * Assets are referenced by Sagemaker GroundTruth manifest files. </p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/rekognition-2016-06-27/Asset">AWS
   * API Reference</a></p>
   */
  class AWS_REKOGNITION_API Asset
  {
  public:
    Asset();
    Asset(Aws::Utils::Json::JsonView jsonValue);
    Asset& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    
    inline const GroundTruthManifest& GetGroundTruthManifest() const{ return m_groundTruthManifest; }

    
    inline bool GroundTruthManifestHasBeenSet() const { return m_groundTruthManifestHasBeenSet; }

    
    inline void SetGroundTruthManifest(const GroundTruthManifest& value) { m_groundTruthManifestHasBeenSet = true; m_groundTruthManifest = value; }

    
    inline void SetGroundTruthManifest(GroundTruthManifest&& value) { m_groundTruthManifestHasBeenSet = true; m_groundTruthManifest = std::move(value); }

    
    inline Asset& WithGroundTruthManifest(const GroundTruthManifest& value) { SetGroundTruthManifest(value); return *this;}

    
    inline Asset& WithGroundTruthManifest(GroundTruthManifest&& value) { SetGroundTruthManifest(std::move(value)); return *this;}

  private:

    GroundTruthManifest m_groundTruthManifest;
    bool m_groundTruthManifestHasBeenSet;
  };

} // namespace Model
} // namespace Rekognition
} // namespace Aws
