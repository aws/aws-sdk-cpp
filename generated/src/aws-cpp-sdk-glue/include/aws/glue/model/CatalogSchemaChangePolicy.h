/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/glue/Glue_EXPORTS.h>
#include <aws/glue/model/UpdateCatalogBehavior.h>
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
namespace Glue
{
namespace Model
{

  /**
   * <p>A policy that specifies update behavior for the crawler.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/CatalogSchemaChangePolicy">AWS
   * API Reference</a></p>
   */
  class CatalogSchemaChangePolicy
  {
  public:
    AWS_GLUE_API CatalogSchemaChangePolicy() = default;
    AWS_GLUE_API CatalogSchemaChangePolicy(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API CatalogSchemaChangePolicy& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Whether to use the specified update behavior when the crawler finds a changed
     * schema.</p>
     */
    inline bool GetEnableUpdateCatalog() const { return m_enableUpdateCatalog; }
    inline bool EnableUpdateCatalogHasBeenSet() const { return m_enableUpdateCatalogHasBeenSet; }
    inline void SetEnableUpdateCatalog(bool value) { m_enableUpdateCatalogHasBeenSet = true; m_enableUpdateCatalog = value; }
    inline CatalogSchemaChangePolicy& WithEnableUpdateCatalog(bool value) { SetEnableUpdateCatalog(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The update behavior when the crawler finds a changed schema.</p>
     */
    inline UpdateCatalogBehavior GetUpdateBehavior() const { return m_updateBehavior; }
    inline bool UpdateBehaviorHasBeenSet() const { return m_updateBehaviorHasBeenSet; }
    inline void SetUpdateBehavior(UpdateCatalogBehavior value) { m_updateBehaviorHasBeenSet = true; m_updateBehavior = value; }
    inline CatalogSchemaChangePolicy& WithUpdateBehavior(UpdateCatalogBehavior value) { SetUpdateBehavior(value); return *this;}
    ///@}
  private:

    bool m_enableUpdateCatalog{false};
    bool m_enableUpdateCatalogHasBeenSet = false;

    UpdateCatalogBehavior m_updateBehavior{UpdateCatalogBehavior::NOT_SET};
    bool m_updateBehaviorHasBeenSet = false;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
