/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/kendra/Kendra_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/kendra/model/Order.h>
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
namespace kendra
{
namespace Model
{

  /**
   * <p>Provides information for tuning the relevance of a field in a search. When a
   * query includes terms that match the field, the results are given a boost in the
   * response based on these tuning parameters.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/kendra-2019-02-03/Relevance">AWS
   * API Reference</a></p>
   */
  class Relevance
  {
  public:
    AWS_KENDRA_API Relevance();
    AWS_KENDRA_API Relevance(Aws::Utils::Json::JsonView jsonValue);
    AWS_KENDRA_API Relevance& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_KENDRA_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Indicates that this field determines how "fresh" a document is. For example,
     * if document 1 was created on November 5, and document 2 was created on October
     * 31, document 1 is "fresher" than document 2. You can only set the
     * <code>Freshness</code> field on one <code>DATE</code> type field. Only applies
     * to <code>DATE</code> fields.</p>
     */
    inline bool GetFreshness() const{ return m_freshness; }

    /**
     * <p>Indicates that this field determines how "fresh" a document is. For example,
     * if document 1 was created on November 5, and document 2 was created on October
     * 31, document 1 is "fresher" than document 2. You can only set the
     * <code>Freshness</code> field on one <code>DATE</code> type field. Only applies
     * to <code>DATE</code> fields.</p>
     */
    inline bool FreshnessHasBeenSet() const { return m_freshnessHasBeenSet; }

    /**
     * <p>Indicates that this field determines how "fresh" a document is. For example,
     * if document 1 was created on November 5, and document 2 was created on October
     * 31, document 1 is "fresher" than document 2. You can only set the
     * <code>Freshness</code> field on one <code>DATE</code> type field. Only applies
     * to <code>DATE</code> fields.</p>
     */
    inline void SetFreshness(bool value) { m_freshnessHasBeenSet = true; m_freshness = value; }

    /**
     * <p>Indicates that this field determines how "fresh" a document is. For example,
     * if document 1 was created on November 5, and document 2 was created on October
     * 31, document 1 is "fresher" than document 2. You can only set the
     * <code>Freshness</code> field on one <code>DATE</code> type field. Only applies
     * to <code>DATE</code> fields.</p>
     */
    inline Relevance& WithFreshness(bool value) { SetFreshness(value); return *this;}


    /**
     * <p>The relative importance of the field in the search. Larger numbers provide
     * more of a boost than smaller numbers.</p>
     */
    inline int GetImportance() const{ return m_importance; }

    /**
     * <p>The relative importance of the field in the search. Larger numbers provide
     * more of a boost than smaller numbers.</p>
     */
    inline bool ImportanceHasBeenSet() const { return m_importanceHasBeenSet; }

    /**
     * <p>The relative importance of the field in the search. Larger numbers provide
     * more of a boost than smaller numbers.</p>
     */
    inline void SetImportance(int value) { m_importanceHasBeenSet = true; m_importance = value; }

    /**
     * <p>The relative importance of the field in the search. Larger numbers provide
     * more of a boost than smaller numbers.</p>
     */
    inline Relevance& WithImportance(int value) { SetImportance(value); return *this;}


    /**
     * <p>Specifies the time period that the boost applies to. For example, to make the
     * boost apply to documents with the field value within the last month, you would
     * use "2628000s". Once the field value is beyond the specified range, the effect
     * of the boost drops off. The higher the importance, the faster the effect drops
     * off. If you don't specify a value, the default is 3 months. The value of the
     * field is a numeric string followed by the character "s", for example "86400s"
     * for one day, or "604800s" for one week. </p> <p>Only applies to
     * <code>DATE</code> fields.</p>
     */
    inline const Aws::String& GetDuration() const{ return m_duration; }

    /**
     * <p>Specifies the time period that the boost applies to. For example, to make the
     * boost apply to documents with the field value within the last month, you would
     * use "2628000s". Once the field value is beyond the specified range, the effect
     * of the boost drops off. The higher the importance, the faster the effect drops
     * off. If you don't specify a value, the default is 3 months. The value of the
     * field is a numeric string followed by the character "s", for example "86400s"
     * for one day, or "604800s" for one week. </p> <p>Only applies to
     * <code>DATE</code> fields.</p>
     */
    inline bool DurationHasBeenSet() const { return m_durationHasBeenSet; }

    /**
     * <p>Specifies the time period that the boost applies to. For example, to make the
     * boost apply to documents with the field value within the last month, you would
     * use "2628000s". Once the field value is beyond the specified range, the effect
     * of the boost drops off. The higher the importance, the faster the effect drops
     * off. If you don't specify a value, the default is 3 months. The value of the
     * field is a numeric string followed by the character "s", for example "86400s"
     * for one day, or "604800s" for one week. </p> <p>Only applies to
     * <code>DATE</code> fields.</p>
     */
    inline void SetDuration(const Aws::String& value) { m_durationHasBeenSet = true; m_duration = value; }

