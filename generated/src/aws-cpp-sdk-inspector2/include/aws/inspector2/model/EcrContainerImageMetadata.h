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
    AWS_INSPECTOR2_API EcrContainerImageMetadata();
    AWS_INSPECTOR2_API EcrContainerImageMetadata(Aws::Utils::Json::JsonView jsonValue);
    AWS_INSPECTOR2_API EcrContainerImageMetadata& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_INSPECTOR2_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The date an image was last pulled at.</p>
     */
    inline const Aws::Utils::DateTime& GetImagePulledAt() const{ return m_imagePulledAt; }

    /**
     * <p>The date an image was last pulled at.</p>
     */
    inline bool ImagePulledAtHasBeenSet() const { return m_imagePulledAtHasBeenSet; }

    /**
     * <p>The date an image was last pulled at.</p>
     */
    inline void SetImagePulledAt(const Aws::Utils::DateTime& value) { m_imagePulledAtHasBeenSet = true; m_imagePulledAt = value; }

    /**
     * <p>The date an image was last pulled at.</p>
     */
    inline void SetImagePulledAt(Aws::Utils::DateTime&& value) { m_imagePulledAtHasBeenSet = true; m_imagePulledAt = std::move(value); }

    /**
     * <p>The date an image was last pulled at.</p>
     */
    inline EcrContainerImageMetadata& WithImagePulledAt(const Aws::Utils::DateTime& value) { SetImagePulledAt(value); return *this;}

    /**
     * <p>The date an image was last pulled at.</p>
     */
    inline EcrContainerImageMetadata& WithImagePulledAt(Aws::Utils::DateTime&& value) { SetImagePulledAt(std::move(value)); return *this;}


    /**
     * <p>Tags associated with the Amazon ECR image metadata.</p>
     */
    inline const Aws::Vector<Aws::String>& GetTags() const{ return m_tags; }

    /**
     * <p>Tags associated with the Amazon ECR image metadata.</p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>Tags associated with the Amazon ECR image metadata.</p>
     */
    inline void SetTags(const Aws::Vector<Aws::String>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>Tags associated with the Amazon ECR image metadata.</p>
     */
    inline void SetTags(Aws::Vector<Aws::String>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>Tags associated with the Amazon ECR image metadata.</p>
     */
    inline EcrContainerImageMetadata& WithTags(const Aws::Vector<Aws::String>& value) { SetTags(value); return *this;}

    /**
     * <p>Tags associated with the Amazon ECR image metadata.</p>
     */
    inline EcrContainerImageMetadata& WithTags(Aws::Vector<Aws::String>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>Tags associated with the Amazon ECR image metadata.</p>
     */
    inline EcrContainerImageMetadata& AddTags(const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }

    /**
     * <p>Tags associated with the Amazon ECR image metadata.</p>
     */
    inline EcrContainerImageMetadata& AddTags(Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }

    /**
     * <p>Tags associated with the Amazon ECR image metadata.</p>
     */
    inline EcrContainerImageMetadata& AddTags(const char* value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }

  private:

    Aws::Utils::DateTime m_imagePulledAt;
    bool m_imagePulledAtHasBeenSet = false;

    Aws::Vector<Aws::String> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace Inspector2
} // namespace Aws
