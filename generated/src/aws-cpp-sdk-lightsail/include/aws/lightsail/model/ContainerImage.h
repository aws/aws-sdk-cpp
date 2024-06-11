/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lightsail/Lightsail_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
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
namespace Lightsail
{
namespace Model
{

  /**
   * <p>Describes a container image that is registered to an Amazon Lightsail
   * container service.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/lightsail-2016-11-28/ContainerImage">AWS
   * API Reference</a></p>
   */
  class ContainerImage
  {
  public:
    AWS_LIGHTSAIL_API ContainerImage();
    AWS_LIGHTSAIL_API ContainerImage(Aws::Utils::Json::JsonView jsonValue);
    AWS_LIGHTSAIL_API ContainerImage& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LIGHTSAIL_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the container image.</p>
     */
    inline const Aws::String& GetImage() const{ return m_image; }
    inline bool ImageHasBeenSet() const { return m_imageHasBeenSet; }
    inline void SetImage(const Aws::String& value) { m_imageHasBeenSet = true; m_image = value; }
    inline void SetImage(Aws::String&& value) { m_imageHasBeenSet = true; m_image = std::move(value); }
    inline void SetImage(const char* value) { m_imageHasBeenSet = true; m_image.assign(value); }
    inline ContainerImage& WithImage(const Aws::String& value) { SetImage(value); return *this;}
    inline ContainerImage& WithImage(Aws::String&& value) { SetImage(std::move(value)); return *this;}
    inline ContainerImage& WithImage(const char* value) { SetImage(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The digest of the container image.</p>
     */
    inline const Aws::String& GetDigest() const{ return m_digest; }
    inline bool DigestHasBeenSet() const { return m_digestHasBeenSet; }
    inline void SetDigest(const Aws::String& value) { m_digestHasBeenSet = true; m_digest = value; }
    inline void SetDigest(Aws::String&& value) { m_digestHasBeenSet = true; m_digest = std::move(value); }
    inline void SetDigest(const char* value) { m_digestHasBeenSet = true; m_digest.assign(value); }
    inline ContainerImage& WithDigest(const Aws::String& value) { SetDigest(value); return *this;}
    inline ContainerImage& WithDigest(Aws::String&& value) { SetDigest(std::move(value)); return *this;}
    inline ContainerImage& WithDigest(const char* value) { SetDigest(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp when the container image was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const{ return m_createdAt; }
    inline bool CreatedAtHasBeenSet() const { return m_createdAtHasBeenSet; }
    inline void SetCreatedAt(const Aws::Utils::DateTime& value) { m_createdAtHasBeenSet = true; m_createdAt = value; }
    inline void SetCreatedAt(Aws::Utils::DateTime&& value) { m_createdAtHasBeenSet = true; m_createdAt = std::move(value); }
    inline ContainerImage& WithCreatedAt(const Aws::Utils::DateTime& value) { SetCreatedAt(value); return *this;}
    inline ContainerImage& WithCreatedAt(Aws::Utils::DateTime&& value) { SetCreatedAt(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_image;
    bool m_imageHasBeenSet = false;

    Aws::String m_digest;
    bool m_digestHasBeenSet = false;

    Aws::Utils::DateTime m_createdAt;
    bool m_createdAtHasBeenSet = false;
  };

} // namespace Model
} // namespace Lightsail
} // namespace Aws
