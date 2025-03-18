/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iot/IoT_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/iot/model/PackageSummary.h>
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
namespace IoT
{
namespace Model
{
  class ListPackagesResult
  {
  public:
    AWS_IOT_API ListPackagesResult() = default;
    AWS_IOT_API ListPackagesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_IOT_API ListPackagesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The software package summary.</p>
     */
    inline const Aws::Vector<PackageSummary>& GetPackageSummaries() const { return m_packageSummaries; }
    template<typename PackageSummariesT = Aws::Vector<PackageSummary>>
    void SetPackageSummaries(PackageSummariesT&& value) { m_packageSummariesHasBeenSet = true; m_packageSummaries = std::forward<PackageSummariesT>(value); }
    template<typename PackageSummariesT = Aws::Vector<PackageSummary>>
    ListPackagesResult& WithPackageSummaries(PackageSummariesT&& value) { SetPackageSummaries(std::forward<PackageSummariesT>(value)); return *this;}
    template<typename PackageSummariesT = PackageSummary>
    ListPackagesResult& AddPackageSummaries(PackageSummariesT&& value) { m_packageSummariesHasBeenSet = true; m_packageSummaries.emplace_back(std::forward<PackageSummariesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The token for the next set of results.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListPackagesResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListPackagesResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<PackageSummary> m_packageSummaries;
    bool m_packageSummariesHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace IoT
} // namespace Aws
