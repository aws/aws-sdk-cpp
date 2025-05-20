/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/glue/Glue_EXPORTS.h>
#include <aws/glue/model/ConnectionType.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/glue/model/Capabilities.h>
#include <aws/glue/model/ConnectionTypeVariant.h>
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
namespace Glue
{
namespace Model
{

  /**
   * <p>Brief information about a supported connection type returned by the
   * <code>ListConnectionTypes</code> API.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/ConnectionTypeBrief">AWS
   * API Reference</a></p>
   */
  class ConnectionTypeBrief
  {
  public:
    AWS_GLUE_API ConnectionTypeBrief() = default;
    AWS_GLUE_API ConnectionTypeBrief(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API ConnectionTypeBrief& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the connection type.</p>
     */
    inline ConnectionType GetConnectionType() const { return m_connectionType; }
    inline bool ConnectionTypeHasBeenSet() const { return m_connectionTypeHasBeenSet; }
    inline void SetConnectionType(ConnectionType value) { m_connectionTypeHasBeenSet = true; m_connectionType = value; }
    inline ConnectionTypeBrief& WithConnectionType(ConnectionType value) { SetConnectionType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The human-readable name for the connection type that is displayed in the Glue
     * console.</p>
     */
    inline const Aws::String& GetDisplayName() const { return m_displayName; }
    inline bool DisplayNameHasBeenSet() const { return m_displayNameHasBeenSet; }
    template<typename DisplayNameT = Aws::String>
    void SetDisplayName(DisplayNameT&& value) { m_displayNameHasBeenSet = true; m_displayName = std::forward<DisplayNameT>(value); }
    template<typename DisplayNameT = Aws::String>
    ConnectionTypeBrief& WithDisplayName(DisplayNameT&& value) { SetDisplayName(std::forward<DisplayNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the vendor or provider that created or maintains this connection
     * type.</p>
     */
    inline const Aws::String& GetVendor() const { return m_vendor; }
    inline bool VendorHasBeenSet() const { return m_vendorHasBeenSet; }
    template<typename VendorT = Aws::String>
    void SetVendor(VendorT&& value) { m_vendorHasBeenSet = true; m_vendor = std::forward<VendorT>(value); }
    template<typename VendorT = Aws::String>
    ConnectionTypeBrief& WithVendor(VendorT&& value) { SetVendor(std::forward<VendorT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A description of the connection type.</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    ConnectionTypeBrief& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of categories that this connection type belongs to. Categories help
     * users filter and find appropriate connection types based on their use cases.</p>
     */
    inline const Aws::Vector<Aws::String>& GetCategories() const { return m_categories; }
    inline bool CategoriesHasBeenSet() const { return m_categoriesHasBeenSet; }
    template<typename CategoriesT = Aws::Vector<Aws::String>>
    void SetCategories(CategoriesT&& value) { m_categoriesHasBeenSet = true; m_categories = std::forward<CategoriesT>(value); }
    template<typename CategoriesT = Aws::Vector<Aws::String>>
    ConnectionTypeBrief& WithCategories(CategoriesT&& value) { SetCategories(std::forward<CategoriesT>(value)); return *this;}
    template<typename CategoriesT = Aws::String>
    ConnectionTypeBrief& AddCategories(CategoriesT&& value) { m_categoriesHasBeenSet = true; m_categories.emplace_back(std::forward<CategoriesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The supported authentication types, data interface types (compute
     * environments), and data operations of the connector.</p>
     */
    inline const Capabilities& GetCapabilities() const { return m_capabilities; }
    inline bool CapabilitiesHasBeenSet() const { return m_capabilitiesHasBeenSet; }
    template<typename CapabilitiesT = Capabilities>
    void SetCapabilities(CapabilitiesT&& value) { m_capabilitiesHasBeenSet = true; m_capabilities = std::forward<CapabilitiesT>(value); }
    template<typename CapabilitiesT = Capabilities>
    ConnectionTypeBrief& WithCapabilities(CapabilitiesT&& value) { SetCapabilities(std::forward<CapabilitiesT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The URL of the logo associated with a connection type.</p>
     */
    inline const Aws::String& GetLogoUrl() const { return m_logoUrl; }
    inline bool LogoUrlHasBeenSet() const { return m_logoUrlHasBeenSet; }
    template<typename LogoUrlT = Aws::String>
    void SetLogoUrl(LogoUrlT&& value) { m_logoUrlHasBeenSet = true; m_logoUrl = std::forward<LogoUrlT>(value); }
    template<typename LogoUrlT = Aws::String>
    ConnectionTypeBrief& WithLogoUrl(LogoUrlT&& value) { SetLogoUrl(std::forward<LogoUrlT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of variants available for this connection type. Different variants may
     * provide specialized configurations for specific use cases or implementations of
     * the same general connection type.</p>
     */
    inline const Aws::Vector<ConnectionTypeVariant>& GetConnectionTypeVariants() const { return m_connectionTypeVariants; }
    inline bool ConnectionTypeVariantsHasBeenSet() const { return m_connectionTypeVariantsHasBeenSet; }
    template<typename ConnectionTypeVariantsT = Aws::Vector<ConnectionTypeVariant>>
    void SetConnectionTypeVariants(ConnectionTypeVariantsT&& value) { m_connectionTypeVariantsHasBeenSet = true; m_connectionTypeVariants = std::forward<ConnectionTypeVariantsT>(value); }
    template<typename ConnectionTypeVariantsT = Aws::Vector<ConnectionTypeVariant>>
    ConnectionTypeBrief& WithConnectionTypeVariants(ConnectionTypeVariantsT&& value) { SetConnectionTypeVariants(std::forward<ConnectionTypeVariantsT>(value)); return *this;}
    template<typename ConnectionTypeVariantsT = ConnectionTypeVariant>
    ConnectionTypeBrief& AddConnectionTypeVariants(ConnectionTypeVariantsT&& value) { m_connectionTypeVariantsHasBeenSet = true; m_connectionTypeVariants.emplace_back(std::forward<ConnectionTypeVariantsT>(value)); return *this; }
    ///@}
  private:

    ConnectionType m_connectionType{ConnectionType::NOT_SET};
    bool m_connectionTypeHasBeenSet = false;

    Aws::String m_displayName;
    bool m_displayNameHasBeenSet = false;

    Aws::String m_vendor;
    bool m_vendorHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::Vector<Aws::String> m_categories;
    bool m_categoriesHasBeenSet = false;

    Capabilities m_capabilities;
    bool m_capabilitiesHasBeenSet = false;

    Aws::String m_logoUrl;
    bool m_logoUrlHasBeenSet = false;

    Aws::Vector<ConnectionTypeVariant> m_connectionTypeVariants;
    bool m_connectionTypeVariantsHasBeenSet = false;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
