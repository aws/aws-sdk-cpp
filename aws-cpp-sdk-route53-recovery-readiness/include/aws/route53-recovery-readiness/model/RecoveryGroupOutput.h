/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/route53-recovery-readiness/Route53RecoveryReadiness_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
   * A Recovery Group generally containing multiple Cells<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/route53-recovery-readiness-2019-12-02/RecoveryGroupOutput">AWS
   * API Reference</a></p>
   */
  class AWS_ROUTE53RECOVERYREADINESS_API RecoveryGroupOutput
  {
  public:
    RecoveryGroupOutput();
    RecoveryGroupOutput(Aws::Utils::Json::JsonView jsonValue);
    RecoveryGroupOutput& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


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
    inline RecoveryGroupOutput& WithCells(const Aws::Vector<Aws::String>& value) { SetCells(value); return *this;}

    /**
     * A list of Cell arns
     */
    inline RecoveryGroupOutput& WithCells(Aws::Vector<Aws::String>&& value) { SetCells(std::move(value)); return *this;}

    /**
     * A list of Cell arns
     */
    inline RecoveryGroupOutput& AddCells(const Aws::String& value) { m_cellsHasBeenSet = true; m_cells.push_back(value); return *this; }

    /**
     * A list of Cell arns
     */
    inline RecoveryGroupOutput& AddCells(Aws::String&& value) { m_cellsHasBeenSet = true; m_cells.push_back(std::move(value)); return *this; }

    /**
     * A list of Cell arns
     */
    inline RecoveryGroupOutput& AddCells(const char* value) { m_cellsHasBeenSet = true; m_cells.push_back(value); return *this; }


    /**
     * The arn for the RecoveryGroup
     */
    inline const Aws::String& GetRecoveryGroupArn() const{ return m_recoveryGroupArn; }

    /**
     * The arn for the RecoveryGroup
     */
    inline bool RecoveryGroupArnHasBeenSet() const { return m_recoveryGroupArnHasBeenSet; }

    /**
     * The arn for the RecoveryGroup
     */
    inline void SetRecoveryGroupArn(const Aws::String& value) { m_recoveryGroupArnHasBeenSet = true; m_recoveryGroupArn = value; }

    /**
     * The arn for the RecoveryGroup
     */
    inline void SetRecoveryGroupArn(Aws::String&& value) { m_recoveryGroupArnHasBeenSet = true; m_recoveryGroupArn = std::move(value); }

    /**
     * The arn for the RecoveryGroup
     */
    inline void SetRecoveryGroupArn(const char* value) { m_recoveryGroupArnHasBeenSet = true; m_recoveryGroupArn.assign(value); }

    /**
     * The arn for the RecoveryGroup
     */
    inline RecoveryGroupOutput& WithRecoveryGroupArn(const Aws::String& value) { SetRecoveryGroupArn(value); return *this;}

    /**
     * The arn for the RecoveryGroup
     */
    inline RecoveryGroupOutput& WithRecoveryGroupArn(Aws::String&& value) { SetRecoveryGroupArn(std::move(value)); return *this;}

    /**
     * The arn for the RecoveryGroup
     */
    inline RecoveryGroupOutput& WithRecoveryGroupArn(const char* value) { SetRecoveryGroupArn(value); return *this;}


    /**
     * The name of the RecoveryGroup
     */
    inline const Aws::String& GetRecoveryGroupName() const{ return m_recoveryGroupName; }

    /**
     * The name of the RecoveryGroup
     */
    inline bool RecoveryGroupNameHasBeenSet() const { return m_recoveryGroupNameHasBeenSet; }

    /**
     * The name of the RecoveryGroup
     */
    inline void SetRecoveryGroupName(const Aws::String& value) { m_recoveryGroupNameHasBeenSet = true; m_recoveryGroupName = value; }

    /**
     * The name of the RecoveryGroup
     */
    inline void SetRecoveryGroupName(Aws::String&& value) { m_recoveryGroupNameHasBeenSet = true; m_recoveryGroupName = std::move(value); }

    /**
     * The name of the RecoveryGroup
     */
    inline void SetRecoveryGroupName(const char* value) { m_recoveryGroupNameHasBeenSet = true; m_recoveryGroupName.assign(value); }

    /**
     * The name of the RecoveryGroup
     */
    inline RecoveryGroupOutput& WithRecoveryGroupName(const Aws::String& value) { SetRecoveryGroupName(value); return *this;}

    /**
     * The name of the RecoveryGroup
     */
    inline RecoveryGroupOutput& WithRecoveryGroupName(Aws::String&& value) { SetRecoveryGroupName(std::move(value)); return *this;}

    /**
     * The name of the RecoveryGroup
     */
    inline RecoveryGroupOutput& WithRecoveryGroupName(const char* value) { SetRecoveryGroupName(value); return *this;}


    
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }

    
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    
    inline RecoveryGroupOutput& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}

    
    inline RecoveryGroupOutput& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}

    
    inline RecoveryGroupOutput& AddTags(const Aws::String& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }

    
    inline RecoveryGroupOutput& AddTags(Aws::String&& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    
    inline RecoveryGroupOutput& AddTags(const Aws::String& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    
    inline RecoveryGroupOutput& AddTags(Aws::String&& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), std::move(value)); return *this; }

    
    inline RecoveryGroupOutput& AddTags(const char* key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    
    inline RecoveryGroupOutput& AddTags(Aws::String&& key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    
    inline RecoveryGroupOutput& AddTags(const char* key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }

  private:

    Aws::Vector<Aws::String> m_cells;
    bool m_cellsHasBeenSet;

    Aws::String m_recoveryGroupArn;
    bool m_recoveryGroupArnHasBeenSet;

    Aws::String m_recoveryGroupName;
    bool m_recoveryGroupNameHasBeenSet;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet;
  };

} // namespace Model
} // namespace Route53RecoveryReadiness
} // namespace Aws
