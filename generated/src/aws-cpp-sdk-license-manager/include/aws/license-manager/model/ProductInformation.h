/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/license-manager/LicenseManager_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/license-manager/model/ProductInformationFilter.h>
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
namespace LicenseManager
{
namespace Model
{

  /**
   * <p>Describes product information for a license configuration.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/license-manager-2018-08-01/ProductInformation">AWS
   * API Reference</a></p>
   */
  class ProductInformation
  {
  public:
    AWS_LICENSEMANAGER_API ProductInformation() = default;
    AWS_LICENSEMANAGER_API ProductInformation(Aws::Utils::Json::JsonView jsonValue);
    AWS_LICENSEMANAGER_API ProductInformation& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LICENSEMANAGER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Resource type. The possible values are <code>SSM_MANAGED</code> |
     * <code>RDS</code>.</p>
     */
    inline const Aws::String& GetResourceType() const { return m_resourceType; }
    inline bool ResourceTypeHasBeenSet() const { return m_resourceTypeHasBeenSet; }
    template<typename ResourceTypeT = Aws::String>
    void SetResourceType(ResourceTypeT&& value) { m_resourceTypeHasBeenSet = true; m_resourceType = std::forward<ResourceTypeT>(value); }
    template<typename ResourceTypeT = Aws::String>
    ProductInformation& WithResourceType(ResourceTypeT&& value) { SetResourceType(std::forward<ResourceTypeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A Product information filter consists of a
     * <code>ProductInformationFilterComparator</code> which is a logical operator, a
     * <code>ProductInformationFilterName</code> which specifies the type of filter
     * being declared, and a <code>ProductInformationFilterValue</code> that specifies
     * the value to filter on. </p> <p>Accepted values for
     * <code>ProductInformationFilterName</code> are listed here along with
     * descriptions and valid options for
     * <code>ProductInformationFilterComparator</code>. </p> <p>The following filters
     * and are supported when the resource type is <code>SSM_MANAGED</code>:</p> <ul>
     * <li> <p> <code>Application Name</code> - The name of the application. Logical
     * operator is <code>EQUALS</code>.</p> </li> <li> <p> <code>Application
     * Publisher</code> - The publisher of the application. Logical operator is
     * <code>EQUALS</code>.</p> </li> <li> <p> <code>Application Version</code> - The
     * version of the application. Logical operator is <code>EQUALS</code>.</p> </li>
     * <li> <p> <code>Platform Name</code> - The name of the platform. Logical operator
     * is <code>EQUALS</code>.</p> </li> <li> <p> <code>Platform Type</code> - The
     * platform type. Logical operator is <code>EQUALS</code>.</p> </li> <li> <p>
     * <code>Tag:key</code> - The key of a tag attached to an Amazon Web Services
     * resource you wish to exclude from automated discovery. Logical operator is
     * <code>NOT_EQUALS</code>. The key for your tag must be appended to
     * <code>Tag:</code> following the example: <code>Tag:name-of-your-key</code>.
     * <code>ProductInformationFilterValue</code> is optional if you are not using
     * values for the key. </p> </li> <li> <p> <code>AccountId</code> - The 12-digit ID
     * of an Amazon Web Services account you wish to exclude from automated discovery.
     * Logical operator is <code>NOT_EQUALS</code>.</p> </li> <li> <p> <code>License
     * Included</code> - The type of license included. Logical operators are
     * <code>EQUALS</code> and <code>NOT_EQUALS</code>. Possible values are:
     * <code>sql-server-enterprise</code> | <code>sql-server-standard</code> |
     * <code>sql-server-web</code> | <code>windows-server-datacenter</code>.</p> </li>
     * </ul> <p>The following filters and logical operators are supported when the
     * resource type is <code>RDS</code>:</p> <ul> <li> <p> <code>Engine Edition</code>
     * - The edition of the database engine. Logical operator is <code>EQUALS</code>.
     * Possible values are: <code>oracle-ee</code> | <code>oracle-se</code> |
     * <code>oracle-se1</code> | <code>oracle-se2</code> | <code>db2-se</code> |
     * <code>db2-ae</code>.</p> </li> <li> <p> <code>License Pack</code> - The license
     * pack. Logical operator is <code>EQUALS</code>. Possible values are: <code>data
     * guard</code> | <code>diagnostic pack sqlt</code> | <code>tuning pack sqlt</code>
     * | <code>ols</code> | <code>olap</code>.</p> </li> </ul>
     */
    inline const Aws::Vector<ProductInformationFilter>& GetProductInformationFilterList() const { return m_productInformationFilterList; }
    inline bool ProductInformationFilterListHasBeenSet() const { return m_productInformationFilterListHasBeenSet; }
    template<typename ProductInformationFilterListT = Aws::Vector<ProductInformationFilter>>
    void SetProductInformationFilterList(ProductInformationFilterListT&& value) { m_productInformationFilterListHasBeenSet = true; m_productInformationFilterList = std::forward<ProductInformationFilterListT>(value); }
    template<typename ProductInformationFilterListT = Aws::Vector<ProductInformationFilter>>
    ProductInformation& WithProductInformationFilterList(ProductInformationFilterListT&& value) { SetProductInformationFilterList(std::forward<ProductInformationFilterListT>(value)); return *this;}
    template<typename ProductInformationFilterListT = ProductInformationFilter>
    ProductInformation& AddProductInformationFilterList(ProductInformationFilterListT&& value) { m_productInformationFilterListHasBeenSet = true; m_productInformationFilterList.emplace_back(std::forward<ProductInformationFilterListT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_resourceType;
    bool m_resourceTypeHasBeenSet = false;

    Aws::Vector<ProductInformationFilter> m_productInformationFilterList;
    bool m_productInformationFilterListHasBeenSet = false;
  };

} // namespace Model
} // namespace LicenseManager
} // namespace Aws
