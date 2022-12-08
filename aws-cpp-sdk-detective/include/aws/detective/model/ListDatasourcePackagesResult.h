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
    AWS_DETECTIVE_API ListDatasourcePackagesResult();
    AWS_DETECTIVE_API ListDatasourcePackagesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_DETECTIVE_API ListDatasourcePackagesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Details on the data source packages active in the behavior graph.</p>
     */
    inline const Aws::Map<DatasourcePackage, DatasourcePackageIngestDetail>& GetDatasourcePackages() const{ return m_datasourcePackages; }

    /**
     * <p>Details on the data source packages active in the behavior graph.</p>
     */
    inline void SetDatasourcePackages(const Aws::Map<DatasourcePackage, DatasourcePackageIngestDetail>& value) { m_datasourcePackages = value; }

    /**
     * <p>Details on the data source packages active in the behavior graph.</p>
     */
    inline void SetDatasourcePackages(Aws::Map<DatasourcePackage, DatasourcePackageIngestDetail>&& value) { m_datasourcePackages = std::move(value); }

    /**
     * <p>Details on the data source packages active in the behavior graph.</p>
     */
    inline ListDatasourcePackagesResult& WithDatasourcePackages(const Aws::Map<DatasourcePackage, DatasourcePackageIngestDetail>& value) { SetDatasourcePackages(value); return *this;}

    /**
     * <p>Details on the data source packages active in the behavior graph.</p>
     */
    inline ListDatasourcePackagesResult& WithDatasourcePackages(Aws::Map<DatasourcePackage, DatasourcePackageIngestDetail>&& value) { SetDatasourcePackages(std::move(value)); return *this;}

    /**
     * <p>Details on the data source packages active in the behavior graph.</p>
     */
    inline ListDatasourcePackagesResult& AddDatasourcePackages(const DatasourcePackage& key, const DatasourcePackageIngestDetail& value) { m_datasourcePackages.emplace(key, value); return *this; }

    /**
     * <p>Details on the data source packages active in the behavior graph.</p>
     */
    inline ListDatasourcePackagesResult& AddDatasourcePackages(DatasourcePackage&& key, const DatasourcePackageIngestDetail& value) { m_datasourcePackages.emplace(std::move(key), value); return *this; }

    /**
     * <p>Details on the data source packages active in the behavior graph.</p>
     */
    inline ListDatasourcePackagesResult& AddDatasourcePackages(const DatasourcePackage& key, DatasourcePackageIngestDetail&& value) { m_datasourcePackages.emplace(key, std::move(value)); return *this; }

    /**
     * <p>Details on the data source packages active in the behavior graph.</p>
     */
    inline ListDatasourcePackagesResult& AddDatasourcePackages(DatasourcePackage&& key, DatasourcePackageIngestDetail&& value) { m_datasourcePackages.emplace(std::move(key), std::move(value)); return *this; }


    /**
     * <p>For requests to get the next page of results, the pagination token that was
     * returned with the previous set of results. The initial request does not include
     * a pagination token.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>For requests to get the next page of results, the pagination token that was
     * returned with the previous set of results. The initial request does not include
     * a pagination token.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>For requests to get the next page of results, the pagination token that was
     * returned with the previous set of results. The initial request does not include
     * a pagination token.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>For requests to get the next page of results, the pagination token that was
     * returned with the previous set of results. The initial request does not include
     * a pagination token.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>For requests to get the next page of results, the pagination token that was
     * returned with the previous set of results. The initial request does not include
     * a pagination token.</p>
     */
    inline ListDatasourcePackagesResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>For requests to get the next page of results, the pagination token that was
     * returned with the previous set of results. The initial request does not include
     * a pagination token.</p>
     */
    inline ListDatasourcePackagesResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>For requests to get the next page of results, the pagination token that was
     * returned with the previous set of results. The initial request does not include
     * a pagination token.</p>
     */
    inline ListDatasourcePackagesResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Map<DatasourcePackage, DatasourcePackageIngestDetail> m_datasourcePackages;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace Detective
} // namespace Aws
