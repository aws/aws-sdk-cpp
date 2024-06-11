/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ecr-public/ECRPublic_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/ecr-public/model/ReferencedImageDetail.h>
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
namespace ECRPublic
{
namespace Model
{

  /**
   * <p>An object that represents the image tag details for an image.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ecr-public-2020-10-30/ImageTagDetail">AWS
   * API Reference</a></p>
   */
  class ImageTagDetail
  {
  public:
    AWS_ECRPUBLIC_API ImageTagDetail();
    AWS_ECRPUBLIC_API ImageTagDetail(Aws::Utils::Json::JsonView jsonValue);
    AWS_ECRPUBLIC_API ImageTagDetail& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_ECRPUBLIC_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The tag that's associated with the image.</p>
     */
    inline const Aws::String& GetImageTag() const{ return m_imageTag; }
    inline bool ImageTagHasBeenSet() const { return m_imageTagHasBeenSet; }
    inline void SetImageTag(const Aws::String& value) { m_imageTagHasBeenSet = true; m_imageTag = value; }
    inline void SetImageTag(Aws::String&& value) { m_imageTagHasBeenSet = true; m_imageTag = std::move(value); }
    inline void SetImageTag(const char* value) { m_imageTagHasBeenSet = true; m_imageTag.assign(value); }
    inline ImageTagDetail& WithImageTag(const Aws::String& value) { SetImageTag(value); return *this;}
    inline ImageTagDetail& WithImageTag(Aws::String&& value) { SetImageTag(std::move(value)); return *this;}
    inline ImageTagDetail& WithImageTag(const char* value) { SetImageTag(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time stamp that indicates when the image tag was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const{ return m_createdAt; }
    inline bool CreatedAtHasBeenSet() const { return m_createdAtHasBeenSet; }
    inline void SetCreatedAt(const Aws::Utils::DateTime& value) { m_createdAtHasBeenSet = true; m_createdAt = value; }
    inline void SetCreatedAt(Aws::Utils::DateTime&& value) { m_createdAtHasBeenSet = true; m_createdAt = std::move(value); }
    inline ImageTagDetail& WithCreatedAt(const Aws::Utils::DateTime& value) { SetCreatedAt(value); return *this;}
    inline ImageTagDetail& WithCreatedAt(Aws::Utils::DateTime&& value) { SetCreatedAt(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An object that describes the details of an image.</p>
     */
    inline const ReferencedImageDetail& GetImageDetail() const{ return m_imageDetail; }
    inline bool ImageDetailHasBeenSet() const { return m_imageDetailHasBeenSet; }
    inline void SetImageDetail(const ReferencedImageDetail& value) { m_imageDetailHasBeenSet = true; m_imageDetail = value; }
    inline void SetImageDetail(ReferencedImageDetail&& value) { m_imageDetailHasBeenSet = true; m_imageDetail = std::move(value); }
    inline ImageTagDetail& WithImageDetail(const ReferencedImageDetail& value) { SetImageDetail(value); return *this;}
    inline ImageTagDetail& WithImageDetail(ReferencedImageDetail&& value) { SetImageDetail(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_imageTag;
    bool m_imageTagHasBeenSet = false;

    Aws::Utils::DateTime m_createdAt;
    bool m_createdAtHasBeenSet = false;

    ReferencedImageDetail m_imageDetail;
    bool m_imageDetailHasBeenSet = false;
  };

} // namespace Model
} // namespace ECRPublic
} // namespace Aws
