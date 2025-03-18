/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/appstream/AppStream_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/appstream/model/SharedImagePermissions.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace AppStream
{
namespace Model
{
  class DescribeImagePermissionsResult
  {
  public:
    AWS_APPSTREAM_API DescribeImagePermissionsResult() = default;
    AWS_APPSTREAM_API DescribeImagePermissionsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_APPSTREAM_API DescribeImagePermissionsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The name of the private image.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    DescribeImagePermissionsResult& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The permissions for a private image that you own. </p>
     */
    inline const Aws::Vector<SharedImagePermissions>& GetSharedImagePermissionsList() const { return m_sharedImagePermissionsList; }
    template<typename SharedImagePermissionsListT = Aws::Vector<SharedImagePermissions>>
    void SetSharedImagePermissionsList(SharedImagePermissionsListT&& value) { m_sharedImagePermissionsListHasBeenSet = true; m_sharedImagePermissionsList = std::forward<SharedImagePermissionsListT>(value); }
    template<typename SharedImagePermissionsListT = Aws::Vector<SharedImagePermissions>>
    DescribeImagePermissionsResult& WithSharedImagePermissionsList(SharedImagePermissionsListT&& value) { SetSharedImagePermissionsList(std::forward<SharedImagePermissionsListT>(value)); return *this;}
    template<typename SharedImagePermissionsListT = SharedImagePermissions>
    DescribeImagePermissionsResult& AddSharedImagePermissionsList(SharedImagePermissionsListT&& value) { m_sharedImagePermissionsListHasBeenSet = true; m_sharedImagePermissionsList.emplace_back(std::forward<SharedImagePermissionsListT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The pagination token to use to retrieve the next page of results for this
     * operation. If there are no more pages, this value is null.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    DescribeImagePermissionsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    DescribeImagePermissionsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::Vector<SharedImagePermissions> m_sharedImagePermissionsList;
    bool m_sharedImagePermissionsListHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace AppStream
} // namespace Aws
