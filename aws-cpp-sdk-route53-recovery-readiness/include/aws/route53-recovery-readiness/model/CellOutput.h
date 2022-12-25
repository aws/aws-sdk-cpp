/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/route53-recovery-readiness/Route53RecoveryReadiness_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
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
namespace Route53RecoveryReadiness
{
namespace Model
{

  /**
   * <p>Information about a cell.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/route53-recovery-readiness-2019-12-02/CellOutput">AWS
   * API Reference</a></p>
   */
  class CellOutput
  {
  public:
    AWS_ROUTE53RECOVERYREADINESS_API CellOutput();
    AWS_ROUTE53RECOVERYREADINESS_API CellOutput(Aws::Utils::Json::JsonView jsonValue);
    AWS_ROUTE53RECOVERYREADINESS_API CellOutput& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_ROUTE53RECOVERYREADINESS_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The Amazon Resource Name (ARN) for the cell.</p>
     */
    inline const Aws::String& GetCellArn() const{ return m_cellArn; }

    /**
     * <p>The Amazon Resource Name (ARN) for the cell.</p>
     */
    inline bool CellArnHasBeenSet() const { return m_cellArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) for the cell.</p>
     */
    inline void SetCellArn(const Aws::String& value) { m_cellArnHasBeenSet = true; m_cellArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) for the cell.</p>
     */
    inline void SetCellArn(Aws::String&& value) { m_cellArnHasBeenSet = true; m_cellArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) for the cell.</p>
     */
    inline void SetCellArn(const char* value) { m_cellArnHasBeenSet = true; m_cellArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) for the cell.</p>
     */
    inline CellOutput& WithCellArn(const Aws::String& value) { SetCellArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) for the cell.</p>
     */
    inline CellOutput& WithCellArn(Aws::String&& value) { SetCellArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) for the cell.</p>
     */
    inline CellOutput& WithCellArn(const char* value) { SetCellArn(value); return *this;}


    /**
     * <p>The name of the cell.</p>
     */
    inline const Aws::String& GetCellName() const{ return m_cellName; }

    /**
     * <p>The name of the cell.</p>
     */
    inline bool CellNameHasBeenSet() const { return m_cellNameHasBeenSet; }

    /**
     * <p>The name of the cell.</p>
     */
    inline void SetCellName(const Aws::String& value) { m_cellNameHasBeenSet = true; m_cellName = value; }

    /**
     * <p>The name of the cell.</p>
     */
    inline void SetCellName(Aws::String&& value) { m_cellNameHasBeenSet = true; m_cellName = std::move(value); }

    /**
     * <p>The name of the cell.</p>
     */
    inline void SetCellName(const char* value) { m_cellNameHasBeenSet = true; m_cellName.assign(value); }

    /**
     * <p>The name of the cell.</p>
     */
    inline CellOutput& WithCellName(const Aws::String& value) { SetCellName(value); return *this;}

    /**
     * <p>The name of the cell.</p>
     */
    inline CellOutput& WithCellName(Aws::String&& value) { SetCellName(std::move(value)); return *this;}

    /**
     * <p>The name of the cell.</p>
     */
    inline CellOutput& WithCellName(const char* value) { SetCellName(value); return *this;}


    /**
     * <p>A list of cell ARNs.</p>
     */
    inline const Aws::Vector<Aws::String>& GetCells() const{ return m_cells; }

    /**
     * <p>A list of cell ARNs.</p>
     */
    inline bool CellsHasBeenSet() const { return m_cellsHasBeenSet; }

    /**
     * <p>A list of cell ARNs.</p>
     */
    inline void SetCells(const Aws::Vector<Aws::String>& value) { m_cellsHasBeenSet = true; m_cells = value; }

    /**
     * <p>A list of cell ARNs.</p>
     */
    inline void SetCells(Aws::Vector<Aws::String>&& value) { m_cellsHasBeenSet = true; m_cells = std::move(value); }

    /**
     * <p>A list of cell ARNs.</p>
     */
    inline CellOutput& WithCells(const Aws::Vector<Aws::String>& value) { SetCells(value); return *this;}

    /**
     * <p>A list of cell ARNs.</p>
     */
    inline CellOutput& WithCells(Aws::Vector<Aws::String>&& value) { SetCells(std::move(value)); return *this;}

    /**
     * <p>A list of cell ARNs.</p>
     */
    inline CellOutput& AddCells(const Aws::String& value) { m_cellsHasBeenSet = true; m_cells.push_back(value); return *this; }

    /**
     * <p>A list of cell ARNs.</p>
     */
    inline CellOutput& AddCells(Aws::String&& value) { m_cellsHasBeenSet = true; m_cells.push_back(std::move(value)); return *this; }

