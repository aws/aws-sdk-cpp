/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/kendra/Kendra_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/kendra/model/FeaturedResultsSetStatus.h>
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
   * <p>Summary information for a set of featured results. Featured results are
   * placed above all other results for certain queries. If there's an exact match of
   * a query, then one or more specific documents are featured in the search
   * results.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/kendra-2019-02-03/FeaturedResultsSetSummary">AWS
   * API Reference</a></p>
   */
  class FeaturedResultsSetSummary
  {
  public:
    AWS_KENDRA_API FeaturedResultsSetSummary();
    AWS_KENDRA_API FeaturedResultsSetSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_KENDRA_API FeaturedResultsSetSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_KENDRA_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The identifier of the set of featured results.</p>
     */
    inline const Aws::String& GetFeaturedResultsSetId() const{ return m_featuredResultsSetId; }

    /**
     * <p>The identifier of the set of featured results.</p>
     */
    inline bool FeaturedResultsSetIdHasBeenSet() const { return m_featuredResultsSetIdHasBeenSet; }

    /**
     * <p>The identifier of the set of featured results.</p>
     */
    inline void SetFeaturedResultsSetId(const Aws::String& value) { m_featuredResultsSetIdHasBeenSet = true; m_featuredResultsSetId = value; }

    /**
     * <p>The identifier of the set of featured results.</p>
     */
    inline void SetFeaturedResultsSetId(Aws::String&& value) { m_featuredResultsSetIdHasBeenSet = true; m_featuredResultsSetId = std::move(value); }

    /**
     * <p>The identifier of the set of featured results.</p>
     */
    inline void SetFeaturedResultsSetId(const char* value) { m_featuredResultsSetIdHasBeenSet = true; m_featuredResultsSetId.assign(value); }

    /**
     * <p>The identifier of the set of featured results.</p>
     */
    inline FeaturedResultsSetSummary& WithFeaturedResultsSetId(const Aws::String& value) { SetFeaturedResultsSetId(value); return *this;}

    /**
     * <p>The identifier of the set of featured results.</p>
     */
    inline FeaturedResultsSetSummary& WithFeaturedResultsSetId(Aws::String&& value) { SetFeaturedResultsSetId(std::move(value)); return *this;}

    /**
     * <p>The identifier of the set of featured results.</p>
     */
    inline FeaturedResultsSetSummary& WithFeaturedResultsSetId(const char* value) { SetFeaturedResultsSetId(value); return *this;}


    /**
     * <p>The name for the set of featured results.</p>
     */
    inline const Aws::String& GetFeaturedResultsSetName() const{ return m_featuredResultsSetName; }

    /**
     * <p>The name for the set of featured results.</p>
     */
    inline bool FeaturedResultsSetNameHasBeenSet() const { return m_featuredResultsSetNameHasBeenSet; }

    /**
     * <p>The name for the set of featured results.</p>
     */
    inline void SetFeaturedResultsSetName(const Aws::String& value) { m_featuredResultsSetNameHasBeenSet = true; m_featuredResultsSetName = value; }

    /**
     * <p>The name for the set of featured results.</p>
     */
    inline void SetFeaturedResultsSetName(Aws::String&& value) { m_featuredResultsSetNameHasBeenSet = true; m_featuredResultsSetName = std::move(value); }

    /**
     * <p>The name for the set of featured results.</p>
     */
    inline void SetFeaturedResultsSetName(const char* value) { m_featuredResultsSetNameHasBeenSet = true; m_featuredResultsSetName.assign(value); }

    /**
     * <p>The name for the set of featured results.</p>
     */
    inline FeaturedResultsSetSummary& WithFeaturedResultsSetName(const Aws::String& value) { SetFeaturedResultsSetName(value); return *this;}

    /**
     * <p>The name for the set of featured results.</p>
     */
    inline FeaturedResultsSetSummary& WithFeaturedResultsSetName(Aws::String&& value) { SetFeaturedResultsSetName(std::move(value)); return *this;}

    /**
     * <p>The name for the set of featured results.</p>
     */
    inline FeaturedResultsSetSummary& WithFeaturedResultsSetName(const char* value) { SetFeaturedResultsSetName(value); return *this;}


    /**
     * <p>The current status of the set of featured results. When the value is
     * <code>ACTIVE</code>, featured results are ready for use. You can still configure
     * your settings before setting the status to <code>ACTIVE</code>. You can set the
     * status to <code>ACTIVE</code> or <code>INACTIVE</code> using the <a
     * href="https://docs.aws.amazon.com/kendra/latest/dg/API_UpdateFeaturedResultsSet.html">UpdateFeaturedResultsSet</a>
     * API. The queries you specify for featured results must be unique per featured
     * results set for each index, whether the status is <code>ACTIVE</code> or
     * <code>INACTIVE</code>.</p>
     */
    inline const FeaturedResultsSetStatus& GetStatus() const{ return m_status; }

    /**
     * <p>The current status of the set of featured results. When the value is
     * <code>ACTIVE</code>, featured results are ready for use. You can still configure
     * your settings before setting the status to <code>ACTIVE</code>. You can set the
     * status to <code>ACTIVE</code> or <code>INACTIVE</code> using the <a
     * href="https://docs.aws.amazon.com/kendra/latest/dg/API_UpdateFeaturedResultsSet.html">UpdateFeaturedResultsSet</a>
     * API. The queries you specify for featured results must be unique per featured
     * results set for each index, whether the status is <code>ACTIVE</code> or
     * <code>INACTIVE</code>.</p>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p>The current status of the set of featured results. When the value is
     * <code>ACTIVE</code>, featured results are ready for use. You can still configure
     * your settings before setting the status to <code>ACTIVE</code>. You can set the
     * status to <code>ACTIVE</code> or <code>INACTIVE</code> using the <a
     * href="https://docs.aws.amazon.com/kendra/latest/dg/API_UpdateFeaturedResultsSet.html">UpdateFeaturedResultsSet</a>
     * API. The queries you specify for featured results must be unique per featured
     * results set for each index, whether the status is <code>ACTIVE</code> or
     * <code>INACTIVE</code>.</p>
     */
    inline void SetStatus(const FeaturedResultsSetStatus& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>The current status of the set of featured results. When the value is
     * <code>ACTIVE</code>, featured results are ready for use. You can still configure
     * your settings before setting the status to <code>ACTIVE</code>. You can set the
     * status to <code>ACTIVE</code> or <code>INACTIVE</code> using the <a
     * href="https://docs.aws.amazon.com/kendra/latest/dg/API_UpdateFeaturedResultsSet.html">UpdateFeaturedResultsSet</a>
     * API. The queries you specify for featured results must be unique per featured
     * results set for each index, whether the status is <code>ACTIVE</code> or
     * <code>INACTIVE</code>.</p>
     */
    inline void SetStatus(FeaturedResultsSetStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p>The current status of the set of featured results. When the value is
     * <code>ACTIVE</code>, featured results are ready for use. You can still configure
     * your settings before setting the status to <code>ACTIVE</code>. You can set the
     * status to <code>ACTIVE</code> or <code>INACTIVE</code> using the <a
     * href="https://docs.aws.amazon.com/kendra/latest/dg/API_UpdateFeaturedResultsSet.html">UpdateFeaturedResultsSet</a>
     * API. The queries you specify for featured results must be unique per featured
     * results set for each index, whether the status is <code>ACTIVE</code> or
     * <code>INACTIVE</code>.</p>
     */
    inline FeaturedResultsSetSummary& WithStatus(const FeaturedResultsSetStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>The current status of the set of featured results. When the value is
     * <code>ACTIVE</code>, featured results are ready for use. You can still configure
     * your settings before setting the status to <code>ACTIVE</code>. You can set the
     * status to <code>ACTIVE</code> or <code>INACTIVE</code> using the <a
     * href="https://docs.aws.amazon.com/kendra/latest/dg/API_UpdateFeaturedResultsSet.html">UpdateFeaturedResultsSet</a>
     * API. The queries you specify for featured results must be unique per featured
     * results set for each index, whether the status is <code>ACTIVE</code> or
     * <code>INACTIVE</code>.</p>
     */
    inline FeaturedResultsSetSummary& WithStatus(FeaturedResultsSetStatus&& value) { SetStatus(std::move(value)); return *this;}


    /**
     * <p>The Unix timestamp when the set of featured results was last updated.</p>
     */
    inline long long GetLastUpdatedTimestamp() const{ return m_lastUpdatedTimestamp; }

    /**
     * <p>The Unix timestamp when the set of featured results was last updated.</p>
     */
    inline bool LastUpdatedTimestampHasBeenSet() const { return m_lastUpdatedTimestampHasBeenSet; }

    /**
     * <p>The Unix timestamp when the set of featured results was last updated.</p>
     */
    inline void SetLastUpdatedTimestamp(long long value) { m_lastUpdatedTimestampHasBeenSet = true; m_lastUpdatedTimestamp = value; }

    /**
     * <p>The Unix timestamp when the set of featured results was last updated.</p>
     */
    inline FeaturedResultsSetSummary& WithLastUpdatedTimestamp(long long value) { SetLastUpdatedTimestamp(value); return *this;}


    /**
     * <p>The Unix timestamp when the set of featured results was created.</p>
     */
    inline long long GetCreationTimestamp() const{ return m_creationTimestamp; }

    /**
     * <p>The Unix timestamp when the set of featured results was created.</p>
     */
    inline bool CreationTimestampHasBeenSet() const { return m_creationTimestampHasBeenSet; }

    /**
     * <p>The Unix timestamp when the set of featured results was created.</p>
     */
    inline void SetCreationTimestamp(long long value) { m_creationTimestampHasBeenSet = true; m_creationTimestamp = value; }

    /**
     * <p>The Unix timestamp when the set of featured results was created.</p>
     */
    inline FeaturedResultsSetSummary& WithCreationTimestamp(long long value) { SetCreationTimestamp(value); return *this;}

  private:

    Aws::String m_featuredResultsSetId;
    bool m_featuredResultsSetIdHasBeenSet = false;

    Aws::String m_featuredResultsSetName;
    bool m_featuredResultsSetNameHasBeenSet = false;

    FeaturedResultsSetStatus m_status;
    bool m_statusHasBeenSet = false;

    long long m_lastUpdatedTimestamp;
    bool m_lastUpdatedTimestampHasBeenSet = false;

    long long m_creationTimestamp;
    bool m_creationTimestampHasBeenSet = false;
  };

} // namespace Model
} // namespace kendra
} // namespace Aws
