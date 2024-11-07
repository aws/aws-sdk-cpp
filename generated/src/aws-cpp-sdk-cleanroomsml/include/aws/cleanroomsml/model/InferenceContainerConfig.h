/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cleanroomsml/CleanRoomsML_EXPORTS.h>
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
namespace CleanRoomsML
{
namespace Model
{

  /**
   * <p>Provides configuration information for the inference container.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cleanroomsml-2023-09-06/InferenceContainerConfig">AWS
   * API Reference</a></p>
   */
  class InferenceContainerConfig
  {
  public:
    AWS_CLEANROOMSML_API InferenceContainerConfig();
    AWS_CLEANROOMSML_API InferenceContainerConfig(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLEANROOMSML_API InferenceContainerConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLEANROOMSML_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The registry path of the docker image that contains the inference algorithm.
     * Clean Rooms ML supports both <code>registry/repository[:tag]</code> and
     * <code>registry/repositry[@digest]</code> image path formats. For more
     * information about using images in Clean Rooms ML, see the <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/APIReference/API_AlgorithmSpecification.html#sagemaker-Type-AlgorithmSpecification-TrainingImage">Sagemaker
     * API reference</a>.</p>
     */
    inline const Aws::String& GetImageUri() const{ return m_imageUri; }
    inline bool ImageUriHasBeenSet() const { return m_imageUriHasBeenSet; }
    inline void SetImageUri(const Aws::String& value) { m_imageUriHasBeenSet = true; m_imageUri = value; }
    inline void SetImageUri(Aws::String&& value) { m_imageUriHasBeenSet = true; m_imageUri = std::move(value); }
    inline void SetImageUri(const char* value) { m_imageUriHasBeenSet = true; m_imageUri.assign(value); }
    inline InferenceContainerConfig& WithImageUri(const Aws::String& value) { SetImageUri(value); return *this;}
    inline InferenceContainerConfig& WithImageUri(Aws::String&& value) { SetImageUri(std::move(value)); return *this;}
    inline InferenceContainerConfig& WithImageUri(const char* value) { SetImageUri(value); return *this;}
    ///@}
  private:

    Aws::String m_imageUri;
    bool m_imageUriHasBeenSet = false;
  };

} // namespace Model
} // namespace CleanRoomsML
} // namespace Aws
