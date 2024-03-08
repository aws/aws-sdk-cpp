/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/datazone/DataZone_EXPORTS.h>
#include <aws/datazone/DataZoneRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/datazone/model/SortFieldProject.h>
#include <aws/datazone/model/SortOrder.h>
#include <utility>

namespace Aws
{
namespace Http
{
    class URI;
} //namespace Http
namespace DataZone
{
namespace Model
{

  /**
   */
  class ListProjectMembershipsRequest : public DataZoneRequest
  {
  public:
    AWS_DATAZONE_API ListProjectMembershipsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListProjectMemberships"; }

    AWS_DATAZONE_API Aws::String SerializePayload() const override;

    AWS_DATAZONE_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    /**
     * <p>The identifier of the Amazon DataZone domain in which you want to list
     * project memberships.</p>
     */
    inline const Aws::String& GetDomainIdentifier() const{ return m_domainIdentifier; }

    /**
     * <p>The identifier of the Amazon DataZone domain in which you want to list
     * project memberships.</p>
     */
    inline bool DomainIdentifierHasBeenSet() const { return m_domainIdentifierHasBeenSet; }

    /**
     * <p>The identifier of the Amazon DataZone domain in which you want to list
     * project memberships.</p>
     */
    inline void SetDomainIdentifier(const Aws::String& value) { m_domainIdentifierHasBeenSet = true; m_domainIdentifier = value; }

    /**
     * <p>The identifier of the Amazon DataZone domain in which you want to list
     * project memberships.</p>
     */
    inline void SetDomainIdentifier(Aws::String&& value) { m_domainIdentifierHasBeenSet = true; m_domainIdentifier = std::move(value); }

    /**
     * <p>The identifier of the Amazon DataZone domain in which you want to list
     * project memberships.</p>
     */
    inline void SetDomainIdentifier(const char* value) { m_domainIdentifierHasBeenSet = true; m_domainIdentifier.assign(value); }

    /**
     * <p>The identifier of the Amazon DataZone domain in which you want to list
     * project memberships.</p>
     */
    inline ListProjectMembershipsRequest& WithDomainIdentifier(const Aws::String& value) { SetDomainIdentifier(value); return *this;}

    /**
     * <p>The identifier of the Amazon DataZone domain in which you want to list
     * project memberships.</p>
     */
    inline ListProjectMembershipsRequest& WithDomainIdentifier(Aws::String&& value) { SetDomainIdentifier(std::move(value)); return *this;}

    /**
     * <p>The identifier of the Amazon DataZone domain in which you want to list
     * project memberships.</p>
     */
    inline ListProjectMembershipsRequest& WithDomainIdentifier(const char* value) { SetDomainIdentifier(value); return *this;}


    /**
     * <p>The maximum number of memberships to return in a single call to
     * <code>ListProjectMemberships</code>. When the number of memberships to be listed
     * is greater than the value of <code>MaxResults</code>, the response contains a
     * <code>NextToken</code> value that you can use in a subsequent call to
     * <code>ListProjectMemberships</code> to list the next set of memberships.</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }

    /**
     * <p>The maximum number of memberships to return in a single call to
     * <code>ListProjectMemberships</code>. When the number of memberships to be listed
     * is greater than the value of <code>MaxResults</code>, the response contains a
     * <code>NextToken</code> value that you can use in a subsequent call to
     * <code>ListProjectMemberships</code> to list the next set of memberships.</p>
     */
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }

    /**
     * <p>The maximum number of memberships to return in a single call to
     * <code>ListProjectMemberships</code>. When the number of memberships to be listed
     * is greater than the value of <code>MaxResults</code>, the response contains a
     * <code>NextToken</code> value that you can use in a subsequent call to
     * <code>ListProjectMemberships</code> to list the next set of memberships.</p>
     */
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }

    /**
     * <p>The maximum number of memberships to return in a single call to
     * <code>ListProjectMemberships</code>. When the number of memberships to be listed
     * is greater than the value of <code>MaxResults</code>, the response contains a
     * <code>NextToken</code> value that you can use in a subsequent call to
     * <code>ListProjectMemberships</code> to list the next set of memberships.</p>
     */
    inline ListProjectMembershipsRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}


