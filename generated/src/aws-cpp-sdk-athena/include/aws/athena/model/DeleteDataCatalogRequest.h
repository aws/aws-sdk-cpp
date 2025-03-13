/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/athena/Athena_EXPORTS.h>
#include <aws/athena/AthenaRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Athena
{
namespace Model
{

  /**
   */
  class DeleteDataCatalogRequest : public AthenaRequest
  {
  public:
    AWS_ATHENA_API DeleteDataCatalogRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DeleteDataCatalog"; }

    AWS_ATHENA_API Aws::String SerializePayload() const override;

    AWS_ATHENA_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The name of the data catalog to delete.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    DeleteDataCatalogRequest& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Deletes the Athena Data Catalog. You can only use this with the
     * <code>FEDERATED</code> catalogs. You usually perform this before registering the
     * connector with Glue Data Catalog. After deletion, you will have to manage the
     * Glue Connection and Lambda function. </p>
     */
    inline bool GetDeleteCatalogOnly() const { return m_deleteCatalogOnly; }
    inline bool DeleteCatalogOnlyHasBeenSet() const { return m_deleteCatalogOnlyHasBeenSet; }
    inline void SetDeleteCatalogOnly(bool value) { m_deleteCatalogOnlyHasBeenSet = true; m_deleteCatalogOnly = value; }
    inline DeleteDataCatalogRequest& WithDeleteCatalogOnly(bool value) { SetDeleteCatalogOnly(value); return *this;}
    ///@}
  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    bool m_deleteCatalogOnly{false};
    bool m_deleteCatalogOnlyHasBeenSet = false;
  };

} // namespace Model
} // namespace Athena
} // namespace Aws
