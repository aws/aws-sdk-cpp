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
    AWS_GLUE_API UpdateCatalogRequest() = default;

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
    inline const Aws::String& GetCatalogId() const { return m_catalogId; }
    inline bool CatalogIdHasBeenSet() const { return m_catalogIdHasBeenSet; }
    template<typename CatalogIdT = Aws::String>
    void SetCatalogId(CatalogIdT&& value) { m_catalogIdHasBeenSet = true; m_catalogId = std::forward<CatalogIdT>(value); }
    template<typename CatalogIdT = Aws::String>
    UpdateCatalogRequest& WithCatalogId(CatalogIdT&& value) { SetCatalogId(std::forward<CatalogIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A <code>CatalogInput</code> object specifying the new properties of an
     * existing catalog.</p>
     */
    inline const CatalogInput& GetCatalogInput() const { return m_catalogInput; }
    inline bool CatalogInputHasBeenSet() const { return m_catalogInputHasBeenSet; }
    template<typename CatalogInputT = CatalogInput>
    void SetCatalogInput(CatalogInputT&& value) { m_catalogInputHasBeenSet = true; m_catalogInput = std::forward<CatalogInputT>(value); }
    template<typename CatalogInputT = CatalogInput>
    UpdateCatalogRequest& WithCatalogInput(CatalogInputT&& value) { SetCatalogInput(std::forward<CatalogInputT>(value)); return *this;}
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
