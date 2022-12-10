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
   * <p>A representation of the application, typically containing multiple
   * cells.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/route53-recovery-readiness-2019-12-02/RecoveryGroupOutput">AWS
   * API Reference</a></p>
   */
  class RecoveryGroupOutput
  {
  public:
    AWS_ROUTE53RECOVERYREADINESS_API RecoveryGroupOutput();
    AWS_ROUTE53RECOVERYREADINESS_API RecoveryGroupOutput(Aws::Utils::Json::JsonView jsonValue);
    AWS_ROUTE53RECOVERYREADINESS_API RecoveryGroupOutput& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_ROUTE53RECOVERYREADINESS_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>A list of a cell's Amazon Resource Names (ARNs).</p>
     */
    inline const Aws::Vector<Aws::String>& GetCells() const{ return m_cells; }

    /**
     * <p>A list of a cell's Amazon Resource Names (ARNs).</p>
     */
    inline bool CellsHasBeenSet() const { return m_cellsHasBeenSet; }

    /**
     * <p>A list of a cell's Amazon Resource Names (ARNs).</p>
     */
    inline void SetCells(const Aws::Vector<Aws::String>& value) { m_cellsHasBeenSet = true; m_cells = value; }

    /**
     * <p>A list of a cell's Amazon Resource Names (ARNs).</p>
     */
    inline void SetCells(Aws::Vector<Aws::String>&& value) { m_cellsHasBeenSet = true; m_cells = std::move(value); }

    /**
     * <p>A list of a cell's Amazon Resource Names (ARNs).</p>
     */
    inline RecoveryGroupOutput& WithCells(const Aws::Vector<Aws::String>& value) { SetCells(value); return *this;}

    /**
     * <p>A list of a cell's Amazon Resource Names (ARNs).</p>
     */
    inline RecoveryGroupOutput& WithCells(Aws::Vector<Aws::String>&& value) { SetCells(std::move(value)); return *this;}

    /**
     * <p>A list of a cell's Amazon Resource Names (ARNs).</p>
     */
    inline RecoveryGroupOutput& AddCells(const Aws::String& value) { m_cellsHasBeenSet = true; m_cells.push_back(value); return *this; }

    /**
     * <p>A list of a cell's Amazon Resource Names (ARNs).</p>
     */
    inline RecoveryGroupOutput& AddCells(Aws::String&& value) { m_cellsHasBeenSet = true; m_cells.push_back(std::move(value)); return *this; }

    /**
     * <p>A list of a cell's Amazon Resource Names (ARNs).</p>
     */
    inline RecoveryGroupOutput& AddCells(const char* value) { m_cellsHasBeenSet = true; m_cells.push_back(value); return *this; }


    /**
     * <p>The Amazon Resource Name (ARN) for the recovery group.</p>
     */
    inline const Aws::String& GetRecoveryGroupArn() const{ return m_recoveryGroupArn; }

    /**
     * <p>The Amazon Resource Name (ARN) for the recovery group.</p>
     */
    inline bool RecoveryGroupArnHasBeenSet() const { return m_recoveryGroupArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) for the recovery group.</p>
     */
    inline void SetRecoveryGroupArn(const Aws::String& value) { m_recoveryGroupArnHasBeenSet = true; m_recoveryGroupArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) for the recovery group.</p>
     */
    inline void SetRecoveryGroupArn(Aws::String&& value) { m_recoveryGroupArnHasBeenSet = true; m_recoveryGroupArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) for the recovery group.</p>
     */
    inline void SetRecoveryGroupArn(const char* value) { m_recoveryGroupArnHasBeenSet = true; m_recoveryGroupArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) for the recovery group.</p>
     */
    inline RecoveryGroupOutput& WithRecoveryGroupArn(const Aws::String& value) { SetRecoveryGroupArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) for the recovery group.</p>
     */
    inline RecoveryGroupOutput& WithRecoveryGroupArn(Aws::String&& value) { SetRecoveryGroupArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) for the recovery group.</p>
     */
    inline RecoveryGroupOutput& WithRecoveryGroupArn(const char* value) { SetRecoveryGroupArn(value); return *this;}


    /**
     * <p>The name of the recovery group.</p>
     */
    inline const Aws::String& GetRecoveryGroupName() const{ return m_recoveryGroupName; }

    /**
     * <p>The name of the recovery group.</p>
     */
    inline bool RecoveryGroupNameHasBeenSet() const { return m_recoveryGroupNameHasBeenSet; }

    /**
     * <p>The name of the recovery group.</p>
     */
    inline void SetRecoveryGroupName(const Aws::String& value) { m_recoveryGroupNameHasBeenSet = true; m_recoveryGroupName = value; }

    /**
     * <p>The name of the recovery group.</p>
     */
    inline void SetRecoveryGroupName(Aws::String&& value) { m_recoveryGroupNameHasBeenSet = true; m_recoveryGroupName = std::move(value); }

    /**
     * <p>The name of the recovery group.</p>
     */
    inline void SetRecoveryGroupName(const char* value) { m_recoveryGroupNameHasBeenSet = true; m_recoveryGroupName.assign(value); }

    /**
     * <p>The name of the recovery group.</p>
     */
    inline RecoveryGroupOutput& WithRecoveryGroupName(const Aws::String& value) { SetRecoveryGroupName(value); return *this;}

    /**
     * <p>The name of the recovery group.</p>
     */
    inline RecoveryGroupOutput& WithRecoveryGroupName(Aws::String&& value) { SetRecoveryGroupName(std::move(value)); return *this;}

    /**
     * <p>The name of the recovery group.</p>
     */
    inline RecoveryGroupOutput& WithRecoveryGroupName(const char* value) { SetRecoveryGroupName(value); return *this;}


    /**
     * <p>The tags associated with the recovery group.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }

    /**
     * <p>The tags associated with the recovery group.</p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>The tags associated with the recovery group.</p>
     */
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>The tags associated with the recovery group.</p>
     */
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>The tags associated with the recovery group.</p>
     */
    inline RecoveryGroupOutput& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}

    /**
     * <p>The tags associated with the recovery group.</p>
     */
    inline RecoveryGroupOutput& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>The tags associated with the recovery group.</p>
     */
    inline RecoveryGroupOutput& AddTags(const Aws::String& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }

    /**
     * <p>The tags associated with the recovery group.</p>
     */
    inline RecoveryGroupOutput& AddTags(Aws::String&& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>The tags associated with the recovery group.</p>
     */
    inline RecoveryGroupOutput& AddTags(const Aws::String& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The tags associated with the recovery group.</p>
     */
    inline RecoveryGroupOutput& AddTags(Aws::String&& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>The tags associated with the recovery group.</p>
     */
    inline RecoveryGroupOutput& AddTags(const char* key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The tags associated with the recovery group.</p>
     */
    inline RecoveryGroupOutput& AddTags(Aws::String&& key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>The tags associated with the recovery group.</p>
     */
    inline RecoveryGroupOutput& AddTags(const char* key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }

  private:

    Aws::Vector<Aws::String> m_cells;
    bool m_cellsHasBeenSet = false;

    Aws::String m_recoveryGroupArn;
    bool m_recoveryGroupArnHasBeenSet = false;

    Aws::String m_recoveryGroupName;
    bool m_recoveryGroupNameHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace Route53RecoveryReadiness
} // namespace Aws
