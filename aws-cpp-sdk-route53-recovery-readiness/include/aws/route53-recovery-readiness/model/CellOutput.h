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
   * A Cell and its properties<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/route53-recovery-readiness-2019-12-02/CellOutput">AWS
   * API Reference</a></p>
   */
  class AWS_ROUTE53RECOVERYREADINESS_API CellOutput
  {
  public:
    CellOutput();
    CellOutput(Aws::Utils::Json::JsonView jsonValue);
    CellOutput& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * The arn for the Cell
     */
    inline const Aws::String& GetCellArn() const{ return m_cellArn; }

    /**
     * The arn for the Cell
     */
    inline bool CellArnHasBeenSet() const { return m_cellArnHasBeenSet; }

    /**
     * The arn for the Cell
     */
    inline void SetCellArn(const Aws::String& value) { m_cellArnHasBeenSet = true; m_cellArn = value; }

    /**
     * The arn for the Cell
     */
    inline void SetCellArn(Aws::String&& value) { m_cellArnHasBeenSet = true; m_cellArn = std::move(value); }

    /**
     * The arn for the Cell
     */
    inline void SetCellArn(const char* value) { m_cellArnHasBeenSet = true; m_cellArn.assign(value); }

    /**
     * The arn for the Cell
     */
    inline CellOutput& WithCellArn(const Aws::String& value) { SetCellArn(value); return *this;}

    /**
     * The arn for the Cell
     */
    inline CellOutput& WithCellArn(Aws::String&& value) { SetCellArn(std::move(value)); return *this;}

    /**
     * The arn for the Cell
     */
    inline CellOutput& WithCellArn(const char* value) { SetCellArn(value); return *this;}


    /**
     * The name of the Cell
     */
    inline const Aws::String& GetCellName() const{ return m_cellName; }

    /**
     * The name of the Cell
     */
    inline bool CellNameHasBeenSet() const { return m_cellNameHasBeenSet; }

    /**
     * The name of the Cell
     */
    inline void SetCellName(const Aws::String& value) { m_cellNameHasBeenSet = true; m_cellName = value; }

    /**
     * The name of the Cell
     */
    inline void SetCellName(Aws::String&& value) { m_cellNameHasBeenSet = true; m_cellName = std::move(value); }

    /**
     * The name of the Cell
     */
    inline void SetCellName(const char* value) { m_cellNameHasBeenSet = true; m_cellName.assign(value); }

    /**
     * The name of the Cell
     */
    inline CellOutput& WithCellName(const Aws::String& value) { SetCellName(value); return *this;}

    /**
     * The name of the Cell
     */
    inline CellOutput& WithCellName(Aws::String&& value) { SetCellName(std::move(value)); return *this;}

    /**
     * The name of the Cell
     */
    inline CellOutput& WithCellName(const char* value) { SetCellName(value); return *this;}


    /**
     * A list of Cell arns
     */
    inline const Aws::Vector<Aws::String>& GetCells() const{ return m_cells; }

    /**
     * A list of Cell arns
     */
    inline bool CellsHasBeenSet() const { return m_cellsHasBeenSet; }

    /**
     * A list of Cell arns
     */
    inline void SetCells(const Aws::Vector<Aws::String>& value) { m_cellsHasBeenSet = true; m_cells = value; }

    /**
     * A list of Cell arns
     */
    inline void SetCells(Aws::Vector<Aws::String>&& value) { m_cellsHasBeenSet = true; m_cells = std::move(value); }

    /**
     * A list of Cell arns
     */
    inline CellOutput& WithCells(const Aws::Vector<Aws::String>& value) { SetCells(value); return *this;}

    /**
     * A list of Cell arns
     */
    inline CellOutput& WithCells(Aws::Vector<Aws::String>&& value) { SetCells(std::move(value)); return *this;}

    /**
     * A list of Cell arns
     */
    inline CellOutput& AddCells(const Aws::String& value) { m_cellsHasBeenSet = true; m_cells.push_back(value); return *this; }

    /**
     * A list of Cell arns
     */
    inline CellOutput& AddCells(Aws::String&& value) { m_cellsHasBeenSet = true; m_cells.push_back(std::move(value)); return *this; }

    /**
     * A list of Cell arns
     */
    inline CellOutput& AddCells(const char* value) { m_cellsHasBeenSet = true; m_cells.push_back(value); return *this; }


    /**
     * A list of Cell ARNs and/or RecoveryGroup ARNs
     */
    inline const Aws::Vector<Aws::String>& GetParentReadinessScopes() const{ return m_parentReadinessScopes; }

    /**
     * A list of Cell ARNs and/or RecoveryGroup ARNs
     */
    inline bool ParentReadinessScopesHasBeenSet() const { return m_parentReadinessScopesHasBeenSet; }

    /**
     * A list of Cell ARNs and/or RecoveryGroup ARNs
     */
    inline void SetParentReadinessScopes(const Aws::Vector<Aws::String>& value) { m_parentReadinessScopesHasBeenSet = true; m_parentReadinessScopes = value; }

    /**
     * A list of Cell ARNs and/or RecoveryGroup ARNs
     */
    inline void SetParentReadinessScopes(Aws::Vector<Aws::String>&& value) { m_parentReadinessScopesHasBeenSet = true; m_parentReadinessScopes = std::move(value); }

    /**
     * A list of Cell ARNs and/or RecoveryGroup ARNs
     */
    inline CellOutput& WithParentReadinessScopes(const Aws::Vector<Aws::String>& value) { SetParentReadinessScopes(value); return *this;}

    /**
     * A list of Cell ARNs and/or RecoveryGroup ARNs
     */
    inline CellOutput& WithParentReadinessScopes(Aws::Vector<Aws::String>&& value) { SetParentReadinessScopes(std::move(value)); return *this;}

    /**
     * A list of Cell ARNs and/or RecoveryGroup ARNs
     */
    inline CellOutput& AddParentReadinessScopes(const Aws::String& value) { m_parentReadinessScopesHasBeenSet = true; m_parentReadinessScopes.push_back(value); return *this; }

    /**
     * A list of Cell ARNs and/or RecoveryGroup ARNs
     */
    inline CellOutput& AddParentReadinessScopes(Aws::String&& value) { m_parentReadinessScopesHasBeenSet = true; m_parentReadinessScopes.push_back(std::move(value)); return *this; }

    /**
     * A list of Cell ARNs and/or RecoveryGroup ARNs
     */
    inline CellOutput& AddParentReadinessScopes(const char* value) { m_parentReadinessScopesHasBeenSet = true; m_parentReadinessScopes.push_back(value); return *this; }


    
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }

    
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    
    inline CellOutput& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}

    
    inline CellOutput& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}

    
    inline CellOutput& AddTags(const Aws::String& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }

    
    inline CellOutput& AddTags(Aws::String&& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    
    inline CellOutput& AddTags(const Aws::String& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    
    inline CellOutput& AddTags(Aws::String&& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), std::move(value)); return *this; }

    
    inline CellOutput& AddTags(const char* key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    
    inline CellOutput& AddTags(Aws::String&& key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    
    inline CellOutput& AddTags(const char* key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }

  private:

    Aws::String m_cellArn;
    bool m_cellArnHasBeenSet;

    Aws::String m_cellName;
    bool m_cellNameHasBeenSet;

    Aws::Vector<Aws::String> m_cells;
    bool m_cellsHasBeenSet;

    Aws::Vector<Aws::String> m_parentReadinessScopes;
    bool m_parentReadinessScopesHasBeenSet;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet;
  };

} // namespace Model
} // namespace Route53RecoveryReadiness
} // namespace Aws
