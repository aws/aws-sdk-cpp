/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/devops-guru/DevOpsGuru_EXPORTS.h>
#include <aws/devops-guru/DevOpsGuruRequest.h>
#include <aws/devops-guru/model/ListEventsFilters.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace DevOpsGuru
{
namespace Model
{

  /**
   */
  class AWS_DEVOPSGURU_API ListEventsRequest : public DevOpsGuruRequest
  {
  public:
    ListEventsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListEvents"; }

    Aws::String SerializePayload() const override;


    
    inline const ListEventsFilters& GetFilters() const{ return m_filters; }

    
    inline bool FiltersHasBeenSet() const { return m_filtersHasBeenSet; }

    
    inline void SetFilters(const ListEventsFilters& value) { m_filtersHasBeenSet = true; m_filters = value; }

    
    inline void SetFilters(ListEventsFilters&& value) { m_filtersHasBeenSet = true; m_filters = std::move(value); }

    
    inline ListEventsRequest& WithFilters(const ListEventsFilters& value) { SetFilters(value); return *this;}

    
    inline ListEventsRequest& WithFilters(ListEventsFilters&& value) { SetFilters(std::move(value)); return *this;}


    
    inline int GetMaxResults() const{ return m_maxResults; }

    
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }

    
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }

    
    inline ListEventsRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}


    
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    
    inline ListEventsRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    
    inline ListEventsRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    
    inline ListEventsRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    ListEventsFilters m_filters;
    bool m_filtersHasBeenSet;

    int m_maxResults;
    bool m_maxResultsHasBeenSet;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet;
  };

} // namespace Model
} // namespace DevOpsGuru
} // namespace Aws
