/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/grafana/ManagedGrafana_EXPORTS.h>
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
namespace ManagedGrafana
{
namespace Model
{

  /**
   * <p>A structure containing the identity provider (IdP) metadata used to integrate
   * the identity provider with this workspace. You can specify the metadata either
   * by providing a URL to its location in the <code>url</code> parameter, or by
   * specifying the full metadata in XML format in the <code>xml</code> parameter.
   * Specifying both will cause an error.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/grafana-2020-08-18/IdpMetadata">AWS
   * API Reference</a></p>
   */
  class IdpMetadata
  {
  public:
    AWS_MANAGEDGRAFANA_API IdpMetadata();
    AWS_MANAGEDGRAFANA_API IdpMetadata(Aws::Utils::Json::JsonView jsonValue);
    AWS_MANAGEDGRAFANA_API IdpMetadata& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MANAGEDGRAFANA_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The URL of the location containing the IdP metadata.</p>
     */
    inline const Aws::String& GetUrl() const{ return m_url; }

    /**
     * <p>The URL of the location containing the IdP metadata.</p>
     */
    inline bool UrlHasBeenSet() const { return m_urlHasBeenSet; }

    /**
     * <p>The URL of the location containing the IdP metadata.</p>
     */
    inline void SetUrl(const Aws::String& value) { m_urlHasBeenSet = true; m_url = value; }

    /**
     * <p>The URL of the location containing the IdP metadata.</p>
     */
    inline void SetUrl(Aws::String&& value) { m_urlHasBeenSet = true; m_url = std::move(value); }

    /**
     * <p>The URL of the location containing the IdP metadata.</p>
     */
    inline void SetUrl(const char* value) { m_urlHasBeenSet = true; m_url.assign(value); }

    /**
     * <p>The URL of the location containing the IdP metadata.</p>
     */
    inline IdpMetadata& WithUrl(const Aws::String& value) { SetUrl(value); return *this;}

    /**
     * <p>The URL of the location containing the IdP metadata.</p>
     */
    inline IdpMetadata& WithUrl(Aws::String&& value) { SetUrl(std::move(value)); return *this;}

    /**
     * <p>The URL of the location containing the IdP metadata.</p>
     */
    inline IdpMetadata& WithUrl(const char* value) { SetUrl(value); return *this;}


    /**
     * <p>The full IdP metadata, in XML format.</p>
     */
    inline const Aws::String& GetXml() const{ return m_xml; }

    /**
     * <p>The full IdP metadata, in XML format.</p>
     */
    inline bool XmlHasBeenSet() const { return m_xmlHasBeenSet; }

    /**
     * <p>The full IdP metadata, in XML format.</p>
     */
    inline void SetXml(const Aws::String& value) { m_xmlHasBeenSet = true; m_xml = value; }

    /**
     * <p>The full IdP metadata, in XML format.</p>
     */
    inline void SetXml(Aws::String&& value) { m_xmlHasBeenSet = true; m_xml = std::move(value); }

    /**
     * <p>The full IdP metadata, in XML format.</p>
     */
    inline void SetXml(const char* value) { m_xmlHasBeenSet = true; m_xml.assign(value); }

    /**
     * <p>The full IdP metadata, in XML format.</p>
     */
    inline IdpMetadata& WithXml(const Aws::String& value) { SetXml(value); return *this;}

    /**
     * <p>The full IdP metadata, in XML format.</p>
     */
    inline IdpMetadata& WithXml(Aws::String&& value) { SetXml(std::move(value)); return *this;}

    /**
     * <p>The full IdP metadata, in XML format.</p>
     */
    inline IdpMetadata& WithXml(const char* value) { SetXml(value); return *this;}

  private:

    Aws::String m_url;
    bool m_urlHasBeenSet = false;

    Aws::String m_xml;
    bool m_xmlHasBeenSet = false;
  };

} // namespace Model
} // namespace ManagedGrafana
} // namespace Aws
