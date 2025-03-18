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
    AWS_EKS_API MarketplaceInformation() = default;
    AWS_EKS_API MarketplaceInformation(Aws::Utils::Json::JsonView jsonValue);
    AWS_EKS_API MarketplaceInformation& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_EKS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The product ID from the Amazon Web Services Marketplace.</p>
     */
    inline const Aws::String& GetProductId() const { return m_productId; }
    inline bool ProductIdHasBeenSet() const { return m_productIdHasBeenSet; }
    template<typename ProductIdT = Aws::String>
    void SetProductId(ProductIdT&& value) { m_productIdHasBeenSet = true; m_productId = std::forward<ProductIdT>(value); }
    template<typename ProductIdT = Aws::String>
    MarketplaceInformation& WithProductId(ProductIdT&& value) { SetProductId(std::forward<ProductIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The product URL from the Amazon Web Services Marketplace.</p>
     */
    inline const Aws::String& GetProductUrl() const { return m_productUrl; }
    inline bool ProductUrlHasBeenSet() const { return m_productUrlHasBeenSet; }
    template<typename ProductUrlT = Aws::String>
    void SetProductUrl(ProductUrlT&& value) { m_productUrlHasBeenSet = true; m_productUrl = std::forward<ProductUrlT>(value); }
    template<typename ProductUrlT = Aws::String>
    MarketplaceInformation& WithProductUrl(ProductUrlT&& value) { SetProductUrl(std::forward<ProductUrlT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_productId;
    bool m_productIdHasBeenSet = false;

    Aws::String m_productUrl;
    bool m_productUrlHasBeenSet = false;
  };

} // namespace Model
} // namespace EKS
} // namespace Aws