    /**
     * <p>Specifies the time period that the boost applies to. For example, to make the
     * boost apply to documents with the field value within the last month, you would
     * use "2628000s". Once the field value is beyond the specified range, the effect
     * of the boost drops off. The higher the importance, the faster the effect drops
     * off. If you don't specify a value, the default is 3 months. The value of the
     * field is a numeric string followed by the character "s", for example "86400s"
     * for one day, or "604800s" for one week. </p> <p>Only applies to
     * <code>DATE</code> fields.</p>
     */
    inline void SetDuration(Aws::String&& value) { m_durationHasBeenSet = true; m_duration = std::move(value); }

    /**
     * <p>Specifies the time period that the boost applies to. For example, to make the
     * boost apply to documents with the field value within the last month, you would
     * use "2628000s". Once the field value is beyond the specified range, the effect
     * of the boost drops off. The higher the importance, the faster the effect drops
     * off. If you don't specify a value, the default is 3 months. The value of the
     * field is a numeric string followed by the character "s", for example "86400s"
     * for one day, or "604800s" for one week. </p> <p>Only applies to
     * <code>DATE</code> fields.</p>
     */
    inline void SetDuration(const char* value) { m_durationHasBeenSet = true; m_duration.assign(value); }

    /**
     * <p>Specifies the time period that the boost applies to. For example, to make the
     * boost apply to documents with the field value within the last month, you would
     * use "2628000s". Once the field value is beyond the specified range, the effect
     * of the boost drops off. The higher the importance, the faster the effect drops
     * off. If you don't specify a value, the default is 3 months. The value of the
     * field is a numeric string followed by the character "s", for example "86400s"
     * for one day, or "604800s" for one week. </p> <p>Only applies to
     * <code>DATE</code> fields.</p>
     */
    inline Relevance& WithDuration(const Aws::String& value) { SetDuration(value); return *this;}

    /**
     * <p>Specifies the time period that the boost applies to. For example, to make the
     * boost apply to documents with the field value within the last month, you would
     * use "2628000s". Once the field value is beyond the specified range, the effect
     * of the boost drops off. The higher the importance, the faster the effect drops
     * off. If you don't specify a value, the default is 3 months. The value of the
     * field is a numeric string followed by the character "s", for example "86400s"
     * for one day, or "604800s" for one week. </p> <p>Only applies to
     * <code>DATE</code> fields.</p>
     */
    inline Relevance& WithDuration(Aws::String&& value) { SetDuration(std::move(value)); return *this;}

    /**
     * <p>Specifies the time period that the boost applies to. For example, to make the
     * boost apply to documents with the field value within the last month, you would
     * use "2628000s". Once the field value is beyond the specified range, the effect
     * of the boost drops off. The higher the importance, the faster the effect drops
     * off. If you don't specify a value, the default is 3 months. The value of the
     * field is a numeric string followed by the character "s", for example "86400s"
     * for one day, or "604800s" for one week. </p> <p>Only applies to
     * <code>DATE</code> fields.</p>
     */
    inline Relevance& WithDuration(const char* value) { SetDuration(value); return *this;}


    /**
     * <p>Determines how values should be interpreted.</p> <p>When the
     * <code>RankOrder</code> field is <code>ASCENDING</code>, higher numbers are
     * better. For example, a document with a rating score of 10 is higher ranking than
     * a document with a rating score of 1.</p> <p>When the <code>RankOrder</code>
     * field is <code>DESCENDING</code>, lower numbers are better. For example, in a
     * task tracking application, a priority 1 task is more important than a priority 5
     * task.</p> <p>Only applies to <code>LONG</code> and <code>DOUBLE</code>
     * fields.</p>
     */
    inline const Order& GetRankOrder() const{ return m_rankOrder; }

    /**
     * <p>Determines how values should be interpreted.</p> <p>When the
     * <code>RankOrder</code> field is <code>ASCENDING</code>, higher numbers are
     * better. For example, a document with a rating score of 10 is higher ranking than
     * a document with a rating score of 1.</p> <p>When the <code>RankOrder</code>
     * field is <code>DESCENDING</code>, lower numbers are better. For example, in a
     * task tracking application, a priority 1 task is more important than a priority 5
     * task.</p> <p>Only applies to <code>LONG</code> and <code>DOUBLE</code>
     * fields.</p>
     */
    inline bool RankOrderHasBeenSet() const { return m_rankOrderHasBeenSet; }

