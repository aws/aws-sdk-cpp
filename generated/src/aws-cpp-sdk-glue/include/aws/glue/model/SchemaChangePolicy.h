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
    AWS_GLUE_API SchemaChangePolicy();
    AWS_GLUE_API SchemaChangePolicy(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API SchemaChangePolicy& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The update behavior when the crawler finds a changed schema.</p>
     */
    inline const UpdateBehavior& GetUpdateBehavior() const{ return m_updateBehavior; }

    /**
     * <p>The update behavior when the crawler finds a changed schema.</p>
     */
    inline bool UpdateBehaviorHasBeenSet() const { return m_updateBehaviorHasBeenSet; }

    /**
     * <p>The update behavior when the crawler finds a changed schema.</p>
     */
    inline void SetUpdateBehavior(const UpdateBehavior& value) { m_updateBehaviorHasBeenSet = true; m_updateBehavior = value; }

    /**
     * <p>The update behavior when the crawler finds a changed schema.</p>
     */
    inline void SetUpdateBehavior(UpdateBehavior&& value) { m_updateBehaviorHasBeenSet = true; m_updateBehavior = std::move(value); }

    /**
     * <p>The update behavior when the crawler finds a changed schema.</p>
     */
    inline SchemaChangePolicy& WithUpdateBehavior(const UpdateBehavior& value) { SetUpdateBehavior(value); return *this;}

    /**
     * <p>The update behavior when the crawler finds a changed schema.</p>
     */
    inline SchemaChangePolicy& WithUpdateBehavior(UpdateBehavior&& value) { SetUpdateBehavior(std::move(value)); return *this;}


    /**
     * <p>The deletion behavior when the crawler finds a deleted object.</p>
     */
    inline const DeleteBehavior& GetDeleteBehavior() const{ return m_deleteBehavior; }

    /**
     * <p>The deletion behavior when the crawler finds a deleted object.</p>
     */
    inline bool DeleteBehaviorHasBeenSet() const { return m_deleteBehaviorHasBeenSet; }

    /**
     * <p>The deletion behavior when the crawler finds a deleted object.</p>
     */
    inline void SetDeleteBehavior(const DeleteBehavior& value) { m_deleteBehaviorHasBeenSet = true; m_deleteBehavior = value; }

    /**
     * <p>The deletion behavior when the crawler finds a deleted object.</p>
     */
    inline void SetDeleteBehavior(DeleteBehavior&& value) { m_deleteBehaviorHasBeenSet = true; m_deleteBehavior = std::move(value); }

    /**
     * <p>The deletion behavior when the crawler finds a deleted object.</p>
     */
    inline SchemaChangePolicy& WithDeleteBehavior(const DeleteBehavior& value) { SetDeleteBehavior(value); return *this;}

    /**
     * <p>The deletion behavior when the crawler finds a deleted object.</p>
     */
    inline SchemaChangePolicy& WithDeleteBehavior(DeleteBehavior&& value) { SetDeleteBehavior(std::move(value)); return *this;}

  private:

    UpdateBehavior m_updateBehavior;
    bool m_updateBehaviorHasBeenSet = false;

    DeleteBehavior m_deleteBehavior;
    bool m_deleteBehaviorHasBeenSet = false;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
