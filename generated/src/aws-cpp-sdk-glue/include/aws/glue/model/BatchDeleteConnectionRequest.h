/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/glue/Glue_EXPORTS.h>
#include <aws/glue/GlueRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <utility>

namespace Aws
{
namespace Glue
{
namespace Model
{

  /**
   */
  class BatchDeleteConnectionRequest : public GlueRequest
  {
  public:
    AWS_GLUE_API BatchDeleteConnectionRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "BatchDeleteConnection"; }

    AWS_GLUE_API Aws::String SerializePayload() const override;

    AWS_GLUE_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The ID of the Data Catalog in which the connections reside. If none is
     * provided, the Amazon Web Services account ID is used by default.</p>
     */
    inline const Aws::String& GetCatalogId() const { return m_catalogId; }
    inline bool CatalogIdHasBeenSet() const { return m_catalogIdHasBeenSet; }
    template<typename CatalogIdT = Aws::String>
    void SetCatalogId(CatalogIdT&& value) { m_catalogIdHasBeenSet = true; m_catalogId = std::forward<CatalogIdT>(value); }
    template<typename CatalogIdT = Aws::String>
    BatchDeleteConnectionRequest& WithCatalogId(CatalogIdT&& value) { SetCatalogId(std::forward<CatalogIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of names of the connections to delete.</p>
     */
    inline const Aws::Vector<Aws::String>& GetConnectionNameList() const { return m_connectionNameList; }
    inline bool ConnectionNameListHasBeenSet() const { return m_connectionNameListHasBeenSet; }
    template<typename ConnectionNameListT = Aws::Vector<Aws::String>>
    void SetConnectionNameList(ConnectionNameListT&& value) { m_connectionNameListHasBeenSet = true; m_connectionNameList = std::forward<ConnectionNameListT>(value); }
    template<typename ConnectionNameListT = Aws::Vector<Aws::String>>
    BatchDeleteConnectionRequest& WithConnectionNameList(ConnectionNameListT&& value) { SetConnectionNameList(std::forward<ConnectionNameListT>(value)); return *this;}
    template<typename ConnectionNameListT = Aws::String>
    BatchDeleteConnectionRequest& AddConnectionNameList(ConnectionNameListT&& value) { m_connectionNameListHasBeenSet = true; m_connectionNameList.emplace_back(std::forward<ConnectionNameListT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_catalogId;
    bool m_catalogIdHasBeenSet = false;

    Aws::Vector<Aws::String> m_connectionNameList;
    bool m_connectionNameListHasBeenSet = false;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
