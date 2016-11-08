/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/iot/IoT_EXPORTS.h>
#include <aws/iot/IoTRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace Http
{
    class URI;
} //namespace Http
namespace IoT
{
namespace Model
{

  /**
   * <p>The input for the ListPrincipalThings operation.</p>
   */
  class AWS_IOT_API ListPrincipalThingsRequest : public IoTRequest
  {
  public:
    ListPrincipalThingsRequest();
    Aws::String SerializePayload() const override;

    void AddQueryStringParameters(Aws::Http::URI& uri) const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

    /**
     * <p>The token for the next set of results, or <b>null</b> if there are no
     * additional results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The token for the next set of results, or <b>null</b> if there are no
     * additional results.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>The token for the next set of results, or <b>null</b> if there are no
     * additional results.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>The token for the next set of results, or <b>null</b> if there are no
     * additional results.</p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p>The token for the next set of results, or <b>null</b> if there are no
     * additional results.</p>
     */
    inline ListPrincipalThingsRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The token for the next set of results, or <b>null</b> if there are no
     * additional results.</p>
     */
    inline ListPrincipalThingsRequest& WithNextToken(Aws::String&& value) { SetNextToken(value); return *this;}

    /**
     * <p>The token for the next set of results, or <b>null</b> if there are no
     * additional results.</p>
     */
    inline ListPrincipalThingsRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}

    /**
     * <p>The maximum number of results to return in this operation.</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }

    /**
     * <p>The maximum number of results to return in this operation.</p>
     */
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }

    /**
     * <p>The maximum number of results to return in this operation.</p>
     */
    inline ListPrincipalThingsRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}

    /**
     * <p>The principal.</p>
     */
    inline const Aws::String& GetPrincipal() const{ return m_principal; }

    /**
     * <p>The principal.</p>
     */
    inline void SetPrincipal(const Aws::String& value) { m_principalHasBeenSet = true; m_principal = value; }

    /**
     * <p>The principal.</p>
     */
    inline void SetPrincipal(Aws::String&& value) { m_principalHasBeenSet = true; m_principal = value; }

    /**
     * <p>The principal.</p>
     */
    inline void SetPrincipal(const char* value) { m_principalHasBeenSet = true; m_principal.assign(value); }

    /**
     * <p>The principal.</p>
     */
    inline ListPrincipalThingsRequest& WithPrincipal(const Aws::String& value) { SetPrincipal(value); return *this;}

    /**
     * <p>The principal.</p>
     */
    inline ListPrincipalThingsRequest& WithPrincipal(Aws::String&& value) { SetPrincipal(value); return *this;}

    /**
     * <p>The principal.</p>
     */
    inline ListPrincipalThingsRequest& WithPrincipal(const char* value) { SetPrincipal(value); return *this;}

  private:
    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet;
    int m_maxResults;
    bool m_maxResultsHasBeenSet;
    Aws::String m_principal;
    bool m_principalHasBeenSet;
  };

} // namespace Model
} // namespace IoT
} // namespace Aws
