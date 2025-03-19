/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/appstream/AppStream_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/appstream/model/AppBlockBuilderAppBlockAssociation.h>
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
  class DescribeAppBlockBuilderAppBlockAssociationsResult
  {
  public:
    AWS_APPSTREAM_API DescribeAppBlockBuilderAppBlockAssociationsResult() = default;
    AWS_APPSTREAM_API DescribeAppBlockBuilderAppBlockAssociationsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_APPSTREAM_API DescribeAppBlockBuilderAppBlockAssociationsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>This list of app block builders associated with app blocks.</p>
     */
    inline const Aws::Vector<AppBlockBuilderAppBlockAssociation>& GetAppBlockBuilderAppBlockAssociations() const { return m_appBlockBuilderAppBlockAssociations; }
    template<typename AppBlockBuilderAppBlockAssociationsT = Aws::Vector<AppBlockBuilderAppBlockAssociation>>
    void SetAppBlockBuilderAppBlockAssociations(AppBlockBuilderAppBlockAssociationsT&& value) { m_appBlockBuilderAppBlockAssociationsHasBeenSet = true; m_appBlockBuilderAppBlockAssociations = std::forward<AppBlockBuilderAppBlockAssociationsT>(value); }
    template<typename AppBlockBuilderAppBlockAssociationsT = Aws::Vector<AppBlockBuilderAppBlockAssociation>>
    DescribeAppBlockBuilderAppBlockAssociationsResult& WithAppBlockBuilderAppBlockAssociations(AppBlockBuilderAppBlockAssociationsT&& value) { SetAppBlockBuilderAppBlockAssociations(std::forward<AppBlockBuilderAppBlockAssociationsT>(value)); return *this;}
    template<typename AppBlockBuilderAppBlockAssociationsT = AppBlockBuilderAppBlockAssociation>
    DescribeAppBlockBuilderAppBlockAssociationsResult& AddAppBlockBuilderAppBlockAssociations(AppBlockBuilderAppBlockAssociationsT&& value) { m_appBlockBuilderAppBlockAssociationsHasBeenSet = true; m_appBlockBuilderAppBlockAssociations.emplace_back(std::forward<AppBlockBuilderAppBlockAssociationsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The pagination token used to retrieve the next page of results for this
     * operation.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    DescribeAppBlockBuilderAppBlockAssociationsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    DescribeAppBlockBuilderAppBlockAssociationsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<AppBlockBuilderAppBlockAssociation> m_appBlockBuilderAppBlockAssociations;
    bool m_appBlockBuilderAppBlockAssociationsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace AppStream
} // namespace Aws
