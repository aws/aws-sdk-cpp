/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/eks/EKS_EXPORTS.h>
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
namespace EKS
{
namespace Model
{

  /**
   * <p>Information about an Amazon EKS add-on from the Amazon Web Services
   * Marketplace.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/eks-2017-11-01/MarketplaceInformation">AWS
   * API Reference</a></p>
   */
  class MarketplaceInformation
  {
  public:
    AWS_EKS_API MarketplaceInformation();
    AWS_EKS_API MarketplaceInformation(Aws::Utils::Json::JsonView jsonValue);
    AWS_EKS_API MarketplaceInformation& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_EKS_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The product ID from the Amazon Web Services Marketplace.</p>
     */
    inline const Aws::String& GetProductId() const{ return m_productId; }

    /**
     * <p>The product ID from the Amazon Web Services Marketplace.</p>
     */
    inline bool ProductIdHasBeenSet() const { return m_productIdHasBeenSet; }

    /**
     * <p>The product ID from the Amazon Web Services Marketplace.</p>
     */
    inline void SetProductId(const Aws::String& value) { m_productIdHasBeenSet = true; m_productId = value; }

    /**
     * <p>The product ID from the Amazon Web Services Marketplace.</p>
     */
    inline void SetProductId(Aws::String&& value) { m_productIdHasBeenSet = true; m_productId = std::move(value); }

    /**
     * <p>The product ID from the Amazon Web Services Marketplace.</p>
     */
    inline void SetProductId(const char* value) { m_productIdHasBeenSet = true; m_productId.assign(value); }

    /**
     * <p>The product ID from the Amazon Web Services Marketplace.</p>
     */
    inline MarketplaceInformation& WithProductId(const Aws::String& value) { SetProductId(value); return *this;}

    /**
     * <p>The product ID from the Amazon Web Services Marketplace.</p>
     */
    inline MarketplaceInformation& WithProductId(Aws::String&& value) { SetProductId(std::move(value)); return *this;}

    /**
     * <p>The product ID from the Amazon Web Services Marketplace.</p>
     */
    inline MarketplaceInformation& WithProductId(const char* value) { SetProductId(value); return *this;}


    /**
     * <p>The product URL from the Amazon Web Services Marketplace.</p>
     */
    inline const Aws::String& GetProductUrl() const{ return m_productUrl; }

    /**
     * <p>The product URL from the Amazon Web Services Marketplace.</p>
     */
    inline bool ProductUrlHasBeenSet() const { return m_productUrlHasBeenSet; }

    /**
     * <p>The product URL from the Amazon Web Services Marketplace.</p>
     */
    inline void SetProductUrl(const Aws::String& value) { m_productUrlHasBeenSet = true; m_productUrl = value; }

    /**
     * <p>The product URL from the Amazon Web Services Marketplace.</p>
     */
    inline void SetProductUrl(Aws::String&& value) { m_productUrlHasBeenSet = true; m_productUrl = std::move(value); }

    /**
     * <p>The product URL from the Amazon Web Services Marketplace.</p>
     */
    inline void SetProductUrl(const char* value) { m_productUrlHasBeenSet = true; m_productUrl.assign(value); }

    /**
     * <p>The product URL from the Amazon Web Services Marketplace.</p>
     */
    inline MarketplaceInformation& WithProductUrl(const Aws::String& value) { SetProductUrl(value); return *this;}

    /**
     * <p>The product URL from the Amazon Web Services Marketplace.</p>
     */
    inline MarketplaceInformation& WithProductUrl(Aws::String&& value) { SetProductUrl(std::move(value)); return *this;}

    /**
     * <p>The product URL from the Amazon Web Services Marketplace.</p>
     */
    inline MarketplaceInformation& WithProductUrl(const char* value) { SetProductUrl(value); return *this;}

  private:

    Aws::String m_productId;
    bool m_productIdHasBeenSet = false;

    Aws::String m_productUrl;
    bool m_productUrlHasBeenSet = false;
  };

} // namespace Model
} // namespace EKS
} // namespace Aws
