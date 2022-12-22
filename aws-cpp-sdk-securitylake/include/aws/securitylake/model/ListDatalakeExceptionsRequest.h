/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securitylake/SecurityLake_EXPORTS.h>
#include <aws/securitylake/SecurityLakeRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/securitylake/model/Region.h>
#include <utility>

namespace Aws
{
namespace SecurityLake
{
namespace Model
{

  /**
   */
  class ListDatalakeExceptionsRequest : public SecurityLakeRequest
  {
  public:
    AWS_SECURITYLAKE_API ListDatalakeExceptionsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListDatalakeExceptions"; }

    AWS_SECURITYLAKE_API Aws::String SerializePayload() const override;


    /**
     * <p>List the maximum number of failures in Security Lake.</p>
     */
    inline int GetMaxFailures() const{ return m_maxFailures; }

    /**
     * <p>List the maximum number of failures in Security Lake.</p>
     */
    inline bool MaxFailuresHasBeenSet() const { return m_maxFailuresHasBeenSet; }

    /**
     * <p>List the maximum number of failures in Security Lake.</p>
     */
    inline void SetMaxFailures(int value) { m_maxFailuresHasBeenSet = true; m_maxFailures = value; }

    /**
     * <p>List the maximum number of failures in Security Lake.</p>
     */
    inline ListDatalakeExceptionsRequest& WithMaxFailures(int value) { SetMaxFailures(value); return *this;}


    /**
     * <p>List if there are more results available. if nextToken is returned, You can
     * make the call again using the returned token to retrieve the next page</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>List if there are more results available. if nextToken is returned, You can
     * make the call again using the returned token to retrieve the next page</p>
     */
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    /**
     * <p>List if there are more results available. if nextToken is returned, You can
     * make the call again using the returned token to retrieve the next page</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>List if there are more results available. if nextToken is returned, You can
     * make the call again using the returned token to retrieve the next page</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    /**
     * <p>List if there are more results available. if nextToken is returned, You can
     * make the call again using the returned token to retrieve the next page</p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p>List if there are more results available. if nextToken is returned, You can
     * make the call again using the returned token to retrieve the next page</p>
     */
    inline ListDatalakeExceptionsRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>List if there are more results available. if nextToken is returned, You can
     * make the call again using the returned token to retrieve the next page</p>
     */
    inline ListDatalakeExceptionsRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>List if there are more results available. if nextToken is returned, You can
     * make the call again using the returned token to retrieve the next page</p>
     */
    inline ListDatalakeExceptionsRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p>List the regions from which exceptions are retrieved.</p>
     */
    inline const Aws::Vector<Region>& GetRegionSet() const{ return m_regionSet; }

    /**
     * <p>List the regions from which exceptions are retrieved.</p>
     */
    inline bool RegionSetHasBeenSet() const { return m_regionSetHasBeenSet; }

    /**
     * <p>List the regions from which exceptions are retrieved.</p>
     */
    inline void SetRegionSet(const Aws::Vector<Region>& value) { m_regionSetHasBeenSet = true; m_regionSet = value; }

    /**
     * <p>List the regions from which exceptions are retrieved.</p>
     */
    inline void SetRegionSet(Aws::Vector<Region>&& value) { m_regionSetHasBeenSet = true; m_regionSet = std::move(value); }

    /**
     * <p>List the regions from which exceptions are retrieved.</p>
     */
    inline ListDatalakeExceptionsRequest& WithRegionSet(const Aws::Vector<Region>& value) { SetRegionSet(value); return *this;}

    /**
     * <p>List the regions from which exceptions are retrieved.</p>
     */
    inline ListDatalakeExceptionsRequest& WithRegionSet(Aws::Vector<Region>&& value) { SetRegionSet(std::move(value)); return *this;}

    /**
     * <p>List the regions from which exceptions are retrieved.</p>
     */
    inline ListDatalakeExceptionsRequest& AddRegionSet(const Region& value) { m_regionSetHasBeenSet = true; m_regionSet.push_back(value); return *this; }

    /**
     * <p>List the regions from which exceptions are retrieved.</p>
     */
    inline ListDatalakeExceptionsRequest& AddRegionSet(Region&& value) { m_regionSetHasBeenSet = true; m_regionSet.push_back(std::move(value)); return *this; }

  private:

    int m_maxFailures;
    bool m_maxFailuresHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::Vector<Region> m_regionSet;
    bool m_regionSetHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityLake
} // namespace Aws
