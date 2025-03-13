/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/glue/Glue_EXPORTS.h>
#include <aws/glue/model/UpdateBehavior.h>
#include <aws/glue/model/DeleteBehavior.h>
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
   * <p>A policy that specifies update and deletion behaviors for the
   * crawler.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/SchemaChangePolicy">AWS
   * API Reference</a></p>
   */
  class SchemaChangePolicy
  {
  public:
    AWS_GLUE_API SchemaChangePolicy() = default;
    AWS_GLUE_API SchemaChangePolicy(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API SchemaChangePolicy& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The update behavior when the crawler finds a changed schema.</p>
     */
    inline UpdateBehavior GetUpdateBehavior() const { return m_updateBehavior; }
    inline bool UpdateBehaviorHasBeenSet() const { return m_updateBehaviorHasBeenSet; }
    inline void SetUpdateBehavior(UpdateBehavior value) { m_updateBehaviorHasBeenSet = true; m_updateBehavior = value; }
    inline SchemaChangePolicy& WithUpdateBehavior(UpdateBehavior value) { SetUpdateBehavior(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The deletion behavior when the crawler finds a deleted object.</p>
     */
    inline DeleteBehavior GetDeleteBehavior() const { return m_deleteBehavior; }
    inline bool DeleteBehaviorHasBeenSet() const { return m_deleteBehaviorHasBeenSet; }
    inline void SetDeleteBehavior(DeleteBehavior value) { m_deleteBehaviorHasBeenSet = true; m_deleteBehavior = value; }
    inline SchemaChangePolicy& WithDeleteBehavior(DeleteBehavior value) { SetDeleteBehavior(value); return *this;}
    ///@}
  private:

    UpdateBehavior m_updateBehavior{UpdateBehavior::NOT_SET};
    bool m_updateBehaviorHasBeenSet = false;

    DeleteBehavior m_deleteBehavior{DeleteBehavior::NOT_SET};
    bool m_deleteBehaviorHasBeenSet = false;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
