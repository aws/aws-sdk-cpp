/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/glue/Glue_EXPORTS.h>
#include <aws/glue/GlueRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/glue/model/ConnectionInput.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <utility>

namespace Aws
{
namespace Glue
{
namespace Model
{

  /**
   */
  class CreateConnectionRequest : public GlueRequest
  {
  public:
    AWS_GLUE_API CreateConnectionRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateConnection"; }

    AWS_GLUE_API Aws::String SerializePayload() const override;

    AWS_GLUE_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The ID of the Data Catalog in which to create the connection. If none is
     * provided, the Amazon Web Services account ID is used by default.</p>
     */
    inline const Aws::String& GetCatalogId() const{ return m_catalogId; }

    /**
     * <p>The ID of the Data Catalog in which to create the connection. If none is
     * provided, the Amazon Web Services account ID is used by default.</p>
     */
    inline bool CatalogIdHasBeenSet() const { return m_catalogIdHasBeenSet; }

    /**
     * <p>The ID of the Data Catalog in which to create the connection. If none is
     * provided, the Amazon Web Services account ID is used by default.</p>
     */
    inline void SetCatalogId(const Aws::String& value) { m_catalogIdHasBeenSet = true; m_catalogId = value; }

    /**
     * <p>The ID of the Data Catalog in which to create the connection. If none is
     * provided, the Amazon Web Services account ID is used by default.</p>
     */
    inline void SetCatalogId(Aws::String&& value) { m_catalogIdHasBeenSet = true; m_catalogId = std::move(value); }

    /**
     * <p>The ID of the Data Catalog in which to create the connection. If none is
     * provided, the Amazon Web Services account ID is used by default.</p>
     */
    inline void SetCatalogId(const char* value) { m_catalogIdHasBeenSet = true; m_catalogId.assign(value); }

    /**
     * <p>The ID of the Data Catalog in which to create the connection. If none is
     * provided, the Amazon Web Services account ID is used by default.</p>
     */
    inline CreateConnectionRequest& WithCatalogId(const Aws::String& value) { SetCatalogId(value); return *this;}

    /**
     * <p>The ID of the Data Catalog in which to create the connection. If none is
     * provided, the Amazon Web Services account ID is used by default.</p>
     */
    inline CreateConnectionRequest& WithCatalogId(Aws::String&& value) { SetCatalogId(std::move(value)); return *this;}

    /**
     * <p>The ID of the Data Catalog in which to create the connection. If none is
     * provided, the Amazon Web Services account ID is used by default.</p>
     */
    inline CreateConnectionRequest& WithCatalogId(const char* value) { SetCatalogId(value); return *this;}


    /**
     * <p>A <code>ConnectionInput</code> object defining the connection to create.</p>
     */
    inline const ConnectionInput& GetConnectionInput() const{ return m_connectionInput; }

    /**
     * <p>A <code>ConnectionInput</code> object defining the connection to create.</p>
     */
    inline bool ConnectionInputHasBeenSet() const { return m_connectionInputHasBeenSet; }

    /**
     * <p>A <code>ConnectionInput</code> object defining the connection to create.</p>
     */
    inline void SetConnectionInput(const ConnectionInput& value) { m_connectionInputHasBeenSet = true; m_connectionInput = value; }

    /**
     * <p>A <code>ConnectionInput</code> object defining the connection to create.</p>
     */
    inline void SetConnectionInput(ConnectionInput&& value) { m_connectionInputHasBeenSet = true; m_connectionInput = std::move(value); }

    /**
     * <p>A <code>ConnectionInput</code> object defining the connection to create.</p>
     */
    inline CreateConnectionRequest& WithConnectionInput(const ConnectionInput& value) { SetConnectionInput(value); return *this;}

    /**
     * <p>A <code>ConnectionInput</code> object defining the connection to create.</p>
     */
    inline CreateConnectionRequest& WithConnectionInput(ConnectionInput&& value) { SetConnectionInput(std::move(value)); return *this;}


    /**
     * <p>The tags you assign to the connection.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }

    /**
     * <p>The tags you assign to the connection.</p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>The tags you assign to the connection.</p>
     */
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>The tags you assign to the connection.</p>
     */
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>The tags you assign to the connection.</p>
     */
    inline CreateConnectionRequest& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}

    /**
     * <p>The tags you assign to the connection.</p>
     */
    inline CreateConnectionRequest& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>The tags you assign to the connection.</p>
     */
    inline CreateConnectionRequest& AddTags(const Aws::String& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }

    /**
     * <p>The tags you assign to the connection.</p>
     */
    inline CreateConnectionRequest& AddTags(Aws::String&& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>The tags you assign to the connection.</p>
     */
    inline CreateConnectionRequest& AddTags(const Aws::String& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The tags you assign to the connection.</p>
     */
    inline CreateConnectionRequest& AddTags(Aws::String&& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>The tags you assign to the connection.</p>
     */
    inline CreateConnectionRequest& AddTags(const char* key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The tags you assign to the connection.</p>
     */
    inline CreateConnectionRequest& AddTags(Aws::String&& key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>The tags you assign to the connection.</p>
     */
    inline CreateConnectionRequest& AddTags(const char* key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }

  private:

    Aws::String m_catalogId;
    bool m_catalogIdHasBeenSet = false;

    ConnectionInput m_connectionInput;
    bool m_connectionInputHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
