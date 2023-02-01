/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/elastic-inference/ElasticInference_EXPORTS.h>
#include <aws/elastic-inference/ElasticInferenceRequest.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/elastic-inference/model/Filter.h>
#include <utility>

namespace Aws
{
namespace ElasticInference
{
namespace Model
{

  /**
   */
  class DescribeAcceleratorsRequest : public ElasticInferenceRequest
  {
  public:
    AWS_ELASTICINFERENCE_API DescribeAcceleratorsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeAccelerators"; }

    AWS_ELASTICINFERENCE_API Aws::String SerializePayload() const override;


    /**
     * <p> The IDs of the accelerators to describe. </p>
     */
    inline const Aws::Vector<Aws::String>& GetAcceleratorIds() const{ return m_acceleratorIds; }

    /**
     * <p> The IDs of the accelerators to describe. </p>
     */
    inline bool AcceleratorIdsHasBeenSet() const { return m_acceleratorIdsHasBeenSet; }

    /**
     * <p> The IDs of the accelerators to describe. </p>
     */
    inline void SetAcceleratorIds(const Aws::Vector<Aws::String>& value) { m_acceleratorIdsHasBeenSet = true; m_acceleratorIds = value; }

    /**
     * <p> The IDs of the accelerators to describe. </p>
     */
    inline void SetAcceleratorIds(Aws::Vector<Aws::String>&& value) { m_acceleratorIdsHasBeenSet = true; m_acceleratorIds = std::move(value); }

    /**
     * <p> The IDs of the accelerators to describe. </p>
     */
    inline DescribeAcceleratorsRequest& WithAcceleratorIds(const Aws::Vector<Aws::String>& value) { SetAcceleratorIds(value); return *this;}

    /**
     * <p> The IDs of the accelerators to describe. </p>
     */
    inline DescribeAcceleratorsRequest& WithAcceleratorIds(Aws::Vector<Aws::String>&& value) { SetAcceleratorIds(std::move(value)); return *this;}

    /**
     * <p> The IDs of the accelerators to describe. </p>
     */
    inline DescribeAcceleratorsRequest& AddAcceleratorIds(const Aws::String& value) { m_acceleratorIdsHasBeenSet = true; m_acceleratorIds.push_back(value); return *this; }

    /**
     * <p> The IDs of the accelerators to describe. </p>
     */
    inline DescribeAcceleratorsRequest& AddAcceleratorIds(Aws::String&& value) { m_acceleratorIdsHasBeenSet = true; m_acceleratorIds.push_back(std::move(value)); return *this; }

    /**
     * <p> The IDs of the accelerators to describe. </p>
     */
    inline DescribeAcceleratorsRequest& AddAcceleratorIds(const char* value) { m_acceleratorIdsHasBeenSet = true; m_acceleratorIds.push_back(value); return *this; }


    /**
     * <p> One or more filters. Filter names and values are case-sensitive. Valid
     * filter names are: accelerator-types: can provide a list of accelerator type
     * names to filter for. instance-id: can provide a list of EC2 instance ids to
     * filter for. </p>
     */
    inline const Aws::Vector<Filter>& GetFilters() const{ return m_filters; }

    /**
     * <p> One or more filters. Filter names and values are case-sensitive. Valid
     * filter names are: accelerator-types: can provide a list of accelerator type
     * names to filter for. instance-id: can provide a list of EC2 instance ids to
     * filter for. </p>
     */
    inline bool FiltersHasBeenSet() const { return m_filtersHasBeenSet; }

    /**
     * <p> One or more filters. Filter names and values are case-sensitive. Valid
     * filter names are: accelerator-types: can provide a list of accelerator type
     * names to filter for. instance-id: can provide a list of EC2 instance ids to
     * filter for. </p>
     */
    inline void SetFilters(const Aws::Vector<Filter>& value) { m_filtersHasBeenSet = true; m_filters = value; }

    /**
     * <p> One or more filters. Filter names and values are case-sensitive. Valid
     * filter names are: accelerator-types: can provide a list of accelerator type
     * names to filter for. instance-id: can provide a list of EC2 instance ids to
     * filter for. </p>
     */
    inline void SetFilters(Aws::Vector<Filter>&& value) { m_filtersHasBeenSet = true; m_filters = std::move(value); }

