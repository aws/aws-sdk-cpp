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
#include <aws/servicecatalog/ServiceCatalog_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/servicecatalog/model/ProductType.h>
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
namespace ServiceCatalog
{
namespace Model
{

  /**
   * <p>Summary information about a product view.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/servicecatalog-2015-12-10/ProductViewSummary">AWS
   * API Reference</a></p>
   */
  class AWS_SERVICECATALOG_API ProductViewSummary
  {
  public:
    ProductViewSummary();
    ProductViewSummary(Aws::Utils::Json::JsonView jsonValue);
    ProductViewSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The product view identifier.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }

    /**
     * <p>The product view identifier.</p>
     */
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }

    /**
     * <p>The product view identifier.</p>
     */
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }

    /**
     * <p>The product view identifier.</p>
     */
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }

    /**
     * <p>The product view identifier.</p>
     */
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }

    /**
     * <p>The product view identifier.</p>
     */
    inline ProductViewSummary& WithId(const Aws::String& value) { SetId(value); return *this;}

    /**
     * <p>The product view identifier.</p>
     */
    inline ProductViewSummary& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}

    /**
     * <p>The product view identifier.</p>
     */
    inline ProductViewSummary& WithId(const char* value) { SetId(value); return *this;}


    /**
     * <p>The product identifier.</p>
     */
    inline const Aws::String& GetProductId() const{ return m_productId; }

    /**
     * <p>The product identifier.</p>
     */
    inline bool ProductIdHasBeenSet() const { return m_productIdHasBeenSet; }

    /**
     * <p>The product identifier.</p>
     */
    inline void SetProductId(const Aws::String& value) { m_productIdHasBeenSet = true; m_productId = value; }

    /**
     * <p>The product identifier.</p>
     */
    inline void SetProductId(Aws::String&& value) { m_productIdHasBeenSet = true; m_productId = std::move(value); }

    /**
     * <p>The product identifier.</p>
     */
    inline void SetProductId(const char* value) { m_productIdHasBeenSet = true; m_productId.assign(value); }

    /**
     * <p>The product identifier.</p>
     */
    inline ProductViewSummary& WithProductId(const Aws::String& value) { SetProductId(value); return *this;}

    /**
     * <p>The product identifier.</p>
     */
    inline ProductViewSummary& WithProductId(Aws::String&& value) { SetProductId(std::move(value)); return *this;}

    /**
     * <p>The product identifier.</p>
     */
    inline ProductViewSummary& WithProductId(const char* value) { SetProductId(value); return *this;}


    /**
     * <p>The name of the product.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the product.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the product.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the product.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the product.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the product.</p>
     */
    inline ProductViewSummary& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the product.</p>
     */
    inline ProductViewSummary& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the product.</p>
     */
    inline ProductViewSummary& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The owner of the product. Contact the product administrator for the
     * significance of this value.</p>
     */
    inline const Aws::String& GetOwner() const{ return m_owner; }

    /**
     * <p>The owner of the product. Contact the product administrator for the
     * significance of this value.</p>
     */
    inline bool OwnerHasBeenSet() const { return m_ownerHasBeenSet; }

    /**
     * <p>The owner of the product. Contact the product administrator for the
     * significance of this value.</p>
     */
    inline void SetOwner(const Aws::String& value) { m_ownerHasBeenSet = true; m_owner = value; }

    /**
     * <p>The owner of the product. Contact the product administrator for the
     * significance of this value.</p>
     */
    inline void SetOwner(Aws::String&& value) { m_ownerHasBeenSet = true; m_owner = std::move(value); }

    /**
     * <p>The owner of the product. Contact the product administrator for the
     * significance of this value.</p>
     */
    inline void SetOwner(const char* value) { m_ownerHasBeenSet = true; m_owner.assign(value); }

    /**
     * <p>The owner of the product. Contact the product administrator for the
     * significance of this value.</p>
     */
    inline ProductViewSummary& WithOwner(const Aws::String& value) { SetOwner(value); return *this;}

    /**
     * <p>The owner of the product. Contact the product administrator for the
     * significance of this value.</p>
     */
    inline ProductViewSummary& WithOwner(Aws::String&& value) { SetOwner(std::move(value)); return *this;}

    /**
     * <p>The owner of the product. Contact the product administrator for the
     * significance of this value.</p>
     */
    inline ProductViewSummary& WithOwner(const char* value) { SetOwner(value); return *this;}


    /**
     * <p>Short description of the product.</p>
     */
    inline const Aws::String& GetShortDescription() const{ return m_shortDescription; }

    /**
     * <p>Short description of the product.</p>
     */
    inline bool ShortDescriptionHasBeenSet() const { return m_shortDescriptionHasBeenSet; }

    /**
     * <p>Short description of the product.</p>
     */
    inline void SetShortDescription(const Aws::String& value) { m_shortDescriptionHasBeenSet = true; m_shortDescription = value; }

    /**
     * <p>Short description of the product.</p>
     */
    inline void SetShortDescription(Aws::String&& value) { m_shortDescriptionHasBeenSet = true; m_shortDescription = std::move(value); }

    /**
     * <p>Short description of the product.</p>
     */
    inline void SetShortDescription(const char* value) { m_shortDescriptionHasBeenSet = true; m_shortDescription.assign(value); }

    /**
     * <p>Short description of the product.</p>
     */
    inline ProductViewSummary& WithShortDescription(const Aws::String& value) { SetShortDescription(value); return *this;}

    /**
     * <p>Short description of the product.</p>
     */
    inline ProductViewSummary& WithShortDescription(Aws::String&& value) { SetShortDescription(std::move(value)); return *this;}

    /**
     * <p>Short description of the product.</p>
     */
    inline ProductViewSummary& WithShortDescription(const char* value) { SetShortDescription(value); return *this;}


    /**
     * <p>The product type. Contact the product administrator for the significance of
     * this value. If this value is <code>MARKETPLACE</code>, the product was created
     * by AWS Marketplace.</p>
     */
    inline const ProductType& GetType() const{ return m_type; }

    /**
     * <p>The product type. Contact the product administrator for the significance of
     * this value. If this value is <code>MARKETPLACE</code>, the product was created
     * by AWS Marketplace.</p>
     */
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }

    /**
     * <p>The product type. Contact the product administrator for the significance of
     * this value. If this value is <code>MARKETPLACE</code>, the product was created
     * by AWS Marketplace.</p>
     */
    inline void SetType(const ProductType& value) { m_typeHasBeenSet = true; m_type = value; }

    /**
     * <p>The product type. Contact the product administrator for the significance of
     * this value. If this value is <code>MARKETPLACE</code>, the product was created
     * by AWS Marketplace.</p>
     */
    inline void SetType(ProductType&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }

    /**
     * <p>The product type. Contact the product administrator for the significance of
     * this value. If this value is <code>MARKETPLACE</code>, the product was created
     * by AWS Marketplace.</p>
     */
    inline ProductViewSummary& WithType(const ProductType& value) { SetType(value); return *this;}

    /**
     * <p>The product type. Contact the product administrator for the significance of
     * this value. If this value is <code>MARKETPLACE</code>, the product was created
     * by AWS Marketplace.</p>
     */
    inline ProductViewSummary& WithType(ProductType&& value) { SetType(std::move(value)); return *this;}


    /**
     * <p>The distributor of the product. Contact the product administrator for the
     * significance of this value.</p>
     */
    inline const Aws::String& GetDistributor() const{ return m_distributor; }

    /**
     * <p>The distributor of the product. Contact the product administrator for the
     * significance of this value.</p>
     */
    inline bool DistributorHasBeenSet() const { return m_distributorHasBeenSet; }

    /**
     * <p>The distributor of the product. Contact the product administrator for the
     * significance of this value.</p>
     */
    inline void SetDistributor(const Aws::String& value) { m_distributorHasBeenSet = true; m_distributor = value; }

    /**
     * <p>The distributor of the product. Contact the product administrator for the
     * significance of this value.</p>
     */
    inline void SetDistributor(Aws::String&& value) { m_distributorHasBeenSet = true; m_distributor = std::move(value); }

    /**
     * <p>The distributor of the product. Contact the product administrator for the
     * significance of this value.</p>
     */
    inline void SetDistributor(const char* value) { m_distributorHasBeenSet = true; m_distributor.assign(value); }

    /**
     * <p>The distributor of the product. Contact the product administrator for the
     * significance of this value.</p>
     */
    inline ProductViewSummary& WithDistributor(const Aws::String& value) { SetDistributor(value); return *this;}

    /**
     * <p>The distributor of the product. Contact the product administrator for the
     * significance of this value.</p>
     */
    inline ProductViewSummary& WithDistributor(Aws::String&& value) { SetDistributor(std::move(value)); return *this;}

    /**
     * <p>The distributor of the product. Contact the product administrator for the
     * significance of this value.</p>
     */
    inline ProductViewSummary& WithDistributor(const char* value) { SetDistributor(value); return *this;}


    /**
     * <p>Indicates whether the product has a default path. If the product does not
     * have a default path, call <a>ListLaunchPaths</a> to disambiguate between paths.
     * Otherwise, <a>ListLaunchPaths</a> is not required, and the output of
     * <a>ProductViewSummary</a> can be used directly with
     * <a>DescribeProvisioningParameters</a>.</p>
     */
    inline bool GetHasDefaultPath() const{ return m_hasDefaultPath; }

    /**
     * <p>Indicates whether the product has a default path. If the product does not
     * have a default path, call <a>ListLaunchPaths</a> to disambiguate between paths.
     * Otherwise, <a>ListLaunchPaths</a> is not required, and the output of
     * <a>ProductViewSummary</a> can be used directly with
     * <a>DescribeProvisioningParameters</a>.</p>
     */
    inline bool HasDefaultPathHasBeenSet() const { return m_hasDefaultPathHasBeenSet; }

    /**
     * <p>Indicates whether the product has a default path. If the product does not
     * have a default path, call <a>ListLaunchPaths</a> to disambiguate between paths.
     * Otherwise, <a>ListLaunchPaths</a> is not required, and the output of
     * <a>ProductViewSummary</a> can be used directly with
     * <a>DescribeProvisioningParameters</a>.</p>
     */
    inline void SetHasDefaultPath(bool value) { m_hasDefaultPathHasBeenSet = true; m_hasDefaultPath = value; }

    /**
     * <p>Indicates whether the product has a default path. If the product does not
     * have a default path, call <a>ListLaunchPaths</a> to disambiguate between paths.
     * Otherwise, <a>ListLaunchPaths</a> is not required, and the output of
     * <a>ProductViewSummary</a> can be used directly with
     * <a>DescribeProvisioningParameters</a>.</p>
     */
    inline ProductViewSummary& WithHasDefaultPath(bool value) { SetHasDefaultPath(value); return *this;}


    /**
     * <p>The email contact information to obtain support for this Product.</p>
     */
    inline const Aws::String& GetSupportEmail() const{ return m_supportEmail; }

    /**
     * <p>The email contact information to obtain support for this Product.</p>
     */
    inline bool SupportEmailHasBeenSet() const { return m_supportEmailHasBeenSet; }

    /**
     * <p>The email contact information to obtain support for this Product.</p>
     */
    inline void SetSupportEmail(const Aws::String& value) { m_supportEmailHasBeenSet = true; m_supportEmail = value; }

    /**
     * <p>The email contact information to obtain support for this Product.</p>
     */
    inline void SetSupportEmail(Aws::String&& value) { m_supportEmailHasBeenSet = true; m_supportEmail = std::move(value); }

    /**
     * <p>The email contact information to obtain support for this Product.</p>
     */
    inline void SetSupportEmail(const char* value) { m_supportEmailHasBeenSet = true; m_supportEmail.assign(value); }

    /**
     * <p>The email contact information to obtain support for this Product.</p>
     */
    inline ProductViewSummary& WithSupportEmail(const Aws::String& value) { SetSupportEmail(value); return *this;}

    /**
     * <p>The email contact information to obtain support for this Product.</p>
     */
    inline ProductViewSummary& WithSupportEmail(Aws::String&& value) { SetSupportEmail(std::move(value)); return *this;}

    /**
     * <p>The email contact information to obtain support for this Product.</p>
     */
    inline ProductViewSummary& WithSupportEmail(const char* value) { SetSupportEmail(value); return *this;}


    /**
     * <p>The description of the support for this Product.</p>
     */
    inline const Aws::String& GetSupportDescription() const{ return m_supportDescription; }

    /**
     * <p>The description of the support for this Product.</p>
     */
    inline bool SupportDescriptionHasBeenSet() const { return m_supportDescriptionHasBeenSet; }

    /**
     * <p>The description of the support for this Product.</p>
     */
    inline void SetSupportDescription(const Aws::String& value) { m_supportDescriptionHasBeenSet = true; m_supportDescription = value; }

    /**
     * <p>The description of the support for this Product.</p>
     */
    inline void SetSupportDescription(Aws::String&& value) { m_supportDescriptionHasBeenSet = true; m_supportDescription = std::move(value); }

    /**
     * <p>The description of the support for this Product.</p>
     */
    inline void SetSupportDescription(const char* value) { m_supportDescriptionHasBeenSet = true; m_supportDescription.assign(value); }

    /**
     * <p>The description of the support for this Product.</p>
     */
    inline ProductViewSummary& WithSupportDescription(const Aws::String& value) { SetSupportDescription(value); return *this;}

    /**
     * <p>The description of the support for this Product.</p>
     */
    inline ProductViewSummary& WithSupportDescription(Aws::String&& value) { SetSupportDescription(std::move(value)); return *this;}

    /**
     * <p>The description of the support for this Product.</p>
     */
    inline ProductViewSummary& WithSupportDescription(const char* value) { SetSupportDescription(value); return *this;}


    /**
     * <p>The URL information to obtain support for this Product.</p>
     */
    inline const Aws::String& GetSupportUrl() const{ return m_supportUrl; }

    /**
     * <p>The URL information to obtain support for this Product.</p>
     */
    inline bool SupportUrlHasBeenSet() const { return m_supportUrlHasBeenSet; }

    /**
     * <p>The URL information to obtain support for this Product.</p>
     */
    inline void SetSupportUrl(const Aws::String& value) { m_supportUrlHasBeenSet = true; m_supportUrl = value; }

    /**
     * <p>The URL information to obtain support for this Product.</p>
     */
    inline void SetSupportUrl(Aws::String&& value) { m_supportUrlHasBeenSet = true; m_supportUrl = std::move(value); }

    /**
     * <p>The URL information to obtain support for this Product.</p>
     */
    inline void SetSupportUrl(const char* value) { m_supportUrlHasBeenSet = true; m_supportUrl.assign(value); }

    /**
     * <p>The URL information to obtain support for this Product.</p>
     */
    inline ProductViewSummary& WithSupportUrl(const Aws::String& value) { SetSupportUrl(value); return *this;}

    /**
     * <p>The URL information to obtain support for this Product.</p>
     */
    inline ProductViewSummary& WithSupportUrl(Aws::String&& value) { SetSupportUrl(std::move(value)); return *this;}

    /**
     * <p>The URL information to obtain support for this Product.</p>
     */
    inline ProductViewSummary& WithSupportUrl(const char* value) { SetSupportUrl(value); return *this;}

  private:

    Aws::String m_id;
    bool m_idHasBeenSet;

    Aws::String m_productId;
    bool m_productIdHasBeenSet;

    Aws::String m_name;
    bool m_nameHasBeenSet;

    Aws::String m_owner;
    bool m_ownerHasBeenSet;

    Aws::String m_shortDescription;
    bool m_shortDescriptionHasBeenSet;

    ProductType m_type;
    bool m_typeHasBeenSet;

    Aws::String m_distributor;
    bool m_distributorHasBeenSet;

    bool m_hasDefaultPath;
    bool m_hasDefaultPathHasBeenSet;

    Aws::String m_supportEmail;
    bool m_supportEmailHasBeenSet;

    Aws::String m_supportDescription;
    bool m_supportDescriptionHasBeenSet;

    Aws::String m_supportUrl;
    bool m_supportUrlHasBeenSet;
  };

} // namespace Model
} // namespace ServiceCatalog
} // namespace Aws
