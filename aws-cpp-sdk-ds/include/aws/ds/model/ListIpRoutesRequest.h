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
#include <aws/ds/DirectoryService_EXPORTS.h>
#include <aws/ds/DirectoryServiceRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace DirectoryService
{
namespace Model
{

  /**
   */
  class AWS_DIRECTORYSERVICE_API ListIpRoutesRequest : public DirectoryServiceRequest
  {
  public:
    ListIpRoutesRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListIpRoutes"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>Identifier (ID) of the directory for which you want to retrieve the IP
     * addresses.</p>
     */
    inline const Aws::String& GetDirectoryId() const{ return m_directoryId; }

    /**
     * <p>Identifier (ID) of the directory for which you want to retrieve the IP
     * addresses.</p>
     */
    inline bool DirectoryIdHasBeenSet() const { return m_directoryIdHasBeenSet; }

    /**
     * <p>Identifier (ID) of the directory for which you want to retrieve the IP
     * addresses.</p>
     */
    inline void SetDirectoryId(const Aws::String& value) { m_directoryIdHasBeenSet = true; m_directoryId = value; }

    /**
     * <p>Identifier (ID) of the directory for which you want to retrieve the IP
     * addresses.</p>
     */
    inline void SetDirectoryId(Aws::String&& value) { m_directoryIdHasBeenSet = true; m_directoryId = std::move(value); }

    /**
     * <p>Identifier (ID) of the directory for which you want to retrieve the IP
     * addresses.</p>
     */
    inline void SetDirectoryId(const char* value) { m_directoryIdHasBeenSet = true; m_directoryId.assign(value); }

    /**
     * <p>Identifier (ID) of the directory for which you want to retrieve the IP
     * addresses.</p>
     */
    inline ListIpRoutesRequest& WithDirectoryId(const Aws::String& value) { SetDirectoryId(value); return *this;}

    /**
     * <p>Identifier (ID) of the directory for which you want to retrieve the IP
     * addresses.</p>
     */
    inline ListIpRoutesRequest& WithDirectoryId(Aws::String&& value) { SetDirectoryId(std::move(value)); return *this;}

    /**
     * <p>Identifier (ID) of the directory for which you want to retrieve the IP
     * addresses.</p>
     */
    inline ListIpRoutesRequest& WithDirectoryId(const char* value) { SetDirectoryId(value); return *this;}


    /**
     * <p>The <i>ListIpRoutes.NextToken</i> value from a previous call to
     * <a>ListIpRoutes</a>. Pass null if this is the first call.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The <i>ListIpRoutes.NextToken</i> value from a previous call to
     * <a>ListIpRoutes</a>. Pass null if this is the first call.</p>
     */
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    /**
     * <p>The <i>ListIpRoutes.NextToken</i> value from a previous call to
     * <a>ListIpRoutes</a>. Pass null if this is the first call.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>The <i>ListIpRoutes.NextToken</i> value from a previous call to
     * <a>ListIpRoutes</a>. Pass null if this is the first call.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    /**
     * <p>The <i>ListIpRoutes.NextToken</i> value from a previous call to
     * <a>ListIpRoutes</a>. Pass null if this is the first call.</p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p>The <i>ListIpRoutes.NextToken</i> value from a previous call to
     * <a>ListIpRoutes</a>. Pass null if this is the first call.</p>
     */
    inline ListIpRoutesRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The <i>ListIpRoutes.NextToken</i> value from a previous call to
     * <a>ListIpRoutes</a>. Pass null if this is the first call.</p>
     */
    inline ListIpRoutesRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The <i>ListIpRoutes.NextToken</i> value from a previous call to
     * <a>ListIpRoutes</a>. Pass null if this is the first call.</p>
     */
    inline ListIpRoutesRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p>Maximum number of items to return. If this value is zero, the maximum number
     * of items is specified by the limitations of the operation.</p>
     */
    inline int GetLimit() const{ return m_limit; }

    /**
     * <p>Maximum number of items to return. If this value is zero, the maximum number
     * of items is specified by the limitations of the operation.</p>
     */
    inline bool LimitHasBeenSet() const { return m_limitHasBeenSet; }

    /**
     * <p>Maximum number of items to return. If this value is zero, the maximum number
     * of items is specified by the limitations of the operation.</p>
     */
    inline void SetLimit(int value) { m_limitHasBeenSet = true; m_limit = value; }

    /**
     * <p>Maximum number of items to return. If this value is zero, the maximum number
     * of items is specified by the limitations of the operation.</p>
     */
    inline ListIpRoutesRequest& WithLimit(int value) { SetLimit(value); return *this;}

  private:

    Aws::String m_directoryId;
    bool m_directoryIdHasBeenSet;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet;

    int m_limit;
    bool m_limitHasBeenSet;
  };

} // namespace Model
} // namespace DirectoryService
} // namespace Aws
