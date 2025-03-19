/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iot/IoT_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/iot/model/PackageVersionSummary.h>
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
  class ListPackageVersionsResult
  {
  public:
    AWS_IOT_API ListPackageVersionsResult() = default;
    AWS_IOT_API ListPackageVersionsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_IOT_API ListPackageVersionsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Lists the package versions associated to the package.</p>
     */
    inline const Aws::Vector<PackageVersionSummary>& GetPackageVersionSummaries() const { return m_packageVersionSummaries; }
    template<typename PackageVersionSummariesT = Aws::Vector<PackageVersionSummary>>
    void SetPackageVersionSummaries(PackageVersionSummariesT&& value) { m_packageVersionSummariesHasBeenSet = true; m_packageVersionSummaries = std::forward<PackageVersionSummariesT>(value); }
    template<typename PackageVersionSummariesT = Aws::Vector<PackageVersionSummary>>
    ListPackageVersionsResult& WithPackageVersionSummaries(PackageVersionSummariesT&& value) { SetPackageVersionSummaries(std::forward<PackageVersionSummariesT>(value)); return *this;}
    template<typename PackageVersionSummariesT = PackageVersionSummary>
    ListPackageVersionsResult& AddPackageVersionSummaries(PackageVersionSummariesT&& value) { m_packageVersionSummariesHasBeenSet = true; m_packageVersionSummaries.emplace_back(std::forward<PackageVersionSummariesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The token for the next set of results.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListPackageVersionsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListPackageVersionsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<PackageVersionSummary> m_packageVersionSummaries;
    bool m_packageVersionSummariesHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace IoT
} // namespace Aws
