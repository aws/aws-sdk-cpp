/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/organizations/Organizations_EXPORTS.h>
#include <aws/organizations/OrganizationsRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/organizations/model/ChildType.h>
#include <utility>

namespace Aws
{
namespace Organizations
{
namespace Model
{

  /**
   */
  class ListChildrenRequest : public OrganizationsRequest
  {
  public:
    AWS_ORGANIZATIONS_API ListChildrenRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListChildren"; }

    AWS_ORGANIZATIONS_API Aws::String SerializePayload() const override;

    AWS_ORGANIZATIONS_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The unique identifier (ID) for the parent root or OU whose children you want
     * to list.</p> <p>The <a href="http://wikipedia.org/wiki/regex">regex pattern</a>
     * for a parent ID string requires one of the following:</p> <ul> <li> <p>
     * <b>Root</b> - A string that begins with "r-" followed by from 4 to 32 lowercase
     * letters or digits.</p> </li> <li> <p> <b>Organizational unit (OU)</b> - A string
     * that begins with "ou-" followed by from 4 to 32 lowercase letters or digits (the
     * ID of the root that the OU is in). This string is followed by a second "-" dash
     * and from 8 to 32 additional lowercase letters or digits.</p> </li> </ul>
     */
    inline const Aws::String& GetParentId() const{ return m_parentId; }

    /**
     * <p>The unique identifier (ID) for the parent root or OU whose children you want
     * to list.</p> <p>The <a href="http://wikipedia.org/wiki/regex">regex pattern</a>
     * for a parent ID string requires one of the following:</p> <ul> <li> <p>
     * <b>Root</b> - A string that begins with "r-" followed by from 4 to 32 lowercase
     * letters or digits.</p> </li> <li> <p> <b>Organizational unit (OU)</b> - A string
     * that begins with "ou-" followed by from 4 to 32 lowercase letters or digits (the
     * ID of the root that the OU is in). This string is followed by a second "-" dash
     * and from 8 to 32 additional lowercase letters or digits.</p> </li> </ul>
     */
    inline bool ParentIdHasBeenSet() const { return m_parentIdHasBeenSet; }

    /**
     * <p>The unique identifier (ID) for the parent root or OU whose children you want
     * to list.</p> <p>The <a href="http://wikipedia.org/wiki/regex">regex pattern</a>
     * for a parent ID string requires one of the following:</p> <ul> <li> <p>
     * <b>Root</b> - A string that begins with "r-" followed by from 4 to 32 lowercase
     * letters or digits.</p> </li> <li> <p> <b>Organizational unit (OU)</b> - A string
     * that begins with "ou-" followed by from 4 to 32 lowercase letters or digits (the
     * ID of the root that the OU is in). This string is followed by a second "-" dash
     * and from 8 to 32 additional lowercase letters or digits.</p> </li> </ul>
     */
    inline void SetParentId(const Aws::String& value) { m_parentIdHasBeenSet = true; m_parentId = value; }

    /**
     * <p>The unique identifier (ID) for the parent root or OU whose children you want
     * to list.</p> <p>The <a href="http://wikipedia.org/wiki/regex">regex pattern</a>
     * for a parent ID string requires one of the following:</p> <ul> <li> <p>
     * <b>Root</b> - A string that begins with "r-" followed by from 4 to 32 lowercase
     * letters or digits.</p> </li> <li> <p> <b>Organizational unit (OU)</b> - A string
     * that begins with "ou-" followed by from 4 to 32 lowercase letters or digits (the
     * ID of the root that the OU is in). This string is followed by a second "-" dash
     * and from 8 to 32 additional lowercase letters or digits.</p> </li> </ul>
     */
    inline void SetParentId(Aws::String&& value) { m_parentIdHasBeenSet = true; m_parentId = std::move(value); }

    /**
     * <p>The unique identifier (ID) for the parent root or OU whose children you want
     * to list.</p> <p>The <a href="http://wikipedia.org/wiki/regex">regex pattern</a>
     * for a parent ID string requires one of the following:</p> <ul> <li> <p>
     * <b>Root</b> - A string that begins with "r-" followed by from 4 to 32 lowercase
     * letters or digits.</p> </li> <li> <p> <b>Organizational unit (OU)</b> - A string
     * that begins with "ou-" followed by from 4 to 32 lowercase letters or digits (the
     * ID of the root that the OU is in). This string is followed by a second "-" dash
     * and from 8 to 32 additional lowercase letters or digits.</p> </li> </ul>
     */
    inline void SetParentId(const char* value) { m_parentIdHasBeenSet = true; m_parentId.assign(value); }

