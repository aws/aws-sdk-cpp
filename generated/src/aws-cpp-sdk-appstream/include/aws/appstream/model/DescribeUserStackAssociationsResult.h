/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/appstream/AppStream_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/appstream/model/UserStackAssociation.h>
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
  class DescribeUserStackAssociationsResult
  {
  public:
    AWS_APPSTREAM_API DescribeUserStackAssociationsResult() = default;
    AWS_APPSTREAM_API DescribeUserStackAssociationsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_APPSTREAM_API DescribeUserStackAssociationsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The UserStackAssociation objects.</p>
     */
    inline const Aws::Vector<UserStackAssociation>& GetUserStackAssociations() const { return m_userStackAssociations; }
    template<typename UserStackAssociationsT = Aws::Vector<UserStackAssociation>>
    void SetUserStackAssociations(UserStackAssociationsT&& value) { m_userStackAssociationsHasBeenSet = true; m_userStackAssociations = std::forward<UserStackAssociationsT>(value); }
    template<typename UserStackAssociationsT = Aws::Vector<UserStackAssociation>>
    DescribeUserStackAssociationsResult& WithUserStackAssociations(UserStackAssociationsT&& value) { SetUserStackAssociations(std::forward<UserStackAssociationsT>(value)); return *this;}
    template<typename UserStackAssociationsT = UserStackAssociation>
    DescribeUserStackAssociationsResult& AddUserStackAssociations(UserStackAssociationsT&& value) { m_userStackAssociationsHasBeenSet = true; m_userStackAssociations.emplace_back(std::forward<UserStackAssociationsT>(value)); return *this; }
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
    DescribeUserStackAssociationsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    DescribeUserStackAssociationsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<UserStackAssociation> m_userStackAssociations;
    bool m_userStackAssociationsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace AppStream
} // namespace Aws
