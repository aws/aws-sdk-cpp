/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iot/IoT_EXPORTS.h>
#include <aws/iot/IoTRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Http
{
    class URI;
} //namespace Http
namespace IoT
{
namespace Model
{

  /**
   */
  class ListBillingGroupsRequest : public IoTRequest
  {
  public:
    AWS_IOT_API ListBillingGroupsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListBillingGroups"; }

    AWS_IOT_API Aws::String SerializePayload() const override;

    AWS_IOT_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    ///@{
    /**
     * <p>To retrieve the next set of results, the <code>nextToken</code> value from a
     * previous response; otherwise <b>null</b> to receive the first set of
     * results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }
    inline ListBillingGroupsRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListBillingGroupsRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListBillingGroupsRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum number of results to return per request.</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }
    inline ListBillingGroupsRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Limit the results to billing groups whose names have the given prefix.</p>
     */
    inline const Aws::String& GetNamePrefixFilter() const{ return m_namePrefixFilter; }
    inline bool NamePrefixFilterHasBeenSet() const { return m_namePrefixFilterHasBeenSet; }
    inline void SetNamePrefixFilter(const Aws::String& value) { m_namePrefixFilterHasBeenSet = true; m_namePrefixFilter = value; }
    inline void SetNamePrefixFilter(Aws::String&& value) { m_namePrefixFilterHasBeenSet = true; m_namePrefixFilter = std::move(value); }
    inline void SetNamePrefixFilter(const char* value) { m_namePrefixFilterHasBeenSet = true; m_namePrefixFilter.assign(value); }
    inline ListBillingGroupsRequest& WithNamePrefixFilter(const Aws::String& value) { SetNamePrefixFilter(value); return *this;}
    inline ListBillingGroupsRequest& WithNamePrefixFilter(Aws::String&& value) { SetNamePrefixFilter(std::move(value)); return *this;}
    inline ListBillingGroupsRequest& WithNamePrefixFilter(const char* value) { SetNamePrefixFilter(value); return *this;}
    ///@}
  private:

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    int m_maxResults;
    bool m_maxResultsHasBeenSet = false;

    Aws::String m_namePrefixFilter;
    bool m_namePrefixFilterHasBeenSet = false;
  };

} // namespace Model
} // namespace IoT
} // namespace Aws
