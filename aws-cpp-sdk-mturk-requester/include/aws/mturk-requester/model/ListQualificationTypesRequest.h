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
#include <aws/mturk-requester/MTurk_EXPORTS.h>
#include <aws/mturk-requester/MTurkRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace MTurk
{
namespace Model
{

  /**
   */
  class AWS_MTURK_API ListQualificationTypesRequest : public MTurkRequest
  {
  public:
    ListQualificationTypesRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListQualificationTypes"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p> A text query against all of the searchable attributes of Qualification
     * types. </p>
     */
    inline const Aws::String& GetQuery() const{ return m_query; }

    /**
     * <p> A text query against all of the searchable attributes of Qualification
     * types. </p>
     */
    inline bool QueryHasBeenSet() const { return m_queryHasBeenSet; }

    /**
     * <p> A text query against all of the searchable attributes of Qualification
     * types. </p>
     */
    inline void SetQuery(const Aws::String& value) { m_queryHasBeenSet = true; m_query = value; }

    /**
     * <p> A text query against all of the searchable attributes of Qualification
     * types. </p>
     */
    inline void SetQuery(Aws::String&& value) { m_queryHasBeenSet = true; m_query = std::move(value); }

    /**
     * <p> A text query against all of the searchable attributes of Qualification
     * types. </p>
     */
    inline void SetQuery(const char* value) { m_queryHasBeenSet = true; m_query.assign(value); }

    /**
     * <p> A text query against all of the searchable attributes of Qualification
     * types. </p>
     */
    inline ListQualificationTypesRequest& WithQuery(const Aws::String& value) { SetQuery(value); return *this;}

    /**
     * <p> A text query against all of the searchable attributes of Qualification
     * types. </p>
     */
    inline ListQualificationTypesRequest& WithQuery(Aws::String&& value) { SetQuery(std::move(value)); return *this;}

    /**
     * <p> A text query against all of the searchable attributes of Qualification
     * types. </p>
     */
    inline ListQualificationTypesRequest& WithQuery(const char* value) { SetQuery(value); return *this;}


    /**
     * <p>Specifies that only Qualification types that a user can request through the
     * Amazon Mechanical Turk web site, such as by taking a Qualification test, are
     * returned as results of the search. Some Qualification types, such as those
     * assigned automatically by the system, cannot be requested directly by users. If
     * false, all Qualification types, including those managed by the system, are
     * considered. Valid values are True | False. </p>
     */
    inline bool GetMustBeRequestable() const{ return m_mustBeRequestable; }

    /**
     * <p>Specifies that only Qualification types that a user can request through the
     * Amazon Mechanical Turk web site, such as by taking a Qualification test, are
     * returned as results of the search. Some Qualification types, such as those
     * assigned automatically by the system, cannot be requested directly by users. If
     * false, all Qualification types, including those managed by the system, are
     * considered. Valid values are True | False. </p>
     */
    inline bool MustBeRequestableHasBeenSet() const { return m_mustBeRequestableHasBeenSet; }

    /**
     * <p>Specifies that only Qualification types that a user can request through the
     * Amazon Mechanical Turk web site, such as by taking a Qualification test, are
     * returned as results of the search. Some Qualification types, such as those
     * assigned automatically by the system, cannot be requested directly by users. If
     * false, all Qualification types, including those managed by the system, are
     * considered. Valid values are True | False. </p>
     */
    inline void SetMustBeRequestable(bool value) { m_mustBeRequestableHasBeenSet = true; m_mustBeRequestable = value; }

    /**
     * <p>Specifies that only Qualification types that a user can request through the
     * Amazon Mechanical Turk web site, such as by taking a Qualification test, are
     * returned as results of the search. Some Qualification types, such as those
     * assigned automatically by the system, cannot be requested directly by users. If
     * false, all Qualification types, including those managed by the system, are
     * considered. Valid values are True | False. </p>
     */
    inline ListQualificationTypesRequest& WithMustBeRequestable(bool value) { SetMustBeRequestable(value); return *this;}


    /**
     * <p> Specifies that only Qualification types that the Requester created are
     * returned. If false, the operation returns all Qualification types. </p>
     */
    inline bool GetMustBeOwnedByCaller() const{ return m_mustBeOwnedByCaller; }

    /**
     * <p> Specifies that only Qualification types that the Requester created are
     * returned. If false, the operation returns all Qualification types. </p>
     */
    inline bool MustBeOwnedByCallerHasBeenSet() const { return m_mustBeOwnedByCallerHasBeenSet; }

    /**
     * <p> Specifies that only Qualification types that the Requester created are
     * returned. If false, the operation returns all Qualification types. </p>
     */
    inline void SetMustBeOwnedByCaller(bool value) { m_mustBeOwnedByCallerHasBeenSet = true; m_mustBeOwnedByCaller = value; }

    /**
     * <p> Specifies that only Qualification types that the Requester created are
     * returned. If false, the operation returns all Qualification types. </p>
     */
    inline ListQualificationTypesRequest& WithMustBeOwnedByCaller(bool value) { SetMustBeOwnedByCaller(value); return *this;}


    
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    
    inline ListQualificationTypesRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    
    inline ListQualificationTypesRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    
    inline ListQualificationTypesRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p> The maximum number of results to return in a single call. </p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }

    /**
     * <p> The maximum number of results to return in a single call. </p>
     */
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }

    /**
     * <p> The maximum number of results to return in a single call. </p>
     */
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }

    /**
     * <p> The maximum number of results to return in a single call. </p>
     */
    inline ListQualificationTypesRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}

  private:

    Aws::String m_query;
    bool m_queryHasBeenSet;

    bool m_mustBeRequestable;
    bool m_mustBeRequestableHasBeenSet;

    bool m_mustBeOwnedByCaller;
    bool m_mustBeOwnedByCallerHasBeenSet;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet;

    int m_maxResults;
    bool m_maxResultsHasBeenSet;
  };

} // namespace Model
} // namespace MTurk
} // namespace Aws
