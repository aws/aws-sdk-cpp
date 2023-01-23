/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/glue/Glue_EXPORTS.h>
#include <aws/glue/GlueRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Glue
{
namespace Model
{

  /**
   */
  class ImportCatalogToGlueRequest : public GlueRequest
  {
  public:
    AWS_GLUE_API ImportCatalogToGlueRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ImportCatalogToGlue"; }

    AWS_GLUE_API Aws::String SerializePayload() const override;

    AWS_GLUE_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The ID of the catalog to import. Currently, this should be the Amazon Web
     * Services account ID.</p>
     */
    inline const Aws::String& GetCatalogId() const{ return m_catalogId; }

    /**
     * <p>The ID of the catalog to import. Currently, this should be the Amazon Web
     * Services account ID.</p>
     */
    inline bool CatalogIdHasBeenSet() const { return m_catalogIdHasBeenSet; }

    /**
     * <p>The ID of the catalog to import. Currently, this should be the Amazon Web
     * Services account ID.</p>
     */
    inline void SetCatalogId(const Aws::String& value) { m_catalogIdHasBeenSet = true; m_catalogId = value; }

    /**
     * <p>The ID of the catalog to import. Currently, this should be the Amazon Web
     * Services account ID.</p>
     */
    inline void SetCatalogId(Aws::String&& value) { m_catalogIdHasBeenSet = true; m_catalogId = std::move(value); }

    /**
     * <p>The ID of the catalog to import. Currently, this should be the Amazon Web
     * Services account ID.</p>
     */
    inline void SetCatalogId(const char* value) { m_catalogIdHasBeenSet = true; m_catalogId.assign(value); }

    /**
     * <p>The ID of the catalog to import. Currently, this should be the Amazon Web
     * Services account ID.</p>
     */
    inline ImportCatalogToGlueRequest& WithCatalogId(const Aws::String& value) { SetCatalogId(value); return *this;}

    /**
     * <p>The ID of the catalog to import. Currently, this should be the Amazon Web
     * Services account ID.</p>
     */
    inline ImportCatalogToGlueRequest& WithCatalogId(Aws::String&& value) { SetCatalogId(std::move(value)); return *this;}

    /**
     * <p>The ID of the catalog to import. Currently, this should be the Amazon Web
     * Services account ID.</p>
     */
    inline ImportCatalogToGlueRequest& WithCatalogId(const char* value) { SetCatalogId(value); return *this;}

  private:

    Aws::String m_catalogId;
    bool m_catalogIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