    /**
     * <p>When the number of memberships is greater than the default value for the
     * <code>MaxResults</code> parameter, or if you explicitly specify a value for
     * <code>MaxResults</code> that is less than the number of memberships, the
     * response includes a pagination token named <code>NextToken</code>. You can
     * specify this <code>NextToken</code> value in a subsequent call to
     * <code>ListProjectMemberships</code> to list the next set of memberships.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>When the number of memberships is greater than the default value for the
     * <code>MaxResults</code> parameter, or if you explicitly specify a value for
     * <code>MaxResults</code> that is less than the number of memberships, the
     * response includes a pagination token named <code>NextToken</code>. You can
     * specify this <code>NextToken</code> value in a subsequent call to
     * <code>ListProjectMemberships</code> to list the next set of memberships.</p>
     */
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    /**
     * <p>When the number of memberships is greater than the default value for the
     * <code>MaxResults</code> parameter, or if you explicitly specify a value for
     * <code>MaxResults</code> that is less than the number of memberships, the
     * response includes a pagination token named <code>NextToken</code>. You can
     * specify this <code>NextToken</code> value in a subsequent call to
     * <code>ListProjectMemberships</code> to list the next set of memberships.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>When the number of memberships is greater than the default value for the
     * <code>MaxResults</code> parameter, or if you explicitly specify a value for
     * <code>MaxResults</code> that is less than the number of memberships, the
     * response includes a pagination token named <code>NextToken</code>. You can
     * specify this <code>NextToken</code> value in a subsequent call to
     * <code>ListProjectMemberships</code> to list the next set of memberships.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    /**
     * <p>When the number of memberships is greater than the default value for the
     * <code>MaxResults</code> parameter, or if you explicitly specify a value for
     * <code>MaxResults</code> that is less than the number of memberships, the
     * response includes a pagination token named <code>NextToken</code>. You can
     * specify this <code>NextToken</code> value in a subsequent call to
     * <code>ListProjectMemberships</code> to list the next set of memberships.</p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p>When the number of memberships is greater than the default value for the
     * <code>MaxResults</code> parameter, or if you explicitly specify a value for
     * <code>MaxResults</code> that is less than the number of memberships, the
     * response includes a pagination token named <code>NextToken</code>. You can
     * specify this <code>NextToken</code> value in a subsequent call to
     * <code>ListProjectMemberships</code> to list the next set of memberships.</p>
     */
    inline ListProjectMembershipsRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>When the number of memberships is greater than the default value for the
     * <code>MaxResults</code> parameter, or if you explicitly specify a value for
     * <code>MaxResults</code> that is less than the number of memberships, the
     * response includes a pagination token named <code>NextToken</code>. You can
     * specify this <code>NextToken</code> value in a subsequent call to
     * <code>ListProjectMemberships</code> to list the next set of memberships.</p>
     */
    inline ListProjectMembershipsRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>When the number of memberships is greater than the default value for the
     * <code>MaxResults</code> parameter, or if you explicitly specify a value for
     * <code>MaxResults</code> that is less than the number of memberships, the
     * response includes a pagination token named <code>NextToken</code>. You can
     * specify this <code>NextToken</code> value in a subsequent call to
     * <code>ListProjectMemberships</code> to list the next set of memberships.</p>
     */
    inline ListProjectMembershipsRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p>The identifier of the project whose memberships you want to list.</p>
     */
    inline const Aws::String& GetProjectIdentifier() const{ return m_projectIdentifier; }

    /**
     * <p>The identifier of the project whose memberships you want to list.</p>
     */
    inline bool ProjectIdentifierHasBeenSet() const { return m_projectIdentifierHasBeenSet; }

    /**
     * <p>The identifier of the project whose memberships you want to list.</p>
     */
    inline void SetProjectIdentifier(const Aws::String& value) { m_projectIdentifierHasBeenSet = true; m_projectIdentifier = value; }