    /**
     * <p>A list of cell ARNs.</p>
     */
    inline CellOutput& AddCells(const char* value) { m_cellsHasBeenSet = true; m_cells.push_back(value); return *this; }


    /**
     * <p>The readiness scope for the cell, which can be a cell Amazon Resource Name
     * (ARN) or a recovery group ARN. This is a list but currently can have only one
     * element.</p>
     */
    inline const Aws::Vector<Aws::String>& GetParentReadinessScopes() const{ return m_parentReadinessScopes; }

    /**
     * <p>The readiness scope for the cell, which can be a cell Amazon Resource Name
     * (ARN) or a recovery group ARN. This is a list but currently can have only one
     * element.</p>
     */
    inline bool ParentReadinessScopesHasBeenSet() const { return m_parentReadinessScopesHasBeenSet; }

    /**
     * <p>The readiness scope for the cell, which can be a cell Amazon Resource Name
     * (ARN) or a recovery group ARN. This is a list but currently can have only one
     * element.</p>
     */
    inline void SetParentReadinessScopes(const Aws::Vector<Aws::String>& value) { m_parentReadinessScopesHasBeenSet = true; m_parentReadinessScopes = value; }

    /**
     * <p>The readiness scope for the cell, which can be a cell Amazon Resource Name
     * (ARN) or a recovery group ARN. This is a list but currently can have only one
     * element.</p>
     */
    inline void SetParentReadinessScopes(Aws::Vector<Aws::String>&& value) { m_parentReadinessScopesHasBeenSet = true; m_parentReadinessScopes = std::move(value); }

    /**
     * <p>The readiness scope for the cell, which can be a cell Amazon Resource Name
     * (ARN) or a recovery group ARN. This is a list but currently can have only one
     * element.</p>
     */
    inline CellOutput& WithParentReadinessScopes(const Aws::Vector<Aws::String>& value) { SetParentReadinessScopes(value); return *this;}

    /**
     * <p>The readiness scope for the cell, which can be a cell Amazon Resource Name
     * (ARN) or a recovery group ARN. This is a list but currently can have only one
     * element.</p>
     */
    inline CellOutput& WithParentReadinessScopes(Aws::Vector<Aws::String>&& value) { SetParentReadinessScopes(std::move(value)); return *this;}

    /**
     * <p>The readiness scope for the cell, which can be a cell Amazon Resource Name
     * (ARN) or a recovery group ARN. This is a list but currently can have only one
     * element.</p>
     */
    inline CellOutput& AddParentReadinessScopes(const Aws::String& value) { m_parentReadinessScopesHasBeenSet = true; m_parentReadinessScopes.push_back(value); return *this; }

    /**
     * <p>The readiness scope for the cell, which can be a cell Amazon Resource Name
     * (ARN) or a recovery group ARN. This is a list but currently can have only one
     * element.</p>
     */
    inline CellOutput& AddParentReadinessScopes(Aws::String&& value) { m_parentReadinessScopesHasBeenSet = true; m_parentReadinessScopes.push_back(std::move(value)); return *this; }

    /**
     * <p>The readiness scope for the cell, which can be a cell Amazon Resource Name
     * (ARN) or a recovery group ARN. This is a list but currently can have only one
     * element.</p>
     */
    inline CellOutput& AddParentReadinessScopes(const char* value) { m_parentReadinessScopesHasBeenSet = true; m_parentReadinessScopes.push_back(value); return *this; }


    /**
     * <p>Tags on the resources.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }

    /**
     * <p>Tags on the resources.</p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>Tags on the resources.</p>
     */
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>Tags on the resources.</p>
     */
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>Tags on the resources.</p>
     */
    inline CellOutput& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}

    /**
     * <p>Tags on the resources.</p>
     */
    inline CellOutput& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>Tags on the resources.</p>
     */
    inline CellOutput& AddTags(const Aws::String& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }

    /**
     * <p>Tags on the resources.</p>
     */
    inline CellOutput& AddTags(Aws::String&& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>Tags on the resources.</p>
     */
    inline CellOutput& AddTags(const Aws::String& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>Tags on the resources.</p>
     */
    inline CellOutput& AddTags(Aws::String&& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>Tags on the resources.</p>
     */
    inline CellOutput& AddTags(const char* key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>Tags on the resources.</p>
     */
    inline CellOutput& AddTags(Aws::String&& key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>Tags on the resources.</p>
     */
    inline CellOutput& AddTags(const char* key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }

  private:

    Aws::String m_cellArn;
    bool m_cellArnHasBeenSet = false;

    Aws::String m_cellName;
    bool m_cellNameHasBeenSet = false;

    Aws::Vector<Aws::String> m_cells;
    bool m_cellsHasBeenSet = false;

    Aws::Vector<Aws::String> m_parentReadinessScopes;
    bool m_parentReadinessScopesHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace Route53RecoveryReadiness
} // namespace Aws
