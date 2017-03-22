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
  class AWS_APPSTREAM_API ListAssociatedFleetsRequest : public AppStreamRequest
  {
  public:
    ListAssociatedFleetsRequest();
    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The name of the stack whose associated fleets are listed.</p>
     */
    inline const Aws::String& GetStackName() const{ return m_stackName; }

    /**
     * <p>The name of the stack whose associated fleets are listed.</p>
     */
    inline void SetStackName(const Aws::String& value) { m_stackNameHasBeenSet = true; m_stackName = value; }

    /**
     * <p>The name of the stack whose associated fleets are listed.</p>
     */
    inline void SetStackName(Aws::String&& value) { m_stackNameHasBeenSet = true; m_stackName = value; }

    /**
     * <p>The name of the stack whose associated fleets are listed.</p>
     */
    inline void SetStackName(const char* value) { m_stackNameHasBeenSet = true; m_stackName.assign(value); }

    /**
     * <p>The name of the stack whose associated fleets are listed.</p>
     */
    inline ListAssociatedFleetsRequest& WithStackName(const Aws::String& value) { SetStackName(value); return *this;}

    /**
     * <p>The name of the stack whose associated fleets are listed.</p>
     */
    inline ListAssociatedFleetsRequest& WithStackName(Aws::String&& value) { SetStackName(value); return *this;}

    /**
     * <p>The name of the stack whose associated fleets are listed.</p>
     */
    inline ListAssociatedFleetsRequest& WithStackName(const char* value) { SetStackName(value); return *this;}

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
    inline ListAssociatedFleetsRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The pagination token to use to retrieve the next page of results for this
     * operation. If this value is null, it retrieves the first page.</p>
     */
    inline ListAssociatedFleetsRequest& WithNextToken(Aws::String&& value) { SetNextToken(value); return *this;}

    /**
     * <p>The pagination token to use to retrieve the next page of results for this
     * operation. If this value is null, it retrieves the first page.</p>
     */
    inline ListAssociatedFleetsRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:
    Aws::String m_stackName;
    bool m_stackNameHasBeenSet;
    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet;
  };

} // namespace Model
} // namespace AppStream
} // namespace Aws
