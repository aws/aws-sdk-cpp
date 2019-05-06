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
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/ec2/EC2Request.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ec2/model/Filter.h>
#include <utility>

namespace Aws
{
namespace EC2
{
namespace Model
{

  /**
   */
  class AWS_EC2_API DescribeIamInstanceProfileAssociationsRequest : public EC2Request
  {
  public:
    DescribeIamInstanceProfileAssociationsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeIamInstanceProfileAssociations"; }

    Aws::String SerializePayload() const override;

  protected:
    void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    /**
     * <p>The IAM instance profile associations.</p>
     */
    inline const Aws::Vector<Aws::String>& GetAssociationIds() const{ return m_associationIds; }

    /**
     * <p>The IAM instance profile associations.</p>
     */
    inline bool AssociationIdsHasBeenSet() const { return m_associationIdsHasBeenSet; }

    /**
     * <p>The IAM instance profile associations.</p>
     */
    inline void SetAssociationIds(const Aws::Vector<Aws::String>& value) { m_associationIdsHasBeenSet = true; m_associationIds = value; }

    /**
     * <p>The IAM instance profile associations.</p>
     */
    inline void SetAssociationIds(Aws::Vector<Aws::String>&& value) { m_associationIdsHasBeenSet = true; m_associationIds = std::move(value); }

    /**
     * <p>The IAM instance profile associations.</p>
     */
    inline DescribeIamInstanceProfileAssociationsRequest& WithAssociationIds(const Aws::Vector<Aws::String>& value) { SetAssociationIds(value); return *this;}

    /**
     * <p>The IAM instance profile associations.</p>
     */
    inline DescribeIamInstanceProfileAssociationsRequest& WithAssociationIds(Aws::Vector<Aws::String>&& value) { SetAssociationIds(std::move(value)); return *this;}

    /**
     * <p>The IAM instance profile associations.</p>
     */
    inline DescribeIamInstanceProfileAssociationsRequest& AddAssociationIds(const Aws::String& value) { m_associationIdsHasBeenSet = true; m_associationIds.push_back(value); return *this; }

    /**
     * <p>The IAM instance profile associations.</p>
     */
    inline DescribeIamInstanceProfileAssociationsRequest& AddAssociationIds(Aws::String&& value) { m_associationIdsHasBeenSet = true; m_associationIds.push_back(std::move(value)); return *this; }

    /**
     * <p>The IAM instance profile associations.</p>
     */
    inline DescribeIamInstanceProfileAssociationsRequest& AddAssociationIds(const char* value) { m_associationIdsHasBeenSet = true; m_associationIds.push_back(value); return *this; }


    /**
     * <p>The filters.</p> <ul> <li> <p> <code>instance-id</code> - The ID of the
     * instance.</p> </li> <li> <p> <code>state</code> - The state of the association
     * (<code>associating</code> | <code>associated</code> |
     * <code>disassociating</code> | <code>disassociated</code>).</p> </li> </ul>
     */
    inline const Aws::Vector<Filter>& GetFilters() const{ return m_filters; }

    /**
     * <p>The filters.</p> <ul> <li> <p> <code>instance-id</code> - The ID of the
     * instance.</p> </li> <li> <p> <code>state</code> - The state of the association
     * (<code>associating</code> | <code>associated</code> |
     * <code>disassociating</code> | <code>disassociated</code>).</p> </li> </ul>
     */
    inline bool FiltersHasBeenSet() const { return m_filtersHasBeenSet; }

    /**
     * <p>The filters.</p> <ul> <li> <p> <code>instance-id</code> - The ID of the
     * instance.</p> </li> <li> <p> <code>state</code> - The state of the association
     * (<code>associating</code> | <code>associated</code> |
     * <code>disassociating</code> | <code>disassociated</code>).</p> </li> </ul>
     */
    inline void SetFilters(const Aws::Vector<Filter>& value) { m_filtersHasBeenSet = true; m_filters = value; }

