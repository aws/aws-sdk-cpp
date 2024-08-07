/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/glue/Glue_EXPORTS.h>
#include <aws/glue/GlueRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/glue/model/TimestampFilter.h>
#include <utility>

namespace Aws
{
namespace Glue
{
namespace Model
{

  /**
   */
  class ListDataQualityStatisticAnnotationsRequest : public GlueRequest
  {
  public:
    AWS_GLUE_API ListDataQualityStatisticAnnotationsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListDataQualityStatisticAnnotations"; }

    AWS_GLUE_API Aws::String SerializePayload() const override;

    AWS_GLUE_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The Statistic ID.</p>
     */
    inline const Aws::String& GetStatisticId() const{ return m_statisticId; }
    inline bool StatisticIdHasBeenSet() const { return m_statisticIdHasBeenSet; }
    inline void SetStatisticId(const Aws::String& value) { m_statisticIdHasBeenSet = true; m_statisticId = value; }
    inline void SetStatisticId(Aws::String&& value) { m_statisticIdHasBeenSet = true; m_statisticId = std::move(value); }
    inline void SetStatisticId(const char* value) { m_statisticIdHasBeenSet = true; m_statisticId.assign(value); }
    inline ListDataQualityStatisticAnnotationsRequest& WithStatisticId(const Aws::String& value) { SetStatisticId(value); return *this;}
    inline ListDataQualityStatisticAnnotationsRequest& WithStatisticId(Aws::String&& value) { SetStatisticId(std::move(value)); return *this;}
    inline ListDataQualityStatisticAnnotationsRequest& WithStatisticId(const char* value) { SetStatisticId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Profile ID.</p>
     */
    inline const Aws::String& GetProfileId() const{ return m_profileId; }
    inline bool ProfileIdHasBeenSet() const { return m_profileIdHasBeenSet; }
    inline void SetProfileId(const Aws::String& value) { m_profileIdHasBeenSet = true; m_profileId = value; }
    inline void SetProfileId(Aws::String&& value) { m_profileIdHasBeenSet = true; m_profileId = std::move(value); }
    inline void SetProfileId(const char* value) { m_profileIdHasBeenSet = true; m_profileId.assign(value); }
    inline ListDataQualityStatisticAnnotationsRequest& WithProfileId(const Aws::String& value) { SetProfileId(value); return *this;}
    inline ListDataQualityStatisticAnnotationsRequest& WithProfileId(Aws::String&& value) { SetProfileId(std::move(value)); return *this;}
    inline ListDataQualityStatisticAnnotationsRequest& WithProfileId(const char* value) { SetProfileId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A timestamp filter.</p>
     */
    inline const TimestampFilter& GetTimestampFilter() const{ return m_timestampFilter; }
    inline bool TimestampFilterHasBeenSet() const { return m_timestampFilterHasBeenSet; }
    inline void SetTimestampFilter(const TimestampFilter& value) { m_timestampFilterHasBeenSet = true; m_timestampFilter = value; }
    inline void SetTimestampFilter(TimestampFilter&& value) { m_timestampFilterHasBeenSet = true; m_timestampFilter = std::move(value); }
    inline ListDataQualityStatisticAnnotationsRequest& WithTimestampFilter(const TimestampFilter& value) { SetTimestampFilter(value); return *this;}
    inline ListDataQualityStatisticAnnotationsRequest& WithTimestampFilter(TimestampFilter&& value) { SetTimestampFilter(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum number of results to return in this request.</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }
    inline ListDataQualityStatisticAnnotationsRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A pagination token to retrieve the next set of results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }
    inline ListDataQualityStatisticAnnotationsRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListDataQualityStatisticAnnotationsRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListDataQualityStatisticAnnotationsRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}
  private:

    Aws::String m_statisticId;
    bool m_statisticIdHasBeenSet = false;

    Aws::String m_profileId;
    bool m_profileIdHasBeenSet = false;

    TimestampFilter m_timestampFilter;
    bool m_timestampFilterHasBeenSet = false;

    int m_maxResults;
    bool m_maxResultsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
