/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/kendra/Kendra_EXPORTS.h>
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
namespace kendra
{
namespace Model
{

  /**
   * <p>Information about a conflicting query used across different sets of featured
   * results. When you create a featured results set, you must check that the queries
   * are unique per featured results set for each index.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/kendra-2019-02-03/ConflictingItem">AWS
   * API Reference</a></p>
   */
  class ConflictingItem
  {
  public:
    AWS_KENDRA_API ConflictingItem();
    AWS_KENDRA_API ConflictingItem(Aws::Utils::Json::JsonView jsonValue);
    AWS_KENDRA_API ConflictingItem& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_KENDRA_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The text of the conflicting query.</p>
     */
    inline const Aws::String& GetQueryText() const{ return m_queryText; }

    /**
     * <p>The text of the conflicting query.</p>
     */
    inline bool QueryTextHasBeenSet() const { return m_queryTextHasBeenSet; }

    /**
     * <p>The text of the conflicting query.</p>
     */
    inline void SetQueryText(const Aws::String& value) { m_queryTextHasBeenSet = true; m_queryText = value; }

    /**
     * <p>The text of the conflicting query.</p>
     */
    inline void SetQueryText(Aws::String&& value) { m_queryTextHasBeenSet = true; m_queryText = std::move(value); }

    /**
     * <p>The text of the conflicting query.</p>
     */
    inline void SetQueryText(const char* value) { m_queryTextHasBeenSet = true; m_queryText.assign(value); }

    /**
     * <p>The text of the conflicting query.</p>
     */
    inline ConflictingItem& WithQueryText(const Aws::String& value) { SetQueryText(value); return *this;}

    /**
     * <p>The text of the conflicting query.</p>
     */
    inline ConflictingItem& WithQueryText(Aws::String&& value) { SetQueryText(std::move(value)); return *this;}

    /**
     * <p>The text of the conflicting query.</p>
     */
    inline ConflictingItem& WithQueryText(const char* value) { SetQueryText(value); return *this;}


    /**
     * <p>The name for the set of featured results that the conflicting query belongs
     * to.</p>
     */
    inline const Aws::String& GetSetName() const{ return m_setName; }

    /**
     * <p>The name for the set of featured results that the conflicting query belongs
     * to.</p>
     */
    inline bool SetNameHasBeenSet() const { return m_setNameHasBeenSet; }

    /**
     * <p>The name for the set of featured results that the conflicting query belongs
     * to.</p>
     */
    inline void SetSetName(const Aws::String& value) { m_setNameHasBeenSet = true; m_setName = value; }

    /**
     * <p>The name for the set of featured results that the conflicting query belongs
     * to.</p>
     */
    inline void SetSetName(Aws::String&& value) { m_setNameHasBeenSet = true; m_setName = std::move(value); }

    /**
     * <p>The name for the set of featured results that the conflicting query belongs
     * to.</p>
     */
    inline void SetSetName(const char* value) { m_setNameHasBeenSet = true; m_setName.assign(value); }

    /**
     * <p>The name for the set of featured results that the conflicting query belongs
     * to.</p>
     */
    inline ConflictingItem& WithSetName(const Aws::String& value) { SetSetName(value); return *this;}

    /**
     * <p>The name for the set of featured results that the conflicting query belongs
     * to.</p>
     */
    inline ConflictingItem& WithSetName(Aws::String&& value) { SetSetName(std::move(value)); return *this;}

    /**
     * <p>The name for the set of featured results that the conflicting query belongs
     * to.</p>
     */
    inline ConflictingItem& WithSetName(const char* value) { SetSetName(value); return *this;}


    /**
     * <p>The identifier of the set of featured results that the conflicting query
     * belongs to.</p>
     */
    inline const Aws::String& GetSetId() const{ return m_setId; }

    /**
     * <p>The identifier of the set of featured results that the conflicting query
     * belongs to.</p>
     */
    inline bool SetIdHasBeenSet() const { return m_setIdHasBeenSet; }

    /**
     * <p>The identifier of the set of featured results that the conflicting query
     * belongs to.</p>
     */
    inline void SetSetId(const Aws::String& value) { m_setIdHasBeenSet = true; m_setId = value; }

    /**
     * <p>The identifier of the set of featured results that the conflicting query
     * belongs to.</p>
     */
    inline void SetSetId(Aws::String&& value) { m_setIdHasBeenSet = true; m_setId = std::move(value); }

    /**
     * <p>The identifier of the set of featured results that the conflicting query
     * belongs to.</p>
     */
    inline void SetSetId(const char* value) { m_setIdHasBeenSet = true; m_setId.assign(value); }

    /**
     * <p>The identifier of the set of featured results that the conflicting query
     * belongs to.</p>
     */
    inline ConflictingItem& WithSetId(const Aws::String& value) { SetSetId(value); return *this;}

    /**
     * <p>The identifier of the set of featured results that the conflicting query
     * belongs to.</p>
     */
    inline ConflictingItem& WithSetId(Aws::String&& value) { SetSetId(std::move(value)); return *this;}

    /**
     * <p>The identifier of the set of featured results that the conflicting query
     * belongs to.</p>
     */
    inline ConflictingItem& WithSetId(const char* value) { SetSetId(value); return *this;}

  private:

    Aws::String m_queryText;
    bool m_queryTextHasBeenSet = false;

    Aws::String m_setName;
    bool m_setNameHasBeenSet = false;

    Aws::String m_setId;
    bool m_setIdHasBeenSet = false;
  };

} // namespace Model
} // namespace kendra
} // namespace Aws