    /**
     * <p>The filters.</p> <ul> <li> <p> <code>instance-id</code> - The ID of the
     * instance.</p> </li> <li> <p> <code>state</code> - The state of the association
     * (<code>associating</code> | <code>associated</code> |
     * <code>disassociating</code> | <code>disassociated</code>).</p> </li> </ul>
     */
    inline void SetFilters(Aws::Vector<Filter>&& value) { m_filtersHasBeenSet = true; m_filters = std::move(value); }

    /**
     * <p>The filters.</p> <ul> <li> <p> <code>instance-id</code> - The ID of the
     * instance.</p> </li> <li> <p> <code>state</code> - The state of the association
     * (<code>associating</code> | <code>associated</code> |
     * <code>disassociating</code> | <code>disassociated</code>).</p> </li> </ul>
     */
    inline DescribeIamInstanceProfileAssociationsRequest& WithFilters(const Aws::Vector<Filter>& value) { SetFilters(value); return *this;}

    /**
     * <p>The filters.</p> <ul> <li> <p> <code>instance-id</code> - The ID of the
     * instance.</p> </li> <li> <p> <code>state</code> - The state of the association
     * (<code>associating</code> | <code>associated</code> |
     * <code>disassociating</code> | <code>disassociated</code>).</p> </li> </ul>
     */
    inline DescribeIamInstanceProfileAssociationsRequest& WithFilters(Aws::Vector<Filter>&& value) { SetFilters(std::move(value)); return *this;}

    /**
     * <p>The filters.</p> <ul> <li> <p> <code>instance-id</code> - The ID of the
     * instance.</p> </li> <li> <p> <code>state</code> - The state of the association
     * (<code>associating</code> | <code>associated</code> |
     * <code>disassociating</code> | <code>disassociated</code>).</p> </li> </ul>
     */
    inline DescribeIamInstanceProfileAssociationsRequest& AddFilters(const Filter& value) { m_filtersHasBeenSet = true; m_filters.push_back(value); return *this; }

    /**
     * <p>The filters.</p> <ul> <li> <p> <code>instance-id</code> - The ID of the
     * instance.</p> </li> <li> <p> <code>state</code> - The state of the association
     * (<code>associating</code> | <code>associated</code> |
     * <code>disassociating</code> | <code>disassociated</code>).</p> </li> </ul>
     */
    inline DescribeIamInstanceProfileAssociationsRequest& AddFilters(Filter&& value) { m_filtersHasBeenSet = true; m_filters.push_back(std::move(value)); return *this; }


    /**
     * <p>The maximum number of results to return in a single call. To retrieve the
     * remaining results, make another call with the returned <code>NextToken</code>
     * value.</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }

    /**
     * <p>The maximum number of results to return in a single call. To retrieve the
     * remaining results, make another call with the returned <code>NextToken</code>
     * value.</p>
     */
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }

    /**
     * <p>The maximum number of results to return in a single call. To retrieve the
     * remaining results, make another call with the returned <code>NextToken</code>
     * value.</p>
     */
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }

    /**
     * <p>The maximum number of results to return in a single call. To retrieve the
     * remaining results, make another call with the returned <code>NextToken</code>
     * value.</p>
     */
    inline DescribeIamInstanceProfileAssociationsRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}


    /**
     * <p>The token to request the next page of results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The token to request the next page of results.</p>
     */
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    /**
     * <p>The token to request the next page of results.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>The token to request the next page of results.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    /**
     * <p>The token to request the next page of results.</p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p>The token to request the next page of results.</p>
     */
    inline DescribeIamInstanceProfileAssociationsRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The token to request the next page of results.</p>
     */
    inline DescribeIamInstanceProfileAssociationsRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The token to request the next page of results.</p>
     */
    inline DescribeIamInstanceProfileAssociationsRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<Aws::String> m_associationIds;
    bool m_associationIdsHasBeenSet;

    Aws::Vector<Filter> m_filters;
    bool m_filtersHasBeenSet;

    int m_maxResults;
    bool m_maxResultsHasBeenSet;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
