/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/kinesisvideo/KinesisVideo_EXPORTS.h>
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
namespace KinesisVideo
{
namespace Model
{

  /**
   * <p>The structure that contains the information required to deliver images to a
   * customer.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/kinesisvideo-2017-09-30/ImageGenerationDestinationConfig">AWS
   * API Reference</a></p>
   */
  class ImageGenerationDestinationConfig
  {
  public:
    AWS_KINESISVIDEO_API ImageGenerationDestinationConfig() = default;
    AWS_KINESISVIDEO_API ImageGenerationDestinationConfig(Aws::Utils::Json::JsonView jsonValue);
    AWS_KINESISVIDEO_API ImageGenerationDestinationConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_KINESISVIDEO_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Uniform Resource Identifier (URI) that identifies where the images will
     * be delivered.</p>
     */
    inline const Aws::String& GetUri() const { return m_uri; }
    inline bool UriHasBeenSet() const { return m_uriHasBeenSet; }
    template<typename UriT = Aws::String>
    void SetUri(UriT&& value) { m_uriHasBeenSet = true; m_uri = std::forward<UriT>(value); }
    template<typename UriT = Aws::String>
    ImageGenerationDestinationConfig& WithUri(UriT&& value) { SetUri(std::forward<UriT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Web Services Region of the S3 bucket where images will be
     * delivered. This <code>DestinationRegion</code> must match the Region where the
     * stream is located.</p>
     */
    inline const Aws::String& GetDestinationRegion() const { return m_destinationRegion; }
    inline bool DestinationRegionHasBeenSet() const { return m_destinationRegionHasBeenSet; }
    template<typename DestinationRegionT = Aws::String>
    void SetDestinationRegion(DestinationRegionT&& value) { m_destinationRegionHasBeenSet = true; m_destinationRegion = std::forward<DestinationRegionT>(value); }
    template<typename DestinationRegionT = Aws::String>
    ImageGenerationDestinationConfig& WithDestinationRegion(DestinationRegionT&& value) { SetDestinationRegion(std::forward<DestinationRegionT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_uri;
    bool m_uriHasBeenSet = false;

    Aws::String m_destinationRegion;
    bool m_destinationRegionHasBeenSet = false;
  };

} // namespace Model
} // namespace KinesisVideo
} // namespace Aws
