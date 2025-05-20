/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/glue/Glue_EXPORTS.h>
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
namespace Glue
{
namespace Model
{

  /**
   * <p>Represents a variant of a connection type in Glue Data Catalog. Connection
   * type variants provide specific configurations and behaviors for different
   * implementations of the same general connection type.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/ConnectionTypeVariant">AWS
   * API Reference</a></p>
   */
  class ConnectionTypeVariant
  {
  public:
    AWS_GLUE_API ConnectionTypeVariant() = default;
    AWS_GLUE_API ConnectionTypeVariant(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API ConnectionTypeVariant& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The unique identifier for the connection type variant. This name is used
     * internally to identify the specific variant of a connection type. </p>
     */
    inline const Aws::String& GetConnectionTypeVariantName() const { return m_connectionTypeVariantName; }
    inline bool ConnectionTypeVariantNameHasBeenSet() const { return m_connectionTypeVariantNameHasBeenSet; }
    template<typename ConnectionTypeVariantNameT = Aws::String>
    void SetConnectionTypeVariantName(ConnectionTypeVariantNameT&& value) { m_connectionTypeVariantNameHasBeenSet = true; m_connectionTypeVariantName = std::forward<ConnectionTypeVariantNameT>(value); }
    template<typename ConnectionTypeVariantNameT = Aws::String>
    ConnectionTypeVariant& WithConnectionTypeVariantName(ConnectionTypeVariantNameT&& value) { SetConnectionTypeVariantName(std::forward<ConnectionTypeVariantNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The human-readable name for the connection type variant that is displayed in
     * the Glue console.</p>
     */
    inline const Aws::String& GetDisplayName() const { return m_displayName; }
    inline bool DisplayNameHasBeenSet() const { return m_displayNameHasBeenSet; }
    template<typename DisplayNameT = Aws::String>
    void SetDisplayName(DisplayNameT&& value) { m_displayNameHasBeenSet = true; m_displayName = std::forward<DisplayNameT>(value); }
    template<typename DisplayNameT = Aws::String>
    ConnectionTypeVariant& WithDisplayName(DisplayNameT&& value) { SetDisplayName(std::forward<DisplayNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A detailed description of the connection type variant, including its purpose,
     * use cases, and any specific configuration requirements.</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    ConnectionTypeVariant& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The URL of the logo associated with a connection type variant.</p>
     */
    inline const Aws::String& GetLogoUrl() const { return m_logoUrl; }
    inline bool LogoUrlHasBeenSet() const { return m_logoUrlHasBeenSet; }
    template<typename LogoUrlT = Aws::String>
    void SetLogoUrl(LogoUrlT&& value) { m_logoUrlHasBeenSet = true; m_logoUrl = std::forward<LogoUrlT>(value); }
    template<typename LogoUrlT = Aws::String>
    ConnectionTypeVariant& WithLogoUrl(LogoUrlT&& value) { SetLogoUrl(std::forward<LogoUrlT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_connectionTypeVariantName;
    bool m_connectionTypeVariantNameHasBeenSet = false;

    Aws::String m_displayName;
    bool m_displayNameHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::String m_logoUrl;
    bool m_logoUrlHasBeenSet = false;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
