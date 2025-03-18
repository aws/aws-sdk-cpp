/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/inspector2/Inspector2_EXPORTS.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
namespace Inspector2
{
namespace Model
{

  /**
   * <p>Information on the Amazon ECR image metadata associated with a
   * finding.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/inspector2-2020-06-08/EcrContainerImageMetadata">AWS
   * API Reference</a></p>
   */
  class EcrContainerImageMetadata
  {
  public:
    AWS_INSPECTOR2_API EcrContainerImageMetadata() = default;
    AWS_INSPECTOR2_API EcrContainerImageMetadata(Aws::Utils::Json::JsonView jsonValue);
    AWS_INSPECTOR2_API EcrContainerImageMetadata& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_INSPECTOR2_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The date an image was last pulled at.</p>
     */
    inline const Aws::Utils::DateTime& GetImagePulledAt() const { return m_imagePulledAt; }
    inline bool ImagePulledAtHasBeenSet() const { return m_imagePulledAtHasBeenSet; }
    template<typename ImagePulledAtT = Aws::Utils::DateTime>
    void SetImagePulledAt(ImagePulledAtT&& value) { m_imagePulledAtHasBeenSet = true; m_imagePulledAt = std::forward<ImagePulledAtT>(value); }
    template<typename ImagePulledAtT = Aws::Utils::DateTime>
    EcrContainerImageMetadata& WithImagePulledAt(ImagePulledAtT&& value) { SetImagePulledAt(std::forward<ImagePulledAtT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Tags associated with the Amazon ECR image metadata.</p>
     */
    inline const Aws::Vector<Aws::String>& GetTags() const { return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    template<typename TagsT = Aws::Vector<Aws::String>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Vector<Aws::String>>
    EcrContainerImageMetadata& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsT = Aws::String>
    EcrContainerImageMetadata& AddTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags.emplace_back(std::forward<TagsT>(value)); return *this; }
    ///@}
  private:

    Aws::Utils::DateTime m_imagePulledAt{};
    bool m_imagePulledAtHasBeenSet = false;

    Aws::Vector<Aws::String> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace Inspector2
} // namespace Aws
