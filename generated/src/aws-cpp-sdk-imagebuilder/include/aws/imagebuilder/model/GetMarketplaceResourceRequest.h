/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/imagebuilder/Imagebuilder_EXPORTS.h>
#include <aws/imagebuilder/ImagebuilderRequest.h>
#include <aws/imagebuilder/model/MarketplaceResourceType.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace imagebuilder
{
namespace Model
{

  /**
   */
  class GetMarketplaceResourceRequest : public ImagebuilderRequest
  {
  public:
    AWS_IMAGEBUILDER_API GetMarketplaceResourceRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetMarketplaceResource"; }

    AWS_IMAGEBUILDER_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>Specifies which type of Amazon Web Services Marketplace resource Image
     * Builder retrieves.</p>
     */
    inline MarketplaceResourceType GetResourceType() const { return m_resourceType; }
    inline bool ResourceTypeHasBeenSet() const { return m_resourceTypeHasBeenSet; }
    inline void SetResourceType(MarketplaceResourceType value) { m_resourceTypeHasBeenSet = true; m_resourceType = value; }
    inline GetMarketplaceResourceRequest& WithResourceType(MarketplaceResourceType value) { SetResourceType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) that uniquely identifies an Amazon Web
     * Services Marketplace resource.</p>
     */
    inline const Aws::String& GetResourceArn() const { return m_resourceArn; }
    inline bool ResourceArnHasBeenSet() const { return m_resourceArnHasBeenSet; }
    template<typename ResourceArnT = Aws::String>
    void SetResourceArn(ResourceArnT&& value) { m_resourceArnHasBeenSet = true; m_resourceArn = std::forward<ResourceArnT>(value); }
    template<typename ResourceArnT = Aws::String>
    GetMarketplaceResourceRequest& WithResourceArn(ResourceArnT&& value) { SetResourceArn(std::forward<ResourceArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The bucket path that you can specify to download the resource from Amazon
     * S3.</p>
     */
    inline const Aws::String& GetResourceLocation() const { return m_resourceLocation; }
    inline bool ResourceLocationHasBeenSet() const { return m_resourceLocationHasBeenSet; }
    template<typename ResourceLocationT = Aws::String>
    void SetResourceLocation(ResourceLocationT&& value) { m_resourceLocationHasBeenSet = true; m_resourceLocation = std::forward<ResourceLocationT>(value); }
    template<typename ResourceLocationT = Aws::String>
    GetMarketplaceResourceRequest& WithResourceLocation(ResourceLocationT&& value) { SetResourceLocation(std::forward<ResourceLocationT>(value)); return *this;}
    ///@}
  private:

    MarketplaceResourceType m_resourceType{MarketplaceResourceType::NOT_SET};
    bool m_resourceTypeHasBeenSet = false;

    Aws::String m_resourceArn;
    bool m_resourceArnHasBeenSet = false;

    Aws::String m_resourceLocation;
    bool m_resourceLocationHasBeenSet = false;
  };

} // namespace Model
} // namespace imagebuilder
} // namespace Aws
