/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ecr-public/ECRPublic_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ecr-public/model/LayerAvailability.h>
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
   * <p>An object representing an Amazon ECR image layer.</p><p><h3>See Also:</h3>  
   * <a href="http://docs.aws.amazon.com/goto/WebAPI/ecr-public-2020-10-30/Layer">AWS
   * API Reference</a></p>
   */
  class Layer
  {
  public:
    AWS_ECRPUBLIC_API Layer();
    AWS_ECRPUBLIC_API Layer(Aws::Utils::Json::JsonView jsonValue);
    AWS_ECRPUBLIC_API Layer& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_ECRPUBLIC_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The <code>sha256</code> digest of the image layer.</p>
     */
    inline const Aws::String& GetLayerDigest() const{ return m_layerDigest; }

    /**
     * <p>The <code>sha256</code> digest of the image layer.</p>
     */
    inline bool LayerDigestHasBeenSet() const { return m_layerDigestHasBeenSet; }

    /**
     * <p>The <code>sha256</code> digest of the image layer.</p>
     */
    inline void SetLayerDigest(const Aws::String& value) { m_layerDigestHasBeenSet = true; m_layerDigest = value; }

    /**
     * <p>The <code>sha256</code> digest of the image layer.</p>
     */
    inline void SetLayerDigest(Aws::String&& value) { m_layerDigestHasBeenSet = true; m_layerDigest = std::move(value); }

    /**
     * <p>The <code>sha256</code> digest of the image layer.</p>
     */
    inline void SetLayerDigest(const char* value) { m_layerDigestHasBeenSet = true; m_layerDigest.assign(value); }

    /**
     * <p>The <code>sha256</code> digest of the image layer.</p>
     */
    inline Layer& WithLayerDigest(const Aws::String& value) { SetLayerDigest(value); return *this;}

    /**
     * <p>The <code>sha256</code> digest of the image layer.</p>
     */
    inline Layer& WithLayerDigest(Aws::String&& value) { SetLayerDigest(std::move(value)); return *this;}

    /**
     * <p>The <code>sha256</code> digest of the image layer.</p>
     */
    inline Layer& WithLayerDigest(const char* value) { SetLayerDigest(value); return *this;}


    /**
     * <p>The availability status of the image layer.</p>
     */
    inline const LayerAvailability& GetLayerAvailability() const{ return m_layerAvailability; }

    /**
     * <p>The availability status of the image layer.</p>
     */
    inline bool LayerAvailabilityHasBeenSet() const { return m_layerAvailabilityHasBeenSet; }

    /**
     * <p>The availability status of the image layer.</p>
     */
    inline void SetLayerAvailability(const LayerAvailability& value) { m_layerAvailabilityHasBeenSet = true; m_layerAvailability = value; }

    /**
     * <p>The availability status of the image layer.</p>
     */
    inline void SetLayerAvailability(LayerAvailability&& value) { m_layerAvailabilityHasBeenSet = true; m_layerAvailability = std::move(value); }

    /**
     * <p>The availability status of the image layer.</p>
     */
    inline Layer& WithLayerAvailability(const LayerAvailability& value) { SetLayerAvailability(value); return *this;}

    /**
     * <p>The availability status of the image layer.</p>
     */
    inline Layer& WithLayerAvailability(LayerAvailability&& value) { SetLayerAvailability(std::move(value)); return *this;}


    /**
     * <p>The size, in bytes, of the image layer.</p>
     */
    inline long long GetLayerSize() const{ return m_layerSize; }

    /**
     * <p>The size, in bytes, of the image layer.</p>
     */
    inline bool LayerSizeHasBeenSet() const { return m_layerSizeHasBeenSet; }

    /**
     * <p>The size, in bytes, of the image layer.</p>
     */
    inline void SetLayerSize(long long value) { m_layerSizeHasBeenSet = true; m_layerSize = value; }

    /**
     * <p>The size, in bytes, of the image layer.</p>
     */
    inline Layer& WithLayerSize(long long value) { SetLayerSize(value); return *this;}


    /**
     * <p>The media type of the layer, such as
     * <code>application/vnd.docker.image.rootfs.diff.tar.gzip</code> or
     * <code>application/vnd.oci.image.layer.v1.tar+gzip</code>.</p>
     */
    inline const Aws::String& GetMediaType() const{ return m_mediaType; }

    /**
     * <p>The media type of the layer, such as
     * <code>application/vnd.docker.image.rootfs.diff.tar.gzip</code> or
     * <code>application/vnd.oci.image.layer.v1.tar+gzip</code>.</p>
     */
    inline bool MediaTypeHasBeenSet() const { return m_mediaTypeHasBeenSet; }

    /**
     * <p>The media type of the layer, such as
     * <code>application/vnd.docker.image.rootfs.diff.tar.gzip</code> or
     * <code>application/vnd.oci.image.layer.v1.tar+gzip</code>.</p>
     */
    inline void SetMediaType(const Aws::String& value) { m_mediaTypeHasBeenSet = true; m_mediaType = value; }

    /**
     * <p>The media type of the layer, such as
     * <code>application/vnd.docker.image.rootfs.diff.tar.gzip</code> or
     * <code>application/vnd.oci.image.layer.v1.tar+gzip</code>.</p>
     */
    inline void SetMediaType(Aws::String&& value) { m_mediaTypeHasBeenSet = true; m_mediaType = std::move(value); }

    /**
     * <p>The media type of the layer, such as
     * <code>application/vnd.docker.image.rootfs.diff.tar.gzip</code> or
     * <code>application/vnd.oci.image.layer.v1.tar+gzip</code>.</p>
     */
    inline void SetMediaType(const char* value) { m_mediaTypeHasBeenSet = true; m_mediaType.assign(value); }

    /**
     * <p>The media type of the layer, such as
     * <code>application/vnd.docker.image.rootfs.diff.tar.gzip</code> or
     * <code>application/vnd.oci.image.layer.v1.tar+gzip</code>.</p>
     */
    inline Layer& WithMediaType(const Aws::String& value) { SetMediaType(value); return *this;}

    /**
     * <p>The media type of the layer, such as
     * <code>application/vnd.docker.image.rootfs.diff.tar.gzip</code> or
     * <code>application/vnd.oci.image.layer.v1.tar+gzip</code>.</p>
     */
    inline Layer& WithMediaType(Aws::String&& value) { SetMediaType(std::move(value)); return *this;}

    /**
     * <p>The media type of the layer, such as
     * <code>application/vnd.docker.image.rootfs.diff.tar.gzip</code> or
     * <code>application/vnd.oci.image.layer.v1.tar+gzip</code>.</p>
     */
    inline Layer& WithMediaType(const char* value) { SetMediaType(value); return *this;}

  private:

    Aws::String m_layerDigest;
    bool m_layerDigestHasBeenSet = false;

    LayerAvailability m_layerAvailability;
    bool m_layerAvailabilityHasBeenSet = false;

    long long m_layerSize;
    bool m_layerSizeHasBeenSet = false;

    Aws::String m_mediaType;
    bool m_mediaTypeHasBeenSet = false;
  };

} // namespace Model
} // namespace ECRPublic
} // namespace Aws
