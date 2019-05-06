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
#include <aws/mobile/Mobile_EXPORTS.h>
#include <aws/mobile/MobileRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Http
{
    class URI;
} //namespace Http
namespace Mobile
{
namespace Model
{

  /**
   * <p> Request structure used to request projects list in AWS Mobile Hub.
   * </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mobile-2017-07-01/ListProjectsRequest">AWS
   * API Reference</a></p>
   */
  class AWS_MOBILE_API ListProjectsRequest : public MobileRequest
  {
  public:
    ListProjectsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListProjects"; }

    Aws::String SerializePayload() const override;

    void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    /**
     * <p> Maximum number of records to list in a single response. </p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }

    /**
     * <p> Maximum number of records to list in a single response. </p>
     */
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }

    /**
     * <p> Maximum number of records to list in a single response. </p>
     */
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }

    /**
     * <p> Maximum number of records to list in a single response. </p>
     */
    inline ListProjectsRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}


    /**
     * <p> Pagination token. Set to null to start listing projects from start. If
     * non-null pagination token is returned in a result, then pass its value in here
     * in another request to list more projects. </p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p> Pagination token. Set to null to start listing projects from start. If
     * non-null pagination token is returned in a result, then pass its value in here
     * in another request to list more projects. </p>
     */
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    /**
     * <p> Pagination token. Set to null to start listing projects from start. If
     * non-null pagination token is returned in a result, then pass its value in here
     * in another request to list more projects. </p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p> Pagination token. Set to null to start listing projects from start. If
     * non-null pagination token is returned in a result, then pass its value in here
     * in another request to list more projects. </p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    /**
     * <p> Pagination token. Set to null to start listing projects from start. If
     * non-null pagination token is returned in a result, then pass its value in here
     * in another request to list more projects. </p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p> Pagination token. Set to null to start listing projects from start. If
     * non-null pagination token is returned in a result, then pass its value in here
     * in another request to list more projects. </p>
     */
    inline ListProjectsRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p> Pagination token. Set to null to start listing projects from start. If
     * non-null pagination token is returned in a result, then pass its value in here
     * in another request to list more projects. </p>
     */
    inline ListProjectsRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p> Pagination token. Set to null to start listing projects from start. If
     * non-null pagination token is returned in a result, then pass its value in here
     * in another request to list more projects. </p>
     */
    inline ListProjectsRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    int m_maxResults;
    bool m_maxResultsHasBeenSet;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet;
  };

} // namespace Model
} // namespace Mobile
} // namespace Aws
