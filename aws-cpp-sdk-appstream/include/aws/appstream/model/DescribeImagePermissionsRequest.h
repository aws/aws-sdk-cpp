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
#include <aws/appstream/AppStream_EXPORTS.h>
#include <aws/appstream/AppStreamRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <utility>

namespace Aws
{
namespace AppStream
{
namespace Model
{

  /**
   */
  class AWS_APPSTREAM_API DescribeImagePermissionsRequest : public AppStreamRequest
  {
  public:
    DescribeImagePermissionsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeImagePermissions"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The name of the private image for which to describe permissions. The image
     * must be one that you own. </p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the private image for which to describe permissions. The image
     * must be one that you own. </p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the private image for which to describe permissions. The image
     * must be one that you own. </p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the private image for which to describe permissions. The image
     * must be one that you own. </p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the private image for which to describe permissions. The image
     * must be one that you own. </p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the private image for which to describe permissions. The image
     * must be one that you own. </p>
     */
    inline DescribeImagePermissionsRequest& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the private image for which to describe permissions. The image
     * must be one that you own. </p>
     */
    inline DescribeImagePermissionsRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the private image for which to describe permissions. The image
     * must be one that you own. </p>
     */
    inline DescribeImagePermissionsRequest& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The maximum size of each page of results.</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }

    /**
     * <p>The maximum size of each page of results.</p>
     */
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }

    /**
     * <p>The maximum size of each page of results.</p>
     */
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }

    /**
     * <p>The maximum size of each page of results.</p>
     */
    inline DescribeImagePermissionsRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}


    /**
     * <p>The 12-digit identifier of one or more AWS accounts with which the image is
     * shared.</p>
     */
    inline const Aws::Vector<Aws::String>& GetSharedAwsAccountIds() const{ return m_sharedAwsAccountIds; }

    /**
     * <p>The 12-digit identifier of one or more AWS accounts with which the image is
     * shared.</p>
     */
    inline bool SharedAwsAccountIdsHasBeenSet() const { return m_sharedAwsAccountIdsHasBeenSet; }

    /**
     * <p>The 12-digit identifier of one or more AWS accounts with which the image is
     * shared.</p>
     */
    inline void SetSharedAwsAccountIds(const Aws::Vector<Aws::String>& value) { m_sharedAwsAccountIdsHasBeenSet = true; m_sharedAwsAccountIds = value; }

    /**
     * <p>The 12-digit identifier of one or more AWS accounts with which the image is
     * shared.</p>
     */
    inline void SetSharedAwsAccountIds(Aws::Vector<Aws::String>&& value) { m_sharedAwsAccountIdsHasBeenSet = true; m_sharedAwsAccountIds = std::move(value); }

    /**
     * <p>The 12-digit identifier of one or more AWS accounts with which the image is
     * shared.</p>
     */
    inline DescribeImagePermissionsRequest& WithSharedAwsAccountIds(const Aws::Vector<Aws::String>& value) { SetSharedAwsAccountIds(value); return *this;}

    /**
     * <p>The 12-digit identifier of one or more AWS accounts with which the image is
     * shared.</p>
     */
    inline DescribeImagePermissionsRequest& WithSharedAwsAccountIds(Aws::Vector<Aws::String>&& value) { SetSharedAwsAccountIds(std::move(value)); return *this;}

    /**
     * <p>The 12-digit identifier of one or more AWS accounts with which the image is
     * shared.</p>
     */
    inline DescribeImagePermissionsRequest& AddSharedAwsAccountIds(const Aws::String& value) { m_sharedAwsAccountIdsHasBeenSet = true; m_sharedAwsAccountIds.push_back(value); return *this; }

    /**
     * <p>The 12-digit identifier of one or more AWS accounts with which the image is
     * shared.</p>
     */
    inline DescribeImagePermissionsRequest& AddSharedAwsAccountIds(Aws::String&& value) { m_sharedAwsAccountIdsHasBeenSet = true; m_sharedAwsAccountIds.push_back(std::move(value)); return *this; }

    /**
     * <p>The 12-digit identifier of one or more AWS accounts with which the image is
     * shared.</p>
     */
    inline DescribeImagePermissionsRequest& AddSharedAwsAccountIds(const char* value) { m_sharedAwsAccountIdsHasBeenSet = true; m_sharedAwsAccountIds.push_back(value); return *this; }


    /**
     * <p>The pagination token to use to retrieve the next page of results for this
     * operation. If this value is null, it retrieves the first page.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The pagination token to use to retrieve the next page of results for this
     * operation. If this value is null, it retrieves the first page.</p>
     */
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    /**
     * <p>The pagination token to use to retrieve the next page of results for this
     * operation. If this value is null, it retrieves the first page.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>The pagination token to use to retrieve the next page of results for this
     * operation. If this value is null, it retrieves the first page.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    /**
     * <p>The pagination token to use to retrieve the next page of results for this
     * operation. If this value is null, it retrieves the first page.</p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p>The pagination token to use to retrieve the next page of results for this
     * operation. If this value is null, it retrieves the first page.</p>
     */
    inline DescribeImagePermissionsRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The pagination token to use to retrieve the next page of results for this
     * operation. If this value is null, it retrieves the first page.</p>
     */
    inline DescribeImagePermissionsRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The pagination token to use to retrieve the next page of results for this
     * operation. If this value is null, it retrieves the first page.</p>
     */
    inline DescribeImagePermissionsRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::String m_name;
    bool m_nameHasBeenSet;

    int m_maxResults;
    bool m_maxResultsHasBeenSet;

    Aws::Vector<Aws::String> m_sharedAwsAccountIds;
    bool m_sharedAwsAccountIdsHasBeenSet;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet;
  };

} // namespace Model
} // namespace AppStream
} // namespace Aws
