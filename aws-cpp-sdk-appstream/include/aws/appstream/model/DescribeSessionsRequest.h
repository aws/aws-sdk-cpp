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
#include <aws/appstream/AppStream_EXPORTS.h>
#include <aws/appstream/AppStreamRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace AppStream
{
namespace Model
{

  /**
   */
  class AWS_APPSTREAM_API DescribeSessionsRequest : public AppStreamRequest
  {
  public:
    DescribeSessionsRequest();
    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The name of the stack for which to list sessions.</p>
     */
    inline const Aws::String& GetStackName() const{ return m_stackName; }

    /**
     * <p>The name of the stack for which to list sessions.</p>
     */
    inline void SetStackName(const Aws::String& value) { m_stackNameHasBeenSet = true; m_stackName = value; }

    /**
     * <p>The name of the stack for which to list sessions.</p>
     */
    inline void SetStackName(Aws::String&& value) { m_stackNameHasBeenSet = true; m_stackName = value; }

    /**
     * <p>The name of the stack for which to list sessions.</p>
     */
    inline void SetStackName(const char* value) { m_stackNameHasBeenSet = true; m_stackName.assign(value); }

    /**
     * <p>The name of the stack for which to list sessions.</p>
     */
    inline DescribeSessionsRequest& WithStackName(const Aws::String& value) { SetStackName(value); return *this;}

    /**
     * <p>The name of the stack for which to list sessions.</p>
     */
    inline DescribeSessionsRequest& WithStackName(Aws::String&& value) { SetStackName(value); return *this;}

    /**
     * <p>The name of the stack for which to list sessions.</p>
     */
    inline DescribeSessionsRequest& WithStackName(const char* value) { SetStackName(value); return *this;}

    /**
     * <p>The name of the fleet for which to list sessions.</p>
     */
    inline const Aws::String& GetFleetName() const{ return m_fleetName; }

    /**
     * <p>The name of the fleet for which to list sessions.</p>
     */
    inline void SetFleetName(const Aws::String& value) { m_fleetNameHasBeenSet = true; m_fleetName = value; }

    /**
     * <p>The name of the fleet for which to list sessions.</p>
     */
    inline void SetFleetName(Aws::String&& value) { m_fleetNameHasBeenSet = true; m_fleetName = value; }

    /**
     * <p>The name of the fleet for which to list sessions.</p>
     */
    inline void SetFleetName(const char* value) { m_fleetNameHasBeenSet = true; m_fleetName.assign(value); }

    /**
     * <p>The name of the fleet for which to list sessions.</p>
     */
    inline DescribeSessionsRequest& WithFleetName(const Aws::String& value) { SetFleetName(value); return *this;}

    /**
     * <p>The name of the fleet for which to list sessions.</p>
     */
    inline DescribeSessionsRequest& WithFleetName(Aws::String&& value) { SetFleetName(value); return *this;}

    /**
     * <p>The name of the fleet for which to list sessions.</p>
     */
    inline DescribeSessionsRequest& WithFleetName(const char* value) { SetFleetName(value); return *this;}

    /**
     * <p>The user for whom to list sessions. Use null to describe all the sessions for
     * the stack and fleet.</p>
     */
    inline const Aws::String& GetUserId() const{ return m_userId; }

    /**
     * <p>The user for whom to list sessions. Use null to describe all the sessions for
     * the stack and fleet.</p>
     */
    inline void SetUserId(const Aws::String& value) { m_userIdHasBeenSet = true; m_userId = value; }

    /**
     * <p>The user for whom to list sessions. Use null to describe all the sessions for
     * the stack and fleet.</p>
     */
    inline void SetUserId(Aws::String&& value) { m_userIdHasBeenSet = true; m_userId = value; }

    /**
     * <p>The user for whom to list sessions. Use null to describe all the sessions for
     * the stack and fleet.</p>
     */
    inline void SetUserId(const char* value) { m_userIdHasBeenSet = true; m_userId.assign(value); }

    /**
     * <p>The user for whom to list sessions. Use null to describe all the sessions for
     * the stack and fleet.</p>
     */
    inline DescribeSessionsRequest& WithUserId(const Aws::String& value) { SetUserId(value); return *this;}

    /**
     * <p>The user for whom to list sessions. Use null to describe all the sessions for
     * the stack and fleet.</p>
     */
    inline DescribeSessionsRequest& WithUserId(Aws::String&& value) { SetUserId(value); return *this;}

    /**
     * <p>The user for whom to list sessions. Use null to describe all the sessions for
     * the stack and fleet.</p>
     */
    inline DescribeSessionsRequest& WithUserId(const char* value) { SetUserId(value); return *this;}

    /**
     * <p>The pagination token to use to retrieve the next page of results for this
     * operation. If this value is null, it retrieves the first page.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The pagination token to use to retrieve the next page of results for this
     * operation. If this value is null, it retrieves the first page.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>The pagination token to use to retrieve the next page of results for this
     * operation. If this value is null, it retrieves the first page.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>The pagination token to use to retrieve the next page of results for this
     * operation. If this value is null, it retrieves the first page.</p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p>The pagination token to use to retrieve the next page of results for this
     * operation. If this value is null, it retrieves the first page.</p>
     */
    inline DescribeSessionsRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The pagination token to use to retrieve the next page of results for this
     * operation. If this value is null, it retrieves the first page.</p>
     */
    inline DescribeSessionsRequest& WithNextToken(Aws::String&& value) { SetNextToken(value); return *this;}

    /**
     * <p>The pagination token to use to retrieve the next page of results for this
     * operation. If this value is null, it retrieves the first page.</p>
     */
    inline DescribeSessionsRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}

    /**
     * <p>The size of each page of results. The default value is 20 and the maximum
     * supported value is 50.</p>
     */
    inline int GetLimit() const{ return m_limit; }

    /**
     * <p>The size of each page of results. The default value is 20 and the maximum
     * supported value is 50.</p>
     */
    inline void SetLimit(int value) { m_limitHasBeenSet = true; m_limit = value; }

    /**
     * <p>The size of each page of results. The default value is 20 and the maximum
     * supported value is 50.</p>
     */
    inline DescribeSessionsRequest& WithLimit(int value) { SetLimit(value); return *this;}

  private:
    Aws::String m_stackName;
    bool m_stackNameHasBeenSet;
    Aws::String m_fleetName;
    bool m_fleetNameHasBeenSet;
    Aws::String m_userId;
    bool m_userIdHasBeenSet;
    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet;
    int m_limit;
    bool m_limitHasBeenSet;
  };

} // namespace Model
} // namespace AppStream
} // namespace Aws
