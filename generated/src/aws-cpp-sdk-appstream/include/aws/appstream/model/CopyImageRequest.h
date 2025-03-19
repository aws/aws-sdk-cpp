/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/appstream/AppStream_EXPORTS.h>
#include <aws/appstream/AppStreamRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace AppStream
{
namespace Model
{

  /**
   */
  class CopyImageRequest : public AppStreamRequest
  {
  public:
    AWS_APPSTREAM_API CopyImageRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CopyImage"; }

    AWS_APPSTREAM_API Aws::String SerializePayload() const override;

    AWS_APPSTREAM_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The name of the image to copy.</p>
     */
    inline const Aws::String& GetSourceImageName() const { return m_sourceImageName; }
    inline bool SourceImageNameHasBeenSet() const { return m_sourceImageNameHasBeenSet; }
    template<typename SourceImageNameT = Aws::String>
    void SetSourceImageName(SourceImageNameT&& value) { m_sourceImageNameHasBeenSet = true; m_sourceImageName = std::forward<SourceImageNameT>(value); }
    template<typename SourceImageNameT = Aws::String>
    CopyImageRequest& WithSourceImageName(SourceImageNameT&& value) { SetSourceImageName(std::forward<SourceImageNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name that the image will have when it is copied to the destination.</p>
     */
    inline const Aws::String& GetDestinationImageName() const { return m_destinationImageName; }
    inline bool DestinationImageNameHasBeenSet() const { return m_destinationImageNameHasBeenSet; }
    template<typename DestinationImageNameT = Aws::String>
    void SetDestinationImageName(DestinationImageNameT&& value) { m_destinationImageNameHasBeenSet = true; m_destinationImageName = std::forward<DestinationImageNameT>(value); }
    template<typename DestinationImageNameT = Aws::String>
    CopyImageRequest& WithDestinationImageName(DestinationImageNameT&& value) { SetDestinationImageName(std::forward<DestinationImageNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The destination region to which the image will be copied. This parameter is
     * required, even if you are copying an image within the same region.</p>
     */
    inline const Aws::String& GetDestinationRegion() const { return m_destinationRegion; }
    inline bool DestinationRegionHasBeenSet() const { return m_destinationRegionHasBeenSet; }
    template<typename DestinationRegionT = Aws::String>
    void SetDestinationRegion(DestinationRegionT&& value) { m_destinationRegionHasBeenSet = true; m_destinationRegion = std::forward<DestinationRegionT>(value); }
    template<typename DestinationRegionT = Aws::String>
    CopyImageRequest& WithDestinationRegion(DestinationRegionT&& value) { SetDestinationRegion(std::forward<DestinationRegionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The description that the image will have when it is copied to the
     * destination.</p>
     */
    inline const Aws::String& GetDestinationImageDescription() const { return m_destinationImageDescription; }
    inline bool DestinationImageDescriptionHasBeenSet() const { return m_destinationImageDescriptionHasBeenSet; }
    template<typename DestinationImageDescriptionT = Aws::String>
    void SetDestinationImageDescription(DestinationImageDescriptionT&& value) { m_destinationImageDescriptionHasBeenSet = true; m_destinationImageDescription = std::forward<DestinationImageDescriptionT>(value); }
    template<typename DestinationImageDescriptionT = Aws::String>
    CopyImageRequest& WithDestinationImageDescription(DestinationImageDescriptionT&& value) { SetDestinationImageDescription(std::forward<DestinationImageDescriptionT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_sourceImageName;
    bool m_sourceImageNameHasBeenSet = false;

    Aws::String m_destinationImageName;
    bool m_destinationImageNameHasBeenSet = false;

    Aws::String m_destinationRegion;
    bool m_destinationRegionHasBeenSet = false;

    Aws::String m_destinationImageDescription;
    bool m_destinationImageDescriptionHasBeenSet = false;
  };

} // namespace Model
} // namespace AppStream
} // namespace Aws
