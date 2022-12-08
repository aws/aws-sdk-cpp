/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/outposts/Outposts_EXPORTS.h>
#include <aws/outposts/OutpostsRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <utility>

namespace Aws
{
namespace Http
{
    class URI;
} //namespace Http
namespace Outposts
{
namespace Model
{

  /**
   */
  class ListOutpostsRequest : public OutpostsRequest
  {
  public:
    AWS_OUTPOSTS_API ListOutpostsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListOutposts"; }

    AWS_OUTPOSTS_API Aws::String SerializePayload() const override;

    AWS_OUTPOSTS_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    
    inline ListOutpostsRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    
    inline ListOutpostsRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    
    inline ListOutpostsRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    
    inline int GetMaxResults() const{ return m_maxResults; }

    
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }

    
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }

    
    inline ListOutpostsRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}


    /**
     * <p>Filters the results by the lifecycle status.</p>
     */
    inline const Aws::Vector<Aws::String>& GetLifeCycleStatusFilter() const{ return m_lifeCycleStatusFilter; }

    /**
     * <p>Filters the results by the lifecycle status.</p>
     */
    inline bool LifeCycleStatusFilterHasBeenSet() const { return m_lifeCycleStatusFilterHasBeenSet; }

    /**
     * <p>Filters the results by the lifecycle status.</p>
     */
    inline void SetLifeCycleStatusFilter(const Aws::Vector<Aws::String>& value) { m_lifeCycleStatusFilterHasBeenSet = true; m_lifeCycleStatusFilter = value; }

    /**
     * <p>Filters the results by the lifecycle status.</p>
     */
    inline void SetLifeCycleStatusFilter(Aws::Vector<Aws::String>&& value) { m_lifeCycleStatusFilterHasBeenSet = true; m_lifeCycleStatusFilter = std::move(value); }

    /**
     * <p>Filters the results by the lifecycle status.</p>
     */
    inline ListOutpostsRequest& WithLifeCycleStatusFilter(const Aws::Vector<Aws::String>& value) { SetLifeCycleStatusFilter(value); return *this;}

    /**
     * <p>Filters the results by the lifecycle status.</p>
     */
    inline ListOutpostsRequest& WithLifeCycleStatusFilter(Aws::Vector<Aws::String>&& value) { SetLifeCycleStatusFilter(std::move(value)); return *this;}

    /**
     * <p>Filters the results by the lifecycle status.</p>
     */
    inline ListOutpostsRequest& AddLifeCycleStatusFilter(const Aws::String& value) { m_lifeCycleStatusFilterHasBeenSet = true; m_lifeCycleStatusFilter.push_back(value); return *this; }

    /**
     * <p>Filters the results by the lifecycle status.</p>
     */
    inline ListOutpostsRequest& AddLifeCycleStatusFilter(Aws::String&& value) { m_lifeCycleStatusFilterHasBeenSet = true; m_lifeCycleStatusFilter.push_back(std::move(value)); return *this; }

    /**
     * <p>Filters the results by the lifecycle status.</p>
     */
    inline ListOutpostsRequest& AddLifeCycleStatusFilter(const char* value) { m_lifeCycleStatusFilterHasBeenSet = true; m_lifeCycleStatusFilter.push_back(value); return *this; }


    /**
     * <p>Filters the results by Availability Zone (for example,
     * <code>us-east-1a</code>).</p>
     */
    inline const Aws::Vector<Aws::String>& GetAvailabilityZoneFilter() const{ return m_availabilityZoneFilter; }

    /**
     * <p>Filters the results by Availability Zone (for example,
     * <code>us-east-1a</code>).</p>
     */
    inline bool AvailabilityZoneFilterHasBeenSet() const { return m_availabilityZoneFilterHasBeenSet; }

    /**
     * <p>Filters the results by Availability Zone (for example,
     * <code>us-east-1a</code>).</p>
     */
    inline void SetAvailabilityZoneFilter(const Aws::Vector<Aws::String>& value) { m_availabilityZoneFilterHasBeenSet = true; m_availabilityZoneFilter = value; }

    /**
     * <p>Filters the results by Availability Zone (for example,
     * <code>us-east-1a</code>).</p>
     */
    inline void SetAvailabilityZoneFilter(Aws::Vector<Aws::String>&& value) { m_availabilityZoneFilterHasBeenSet = true; m_availabilityZoneFilter = std::move(value); }

    /**
     * <p>Filters the results by Availability Zone (for example,
     * <code>us-east-1a</code>).</p>
     */
    inline ListOutpostsRequest& WithAvailabilityZoneFilter(const Aws::Vector<Aws::String>& value) { SetAvailabilityZoneFilter(value); return *this;}

