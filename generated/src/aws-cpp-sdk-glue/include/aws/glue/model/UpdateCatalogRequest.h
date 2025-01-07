/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/glue/Glue_EXPORTS.h>
#include <aws/glue/GlueRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/glue/model/CatalogInput.h>
#include <utility>

namespace Aws
{
namespace Glue
{
namespace Model
{

  /**
   */
  class UpdateCatalogRequest : public GlueRequest
  {
  public:
    AWS_GLUE_API UpdateCatalogRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateCatalog"; }

    AWS_GLUE_API Aws::String SerializePayload() const override;

    AWS_GLUE_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The ID of the catalog.</p>
     */
    inline const Aws::String& GetCatalogId() const{ return m_catalogId; }
    inline bool CatalogIdHasBeenSet() const { return m_catalogIdHasBeenSet; }
    inline void SetCatalogId(const Aws::String& value) { m_catalogIdHasBeenSet = true; m_catalogId = value; }
    inline void SetCatalogId(Aws::String&& value) { m_catalogIdHasBeenSet = true; m_catalogId = std::move(value); }
    inline void SetCatalogId(const char* value) { m_catalogIdHasBeenSet = true; m_catalogId.assign(value); }
    inline UpdateCatalogRequest& WithCatalogId(const Aws::String& value) { SetCatalogId(value); return *this;}
    inline UpdateCatalogRequest& WithCatalogId(Aws::String&& value) { SetCatalogId(std::move(value)); return *this;}
    inline UpdateCatalogRequest& WithCatalogId(const char* value) { SetCatalogId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A <code>CatalogInput</code> object specifying the new properties of an
     * existing catalog.</p>
     */
    inline const CatalogInput& GetCatalogInput() const{ return m_catalogInput; }
    inline bool CatalogInputHasBeenSet() const { return m_catalogInputHasBeenSet; }
    inline void SetCatalogInput(const CatalogInput& value) { m_catalogInputHasBeenSet = true; m_catalogInput = value; }
    inline void SetCatalogInput(CatalogInput&& value) { m_catalogInputHasBeenSet = true; m_catalogInput = std::move(value); }
    inline UpdateCatalogRequest& WithCatalogInput(const CatalogInput& value) { SetCatalogInput(value); return *this;}
    inline UpdateCatalogRequest& WithCatalogInput(CatalogInput&& value) { SetCatalogInput(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_catalogId;
    bool m_catalogIdHasBeenSet = false;

    CatalogInput m_catalogInput;
    bool m_catalogInputHasBeenSet = false;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
