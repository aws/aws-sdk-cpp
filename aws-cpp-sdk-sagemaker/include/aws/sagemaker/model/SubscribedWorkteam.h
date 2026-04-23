/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
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
namespace SageMaker
{
namespace Model
{

  /**
   * <p>Describes a work team of a vendor that does the a labelling
   * job.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/SubscribedWorkteam">AWS
   * API Reference</a></p>
   */
  class AWS_SAGEMAKER_API SubscribedWorkteam
  {
  public:
    SubscribedWorkteam();
    SubscribedWorkteam(Aws::Utils::Json::JsonView jsonValue);
    SubscribedWorkteam& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The Amazon Resource Name (ARN) of the vendor that you have subscribed.</p>
     */
    inline const Aws::String& GetWorkteamArn() const{ return m_workteamArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the vendor that you have subscribed.</p>
     */
    inline bool WorkteamArnHasBeenSet() const { return m_workteamArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the vendor that you have subscribed.</p>
     */
    inline void SetWorkteamArn(const Aws::String& value) { m_workteamArnHasBeenSet = true; m_workteamArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the vendor that you have subscribed.</p>
     */
    inline void SetWorkteamArn(Aws::String&& value) { m_workteamArnHasBeenSet = true; m_workteamArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the vendor that you have subscribed.</p>
     */
    inline void SetWorkteamArn(const char* value) { m_workteamArnHasBeenSet = true; m_workteamArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the vendor that you have subscribed.</p>
     */
    inline SubscribedWorkteam& WithWorkteamArn(const Aws::String& value) { SetWorkteamArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the vendor that you have subscribed.</p>
     */
    inline SubscribedWorkteam& WithWorkteamArn(Aws::String&& value) { SetWorkteamArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the vendor that you have subscribed.</p>
     */
    inline SubscribedWorkteam& WithWorkteamArn(const char* value) { SetWorkteamArn(value); return *this;}


    /**
     * <p>The title of the service provided by the vendor in the Amazon
     * Marketplace.</p>
     */
    inline const Aws::String& GetMarketplaceTitle() const{ return m_marketplaceTitle; }

    /**
     * <p>The title of the service provided by the vendor in the Amazon
     * Marketplace.</p>
     */
    inline bool MarketplaceTitleHasBeenSet() const { return m_marketplaceTitleHasBeenSet; }

    /**
     * <p>The title of the service provided by the vendor in the Amazon
     * Marketplace.</p>
     */
    inline void SetMarketplaceTitle(const Aws::String& value) { m_marketplaceTitleHasBeenSet = true; m_marketplaceTitle = value; }

    /**
     * <p>The title of the service provided by the vendor in the Amazon
     * Marketplace.</p>
     */
    inline void SetMarketplaceTitle(Aws::String&& value) { m_marketplaceTitleHasBeenSet = true; m_marketplaceTitle = std::move(value); }

    /**
     * <p>The title of the service provided by the vendor in the Amazon
     * Marketplace.</p>
     */
    inline void SetMarketplaceTitle(const char* value) { m_marketplaceTitleHasBeenSet = true; m_marketplaceTitle.assign(value); }

    /**
     * <p>The title of the service provided by the vendor in the Amazon
     * Marketplace.</p>
     */
    inline SubscribedWorkteam& WithMarketplaceTitle(const Aws::String& value) { SetMarketplaceTitle(value); return *this;}

    /**
     * <p>The title of the service provided by the vendor in the Amazon
     * Marketplace.</p>
     */
    inline SubscribedWorkteam& WithMarketplaceTitle(Aws::String&& value) { SetMarketplaceTitle(std::move(value)); return *this;}

    /**
     * <p>The title of the service provided by the vendor in the Amazon
     * Marketplace.</p>
     */
    inline SubscribedWorkteam& WithMarketplaceTitle(const char* value) { SetMarketplaceTitle(value); return *this;}


    /**
     * <p>The name of the vendor in the Amazon Marketplace.</p>
     */
    inline const Aws::String& GetSellerName() const{ return m_sellerName; }

    /**
     * <p>The name of the vendor in the Amazon Marketplace.</p>
     */
    inline bool SellerNameHasBeenSet() const { return m_sellerNameHasBeenSet; }

    /**
     * <p>The name of the vendor in the Amazon Marketplace.</p>
     */
    inline void SetSellerName(const Aws::String& value) { m_sellerNameHasBeenSet = true; m_sellerName = value; }

    /**
     * <p>The name of the vendor in the Amazon Marketplace.</p>
     */
    inline void SetSellerName(Aws::String&& value) { m_sellerNameHasBeenSet = true; m_sellerName = std::move(value); }

    /**
     * <p>The name of the vendor in the Amazon Marketplace.</p>
     */
    inline void SetSellerName(const char* value) { m_sellerNameHasBeenSet = true; m_sellerName.assign(value); }

    /**
     * <p>The name of the vendor in the Amazon Marketplace.</p>
     */
    inline SubscribedWorkteam& WithSellerName(const Aws::String& value) { SetSellerName(value); return *this;}

    /**
     * <p>The name of the vendor in the Amazon Marketplace.</p>
     */
    inline SubscribedWorkteam& WithSellerName(Aws::String&& value) { SetSellerName(std::move(value)); return *this;}

    /**
     * <p>The name of the vendor in the Amazon Marketplace.</p>
     */
    inline SubscribedWorkteam& WithSellerName(const char* value) { SetSellerName(value); return *this;}


    /**
     * <p>The description of the vendor from the Amazon Marketplace.</p>
     */
    inline const Aws::String& GetMarketplaceDescription() const{ return m_marketplaceDescription; }

    /**
     * <p>The description of the vendor from the Amazon Marketplace.</p>
     */
    inline bool MarketplaceDescriptionHasBeenSet() const { return m_marketplaceDescriptionHasBeenSet; }

    /**
     * <p>The description of the vendor from the Amazon Marketplace.</p>
     */
    inline void SetMarketplaceDescription(const Aws::String& value) { m_marketplaceDescriptionHasBeenSet = true; m_marketplaceDescription = value; }

    /**
     * <p>The description of the vendor from the Amazon Marketplace.</p>
     */
    inline void SetMarketplaceDescription(Aws::String&& value) { m_marketplaceDescriptionHasBeenSet = true; m_marketplaceDescription = std::move(value); }

    /**
     * <p>The description of the vendor from the Amazon Marketplace.</p>
     */
    inline void SetMarketplaceDescription(const char* value) { m_marketplaceDescriptionHasBeenSet = true; m_marketplaceDescription.assign(value); }

    /**
     * <p>The description of the vendor from the Amazon Marketplace.</p>
     */
    inline SubscribedWorkteam& WithMarketplaceDescription(const Aws::String& value) { SetMarketplaceDescription(value); return *this;}

    /**
     * <p>The description of the vendor from the Amazon Marketplace.</p>
     */
    inline SubscribedWorkteam& WithMarketplaceDescription(Aws::String&& value) { SetMarketplaceDescription(std::move(value)); return *this;}

    /**
     * <p>The description of the vendor from the Amazon Marketplace.</p>
     */
    inline SubscribedWorkteam& WithMarketplaceDescription(const char* value) { SetMarketplaceDescription(value); return *this;}


    /**
     * <p/>
     */
    inline const Aws::String& GetListingId() const{ return m_listingId; }

    /**
     * <p/>
     */
    inline bool ListingIdHasBeenSet() const { return m_listingIdHasBeenSet; }

    /**
     * <p/>
     */
    inline void SetListingId(const Aws::String& value) { m_listingIdHasBeenSet = true; m_listingId = value; }

    /**
     * <p/>
     */
    inline void SetListingId(Aws::String&& value) { m_listingIdHasBeenSet = true; m_listingId = std::move(value); }

    /**
     * <p/>
     */
    inline void SetListingId(const char* value) { m_listingIdHasBeenSet = true; m_listingId.assign(value); }

    /**
     * <p/>
     */
    inline SubscribedWorkteam& WithListingId(const Aws::String& value) { SetListingId(value); return *this;}

    /**
     * <p/>
     */
    inline SubscribedWorkteam& WithListingId(Aws::String&& value) { SetListingId(std::move(value)); return *this;}

    /**
     * <p/>
     */
    inline SubscribedWorkteam& WithListingId(const char* value) { SetListingId(value); return *this;}

  private:

    Aws::String m_workteamArn;
    bool m_workteamArnHasBeenSet;

    Aws::String m_marketplaceTitle;
    bool m_marketplaceTitleHasBeenSet;

    Aws::String m_sellerName;
    bool m_sellerNameHasBeenSet;

    Aws::String m_marketplaceDescription;
    bool m_marketplaceDescriptionHasBeenSet;

    Aws::String m_listingId;
    bool m_listingIdHasBeenSet;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
