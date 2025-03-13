/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/directconnect/DirectConnect_EXPORTS.h>
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
namespace DirectConnect
{
namespace Model
{

  /**
   * <p>Information about the virtual router.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/directconnect-2012-10-25/RouterType">AWS
   * API Reference</a></p>
   */
  class RouterType
  {
  public:
    AWS_DIRECTCONNECT_API RouterType() = default;
    AWS_DIRECTCONNECT_API RouterType(Aws::Utils::Json::JsonView jsonValue);
    AWS_DIRECTCONNECT_API RouterType& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DIRECTCONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The vendor for the virtual interface's router.</p>
     */
    inline const Aws::String& GetVendor() const { return m_vendor; }
    inline bool VendorHasBeenSet() const { return m_vendorHasBeenSet; }
    template<typename VendorT = Aws::String>
    void SetVendor(VendorT&& value) { m_vendorHasBeenSet = true; m_vendor = std::forward<VendorT>(value); }
    template<typename VendorT = Aws::String>
    RouterType& WithVendor(VendorT&& value) { SetVendor(std::forward<VendorT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The virtual interface router platform.</p>
     */
    inline const Aws::String& GetPlatform() const { return m_platform; }
    inline bool PlatformHasBeenSet() const { return m_platformHasBeenSet; }
    template<typename PlatformT = Aws::String>
    void SetPlatform(PlatformT&& value) { m_platformHasBeenSet = true; m_platform = std::forward<PlatformT>(value); }
    template<typename PlatformT = Aws::String>
    RouterType& WithPlatform(PlatformT&& value) { SetPlatform(std::forward<PlatformT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The router software. </p>
     */
    inline const Aws::String& GetSoftware() const { return m_software; }
    inline bool SoftwareHasBeenSet() const { return m_softwareHasBeenSet; }
    template<typename SoftwareT = Aws::String>
    void SetSoftware(SoftwareT&& value) { m_softwareHasBeenSet = true; m_software = std::forward<SoftwareT>(value); }
    template<typename SoftwareT = Aws::String>
    RouterType& WithSoftware(SoftwareT&& value) { SetSoftware(std::forward<SoftwareT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The template for the virtual interface's router.</p>
     */
    inline const Aws::String& GetXsltTemplateName() const { return m_xsltTemplateName; }
    inline bool XsltTemplateNameHasBeenSet() const { return m_xsltTemplateNameHasBeenSet; }
    template<typename XsltTemplateNameT = Aws::String>
    void SetXsltTemplateName(XsltTemplateNameT&& value) { m_xsltTemplateNameHasBeenSet = true; m_xsltTemplateName = std::forward<XsltTemplateNameT>(value); }
    template<typename XsltTemplateNameT = Aws::String>
    RouterType& WithXsltTemplateName(XsltTemplateNameT&& value) { SetXsltTemplateName(std::forward<XsltTemplateNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The MAC Security (MACsec) template for the virtual interface's router.</p>
     */
    inline const Aws::String& GetXsltTemplateNameForMacSec() const { return m_xsltTemplateNameForMacSec; }
    inline bool XsltTemplateNameForMacSecHasBeenSet() const { return m_xsltTemplateNameForMacSecHasBeenSet; }
    template<typename XsltTemplateNameForMacSecT = Aws::String>
    void SetXsltTemplateNameForMacSec(XsltTemplateNameForMacSecT&& value) { m_xsltTemplateNameForMacSecHasBeenSet = true; m_xsltTemplateNameForMacSec = std::forward<XsltTemplateNameForMacSecT>(value); }
    template<typename XsltTemplateNameForMacSecT = Aws::String>
    RouterType& WithXsltTemplateNameForMacSec(XsltTemplateNameForMacSecT&& value) { SetXsltTemplateNameForMacSec(std::forward<XsltTemplateNameForMacSecT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Identifies the router by a combination of vendor, platform, and software
     * version. For example, <code>CiscoSystemsInc-2900SeriesRouters-IOS124</code>.</p>
     */
    inline const Aws::String& GetRouterTypeIdentifier() const { return m_routerTypeIdentifier; }
    inline bool RouterTypeIdentifierHasBeenSet() const { return m_routerTypeIdentifierHasBeenSet; }
    template<typename RouterTypeIdentifierT = Aws::String>
    void SetRouterTypeIdentifier(RouterTypeIdentifierT&& value) { m_routerTypeIdentifierHasBeenSet = true; m_routerTypeIdentifier = std::forward<RouterTypeIdentifierT>(value); }
    template<typename RouterTypeIdentifierT = Aws::String>
    RouterType& WithRouterTypeIdentifier(RouterTypeIdentifierT&& value) { SetRouterTypeIdentifier(std::forward<RouterTypeIdentifierT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_vendor;
    bool m_vendorHasBeenSet = false;

    Aws::String m_platform;
    bool m_platformHasBeenSet = false;

    Aws::String m_software;
    bool m_softwareHasBeenSet = false;

    Aws::String m_xsltTemplateName;
    bool m_xsltTemplateNameHasBeenSet = false;

    Aws::String m_xsltTemplateNameForMacSec;
    bool m_xsltTemplateNameForMacSecHasBeenSet = false;

    Aws::String m_routerTypeIdentifier;
    bool m_routerTypeIdentifierHasBeenSet = false;
  };

} // namespace Model
} // namespace DirectConnect
} // namespace Aws