    /**
     * <p> One or more filters. Filter names and values are case-sensitive. Valid
     * filter names are: accelerator-types: can provide a list of accelerator type
     * names to filter for. instance-id: can provide a list of EC2 instance ids to
     * filter for. </p>
     */
    inline DescribeAcceleratorsRequest& WithFilters(const Aws::Vector<Filter>& value) { SetFilters(value); return *this;}

    /**
     * <p> One or more filters. Filter names and values are case-sensitive. Valid
     * filter names are: accelerator-types: can provide a list of accelerator type
     * names to filter for. instance-id: can provide a list of EC2 instance ids to
     * filter for. </p>
     */
    inline DescribeAcceleratorsRequest& WithFilters(Aws::Vector<Filter>&& value) { SetFilters(std::move(value)); return *this;}

    /**
     * <p> One or more filters. Filter names and values are case-sensitive. Valid
     * filter names are: accelerator-types: can provide a list of accelerator type
     * names to filter for. instance-id: can provide a list of EC2 instance ids to
     * filter for. </p>
     */
    inline DescribeAcceleratorsRequest& AddFilters(const Filter& value) { m_filtersHasBeenSet = true; m_filters.push_back(value); return *this; }

    /**
     * <p> One or more filters. Filter names and values are case-sensitive. Valid
     * filter names are: accelerator-types: can provide a list of accelerator type
     * names to filter for. instance-id: can provide a list of EC2 instance ids to
     * filter for. </p>
     */
    inline DescribeAcceleratorsRequest& AddFilters(Filter&& value) { m_filtersHasBeenSet = true; m_filters.push_back(std::move(value)); return *this; }


    /**
     * <p> The total number of items to return in the command's output. If the total
     * number of items available is more than the value specified, a NextToken is
     * provided in the command's output. To resume pagination, provide the NextToken
     * value in the starting-token argument of a subsequent command. Do not use the
     * NextToken response element directly outside of the AWS CLI. </p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }

    /**
     * <p> The total number of items to return in the command's output. If the total
     * number of items available is more than the value specified, a NextToken is
     * provided in the command's output. To resume pagination, provide the NextToken
     * value in the starting-token argument of a subsequent command. Do not use the
     * NextToken response element directly outside of the AWS CLI. </p>
     */
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }

    /**
     * <p> The total number of items to return in the command's output. If the total
     * number of items available is more than the value specified, a NextToken is
     * provided in the command's output. To resume pagination, provide the NextToken
     * value in the starting-token argument of a subsequent command. Do not use the
     * NextToken response element directly outside of the AWS CLI. </p>
     */
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }

    /**
     * <p> The total number of items to return in the command's output. If the total
     * number of items available is more than the value specified, a NextToken is
     * provided in the command's output. To resume pagination, provide the NextToken
     * value in the starting-token argument of a subsequent command. Do not use the
     * NextToken response element directly outside of the AWS CLI. </p>
     */
    inline DescribeAcceleratorsRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}


    /**
     * <p> A token to specify where to start paginating. This is the NextToken from a
     * previously truncated response. </p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p> A token to specify where to start paginating. This is the NextToken from a
     * previously truncated response. </p>
     */
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    /**
     * <p> A token to specify where to start paginating. This is the NextToken from a
     * previously truncated response. </p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p> A token to specify where to start paginating. This is the NextToken from a
     * previously truncated response. </p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    /**
     * <p> A token to specify where to start paginating. This is the NextToken from a
     * previously truncated response. </p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p> A token to specify where to start paginating. This is the NextToken from a
     * previously truncated response. </p>
     */
    inline DescribeAcceleratorsRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p> A token to specify where to start paginating. This is the NextToken from a
     * previously truncated response. </p>
     */
    inline DescribeAcceleratorsRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p> A token to specify where to start paginating. This is the NextToken from a
     * previously truncated response. </p>
     */
    inline DescribeAcceleratorsRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<Aws::String> m_acceleratorIds;
    bool m_acceleratorIdsHasBeenSet = false;

    Aws::Vector<Filter> m_filters;
    bool m_filtersHasBeenSet = false;

    int m_maxResults;
    bool m_maxResultsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace ElasticInference
} // namespace Aws