    /**
     * <p>Filters the results by Availability Zone (for example,
     * <code>us-east-1a</code>).</p>
     */
    inline ListOutpostsRequest& WithAvailabilityZoneFilter(Aws::Vector<Aws::String>&& value) { SetAvailabilityZoneFilter(std::move(value)); return *this;}

    /**
     * <p>Filters the results by Availability Zone (for example,
     * <code>us-east-1a</code>).</p>
     */
    inline ListOutpostsRequest& AddAvailabilityZoneFilter(const Aws::String& value) { m_availabilityZoneFilterHasBeenSet = true; m_availabilityZoneFilter.push_back(value); return *this; }

    /**
     * <p>Filters the results by Availability Zone (for example,
     * <code>us-east-1a</code>).</p>
     */
    inline ListOutpostsRequest& AddAvailabilityZoneFilter(Aws::String&& value) { m_availabilityZoneFilterHasBeenSet = true; m_availabilityZoneFilter.push_back(std::move(value)); return *this; }

    /**
     * <p>Filters the results by Availability Zone (for example,
     * <code>us-east-1a</code>).</p>
     */
    inline ListOutpostsRequest& AddAvailabilityZoneFilter(const char* value) { m_availabilityZoneFilterHasBeenSet = true; m_availabilityZoneFilter.push_back(value); return *this; }


    /**
     * <p>Filters the results by AZ ID (for example, <code>use1-az1</code>).</p>
     */
    inline const Aws::Vector<Aws::String>& GetAvailabilityZoneIdFilter() const{ return m_availabilityZoneIdFilter; }

    /**
     * <p>Filters the results by AZ ID (for example, <code>use1-az1</code>).</p>
     */
    inline bool AvailabilityZoneIdFilterHasBeenSet() const { return m_availabilityZoneIdFilterHasBeenSet; }

    /**
     * <p>Filters the results by AZ ID (for example, <code>use1-az1</code>).</p>
     */
    inline void SetAvailabilityZoneIdFilter(const Aws::Vector<Aws::String>& value) { m_availabilityZoneIdFilterHasBeenSet = true; m_availabilityZoneIdFilter = value; }

    /**
     * <p>Filters the results by AZ ID (for example, <code>use1-az1</code>).</p>
     */
    inline void SetAvailabilityZoneIdFilter(Aws::Vector<Aws::String>&& value) { m_availabilityZoneIdFilterHasBeenSet = true; m_availabilityZoneIdFilter = std::move(value); }

    /**
     * <p>Filters the results by AZ ID (for example, <code>use1-az1</code>).</p>
     */
    inline ListOutpostsRequest& WithAvailabilityZoneIdFilter(const Aws::Vector<Aws::String>& value) { SetAvailabilityZoneIdFilter(value); return *this;}

    /**
     * <p>Filters the results by AZ ID (for example, <code>use1-az1</code>).</p>
     */
    inline ListOutpostsRequest& WithAvailabilityZoneIdFilter(Aws::Vector<Aws::String>&& value) { SetAvailabilityZoneIdFilter(std::move(value)); return *this;}

    /**
     * <p>Filters the results by AZ ID (for example, <code>use1-az1</code>).</p>
     */
    inline ListOutpostsRequest& AddAvailabilityZoneIdFilter(const Aws::String& value) { m_availabilityZoneIdFilterHasBeenSet = true; m_availabilityZoneIdFilter.push_back(value); return *this; }

    /**
     * <p>Filters the results by AZ ID (for example, <code>use1-az1</code>).</p>
     */
    inline ListOutpostsRequest& AddAvailabilityZoneIdFilter(Aws::String&& value) { m_availabilityZoneIdFilterHasBeenSet = true; m_availabilityZoneIdFilter.push_back(std::move(value)); return *this; }

    /**
     * <p>Filters the results by AZ ID (for example, <code>use1-az1</code>).</p>
     */
    inline ListOutpostsRequest& AddAvailabilityZoneIdFilter(const char* value) { m_availabilityZoneIdFilterHasBeenSet = true; m_availabilityZoneIdFilter.push_back(value); return *this; }

  private:

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    int m_maxResults;
    bool m_maxResultsHasBeenSet = false;

    Aws::Vector<Aws::String> m_lifeCycleStatusFilter;
    bool m_lifeCycleStatusFilterHasBeenSet = false;

    Aws::Vector<Aws::String> m_availabilityZoneFilter;
    bool m_availabilityZoneFilterHasBeenSet = false;

    Aws::Vector<Aws::String> m_availabilityZoneIdFilter;
    bool m_availabilityZoneIdFilterHasBeenSet = false;
  };

} // namespace Model
} // namespace Outposts
} // namespace Aws
