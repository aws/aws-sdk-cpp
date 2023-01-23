/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/glue/Glue_EXPORTS.h>
#include <aws/glue/GlueRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/glue/model/ConnectionInput.h>
#include <utility>

namespace Aws
{
namespace Glue
{
namespace Model
{

  /**
   */
  class UpdateConnectionRequest : public GlueRequest
  {
  public:
    AWS_GLUE_API UpdateConnectionRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateConnection"; }

    AWS_GLUE_API Aws::String SerializePayload() const override;

    AWS_GLUE_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The ID of the Data Catalog in which the connection resides. If none is
     * provided, the Amazon Web Services account ID is used by default.</p>
     */
    inline const Aws::String& GetCatalogId() const{ return m_catalogId; }

    /**
     * <p>The ID of the Data Catalog in which the connection resides. If none is
     * provided, the Amazon Web Services account ID is used by default.</p>
     */
    inline bool CatalogIdHasBeenSet() const { return m_catalogIdHasBeenSet; }

    /**
     * <p>The ID of the Data Catalog in which the connection resides. If none is
     * provided, the Amazon Web Services account ID is used by default.</p>
     */
    inline void SetCatalogId(const Aws::String& value) { m_catalogIdHasBeenSet = true; m_catalogId = value; }

    /**
     * <p>The ID of the Data Catalog in which the connection resides. If none is
     * provided, the Amazon Web Services account ID is used by default.</p>
     */
    inline void SetCatalogId(Aws::String&& value) { m_catalogIdHasBeenSet = true; m_catalogId = std::move(value); }

    /**
     * <p>The ID of the Data Catalog in which the connection resides. If none is
     * provided, the Amazon Web Services account ID is used by default.</p>
     */
    inline void SetCatalogId(const char* value) { m_catalogIdHasBeenSet = true; m_catalogId.assign(value); }

    /**
     * <p>The ID of the Data Catalog in which the connection resides. If none is
     * provided, the Amazon Web Services account ID is used by default.</p>
     */
    inline UpdateConnectionRequest& WithCatalogId(const Aws::String& value) { SetCatalogId(value); return *this;}

    /**
     * <p>The ID of the Data Catalog in which the connection resides. If none is
     * provided, the Amazon Web Services account ID is used by default.</p>
     */
    inline UpdateConnectionRequest& WithCatalogId(Aws::String&& value) { SetCatalogId(std::move(value)); return *this;}

    /**
     * <p>The ID of the Data Catalog in which the connection resides. If none is
     * provided, the Amazon Web Services account ID is used by default.</p>
     */
    inline UpdateConnectionRequest& WithCatalogId(const char* value) { SetCatalogId(value); return *this;}


    /**
     * <p>The name of the connection definition to update.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the connection definition to update.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the connection definition to update.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the connection definition to update.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the connection definition to update.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the connection definition to update.</p>
     */
    inline UpdateConnectionRequest& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the connection definition to update.</p>
     */
    inline UpdateConnectionRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the connection definition to update.</p>
     */
    inline UpdateConnectionRequest& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>A <code>ConnectionInput</code> object that redefines the connection in
     * question.</p>
     */
    inline const ConnectionInput& GetConnectionInput() const{ return m_connectionInput; }

    /**
     * <p>A <code>ConnectionInput</code> object that redefines the connection in
     * question.</p>
     */
    inline bool ConnectionInputHasBeenSet() const { return m_connectionInputHasBeenSet; }

    /**
     * <p>A <code>ConnectionInput</code> object that redefines the connection in
     * question.</p>
     */
    inline void SetConnectionInput(const ConnectionInput& value) { m_connectionInputHasBeenSet = true; m_connectionInput = value; }

    /**
     * <p>A <code>ConnectionInput</code> object that redefines the connection in
     * question.</p>
     */
    inline void SetConnectionInput(ConnectionInput&& value) { m_connectionInputHasBeenSet = true; m_connectionInput = std::move(value); }

    /**
     * <p>A <code>ConnectionInput</code> object that redefines the connection in
     * question.</p>
     */
    inline UpdateConnectionRequest& WithConnectionInput(const ConnectionInput& value) { SetConnectionInput(value); return *this;}

    /**
     * <p>A <code>ConnectionInput</code> object that redefines the connection in
     * question.</p>
     */
    inline UpdateConnectionRequest& WithConnectionInput(ConnectionInput&& value) { SetConnectionInput(std::move(value)); return *this;}

  private:

    Aws::String m_catalogId;
    bool m_catalogIdHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    ConnectionInput m_connectionInput;
    bool m_connectionInputHasBeenSet = false;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
