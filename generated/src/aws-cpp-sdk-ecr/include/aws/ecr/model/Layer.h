/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ecr/ECR_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ecr/model/LayerAvailability.h>
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
namespace ECR
{
namespace Model
{

  /**
   * <p>An object representing an Amazon ECR image layer.</p><p><h3>See Also:</h3>  
   * <a href="http://docs.aws.amazon.com/goto/WebAPI/ecr-2015-09-21/Layer">AWS API
   * Reference</a></p>
   */
  class Layer
  {
  public:
    AWS_ECR_API Layer() = default;
    AWS_ECR_API Layer(Aws::Utils::Json::JsonView jsonValue);
    AWS_ECR_API Layer& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_ECR_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The <code>sha256</code> digest of the image layer.</p>
     */
    inline const Aws::String& GetLayerDigest() const { return m_layerDigest; }
    inline bool LayerDigestHasBeenSet() const { return m_layerDigestHasBeenSet; }
    template<typename LayerDigestT = Aws::String>
    void SetLayerDigest(LayerDigestT&& value) { m_layerDigestHasBeenSet = true; m_layerDigest = std::forward<LayerDigestT>(value); }
    template<typename LayerDigestT = Aws::String>
    Layer& WithLayerDigest(LayerDigestT&& value) { SetLayerDigest(std::forward<LayerDigestT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The availability status of the image layer.</p>
     */
    inline LayerAvailability GetLayerAvailability() const { return m_layerAvailability; }
    inline bool LayerAvailabilityHasBeenSet() const { return m_layerAvailabilityHasBeenSet; }
    inline void SetLayerAvailability(LayerAvailability value) { m_layerAvailabilityHasBeenSet = true; m_layerAvailability = value; }
    inline Layer& WithLayerAvailability(LayerAvailability value) { SetLayerAvailability(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The size, in bytes, of the image layer.</p>
     */
    inline long long GetLayerSize() const { return m_layerSize; }
    inline bool LayerSizeHasBeenSet() const { return m_layerSizeHasBeenSet; }
    inline void SetLayerSize(long long value) { m_layerSizeHasBeenSet = true; m_layerSize = value; }
    inline Layer& WithLayerSize(long long value) { SetLayerSize(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The media type of the layer, such as
     * <code>application/vnd.docker.image.rootfs.diff.tar.gzip</code> or
     * <code>application/vnd.oci.image.layer.v1.tar+gzip</code>.</p>
     */
    inline const Aws::String& GetMediaType() const { return m_mediaType; }
    inline bool MediaTypeHasBeenSet() const { return m_mediaTypeHasBeenSet; }
    template<typename MediaTypeT = Aws::String>
    void SetMediaType(MediaTypeT&& value) { m_mediaTypeHasBeenSet = true; m_mediaType = std::forward<MediaTypeT>(value); }
    template<typename MediaTypeT = Aws::String>
    Layer& WithMediaType(MediaTypeT&& value) { SetMediaType(std::forward<MediaTypeT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_layerDigest;
    bool m_layerDigestHasBeenSet = false;

    LayerAvailability m_layerAvailability{LayerAvailability::NOT_SET};
    bool m_layerAvailabilityHasBeenSet = false;

    long long m_layerSize{0};
    bool m_layerSizeHasBeenSet = false;

    Aws::String m_mediaType;
    bool m_mediaTypeHasBeenSet = false;
  };

} // namespace Model
} // namespace ECR
} // namespace Aws