    /**
     * <p>The identifier of the project whose memberships you want to list.</p>
     */
    inline void SetProjectIdentifier(Aws::String&& value) { m_projectIdentifierHasBeenSet = true; m_projectIdentifier = std::move(value); }

    /**
     * <p>The identifier of the project whose memberships you want to list.</p>
     */
    inline void SetProjectIdentifier(const char* value) { m_projectIdentifierHasBeenSet = true; m_projectIdentifier.assign(value); }

    /**
     * <p>The identifier of the project whose memberships you want to list.</p>
     */
    inline ListProjectMembershipsRequest& WithProjectIdentifier(const Aws::String& value) { SetProjectIdentifier(value); return *this;}

    /**
     * <p>The identifier of the project whose memberships you want to list.</p>
     */
    inline ListProjectMembershipsRequest& WithProjectIdentifier(Aws::String&& value) { SetProjectIdentifier(std::move(value)); return *this;}

    /**
     * <p>The identifier of the project whose memberships you want to list.</p>
     */
    inline ListProjectMembershipsRequest& WithProjectIdentifier(const char* value) { SetProjectIdentifier(value); return *this;}


    /**
     * <p>The method by which you want to sort the project memberships.</p>
     */
    inline const SortFieldProject& GetSortBy() const{ return m_sortBy; }

    /**
     * <p>The method by which you want to sort the project memberships.</p>
     */
    inline bool SortByHasBeenSet() const { return m_sortByHasBeenSet; }

    /**
     * <p>The method by which you want to sort the project memberships.</p>
     */
    inline void SetSortBy(const SortFieldProject& value) { m_sortByHasBeenSet = true; m_sortBy = value; }

    /**
     * <p>The method by which you want to sort the project memberships.</p>
     */
    inline void SetSortBy(SortFieldProject&& value) { m_sortByHasBeenSet = true; m_sortBy = std::move(value); }

    /**
     * <p>The method by which you want to sort the project memberships.</p>
     */
    inline ListProjectMembershipsRequest& WithSortBy(const SortFieldProject& value) { SetSortBy(value); return *this;}

    /**
     * <p>The method by which you want to sort the project memberships.</p>
     */
    inline ListProjectMembershipsRequest& WithSortBy(SortFieldProject&& value) { SetSortBy(std::move(value)); return *this;}


    /**
     * <p>The sort order of the project memberships.</p>
     */
    inline const SortOrder& GetSortOrder() const{ return m_sortOrder; }

    /**
     * <p>The sort order of the project memberships.</p>
     */
    inline bool SortOrderHasBeenSet() const { return m_sortOrderHasBeenSet; }

    /**
     * <p>The sort order of the project memberships.</p>
     */
    inline void SetSortOrder(const SortOrder& value) { m_sortOrderHasBeenSet = true; m_sortOrder = value; }

    /**
     * <p>The sort order of the project memberships.</p>
     */
    inline void SetSortOrder(SortOrder&& value) { m_sortOrderHasBeenSet = true; m_sortOrder = std::move(value); }

    /**
     * <p>The sort order of the project memberships.</p>
     */
    inline ListProjectMembershipsRequest& WithSortOrder(const SortOrder& value) { SetSortOrder(value); return *this;}

    /**
     * <p>The sort order of the project memberships.</p>
     */
    inline ListProjectMembershipsRequest& WithSortOrder(SortOrder&& value) { SetSortOrder(std::move(value)); return *this;}

  private:

    Aws::String m_domainIdentifier;
    bool m_domainIdentifierHasBeenSet = false;

    int m_maxResults;
    bool m_maxResultsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_projectIdentifier;
    bool m_projectIdentifierHasBeenSet = false;

    SortFieldProject m_sortBy;
    bool m_sortByHasBeenSet = false;

    SortOrder m_sortOrder;
    bool m_sortOrderHasBeenSet = false;
  };

} // namespace Model
} // namespace DataZone
} // namespace Aws