    /**
     * <p>The unique identifier (ID) for the parent root or OU whose children you want
     * to list.</p> <p>The <a href="http://wikipedia.org/wiki/regex">regex pattern</a>
     * for a parent ID string requires one of the following:</p> <ul> <li> <p>
     * <b>Root</b> - A string that begins with "r-" followed by from 4 to 32 lowercase
     * letters or digits.</p> </li> <li> <p> <b>Organizational unit (OU)</b> - A string
     * that begins with "ou-" followed by from 4 to 32 lowercase letters or digits (the
     * ID of the root that the OU is in). This string is followed by a second "-" dash
     * and from 8 to 32 additional lowercase letters or digits.</p> </li> </ul>
     */
    inline ListChildrenRequest& WithParentId(const Aws::String& value) { SetParentId(value); return *this;}

    /**
     * <p>The unique identifier (ID) for the parent root or OU whose children you want
     * to list.</p> <p>The <a href="http://wikipedia.org/wiki/regex">regex pattern</a>
     * for a parent ID string requires one of the following:</p> <ul> <li> <p>
     * <b>Root</b> - A string that begins with "r-" followed by from 4 to 32 lowercase
     * letters or digits.</p> </li> <li> <p> <b>Organizational unit (OU)</b> - A string
     * that begins with "ou-" followed by from 4 to 32 lowercase letters or digits (the
     * ID of the root that the OU is in). This string is followed by a second "-" dash
     * and from 8 to 32 additional lowercase letters or digits.</p> </li> </ul>
     */
    inline ListChildrenRequest& WithParentId(Aws::String&& value) { SetParentId(std::move(value)); return *this;}

    /**
     * <p>The unique identifier (ID) for the parent root or OU whose children you want
     * to list.</p> <p>The <a href="http://wikipedia.org/wiki/regex">regex pattern</a>
     * for a parent ID string requires one of the following:</p> <ul> <li> <p>
     * <b>Root</b> - A string that begins with "r-" followed by from 4 to 32 lowercase
     * letters or digits.</p> </li> <li> <p> <b>Organizational unit (OU)</b> - A string
     * that begins with "ou-" followed by from 4 to 32 lowercase letters or digits (the
     * ID of the root that the OU is in). This string is followed by a second "-" dash
     * and from 8 to 32 additional lowercase letters or digits.</p> </li> </ul>
     */
    inline ListChildrenRequest& WithParentId(const char* value) { SetParentId(value); return *this;}


    /**
     * <p>Filters the output to include only the specified child type.</p>
     */
    inline const ChildType& GetChildType() const{ return m_childType; }

    /**
     * <p>Filters the output to include only the specified child type.</p>
     */
    inline bool ChildTypeHasBeenSet() const { return m_childTypeHasBeenSet; }

    /**
     * <p>Filters the output to include only the specified child type.</p>
     */
    inline void SetChildType(const ChildType& value) { m_childTypeHasBeenSet = true; m_childType = value; }

    /**
     * <p>Filters the output to include only the specified child type.</p>
     */
    inline void SetChildType(ChildType&& value) { m_childTypeHasBeenSet = true; m_childType = std::move(value); }

    /**
     * <p>Filters the output to include only the specified child type.</p>
     */
    inline ListChildrenRequest& WithChildType(const ChildType& value) { SetChildType(value); return *this;}

    /**
     * <p>Filters the output to include only the specified child type.</p>
     */
    inline ListChildrenRequest& WithChildType(ChildType&& value) { SetChildType(std::move(value)); return *this;}


