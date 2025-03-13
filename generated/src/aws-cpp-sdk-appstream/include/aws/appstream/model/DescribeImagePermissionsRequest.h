/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
  class DescribeImagePermissionsRequest : public AppStreamRequest
  {
  public:
    AWS_APPSTREAM_API DescribeImagePermissionsRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeImagePermissions"; }

    AWS_APPSTREAM_API Aws::String SerializePayload() const override;

    AWS_APPSTREAM_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The name of the private image for which to describe permissions. The image
     * must be one that you own. </p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    DescribeImagePermissionsRequest& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum size of each page of results.</p>
     */
    inline int GetMaxResults() const { return m_maxResults; }
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }
    inline DescribeImagePermissionsRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The 12-digit identifier of one or more AWS accounts with which the image is
     * shared.</p>
     */
    inline const Aws::Vector<Aws::String>& GetSharedAwsAccountIds() const { return m_sharedAwsAccountIds; }
    inline bool SharedAwsAccountIdsHasBeenSet() const { return m_sharedAwsAccountIdsHasBeenSet; }
    template<typename SharedAwsAccountIdsT = Aws::Vector<Aws::String>>
    void SetSharedAwsAccountIds(SharedAwsAccountIdsT&& value) { m_sharedAwsAccountIdsHasBeenSet = true; m_sharedAwsAccountIds = std::forward<SharedAwsAccountIdsT>(value); }
    template<typename SharedAwsAccountIdsT = Aws::Vector<Aws::String>>
    DescribeImagePermissionsRequest& WithSharedAwsAccountIds(SharedAwsAccountIdsT&& value) { SetSharedAwsAccountIds(std::forward<SharedAwsAccountIdsT>(value)); return *this;}
    template<typename SharedAwsAccountIdsT = Aws::String>
    DescribeImagePermissionsRequest& AddSharedAwsAccountIds(SharedAwsAccountIdsT&& value) { m_sharedAwsAccountIdsHasBeenSet = true; m_sharedAwsAccountIds.emplace_back(std::forward<SharedAwsAccountIdsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The pagination token to use to retrieve the next page of results for this
     * operation. If this value is null, it retrieves the first page.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    DescribeImagePermissionsRequest& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    int m_maxResults{0};
    bool m_maxResultsHasBeenSet = false;

    Aws::Vector<Aws::String> m_sharedAwsAccountIds;
    bool m_sharedAwsAccountIdsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace AppStream
} // namespace Aws
