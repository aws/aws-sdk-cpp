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
    AWS_IMAGEBUILDER_API GetMarketplaceResourceRequest();

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
    inline const MarketplaceResourceType& GetResourceType() const{ return m_resourceType; }
    inline bool ResourceTypeHasBeenSet() const { return m_resourceTypeHasBeenSet; }
    inline void SetResourceType(const MarketplaceResourceType& value) { m_resourceTypeHasBeenSet = true; m_resourceType = value; }
    inline void SetResourceType(MarketplaceResourceType&& value) { m_resourceTypeHasBeenSet = true; m_resourceType = std::move(value); }
    inline GetMarketplaceResourceRequest& WithResourceType(const MarketplaceResourceType& value) { SetResourceType(value); return *this;}
    inline GetMarketplaceResourceRequest& WithResourceType(MarketplaceResourceType&& value) { SetResourceType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) that uniquely identifies an Amazon Web
     * Services Marketplace resource.</p>
     */
    inline const Aws::String& GetResourceArn() const{ return m_resourceArn; }
    inline bool ResourceArnHasBeenSet() const { return m_resourceArnHasBeenSet; }
    inline void SetResourceArn(const Aws::String& value) { m_resourceArnHasBeenSet = true; m_resourceArn = value; }
    inline void SetResourceArn(Aws::String&& value) { m_resourceArnHasBeenSet = true; m_resourceArn = std::move(value); }
    inline void SetResourceArn(const char* value) { m_resourceArnHasBeenSet = true; m_resourceArn.assign(value); }
    inline GetMarketplaceResourceRequest& WithResourceArn(const Aws::String& value) { SetResourceArn(value); return *this;}
    inline GetMarketplaceResourceRequest& WithResourceArn(Aws::String&& value) { SetResourceArn(std::move(value)); return *this;}
    inline GetMarketplaceResourceRequest& WithResourceArn(const char* value) { SetResourceArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The bucket path that you can specify to download the resource from Amazon
     * S3.</p>
     */
    inline const Aws::String& GetResourceLocation() const{ return m_resourceLocation; }
    inline bool ResourceLocationHasBeenSet() const { return m_resourceLocationHasBeenSet; }
    inline void SetResourceLocation(const Aws::String& value) { m_resourceLocationHasBeenSet = true; m_resourceLocation = value; }
    inline void SetResourceLocation(Aws::String&& value) { m_resourceLocationHasBeenSet = true; m_resourceLocation = std::move(value); }
    inline void SetResourceLocation(const char* value) { m_resourceLocationHasBeenSet = true; m_resourceLocation.assign(value); }
    inline GetMarketplaceResourceRequest& WithResourceLocation(const Aws::String& value) { SetResourceLocation(value); return *this;}
    inline GetMarketplaceResourceRequest& WithResourceLocation(Aws::String&& value) { SetResourceLocation(std::move(value)); return *this;}
    inline GetMarketplaceResourceRequest& WithResourceLocation(const char* value) { SetResourceLocation(value); return *this;}
    ///@}
  private:

    MarketplaceResourceType m_resourceType;
    bool m_resourceTypeHasBeenSet = false;

    Aws::String m_resourceArn;
    bool m_resourceArnHasBeenSet = false;

    Aws::String m_resourceLocation;
    bool m_resourceLocationHasBeenSet = false;
  };

} // namespace Model
} // namespace imagebuilder
} // namespace Aws