    /**
     * <p>Determines how values should be interpreted.</p> <p>When the
     * <code>RankOrder</code> field is <code>ASCENDING</code>, higher numbers are
     * better. For example, a document with a rating score of 10 is higher ranking than
     * a document with a rating score of 1.</p> <p>When the <code>RankOrder</code>
     * field is <code>DESCENDING</code>, lower numbers are better. For example, in a
     * task tracking application, a priority 1 task is more important than a priority 5
     * task.</p> <p>Only applies to <code>LONG</code> and <code>DOUBLE</code>
     * fields.</p>
     */
    inline void SetRankOrder(const Order& value) { m_rankOrderHasBeenSet = true; m_rankOrder = value; }

    /**
     * <p>Determines how values should be interpreted.</p> <p>When the
     * <code>RankOrder</code> field is <code>ASCENDING</code>, higher numbers are
     * better. For example, a document with a rating score of 10 is higher ranking than
     * a document with a rating score of 1.</p> <p>When the <code>RankOrder</code>
     * field is <code>DESCENDING</code>, lower numbers are better. For example, in a
     * task tracking application, a priority 1 task is more important than a priority 5
     * task.</p> <p>Only applies to <code>LONG</code> and <code>DOUBLE</code>
     * fields.</p>
     */
    inline void SetRankOrder(Order&& value) { m_rankOrderHasBeenSet = true; m_rankOrder = std::move(value); }

    /**
     * <p>Determines how values should be interpreted.</p> <p>When the
     * <code>RankOrder</code> field is <code>ASCENDING</code>, higher numbers are
     * better. For example, a document with a rating score of 10 is higher ranking than
     * a document with a rating score of 1.</p> <p>When the <code>RankOrder</code>
     * field is <code>DESCENDING</code>, lower numbers are better. For example, in a
     * task tracking application, a priority 1 task is more important than a priority 5
     * task.</p> <p>Only applies to <code>LONG</code> and <code>DOUBLE</code>
     * fields.</p>
     */
    inline Relevance& WithRankOrder(const Order& value) { SetRankOrder(value); return *this;}

    /**
     * <p>Determines how values should be interpreted.</p> <p>When the
     * <code>RankOrder</code> field is <code>ASCENDING</code>, higher numbers are
     * better. For example, a document with a rating score of 10 is higher ranking than
     * a document with a rating score of 1.</p> <p>When the <code>RankOrder</code>
     * field is <code>DESCENDING</code>, lower numbers are better. For example, in a
     * task tracking application, a priority 1 task is more important than a priority 5
     * task.</p> <p>Only applies to <code>LONG</code> and <code>DOUBLE</code>
     * fields.</p>
     */
    inline Relevance& WithRankOrder(Order&& value) { SetRankOrder(std::move(value)); return *this;}


    /**
     * <p>A list of values that should be given a different boost when they appear in
     * the result list. For example, if you are boosting a field called "department,"
     * query terms that match the department field are boosted in the result. However,
     * you can add entries from the department field to boost documents with those
     * values higher. </p> <p>For example, you can add entries to the map with names of
     * departments. If you add "HR",5 and "Legal",3 those departments are given special
     * attention when they appear in the metadata of a document. When those terms
     * appear they are given the specified importance instead of the regular importance
     * for the boost.</p>
     */
    inline const Aws::Map<Aws::String, int>& GetValueImportanceMap() const{ return m_valueImportanceMap; }

    /**
     * <p>A list of values that should be given a different boost when they appear in
     * the result list. For example, if you are boosting a field called "department,"
     * query terms that match the department field are boosted in the result. However,
     * you can add entries from the department field to boost documents with those
     * values higher. </p> <p>For example, you can add entries to the map with names of
     * departments. If you add "HR",5 and "Legal",3 those departments are given special
     * attention when they appear in the metadata of a document. When those terms
     * appear they are given the specified importance instead of the regular importance
     * for the boost.</p>
     */
    inline bool ValueImportanceMapHasBeenSet() const { return m_valueImportanceMapHasBeenSet; }

    /**
     * <p>A list of values that should be given a different boost when they appear in
     * the result list. For example, if you are boosting a field called "department,"
     * query terms that match the department field are boosted in the result. However,
     * you can add entries from the department field to boost documents with those
     * values higher. </p> <p>For example, you can add entries to the map with names of
     * departments. If you add "HR",5 and "Legal",3 those departments are given special
     * attention when they appear in the metadata of a document. When those terms
     * appear they are given the specified importance instead of the regular importance
     * for the boost.</p>
     */
    inline void SetValueImportanceMap(const Aws::Map<Aws::String, int>& value) { m_valueImportanceMapHasBeenSet = true; m_valueImportanceMap = value; }