    /**
     * <p>The parameter for receiving additional results if you receive a
     * <code>NextToken</code> response in a previous request. A <code>NextToken</code>
     * response indicates that more output is available. Set this parameter to the
     * value of the previous call's <code>NextToken</code> response to indicate where
     * the output should continue from.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The parameter for receiving additional results if you receive a
     * <code>NextToken</code> response in a previous request. A <code>NextToken</code>
     * response indicates that more output is available. Set this parameter to the
     * value of the previous call's <code>NextToken</code> response to indicate where
     * the output should continue from.</p>
     */
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    /**
     * <p>The parameter for receiving additional results if you receive a
     * <code>NextToken</code> response in a previous request. A <code>NextToken</code>
     * response indicates that more output is available. Set this parameter to the
     * value of the previous call's <code>NextToken</code> response to indicate where
     * the output should continue from.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>The parameter for receiving additional results if you receive a
     * <code>NextToken</code> response in a previous request. A <code>NextToken</code>
     * response indicates that more output is available. Set this parameter to the
     * value of the previous call's <code>NextToken</code> response to indicate where
     * the output should continue from.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    /**
     * <p>The parameter for receiving additional results if you receive a
     * <code>NextToken</code> response in a previous request. A <code>NextToken</code>
     * response indicates that more output is available. Set this parameter to the
     * value of the previous call's <code>NextToken</code> response to indicate where
     * the output should continue from.</p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p>The parameter for receiving additional results if you receive a
     * <code>NextToken</code> response in a previous request. A <code>NextToken</code>
     * response indicates that more output is available. Set this parameter to the
     * value of the previous call's <code>NextToken</code> response to indicate where
     * the output should continue from.</p>
     */
    inline ListChildrenRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The parameter for receiving additional results if you receive a
     * <code>NextToken</code> response in a previous request. A <code>NextToken</code>
     * response indicates that more output is available. Set this parameter to the
     * value of the previous call's <code>NextToken</code> response to indicate where
     * the output should continue from.</p>
     */
    inline ListChildrenRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The parameter for receiving additional results if you receive a
     * <code>NextToken</code> response in a previous request. A <code>NextToken</code>
     * response indicates that more output is available. Set this parameter to the
     * value of the previous call's <code>NextToken</code> response to indicate where
     * the output should continue from.</p>
     */
    inline ListChildrenRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p>The total number of results that you want included on each page of the
     * response. If you do not include this parameter, it defaults to a value that is
     * specific to the operation. If additional items exist beyond the maximum you
     * specify, the <code>NextToken</code> response element is present and has a value
     * (is not null). Include that value as the <code>NextToken</code> request
     * parameter in the next call to the operation to get the next part of the results.
     * Note that Organizations might return fewer results than the maximum even when
     * there are more results available. You should check <code>NextToken</code> after
     * every operation to ensure that you receive all of the results.</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }

    /**
     * <p>The total number of results that you want included on each page of the
     * response. If you do not include this parameter, it defaults to a value that is
     * specific to the operation. If additional items exist beyond the maximum you
     * specify, the <code>NextToken</code> response element is present and has a value
     * (is not null). Include that value as the <code>NextToken</code> request
     * parameter in the next call to the operation to get the next part of the results.
     * Note that Organizations might return fewer results than the maximum even when
     * there are more results available. You should check <code>NextToken</code> after
     * every operation to ensure that you receive all of the results.</p>
     */
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }

    /**
     * <p>The total number of results that you want included on each page of the
     * response. If you do not include this parameter, it defaults to a value that is
     * specific to the operation. If additional items exist beyond the maximum you
     * specify, the <code>NextToken</code> response element is present and has a value
     * (is not null). Include that value as the <code>NextToken</code> request
     * parameter in the next call to the operation to get the next part of the results.
     * Note that Organizations might return fewer results than the maximum even when
     * there are more results available. You should check <code>NextToken</code> after
     * every operation to ensure that you receive all of the results.</p>
     */
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }

    /**
     * <p>The total number of results that you want included on each page of the
     * response. If you do not include this parameter, it defaults to a value that is
     * specific to the operation. If additional items exist beyond the maximum you
     * specify, the <code>NextToken</code> response element is present and has a value
     * (is not null). Include that value as the <code>NextToken</code> request
     * parameter in the next call to the operation to get the next part of the results.
     * Note that Organizations might return fewer results than the maximum even when
     * there are more results available. You should check <code>NextToken</code> after
     * every operation to ensure that you receive all of the results.</p>
     */
    inline ListChildrenRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}

  private:

    Aws::String m_parentId;
    bool m_parentIdHasBeenSet = false;

    ChildType m_childType;
    bool m_childTypeHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    int m_maxResults;
    bool m_maxResultsHasBeenSet = false;
  };

} // namespace Model
} // namespace Organizations
} // namespace Aws
