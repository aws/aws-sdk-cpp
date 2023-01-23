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
    AWS_DIRECTCONNECT_API RouterType();
    AWS_DIRECTCONNECT_API RouterType(Aws::Utils::Json::JsonView jsonValue);
    AWS_DIRECTCONNECT_API RouterType& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DIRECTCONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The vendor for the virtual interface's router.</p>
     */
    inline const Aws::String& GetVendor() const{ return m_vendor; }

    /**
     * <p>The vendor for the virtual interface's router.</p>
     */
    inline bool VendorHasBeenSet() const { return m_vendorHasBeenSet; }

    /**
     * <p>The vendor for the virtual interface's router.</p>
     */
    inline void SetVendor(const Aws::String& value) { m_vendorHasBeenSet = true; m_vendor = value; }

    /**
     * <p>The vendor for the virtual interface's router.</p>
     */
    inline void SetVendor(Aws::String&& value) { m_vendorHasBeenSet = true; m_vendor = std::move(value); }

    /**
     * <p>The vendor for the virtual interface's router.</p>
     */
    inline void SetVendor(const char* value) { m_vendorHasBeenSet = true; m_vendor.assign(value); }

    /**
     * <p>The vendor for the virtual interface's router.</p>
     */
    inline RouterType& WithVendor(const Aws::String& value) { SetVendor(value); return *this;}

    /**
     * <p>The vendor for the virtual interface's router.</p>
     */
    inline RouterType& WithVendor(Aws::String&& value) { SetVendor(std::move(value)); return *this;}

    /**
     * <p>The vendor for the virtual interface's router.</p>
     */
    inline RouterType& WithVendor(const char* value) { SetVendor(value); return *this;}


    /**
     * <p>The virtual interface router platform.</p>
     */
    inline const Aws::String& GetPlatform() const{ return m_platform; }

    /**
     * <p>The virtual interface router platform.</p>
     */
    inline bool PlatformHasBeenSet() const { return m_platformHasBeenSet; }

    /**
     * <p>The virtual interface router platform.</p>
     */
    inline void SetPlatform(const Aws::String& value) { m_platformHasBeenSet = true; m_platform = value; }

    /**
     * <p>The virtual interface router platform.</p>
     */
    inline void SetPlatform(Aws::String&& value) { m_platformHasBeenSet = true; m_platform = std::move(value); }

    /**
     * <p>The virtual interface router platform.</p>
     */
    inline void SetPlatform(const char* value) { m_platformHasBeenSet = true; m_platform.assign(value); }

    /**
     * <p>The virtual interface router platform.</p>
     */
    inline RouterType& WithPlatform(const Aws::String& value) { SetPlatform(value); return *this;}

    /**
     * <p>The virtual interface router platform.</p>
     */
    inline RouterType& WithPlatform(Aws::String&& value) { SetPlatform(std::move(value)); return *this;}

    /**
     * <p>The virtual interface router platform.</p>
     */
    inline RouterType& WithPlatform(const char* value) { SetPlatform(value); return *this;}


    /**
     * <p>The router software. </p>
     */
    inline const Aws::String& GetSoftware() const{ return m_software; }

    /**
     * <p>The router software. </p>
     */
    inline bool SoftwareHasBeenSet() const { return m_softwareHasBeenSet; }

    /**
     * <p>The router software. </p>
     */
    inline void SetSoftware(const Aws::String& value) { m_softwareHasBeenSet = true; m_software = value; }

    /**
     * <p>The router software. </p>
     */
    inline void SetSoftware(Aws::String&& value) { m_softwareHasBeenSet = true; m_software = std::move(value); }

    /**
     * <p>The router software. </p>
     */
    inline void SetSoftware(const char* value) { m_softwareHasBeenSet = true; m_software.assign(value); }

    /**
     * <p>The router software. </p>
     */
    inline RouterType& WithSoftware(const Aws::String& value) { SetSoftware(value); return *this;}

    /**
     * <p>The router software. </p>
     */
    inline RouterType& WithSoftware(Aws::String&& value) { SetSoftware(std::move(value)); return *this;}

    /**
     * <p>The router software. </p>
     */
    inline RouterType& WithSoftware(const char* value) { SetSoftware(value); return *this;}


    /**
     * <p>The template for the virtual interface's router.</p>
     */
    inline const Aws::String& GetXsltTemplateName() const{ return m_xsltTemplateName; }

    /**
     * <p>The template for the virtual interface's router.</p>
     */
    inline bool XsltTemplateNameHasBeenSet() const { return m_xsltTemplateNameHasBeenSet; }

    /**
     * <p>The template for the virtual interface's router.</p>
     */
    inline void SetXsltTemplateName(const Aws::String& value) { m_xsltTemplateNameHasBeenSet = true; m_xsltTemplateName = value; }

    /**
     * <p>The template for the virtual interface's router.</p>
     */
    inline void SetXsltTemplateName(Aws::String&& value) { m_xsltTemplateNameHasBeenSet = true; m_xsltTemplateName = std::move(value); }

    /**
     * <p>The template for the virtual interface's router.</p>
     */
    inline void SetXsltTemplateName(const char* value) { m_xsltTemplateNameHasBeenSet = true; m_xsltTemplateName.assign(value); }

    /**
     * <p>The template for the virtual interface's router.</p>
     */
    inline RouterType& WithXsltTemplateName(const Aws::String& value) { SetXsltTemplateName(value); return *this;}

    /**
     * <p>The template for the virtual interface's router.</p>
     */
    inline RouterType& WithXsltTemplateName(Aws::String&& value) { SetXsltTemplateName(std::move(value)); return *this;}

    /**
     * <p>The template for the virtual interface's router.</p>
     */
    inline RouterType& WithXsltTemplateName(const char* value) { SetXsltTemplateName(value); return *this;}


    /**
     * <p>The MAC Security (MACsec) template for the virtual interface's router.</p>
     */
    inline const Aws::String& GetXsltTemplateNameForMacSec() const{ return m_xsltTemplateNameForMacSec; }

    /**
     * <p>The MAC Security (MACsec) template for the virtual interface's router.</p>
     */
    inline bool XsltTemplateNameForMacSecHasBeenSet() const { return m_xsltTemplateNameForMacSecHasBeenSet; }

    /**
     * <p>The MAC Security (MACsec) template for the virtual interface's router.</p>
     */
    inline void SetXsltTemplateNameForMacSec(const Aws::String& value) { m_xsltTemplateNameForMacSecHasBeenSet = true; m_xsltTemplateNameForMacSec = value; }

    /**
     * <p>The MAC Security (MACsec) template for the virtual interface's router.</p>
     */
    inline void SetXsltTemplateNameForMacSec(Aws::String&& value) { m_xsltTemplateNameForMacSecHasBeenSet = true; m_xsltTemplateNameForMacSec = std::move(value); }

    /**
     * <p>The MAC Security (MACsec) template for the virtual interface's router.</p>
     */
    inline void SetXsltTemplateNameForMacSec(const char* value) { m_xsltTemplateNameForMacSecHasBeenSet = true; m_xsltTemplateNameForMacSec.assign(value); }

    /**
     * <p>The MAC Security (MACsec) template for the virtual interface's router.</p>
     */
    inline RouterType& WithXsltTemplateNameForMacSec(const Aws::String& value) { SetXsltTemplateNameForMacSec(value); return *this;}

    /**
     * <p>The MAC Security (MACsec) template for the virtual interface's router.</p>
     */
    inline RouterType& WithXsltTemplateNameForMacSec(Aws::String&& value) { SetXsltTemplateNameForMacSec(std::move(value)); return *this;}

    /**
     * <p>The MAC Security (MACsec) template for the virtual interface's router.</p>
     */
    inline RouterType& WithXsltTemplateNameForMacSec(const char* value) { SetXsltTemplateNameForMacSec(value); return *this;}


    /**
     * <p>Identifies the router by a combination of vendor, platform, and software
     * version. For example, <code>CiscoSystemsInc-2900SeriesRouters-IOS124</code>.</p>
     */
    inline const Aws::String& GetRouterTypeIdentifier() const{ return m_routerTypeIdentifier; }

    /**
     * <p>Identifies the router by a combination of vendor, platform, and software
     * version. For example, <code>CiscoSystemsInc-2900SeriesRouters-IOS124</code>.</p>
     */
    inline bool RouterTypeIdentifierHasBeenSet() const { return m_routerTypeIdentifierHasBeenSet; }

    /**
     * <p>Identifies the router by a combination of vendor, platform, and software
     * version. For example, <code>CiscoSystemsInc-2900SeriesRouters-IOS124</code>.</p>
     */
    inline void SetRouterTypeIdentifier(const Aws::String& value) { m_routerTypeIdentifierHasBeenSet = true; m_routerTypeIdentifier = value; }

    /**
     * <p>Identifies the router by a combination of vendor, platform, and software
     * version. For example, <code>CiscoSystemsInc-2900SeriesRouters-IOS124</code>.</p>
     */
    inline void SetRouterTypeIdentifier(Aws::String&& value) { m_routerTypeIdentifierHasBeenSet = true; m_routerTypeIdentifier = std::move(value); }

    /**
     * <p>Identifies the router by a combination of vendor, platform, and software
     * version. For example, <code>CiscoSystemsInc-2900SeriesRouters-IOS124</code>.</p>
     */
    inline void SetRouterTypeIdentifier(const char* value) { m_routerTypeIdentifierHasBeenSet = true; m_routerTypeIdentifier.assign(value); }

    /**
     * <p>Identifies the router by a combination of vendor, platform, and software
     * version. For example, <code>CiscoSystemsInc-2900SeriesRouters-IOS124</code>.</p>
     */
    inline RouterType& WithRouterTypeIdentifier(const Aws::String& value) { SetRouterTypeIdentifier(value); return *this;}

    /**
     * <p>Identifies the router by a combination of vendor, platform, and software
     * version. For example, <code>CiscoSystemsInc-2900SeriesRouters-IOS124</code>.</p>
     */
    inline RouterType& WithRouterTypeIdentifier(Aws::String&& value) { SetRouterTypeIdentifier(std::move(value)); return *this;}

    /**
     * <p>Identifies the router by a combination of vendor, platform, and software
     * version. For example, <code>CiscoSystemsInc-2900SeriesRouters-IOS124</code>.</p>
     */
    inline RouterType& WithRouterTypeIdentifier(const char* value) { SetRouterTypeIdentifier(value); return *this;}

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
