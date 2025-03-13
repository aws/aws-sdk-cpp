/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/detective/Detective_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/detective/model/DatasourcePackage.h>
#include <aws/detective/model/DatasourcePackageIngestDetail.h>
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
namespace Detective
{
namespace Model
{
  class ListDatasourcePackagesResult
  {
  public:
    AWS_DETECTIVE_API ListDatasourcePackagesResult() = default;
    AWS_DETECTIVE_API ListDatasourcePackagesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_DETECTIVE_API ListDatasourcePackagesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Details on the data source packages active in the behavior graph.</p>
     */
    inline const Aws::Map<DatasourcePackage, DatasourcePackageIngestDetail>& GetDatasourcePackages() const { return m_datasourcePackages; }
    template<typename DatasourcePackagesT = Aws::Map<DatasourcePackage, DatasourcePackageIngestDetail>>
    void SetDatasourcePackages(DatasourcePackagesT&& value) { m_datasourcePackagesHasBeenSet = true; m_datasourcePackages = std::forward<DatasourcePackagesT>(value); }
    template<typename DatasourcePackagesT = Aws::Map<DatasourcePackage, DatasourcePackageIngestDetail>>
    ListDatasourcePackagesResult& WithDatasourcePackages(DatasourcePackagesT&& value) { SetDatasourcePackages(std::forward<DatasourcePackagesT>(value)); return *this;}
    inline ListDatasourcePackagesResult& AddDatasourcePackages(DatasourcePackage key, DatasourcePackageIngestDetail value) {
      m_datasourcePackagesHasBeenSet = true; m_datasourcePackages.emplace(key, value); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>For requests to get the next page of results, the pagination token that was
     * returned with the previous set of results. The initial request does not include
     * a pagination token.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListDatasourcePackagesResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListDatasourcePackagesResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Map<DatasourcePackage, DatasourcePackageIngestDetail> m_datasourcePackages;
    bool m_datasourcePackagesHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Detective
} // namespace Aws
