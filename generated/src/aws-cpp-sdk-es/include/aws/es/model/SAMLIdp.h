/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/es/ElasticsearchService_EXPORTS.h>
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
namespace ElasticsearchService
{
namespace Model
{

  /**
   * <p>Specifies the SAML Identity Provider's information.</p><p><h3>See Also:</h3> 
   * <a href="http://docs.aws.amazon.com/goto/WebAPI/es-2015-01-01/SAMLIdp">AWS API
   * Reference</a></p>
   */
  class SAMLIdp
  {
  public:
    AWS_ELASTICSEARCHSERVICE_API SAMLIdp();
    AWS_ELASTICSEARCHSERVICE_API SAMLIdp(Aws::Utils::Json::JsonView jsonValue);
    AWS_ELASTICSEARCHSERVICE_API SAMLIdp& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_ELASTICSEARCHSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Metadata of the SAML application in xml format.</p>
     */
    inline const Aws::String& GetMetadataContent() const{ return m_metadataContent; }
    inline bool MetadataContentHasBeenSet() const { return m_metadataContentHasBeenSet; }
    inline void SetMetadataContent(const Aws::String& value) { m_metadataContentHasBeenSet = true; m_metadataContent = value; }
    inline void SetMetadataContent(Aws::String&& value) { m_metadataContentHasBeenSet = true; m_metadataContent = std::move(value); }
    inline void SetMetadataContent(const char* value) { m_metadataContentHasBeenSet = true; m_metadataContent.assign(value); }
    inline SAMLIdp& WithMetadataContent(const Aws::String& value) { SetMetadataContent(value); return *this;}
    inline SAMLIdp& WithMetadataContent(Aws::String&& value) { SetMetadataContent(std::move(value)); return *this;}
    inline SAMLIdp& WithMetadataContent(const char* value) { SetMetadataContent(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique Entity ID of the application in SAML Identity Provider.</p>
     */
    inline const Aws::String& GetEntityId() const{ return m_entityId; }
    inline bool EntityIdHasBeenSet() const { return m_entityIdHasBeenSet; }
    inline void SetEntityId(const Aws::String& value) { m_entityIdHasBeenSet = true; m_entityId = value; }
    inline void SetEntityId(Aws::String&& value) { m_entityIdHasBeenSet = true; m_entityId = std::move(value); }
    inline void SetEntityId(const char* value) { m_entityIdHasBeenSet = true; m_entityId.assign(value); }
    inline SAMLIdp& WithEntityId(const Aws::String& value) { SetEntityId(value); return *this;}
    inline SAMLIdp& WithEntityId(Aws::String&& value) { SetEntityId(std::move(value)); return *this;}
    inline SAMLIdp& WithEntityId(const char* value) { SetEntityId(value); return *this;}
    ///@}
  private:

    Aws::String m_metadataContent;
    bool m_metadataContentHasBeenSet = false;

    Aws::String m_entityId;
    bool m_entityIdHasBeenSet = false;
  };

} // namespace Model
} // namespace ElasticsearchService
} // namespace Aws
