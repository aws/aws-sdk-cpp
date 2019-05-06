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
#include <aws/mediastore/MediaStore_EXPORTS.h>
#include <aws/mediastore/MediaStoreRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace MediaStore
{
namespace Model
{

  /**
   */
  class AWS_MEDIASTORE_API ListContainersRequest : public MediaStoreRequest
  {
  public:
    ListContainersRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListContainers"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>Only if you used <code>MaxResults</code> in the first command, enter the
     * token (which was included in the previous response) to obtain the next set of
     * containers. This token is included in a response only if there actually are more
     * containers to list.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>Only if you used <code>MaxResults</code> in the first command, enter the
     * token (which was included in the previous response) to obtain the next set of
     * containers. This token is included in a response only if there actually are more
     * containers to list.</p>
     */
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    /**
     * <p>Only if you used <code>MaxResults</code> in the first command, enter the
     * token (which was included in the previous response) to obtain the next set of
     * containers. This token is included in a response only if there actually are more
     * containers to list.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>Only if you used <code>MaxResults</code> in the first command, enter the
     * token (which was included in the previous response) to obtain the next set of
     * containers. This token is included in a response only if there actually are more
     * containers to list.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    /**
     * <p>Only if you used <code>MaxResults</code> in the first command, enter the
     * token (which was included in the previous response) to obtain the next set of
     * containers. This token is included in a response only if there actually are more
     * containers to list.</p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p>Only if you used <code>MaxResults</code> in the first command, enter the
     * token (which was included in the previous response) to obtain the next set of
     * containers. This token is included in a response only if there actually are more
     * containers to list.</p>
     */
    inline ListContainersRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>Only if you used <code>MaxResults</code> in the first command, enter the
     * token (which was included in the previous response) to obtain the next set of
     * containers. This token is included in a response only if there actually are more
     * containers to list.</p>
     */
    inline ListContainersRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>Only if you used <code>MaxResults</code> in the first command, enter the
     * token (which was included in the previous response) to obtain the next set of
     * containers. This token is included in a response only if there actually are more
     * containers to list.</p>
     */
    inline ListContainersRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p>Enter the maximum number of containers in the response. Use from 1 to 255
     * characters. </p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }

    /**
     * <p>Enter the maximum number of containers in the response. Use from 1 to 255
     * characters. </p>
     */
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }

    /**
     * <p>Enter the maximum number of containers in the response. Use from 1 to 255
     * characters. </p>
     */
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }

    /**
     * <p>Enter the maximum number of containers in the response. Use from 1 to 255
     * characters. </p>
     */
    inline ListContainersRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}

  private:

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet;

    int m_maxResults;
    bool m_maxResultsHasBeenSet;
  };

} // namespace Model
} // namespace MediaStore
} // namespace Aws
