/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/omics/Omics_EXPORTS.h>
#include <aws/omics/OmicsRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Http
{
    class URI;
} //namespace Http
namespace Omics
{
namespace Model
{

  /**
   */
  class ListRunsRequest : public OmicsRequest
  {
  public:
    AWS_OMICS_API ListRunsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListRuns"; }

    AWS_OMICS_API Aws::String SerializePayload() const override;

    AWS_OMICS_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    /**
     * <p>The maximum number of runs to return in one page of results.</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }

    /**
     * <p>The maximum number of runs to return in one page of results.</p>
     */
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }

    /**
     * <p>The maximum number of runs to return in one page of results.</p>
     */
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }

    /**
     * <p>The maximum number of runs to return in one page of results.</p>
     */
    inline ListRunsRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}


    /**
     * <p>Filter the list by run name.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>Filter the list by run name.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>Filter the list by run name.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>Filter the list by run name.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>Filter the list by run name.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>Filter the list by run name.</p>
     */
    inline ListRunsRequest& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>Filter the list by run name.</p>
     */
    inline ListRunsRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>Filter the list by run name.</p>
     */
    inline ListRunsRequest& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>Filter the list by run group ID.</p>
     */
    inline const Aws::String& GetRunGroupId() const{ return m_runGroupId; }

    /**
     * <p>Filter the list by run group ID.</p>
     */
    inline bool RunGroupIdHasBeenSet() const { return m_runGroupIdHasBeenSet; }

    /**
     * <p>Filter the list by run group ID.</p>
     */
    inline void SetRunGroupId(const Aws::String& value) { m_runGroupIdHasBeenSet = true; m_runGroupId = value; }

    /**
     * <p>Filter the list by run group ID.</p>
     */
    inline void SetRunGroupId(Aws::String&& value) { m_runGroupIdHasBeenSet = true; m_runGroupId = std::move(value); }

    /**
     * <p>Filter the list by run group ID.</p>
     */
    inline void SetRunGroupId(const char* value) { m_runGroupIdHasBeenSet = true; m_runGroupId.assign(value); }

    /**
     * <p>Filter the list by run group ID.</p>
     */
    inline ListRunsRequest& WithRunGroupId(const Aws::String& value) { SetRunGroupId(value); return *this;}

    /**
     * <p>Filter the list by run group ID.</p>
     */
    inline ListRunsRequest& WithRunGroupId(Aws::String&& value) { SetRunGroupId(std::move(value)); return *this;}

    /**
     * <p>Filter the list by run group ID.</p>
     */
    inline ListRunsRequest& WithRunGroupId(const char* value) { SetRunGroupId(value); return *this;}


    /**
     * <p>Specify the pagination token from a previous request to retrieve the next
     * page of results.</p>
     */
    inline const Aws::String& GetStartingToken() const{ return m_startingToken; }

    /**
     * <p>Specify the pagination token from a previous request to retrieve the next
     * page of results.</p>
     */
    inline bool StartingTokenHasBeenSet() const { return m_startingTokenHasBeenSet; }

    /**
     * <p>Specify the pagination token from a previous request to retrieve the next
     * page of results.</p>
     */
    inline void SetStartingToken(const Aws::String& value) { m_startingTokenHasBeenSet = true; m_startingToken = value; }

    /**
     * <p>Specify the pagination token from a previous request to retrieve the next
     * page of results.</p>
     */
    inline void SetStartingToken(Aws::String&& value) { m_startingTokenHasBeenSet = true; m_startingToken = std::move(value); }

    /**
     * <p>Specify the pagination token from a previous request to retrieve the next
     * page of results.</p>
     */
    inline void SetStartingToken(const char* value) { m_startingTokenHasBeenSet = true; m_startingToken.assign(value); }

    /**
     * <p>Specify the pagination token from a previous request to retrieve the next
     * page of results.</p>
     */
    inline ListRunsRequest& WithStartingToken(const Aws::String& value) { SetStartingToken(value); return *this;}

    /**
     * <p>Specify the pagination token from a previous request to retrieve the next
     * page of results.</p>
     */
    inline ListRunsRequest& WithStartingToken(Aws::String&& value) { SetStartingToken(std::move(value)); return *this;}

    /**
     * <p>Specify the pagination token from a previous request to retrieve the next
     * page of results.</p>
     */
    inline ListRunsRequest& WithStartingToken(const char* value) { SetStartingToken(value); return *this;}

  private:

    int m_maxResults;
    bool m_maxResultsHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_runGroupId;
    bool m_runGroupIdHasBeenSet = false;

    Aws::String m_startingToken;
    bool m_startingTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace Omics
} // namespace Aws
