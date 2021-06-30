/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/servicediscovery/ServiceDiscovery_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/servicediscovery/model/PublicDnsNamespacePropertiesChange.h>
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
namespace ServiceDiscovery
{
namespace Model
{

  /**
   * <p>Updated properties for the public DNS namespace.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/servicediscovery-2017-03-14/PublicDnsNamespaceChange">AWS
   * API Reference</a></p>
   */
  class AWS_SERVICEDISCOVERY_API PublicDnsNamespaceChange
  {
  public:
    PublicDnsNamespaceChange();
    PublicDnsNamespaceChange(Aws::Utils::Json::JsonView jsonValue);
    PublicDnsNamespaceChange& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>An updated description for the public DNS namespace.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>An updated description for the public DNS namespace.</p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>An updated description for the public DNS namespace.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>An updated description for the public DNS namespace.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>An updated description for the public DNS namespace.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>An updated description for the public DNS namespace.</p>
     */
    inline PublicDnsNamespaceChange& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>An updated description for the public DNS namespace.</p>
     */
    inline PublicDnsNamespaceChange& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>An updated description for the public DNS namespace.</p>
     */
    inline PublicDnsNamespaceChange& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>Properties to be updated in the public DNS namespace.</p>
     */
    inline const PublicDnsNamespacePropertiesChange& GetProperties() const{ return m_properties; }

    /**
     * <p>Properties to be updated in the public DNS namespace.</p>
     */
    inline bool PropertiesHasBeenSet() const { return m_propertiesHasBeenSet; }

    /**
     * <p>Properties to be updated in the public DNS namespace.</p>
     */
    inline void SetProperties(const PublicDnsNamespacePropertiesChange& value) { m_propertiesHasBeenSet = true; m_properties = value; }

    /**
     * <p>Properties to be updated in the public DNS namespace.</p>
     */
    inline void SetProperties(PublicDnsNamespacePropertiesChange&& value) { m_propertiesHasBeenSet = true; m_properties = std::move(value); }

    /**
     * <p>Properties to be updated in the public DNS namespace.</p>
     */
    inline PublicDnsNamespaceChange& WithProperties(const PublicDnsNamespacePropertiesChange& value) { SetProperties(value); return *this;}

    /**
     * <p>Properties to be updated in the public DNS namespace.</p>
     */
    inline PublicDnsNamespaceChange& WithProperties(PublicDnsNamespacePropertiesChange&& value) { SetProperties(std::move(value)); return *this;}

  private:

    Aws::String m_description;
    bool m_descriptionHasBeenSet;

    PublicDnsNamespacePropertiesChange m_properties;
    bool m_propertiesHasBeenSet;
  };

} // namespace Model
} // namespace ServiceDiscovery
} // namespace Aws
