/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#pragma once
#include <aws/elasticbeanstalk/ElasticBeanstalk_EXPORTS.h>
#include <aws/elasticbeanstalk/ElasticBeanstalkRequest.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/elasticbeanstalk/model/PlatformFilter.h>
#include <utility>

namespace Aws
{
namespace ElasticBeanstalk
{
namespace Model
{

  /**
   */
  class AWS_ELASTICBEANSTALK_API ListPlatformVersionsRequest : public ElasticBeanstalkRequest
  {
  public:
    ListPlatformVersionsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListPlatformVersions"; }

    Aws::String SerializePayload() const override;

  protected:
    void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    /**
     * <p>List only the platforms where the platform member value relates to one of the
     * supplied values.</p>
     */
    inline const Aws::Vector<PlatformFilter>& GetFilters() const{ return m_filters; }

    /**
     * <p>List only the platforms where the platform member value relates to one of the
     * supplied values.</p>
     */
    inline bool FiltersHasBeenSet() const { return m_filtersHasBeenSet; }

    /**
     * <p>List only the platforms where the platform member value relates to one of the
     * supplied values.</p>
     */
    inline void SetFilters(const Aws::Vector<PlatformFilter>& value) { m_filtersHasBeenSet = true; m_filters = value; }

    /**
     * <p>List only the platforms where the platform member value relates to one of the
     * supplied values.</p>
     */
    inline void SetFilters(Aws::Vector<PlatformFilter>&& value) { m_filtersHasBeenSet = true; m_filters = std::move(value); }

    /**
     * <p>List only the platforms where the platform member value relates to one of the
     * supplied values.</p>
     */
    inline ListPlatformVersionsRequest& WithFilters(const Aws::Vector<PlatformFilter>& value) { SetFilters(value); return *this;}

    /**
     * <p>List only the platforms where the platform member value relates to one of the
     * supplied values.</p>
     */
    inline ListPlatformVersionsRequest& WithFilters(Aws::Vector<PlatformFilter>&& value) { SetFilters(std::move(value)); return *this;}

    /**
     * <p>List only the platforms where the platform member value relates to one of the
     * supplied values.</p>
     */
    inline ListPlatformVersionsRequest& AddFilters(const PlatformFilter& value) { m_filtersHasBeenSet = true; m_filters.push_back(value); return *this; }

    /**
     * <p>List only the platforms where the platform member value relates to one of the
     * supplied values.</p>
     */
    inline ListPlatformVersionsRequest& AddFilters(PlatformFilter&& value) { m_filtersHasBeenSet = true; m_filters.push_back(std::move(value)); return *this; }


    /**
     * <p>The maximum number of platform values returned in one call.</p>
     */
    inline int GetMaxRecords() const{ return m_maxRecords; }

    /**
     * <p>The maximum number of platform values returned in one call.</p>
     */
    inline bool MaxRecordsHasBeenSet() const { return m_maxRecordsHasBeenSet; }

    /**
     * <p>The maximum number of platform values returned in one call.</p>
     */
    inline void SetMaxRecords(int value) { m_maxRecordsHasBeenSet = true; m_maxRecords = value; }

    /**
     * <p>The maximum number of platform values returned in one call.</p>
     */
    inline ListPlatformVersionsRequest& WithMaxRecords(int value) { SetMaxRecords(value); return *this;}


    /**
     * <p>The starting index into the remaining list of platforms. Use the
     * <code>NextToken</code> value from a previous <code>ListPlatformVersion</code>
     * call.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The starting index into the remaining list of platforms. Use the
     * <code>NextToken</code> value from a previous <code>ListPlatformVersion</code>
     * call.</p>
     */
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    /**
     * <p>The starting index into the remaining list of platforms. Use the
     * <code>NextToken</code> value from a previous <code>ListPlatformVersion</code>
     * call.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>The starting index into the remaining list of platforms. Use the
     * <code>NextToken</code> value from a previous <code>ListPlatformVersion</code>
     * call.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    /**
     * <p>The starting index into the remaining list of platforms. Use the
     * <code>NextToken</code> value from a previous <code>ListPlatformVersion</code>
     * call.</p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p>The starting index into the remaining list of platforms. Use the
     * <code>NextToken</code> value from a previous <code>ListPlatformVersion</code>
     * call.</p>
     */
    inline ListPlatformVersionsRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The starting index into the remaining list of platforms. Use the
     * <code>NextToken</code> value from a previous <code>ListPlatformVersion</code>
     * call.</p>
     */
    inline ListPlatformVersionsRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The starting index into the remaining list of platforms. Use the
     * <code>NextToken</code> value from a previous <code>ListPlatformVersion</code>
     * call.</p>
     */
    inline ListPlatformVersionsRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<PlatformFilter> m_filters;
    bool m_filtersHasBeenSet;

    int m_maxRecords;
    bool m_maxRecordsHasBeenSet;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet;
  };

} // namespace Model
} // namespace ElasticBeanstalk
} // namespace Aws
