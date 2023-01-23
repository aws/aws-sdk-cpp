/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/kendra/Kendra_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/kendra/model/QuerySuggestionsBlockListStatus.h>
#include <aws/core/utils/DateTime.h>
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
   * <p>Summary information on a query suggestions block list.</p> <p>This includes
   * information on the block list ID, block list name, when the block list was
   * created, when the block list was last updated, and the count of block
   * words/phrases in the block list.</p> <p>For information on the current quota
   * limits for block lists, see <a
   * href="https://docs.aws.amazon.com/kendra/latest/dg/quotas.html">Quotas for
   * Amazon Kendra</a>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/kendra-2019-02-03/QuerySuggestionsBlockListSummary">AWS
   * API Reference</a></p>
   */
  class QuerySuggestionsBlockListSummary
  {
  public:
    AWS_KENDRA_API QuerySuggestionsBlockListSummary();
    AWS_KENDRA_API QuerySuggestionsBlockListSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_KENDRA_API QuerySuggestionsBlockListSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_KENDRA_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The identifier of a block list.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }

    /**
     * <p>The identifier of a block list.</p>
     */
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }

    /**
     * <p>The identifier of a block list.</p>
     */
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }

    /**
     * <p>The identifier of a block list.</p>
     */
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }

    /**
     * <p>The identifier of a block list.</p>
     */
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }

    /**
     * <p>The identifier of a block list.</p>
     */
    inline QuerySuggestionsBlockListSummary& WithId(const Aws::String& value) { SetId(value); return *this;}

    /**
     * <p>The identifier of a block list.</p>
     */
    inline QuerySuggestionsBlockListSummary& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}

    /**
     * <p>The identifier of a block list.</p>
     */
    inline QuerySuggestionsBlockListSummary& WithId(const char* value) { SetId(value); return *this;}


    /**
     * <p>The name of the block list.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the block list.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the block list.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the block list.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the block list.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the block list.</p>
     */
    inline QuerySuggestionsBlockListSummary& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the block list.</p>
     */
    inline QuerySuggestionsBlockListSummary& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the block list.</p>
     */
    inline QuerySuggestionsBlockListSummary& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The status of the block list.</p>
     */
    inline const QuerySuggestionsBlockListStatus& GetStatus() const{ return m_status; }

    /**
     * <p>The status of the block list.</p>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p>The status of the block list.</p>
     */
    inline void SetStatus(const QuerySuggestionsBlockListStatus& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>The status of the block list.</p>
     */
    inline void SetStatus(QuerySuggestionsBlockListStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p>The status of the block list.</p>
     */
    inline QuerySuggestionsBlockListSummary& WithStatus(const QuerySuggestionsBlockListStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>The status of the block list.</p>
     */
    inline QuerySuggestionsBlockListSummary& WithStatus(QuerySuggestionsBlockListStatus&& value) { SetStatus(std::move(value)); return *this;}


    /**
     * <p>The date-time summary information for a query suggestions block list was last
     * created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const{ return m_createdAt; }

    /**
     * <p>The date-time summary information for a query suggestions block list was last
     * created.</p>
     */
    inline bool CreatedAtHasBeenSet() const { return m_createdAtHasBeenSet; }

    /**
     * <p>The date-time summary information for a query suggestions block list was last
     * created.</p>
     */
    inline void SetCreatedAt(const Aws::Utils::DateTime& value) { m_createdAtHasBeenSet = true; m_createdAt = value; }

    /**
     * <p>The date-time summary information for a query suggestions block list was last
     * created.</p>
     */
    inline void SetCreatedAt(Aws::Utils::DateTime&& value) { m_createdAtHasBeenSet = true; m_createdAt = std::move(value); }

    /**
     * <p>The date-time summary information for a query suggestions block list was last
     * created.</p>
     */
    inline QuerySuggestionsBlockListSummary& WithCreatedAt(const Aws::Utils::DateTime& value) { SetCreatedAt(value); return *this;}

    /**
     * <p>The date-time summary information for a query suggestions block list was last
     * created.</p>
     */
    inline QuerySuggestionsBlockListSummary& WithCreatedAt(Aws::Utils::DateTime&& value) { SetCreatedAt(std::move(value)); return *this;}


    /**
     * <p>The date-time the block list was last updated.</p>
     */
    inline const Aws::Utils::DateTime& GetUpdatedAt() const{ return m_updatedAt; }

    /**
     * <p>The date-time the block list was last updated.</p>
     */
    inline bool UpdatedAtHasBeenSet() const { return m_updatedAtHasBeenSet; }

    /**
     * <p>The date-time the block list was last updated.</p>
     */
    inline void SetUpdatedAt(const Aws::Utils::DateTime& value) { m_updatedAtHasBeenSet = true; m_updatedAt = value; }

    /**
     * <p>The date-time the block list was last updated.</p>
     */
    inline void SetUpdatedAt(Aws::Utils::DateTime&& value) { m_updatedAtHasBeenSet = true; m_updatedAt = std::move(value); }

    /**
     * <p>The date-time the block list was last updated.</p>
     */
    inline QuerySuggestionsBlockListSummary& WithUpdatedAt(const Aws::Utils::DateTime& value) { SetUpdatedAt(value); return *this;}

    /**
     * <p>The date-time the block list was last updated.</p>
     */
    inline QuerySuggestionsBlockListSummary& WithUpdatedAt(Aws::Utils::DateTime&& value) { SetUpdatedAt(std::move(value)); return *this;}


    /**
     * <p>The number of items in the block list file.</p>
     */
    inline int GetItemCount() const{ return m_itemCount; }

    /**
     * <p>The number of items in the block list file.</p>
     */
    inline bool ItemCountHasBeenSet() const { return m_itemCountHasBeenSet; }

    /**
     * <p>The number of items in the block list file.</p>
     */
    inline void SetItemCount(int value) { m_itemCountHasBeenSet = true; m_itemCount = value; }

    /**
     * <p>The number of items in the block list file.</p>
     */
    inline QuerySuggestionsBlockListSummary& WithItemCount(int value) { SetItemCount(value); return *this;}

  private:

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    QuerySuggestionsBlockListStatus m_status;
    bool m_statusHasBeenSet = false;

    Aws::Utils::DateTime m_createdAt;
    bool m_createdAtHasBeenSet = false;

    Aws::Utils::DateTime m_updatedAt;
    bool m_updatedAtHasBeenSet = false;

    int m_itemCount;
    bool m_itemCountHasBeenSet = false;
  };

} // namespace Model
} // namespace kendra
} // namespace Aws
