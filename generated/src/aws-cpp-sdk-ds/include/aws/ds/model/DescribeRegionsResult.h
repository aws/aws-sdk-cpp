/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ds/DirectoryService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ds/model/RegionDescription.h>
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
namespace DirectoryService
{
namespace Model
{
  class DescribeRegionsResult
  {
  public:
    AWS_DIRECTORYSERVICE_API DescribeRegionsResult() = default;
    AWS_DIRECTORYSERVICE_API DescribeRegionsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_DIRECTORYSERVICE_API DescribeRegionsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>List of Region information related to the directory for each replicated
     * Region.</p>
     */
    inline const Aws::Vector<RegionDescription>& GetRegionsDescription() const { return m_regionsDescription; }
    template<typename RegionsDescriptionT = Aws::Vector<RegionDescription>>
    void SetRegionsDescription(RegionsDescriptionT&& value) { m_regionsDescriptionHasBeenSet = true; m_regionsDescription = std::forward<RegionsDescriptionT>(value); }
    template<typename RegionsDescriptionT = Aws::Vector<RegionDescription>>
    DescribeRegionsResult& WithRegionsDescription(RegionsDescriptionT&& value) { SetRegionsDescription(std::forward<RegionsDescriptionT>(value)); return *this;}
    template<typename RegionsDescriptionT = RegionDescription>
    DescribeRegionsResult& AddRegionsDescription(RegionsDescriptionT&& value) { m_regionsDescriptionHasBeenSet = true; m_regionsDescription.emplace_back(std::forward<RegionsDescriptionT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>If not null, more results are available. Pass this value for the
     * <code>NextToken</code> parameter in a subsequent call to <a>DescribeRegions</a>
     * to retrieve the next set of items.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    DescribeRegionsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    DescribeRegionsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<RegionDescription> m_regionsDescription;
    bool m_regionsDescriptionHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace DirectoryService
} // namespace Aws
