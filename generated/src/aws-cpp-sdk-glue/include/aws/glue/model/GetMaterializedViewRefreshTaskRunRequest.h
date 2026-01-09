/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/glue/GlueRequest.h>
#include <aws/glue/Glue_EXPORTS.h>

#include <utility>

namespace Aws {
namespace Glue {
namespace Model {

/**
 */
class GetMaterializedViewRefreshTaskRunRequest : public GlueRequest {
 public:
  AWS_GLUE_API GetMaterializedViewRefreshTaskRunRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "GetMaterializedViewRefreshTaskRun"; }

  AWS_GLUE_API Aws::String SerializePayload() const override;

  AWS_GLUE_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

  ///@{
  /**
   * <p>The ID of the Data Catalog where the table resides. If none is supplied, the
   * account ID is used by default.</p>
   */
  inline const Aws::String& GetCatalogId() const { return m_catalogId; }
  inline bool CatalogIdHasBeenSet() const { return m_catalogIdHasBeenSet; }
  template <typename CatalogIdT = Aws::String>
  void SetCatalogId(CatalogIdT&& value) {
    m_catalogIdHasBeenSet = true;
    m_catalogId = std::forward<CatalogIdT>(value);
  }
  template <typename CatalogIdT = Aws::String>
  GetMaterializedViewRefreshTaskRunRequest& WithCatalogId(CatalogIdT&& value) {
    SetCatalogId(std::forward<CatalogIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The identifier for the particular materialized view refresh task run.</p>
   */
  inline const Aws::String& GetMaterializedViewRefreshTaskRunId() const { return m_materializedViewRefreshTaskRunId; }
  inline bool MaterializedViewRefreshTaskRunIdHasBeenSet() const { return m_materializedViewRefreshTaskRunIdHasBeenSet; }
  template <typename MaterializedViewRefreshTaskRunIdT = Aws::String>
  void SetMaterializedViewRefreshTaskRunId(MaterializedViewRefreshTaskRunIdT&& value) {
    m_materializedViewRefreshTaskRunIdHasBeenSet = true;
    m_materializedViewRefreshTaskRunId = std::forward<MaterializedViewRefreshTaskRunIdT>(value);
  }
  template <typename MaterializedViewRefreshTaskRunIdT = Aws::String>
  GetMaterializedViewRefreshTaskRunRequest& WithMaterializedViewRefreshTaskRunId(MaterializedViewRefreshTaskRunIdT&& value) {
    SetMaterializedViewRefreshTaskRunId(std::forward<MaterializedViewRefreshTaskRunIdT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_catalogId;

  Aws::String m_materializedViewRefreshTaskRunId;
  bool m_catalogIdHasBeenSet = false;
  bool m_materializedViewRefreshTaskRunIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace Glue
}  // namespace Aws
