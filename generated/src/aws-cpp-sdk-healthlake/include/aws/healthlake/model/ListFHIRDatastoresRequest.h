/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/healthlake/HealthLake_EXPORTS.h>
#include <aws/healthlake/HealthLakeRequest.h>
#include <aws/healthlake/model/DatastoreFilter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace HealthLake
{
namespace Model
{

  /**
   */
  class ListFHIRDatastoresRequest : public HealthLakeRequest
  {
  public:
    AWS_HEALTHLAKE_API ListFHIRDatastoresRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListFHIRDatastores"; }

    AWS_HEALTHLAKE_API Aws::String SerializePayload() const override;

    AWS_HEALTHLAKE_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>Lists all filters associated with a FHIR data store request.</p>
     */
    inline const DatastoreFilter& GetFilter() const{ return m_filter; }
    inline bool FilterHasBeenSet() const { return m_filterHasBeenSet; }
    inline void SetFilter(const DatastoreFilter& value) { m_filterHasBeenSet = true; m_filter = value; }
    inline void SetFilter(DatastoreFilter&& value) { m_filterHasBeenSet = true; m_filter = std::move(value); }
    inline ListFHIRDatastoresRequest& WithFilter(const DatastoreFilter& value) { SetFilter(value); return *this;}
    inline ListFHIRDatastoresRequest& WithFilter(DatastoreFilter&& value) { SetFilter(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Fetches the next page of data stores when results are paginated.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }
    inline ListFHIRDatastoresRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListFHIRDatastoresRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListFHIRDatastoresRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum number of data stores returned in a single page of a
     * ListFHIRDatastoresRequest call.</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }
    inline ListFHIRDatastoresRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}
    ///@}
  private:

    DatastoreFilter m_filter;
    bool m_filterHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    int m_maxResults;
    bool m_maxResultsHasBeenSet = false;
  };

} // namespace Model
} // namespace HealthLake
} // namespace Aws