    /**
     * <p>A list of values that should be given a different boost when they appear in
     * the result list. For example, if you are boosting a field called "department,"
     * query terms that match the department field are boosted in the result. However,
     * you can add entries from the department field to boost documents with those
     * values higher. </p> <p>For example, you can add entries to the map with names of
     * departments. If you add "HR",5 and "Legal",3 those departments are given special
     * attention when they appear in the metadata of a document. When those terms
     * appear they are given the specified importance instead of the regular importance
     * for the boost.</p>
     */
    inline void SetValueImportanceMap(Aws::Map<Aws::String, int>&& value) { m_valueImportanceMapHasBeenSet = true; m_valueImportanceMap = std::move(value); }

    /**
     * <p>A list of values that should be given a different boost when they appear in
     * the result list. For example, if you are boosting a field called "department,"
     * query terms that match the department field are boosted in the result. However,
     * you can add entries from the department field to boost documents with those
     * values higher. </p> <p>For example, you can add entries to the map with names of
     * departments. If you add "HR",5 and "Legal",3 those departments are given special
     * attention when they appear in the metadata of a document. When those terms
     * appear they are given the specified importance instead of the regular importance
     * for the boost.</p>
     */
    inline Relevance& WithValueImportanceMap(const Aws::Map<Aws::String, int>& value) { SetValueImportanceMap(value); return *this;}

    /**
     * <p>A list of values that should be given a different boost when they appear in
     * the result list. For example, if you are boosting a field called "department,"
     * query terms that match the department field are boosted in the result. However,
     * you can add entries from the department field to boost documents with those
     * values higher. </p> <p>For example, you can add entries to the map with names of
     * departments. If you add "HR",5 and "Legal",3 those departments are given special
     * attention when they appear in the metadata of a document. When those terms
     * appear they are given the specified importance instead of the regular importance
     * for the boost.</p>
     */
    inline Relevance& WithValueImportanceMap(Aws::Map<Aws::String, int>&& value) { SetValueImportanceMap(std::move(value)); return *this;}

    /**
     * <p>A list of values that should be given a different boost when they appear in
     * the result list. For example, if you are boosting a field called "department,"
     * query terms that match the department field are boosted in the result. However,
     * you can add entries from the department field to boost documents with those
     * values higher. </p> <p>For example, you can add entries to the map with names of
     * departments. If you add "HR",5 and "Legal",3 those departments are given special
     * attention when they appear in the metadata of a document. When those terms
     * appear they are given the specified importance instead of the regular importance
     * for the boost.</p>
     */
    inline Relevance& AddValueImportanceMap(const Aws::String& key, int value) { m_valueImportanceMapHasBeenSet = true; m_valueImportanceMap.emplace(key, value); return *this; }

    /**
     * <p>A list of values that should be given a different boost when they appear in
     * the result list. For example, if you are boosting a field called "department,"
     * query terms that match the department field are boosted in the result. However,
     * you can add entries from the department field to boost documents with those
     * values higher. </p> <p>For example, you can add entries to the map with names of
     * departments. If you add "HR",5 and "Legal",3 those departments are given special
     * attention when they appear in the metadata of a document. When those terms
     * appear they are given the specified importance instead of the regular importance
     * for the boost.</p>
     */
    inline Relevance& AddValueImportanceMap(Aws::String&& key, int value) { m_valueImportanceMapHasBeenSet = true; m_valueImportanceMap.emplace(std::move(key), value); return *this; }

    /**
     * <p>A list of values that should be given a different boost when they appear in
     * the result list. For example, if you are boosting a field called "department,"
     * query terms that match the department field are boosted in the result. However,
     * you can add entries from the department field to boost documents with those
     * values higher. </p> <p>For example, you can add entries to the map with names of
     * departments. If you add "HR",5 and "Legal",3 those departments are given special
     * attention when they appear in the metadata of a document. When those terms
     * appear they are given the specified importance instead of the regular importance
     * for the boost.</p>
     */
    inline Relevance& AddValueImportanceMap(const char* key, int value) { m_valueImportanceMapHasBeenSet = true; m_valueImportanceMap.emplace(key, value); return *this; }

  private:

    bool m_freshness;
    bool m_freshnessHasBeenSet = false;

    int m_importance;
    bool m_importanceHasBeenSet = false;

    Aws::String m_duration;
    bool m_durationHasBeenSet = false;

    Order m_rankOrder;
    bool m_rankOrderHasBeenSet = false;

    Aws::Map<Aws::String, int> m_valueImportanceMap;
    bool m_valueImportanceMapHasBeenSet = false;
  };

} // namespace Model
} // namespace kendra
} // namespace Aws
