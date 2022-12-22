/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ssm/SSM_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace SSM
{
namespace Model
{

  /**
   * <p>Either a count, remaining count, or a version number in a delete inventory
   * summary.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/InventoryDeletionSummaryItem">AWS
   * API Reference</a></p>
   */
  class InventoryDeletionSummaryItem
  {
  public:
    AWS_SSM_API InventoryDeletionSummaryItem();
    AWS_SSM_API InventoryDeletionSummaryItem(Aws::Utils::Json::JsonView jsonValue);
    AWS_SSM_API InventoryDeletionSummaryItem& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SSM_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The inventory type version.</p>
     */
    inline const Aws::String& GetVersion() const{ return m_version; }

    /**
     * <p>The inventory type version.</p>
     */
    inline bool VersionHasBeenSet() const { return m_versionHasBeenSet; }

    /**
     * <p>The inventory type version.</p>
     */
    inline void SetVersion(const Aws::String& value) { m_versionHasBeenSet = true; m_version = value; }

    /**
     * <p>The inventory type version.</p>
     */
    inline void SetVersion(Aws::String&& value) { m_versionHasBeenSet = true; m_version = std::move(value); }

    /**
     * <p>The inventory type version.</p>
     */
    inline void SetVersion(const char* value) { m_versionHasBeenSet = true; m_version.assign(value); }

    /**
     * <p>The inventory type version.</p>
     */
    inline InventoryDeletionSummaryItem& WithVersion(const Aws::String& value) { SetVersion(value); return *this;}

    /**
     * <p>The inventory type version.</p>
     */
    inline InventoryDeletionSummaryItem& WithVersion(Aws::String&& value) { SetVersion(std::move(value)); return *this;}

    /**
     * <p>The inventory type version.</p>
     */
    inline InventoryDeletionSummaryItem& WithVersion(const char* value) { SetVersion(value); return *this;}


    /**
     * <p>A count of the number of deleted items.</p>
     */
    inline int GetCount() const{ return m_count; }

    /**
     * <p>A count of the number of deleted items.</p>
     */
    inline bool CountHasBeenSet() const { return m_countHasBeenSet; }

    /**
     * <p>A count of the number of deleted items.</p>
     */
    inline void SetCount(int value) { m_countHasBeenSet = true; m_count = value; }

    /**
     * <p>A count of the number of deleted items.</p>
     */
    inline InventoryDeletionSummaryItem& WithCount(int value) { SetCount(value); return *this;}


    /**
     * <p>The remaining number of items to delete.</p>
     */
    inline int GetRemainingCount() const{ return m_remainingCount; }

    /**
     * <p>The remaining number of items to delete.</p>
     */
    inline bool RemainingCountHasBeenSet() const { return m_remainingCountHasBeenSet; }

    /**
     * <p>The remaining number of items to delete.</p>
     */
    inline void SetRemainingCount(int value) { m_remainingCountHasBeenSet = true; m_remainingCount = value; }

    /**
     * <p>The remaining number of items to delete.</p>
     */
    inline InventoryDeletionSummaryItem& WithRemainingCount(int value) { SetRemainingCount(value); return *this;}

  private:

    Aws::String m_version;
    bool m_versionHasBeenSet = false;

    int m_count;
    bool m_countHasBeenSet = false;

    int m_remainingCount;
    bool m_remainingCountHasBeenSet = false;
  };

} // namespace Model
} // namespace SSM
} // namespace Aws
