/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/opensearch/OpenSearchService_EXPORTS.h>
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
namespace OpenSearchService
{
namespace Model
{

  /**
   * <p>The SAML identity povider information.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/opensearch-2021-01-01/SAMLIdp">AWS
   * API Reference</a></p>
   */
  class SAMLIdp
  {
  public:
    AWS_OPENSEARCHSERVICE_API SAMLIdp();
    AWS_OPENSEARCHSERVICE_API SAMLIdp(Aws::Utils::Json::JsonView jsonValue);
    AWS_OPENSEARCHSERVICE_API SAMLIdp& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_OPENSEARCHSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The metadata of the SAML application, in XML format.</p>
     */
    inline const Aws::String& GetMetadataContent() const{ return m_metadataContent; }

    /**
     * <p>The metadata of the SAML application, in XML format.</p>
     */
    inline bool MetadataContentHasBeenSet() const { return m_metadataContentHasBeenSet; }

    /**
     * <p>The metadata of the SAML application, in XML format.</p>
     */
    inline void SetMetadataContent(const Aws::String& value) { m_metadataContentHasBeenSet = true; m_metadataContent = value; }

    /**
     * <p>The metadata of the SAML application, in XML format.</p>
     */
    inline void SetMetadataContent(Aws::String&& value) { m_metadataContentHasBeenSet = true; m_metadataContent = std::move(value); }

    /**
     * <p>The metadata of the SAML application, in XML format.</p>
     */
    inline void SetMetadataContent(const char* value) { m_metadataContentHasBeenSet = true; m_metadataContent.assign(value); }

    /**
     * <p>The metadata of the SAML application, in XML format.</p>
     */
    inline SAMLIdp& WithMetadataContent(const Aws::String& value) { SetMetadataContent(value); return *this;}

    /**
     * <p>The metadata of the SAML application, in XML format.</p>
     */
    inline SAMLIdp& WithMetadataContent(Aws::String&& value) { SetMetadataContent(std::move(value)); return *this;}

    /**
     * <p>The metadata of the SAML application, in XML format.</p>
     */
    inline SAMLIdp& WithMetadataContent(const char* value) { SetMetadataContent(value); return *this;}


    /**
     * <p>The unique entity ID of the application in the SAML identity provider.</p>
     */
    inline const Aws::String& GetEntityId() const{ return m_entityId; }

    /**
     * <p>The unique entity ID of the application in the SAML identity provider.</p>
     */
    inline bool EntityIdHasBeenSet() const { return m_entityIdHasBeenSet; }

    /**
     * <p>The unique entity ID of the application in the SAML identity provider.</p>
     */
    inline void SetEntityId(const Aws::String& value) { m_entityIdHasBeenSet = true; m_entityId = value; }

    /**
     * <p>The unique entity ID of the application in the SAML identity provider.</p>
     */
    inline void SetEntityId(Aws::String&& value) { m_entityIdHasBeenSet = true; m_entityId = std::move(value); }

    /**
     * <p>The unique entity ID of the application in the SAML identity provider.</p>
     */
    inline void SetEntityId(const char* value) { m_entityIdHasBeenSet = true; m_entityId.assign(value); }

    /**
     * <p>The unique entity ID of the application in the SAML identity provider.</p>
     */
    inline SAMLIdp& WithEntityId(const Aws::String& value) { SetEntityId(value); return *this;}

    /**
     * <p>The unique entity ID of the application in the SAML identity provider.</p>
     */
    inline SAMLIdp& WithEntityId(Aws::String&& value) { SetEntityId(std::move(value)); return *this;}

    /**
     * <p>The unique entity ID of the application in the SAML identity provider.</p>
     */
    inline SAMLIdp& WithEntityId(const char* value) { SetEntityId(value); return *this;}

  private:

    Aws::String m_metadataContent;
    bool m_metadataContentHasBeenSet = false;

    Aws::String m_entityId;
    bool m_entityIdHasBeenSet = false;
  };

} // namespace Model
} // namespace OpenSearchService
} // namespace Aws
