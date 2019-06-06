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
#include <aws/organizations/Organizations_EXPORTS.h>
#include <aws/organizations/OrganizationsRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Organizations
{
namespace Model
{

  /**
   */
  class AWS_ORGANIZATIONS_API ListParentsRequest : public OrganizationsRequest
  {
  public:
    ListParentsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListParents"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The unique identifier (ID) of the OU or account whose parent containers you
     * want to list. Don't specify a root.</p> <p>The <a
     * href="http://wikipedia.org/wiki/regex">regex pattern</a> for a child ID string
     * requires one of the following:</p> <ul> <li> <p>Account: a string that consists
     * of exactly 12 digits.</p> </li> <li> <p>Organizational unit (OU): a string that
     * begins with "ou-" followed by from 4 to 32 lower-case letters or digits (the ID
     * of the root that contains the OU) followed by a second "-" dash and from 8 to 32
     * additional lower-case letters or digits.</p> </li> </ul>
     */
    inline const Aws::String& GetChildId() const{ return m_childId; }

    /**
     * <p>The unique identifier (ID) of the OU or account whose parent containers you
     * want to list. Don't specify a root.</p> <p>The <a
     * href="http://wikipedia.org/wiki/regex">regex pattern</a> for a child ID string
     * requires one of the following:</p> <ul> <li> <p>Account: a string that consists
     * of exactly 12 digits.</p> </li> <li> <p>Organizational unit (OU): a string that
     * begins with "ou-" followed by from 4 to 32 lower-case letters or digits (the ID
     * of the root that contains the OU) followed by a second "-" dash and from 8 to 32
     * additional lower-case letters or digits.</p> </li> </ul>
     */
    inline bool ChildIdHasBeenSet() const { return m_childIdHasBeenSet; }

    /**
     * <p>The unique identifier (ID) of the OU or account whose parent containers you
     * want to list. Don't specify a root.</p> <p>The <a
     * href="http://wikipedia.org/wiki/regex">regex pattern</a> for a child ID string
     * requires one of the following:</p> <ul> <li> <p>Account: a string that consists
     * of exactly 12 digits.</p> </li> <li> <p>Organizational unit (OU): a string that
     * begins with "ou-" followed by from 4 to 32 lower-case letters or digits (the ID
     * of the root that contains the OU) followed by a second "-" dash and from 8 to 32
     * additional lower-case letters or digits.</p> </li> </ul>
     */
    inline void SetChildId(const Aws::String& value) { m_childIdHasBeenSet = true; m_childId = value; }

    /**
     * <p>The unique identifier (ID) of the OU or account whose parent containers you
     * want to list. Don't specify a root.</p> <p>The <a
     * href="http://wikipedia.org/wiki/regex">regex pattern</a> for a child ID string
     * requires one of the following:</p> <ul> <li> <p>Account: a string that consists
     * of exactly 12 digits.</p> </li> <li> <p>Organizational unit (OU): a string that
     * begins with "ou-" followed by from 4 to 32 lower-case letters or digits (the ID
     * of the root that contains the OU) followed by a second "-" dash and from 8 to 32
     * additional lower-case letters or digits.</p> </li> </ul>
     */
    inline void SetChildId(Aws::String&& value) { m_childIdHasBeenSet = true; m_childId = std::move(value); }

    /**
     * <p>The unique identifier (ID) of the OU or account whose parent containers you
     * want to list. Don't specify a root.</p> <p>The <a
     * href="http://wikipedia.org/wiki/regex">regex pattern</a> for a child ID string
     * requires one of the following:</p> <ul> <li> <p>Account: a string that consists
     * of exactly 12 digits.</p> </li> <li> <p>Organizational unit (OU): a string that
     * begins with "ou-" followed by from 4 to 32 lower-case letters or digits (the ID
     * of the root that contains the OU) followed by a second "-" dash and from 8 to 32
     * additional lower-case letters or digits.</p> </li> </ul>
     */
    inline void SetChildId(const char* value) { m_childIdHasBeenSet = true; m_childId.assign(value); }

    /**
     * <p>The unique identifier (ID) of the OU or account whose parent containers you
     * want to list. Don't specify a root.</p> <p>The <a
     * href="http://wikipedia.org/wiki/regex">regex pattern</a> for a child ID string
     * requires one of the following:</p> <ul> <li> <p>Account: a string that consists
     * of exactly 12 digits.</p> </li> <li> <p>Organizational unit (OU): a string that
     * begins with "ou-" followed by from 4 to 32 lower-case letters or digits (the ID
     * of the root that contains the OU) followed by a second "-" dash and from 8 to 32
     * additional lower-case letters or digits.</p> </li> </ul>
     */
    inline ListParentsRequest& WithChildId(const Aws::String& value) { SetChildId(value); return *this;}

    /**
     * <p>The unique identifier (ID) of the OU or account whose parent containers you
     * want to list. Don't specify a root.</p> <p>The <a
     * href="http://wikipedia.org/wiki/regex">regex pattern</a> for a child ID string
     * requires one of the following:</p> <ul> <li> <p>Account: a string that consists
     * of exactly 12 digits.</p> </li> <li> <p>Organizational unit (OU): a string that
     * begins with "ou-" followed by from 4 to 32 lower-case letters or digits (the ID
     * of the root that contains the OU) followed by a second "-" dash and from 8 to 32
     * additional lower-case letters or digits.</p> </li> </ul>
     */
    inline ListParentsRequest& WithChildId(Aws::String&& value) { SetChildId(std::move(value)); return *this;}

    /**
     * <p>The unique identifier (ID) of the OU or account whose parent containers you
     * want to list. Don't specify a root.</p> <p>The <a
     * href="http://wikipedia.org/wiki/regex">regex pattern</a> for a child ID string
     * requires one of the following:</p> <ul> <li> <p>Account: a string that consists
     * of exactly 12 digits.</p> </li> <li> <p>Organizational unit (OU): a string that
     * begins with "ou-" followed by from 4 to 32 lower-case letters or digits (the ID
     * of the root that contains the OU) followed by a second "-" dash and from 8 to 32
     * additional lower-case letters or digits.</p> </li> </ul>
     */
    inline ListParentsRequest& WithChildId(const char* value) { SetChildId(value); return *this;}


    /**
     * <p>Use this parameter if you receive a <code>NextToken</code> response in a
     * previous request that indicates that there is more output available. Set it to
     * the value of the previous call's <code>NextToken</code> response to indicate
     * where the output should continue from.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>Use this parameter if you receive a <code>NextToken</code> response in a
     * previous request that indicates that there is more output available. Set it to
     * the value of the previous call's <code>NextToken</code> response to indicate
     * where the output should continue from.</p>
     */
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    /**
     * <p>Use this parameter if you receive a <code>NextToken</code> response in a
     * previous request that indicates that there is more output available. Set it to
     * the value of the previous call's <code>NextToken</code> response to indicate
     * where the output should continue from.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>Use this parameter if you receive a <code>NextToken</code> response in a
     * previous request that indicates that there is more output available. Set it to
     * the value of the previous call's <code>NextToken</code> response to indicate
     * where the output should continue from.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    /**
     * <p>Use this parameter if you receive a <code>NextToken</code> response in a
     * previous request that indicates that there is more output available. Set it to
     * the value of the previous call's <code>NextToken</code> response to indicate
     * where the output should continue from.</p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p>Use this parameter if you receive a <code>NextToken</code> response in a
     * previous request that indicates that there is more output available. Set it to
     * the value of the previous call's <code>NextToken</code> response to indicate
     * where the output should continue from.</p>
     */
    inline ListParentsRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>Use this parameter if you receive a <code>NextToken</code> response in a
     * previous request that indicates that there is more output available. Set it to
     * the value of the previous call's <code>NextToken</code> response to indicate
     * where the output should continue from.</p>
     */
    inline ListParentsRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>Use this parameter if you receive a <code>NextToken</code> response in a
     * previous request that indicates that there is more output available. Set it to
     * the value of the previous call's <code>NextToken</code> response to indicate
     * where the output should continue from.</p>
     */
    inline ListParentsRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p>(Optional) Use this to limit the number of results you want included per page
     * in the response. If you do not include this parameter, it defaults to a value
     * that is specific to the operation. If additional items exist beyond the maximum
     * you specify, the <code>NextToken</code> response element is present and has a
     * value (is not null). Include that value as the <code>NextToken</code> request
     * parameter in the next call to the operation to get the next part of the results.
     * Note that Organizations might return fewer results than the maximum even when
     * there are more results available. You should check <code>NextToken</code> after
     * every operation to ensure that you receive all of the results.</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }

    /**
     * <p>(Optional) Use this to limit the number of results you want included per page
     * in the response. If you do not include this parameter, it defaults to a value
     * that is specific to the operation. If additional items exist beyond the maximum
     * you specify, the <code>NextToken</code> response element is present and has a
     * value (is not null). Include that value as the <code>NextToken</code> request
     * parameter in the next call to the operation to get the next part of the results.
     * Note that Organizations might return fewer results than the maximum even when
     * there are more results available. You should check <code>NextToken</code> after
     * every operation to ensure that you receive all of the results.</p>
     */
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }

    /**
     * <p>(Optional) Use this to limit the number of results you want included per page
     * in the response. If you do not include this parameter, it defaults to a value
     * that is specific to the operation. If additional items exist beyond the maximum
     * you specify, the <code>NextToken</code> response element is present and has a
     * value (is not null). Include that value as the <code>NextToken</code> request
     * parameter in the next call to the operation to get the next part of the results.
     * Note that Organizations might return fewer results than the maximum even when
     * there are more results available. You should check <code>NextToken</code> after
     * every operation to ensure that you receive all of the results.</p>
     */
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }

    /**
     * <p>(Optional) Use this to limit the number of results you want included per page
     * in the response. If you do not include this parameter, it defaults to a value
     * that is specific to the operation. If additional items exist beyond the maximum
     * you specify, the <code>NextToken</code> response element is present and has a
     * value (is not null). Include that value as the <code>NextToken</code> request
     * parameter in the next call to the operation to get the next part of the results.
     * Note that Organizations might return fewer results than the maximum even when
     * there are more results available. You should check <code>NextToken</code> after
     * every operation to ensure that you receive all of the results.</p>
     */
    inline ListParentsRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}

  private:

    Aws::String m_childId;
    bool m_childIdHasBeenSet;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet;

    int m_maxResults;
    bool m_maxResultsHasBeenSet;
  };

} // namespace Model
} // namespace Organizations
} // namespace Aws
