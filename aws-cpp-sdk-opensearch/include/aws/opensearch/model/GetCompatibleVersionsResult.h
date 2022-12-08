/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/opensearch/OpenSearchService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/opensearch/model/CompatibleVersionsMap.h>
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
namespace OpenSearchService
{
namespace Model
{
  /**
   * <p>Container for the response returned by the <code>GetCompatibleVersions</code>
   * operation.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/opensearch-2021-01-01/GetCompatibleVersionsResponse">AWS
   * API Reference</a></p>
   */
  class GetCompatibleVersionsResult
  {
  public:
    AWS_OPENSEARCHSERVICE_API GetCompatibleVersionsResult();
    AWS_OPENSEARCHSERVICE_API GetCompatibleVersionsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_OPENSEARCHSERVICE_API GetCompatibleVersionsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>A map of OpenSearch or Elasticsearch versions and the versions you can
     * upgrade them to.</p>
     */
    inline const Aws::Vector<CompatibleVersionsMap>& GetCompatibleVersions() const{ return m_compatibleVersions; }

    /**
     * <p>A map of OpenSearch or Elasticsearch versions and the versions you can
     * upgrade them to.</p>
     */
    inline void SetCompatibleVersions(const Aws::Vector<CompatibleVersionsMap>& value) { m_compatibleVersions = value; }

    /**
     * <p>A map of OpenSearch or Elasticsearch versions and the versions you can
     * upgrade them to.</p>
     */
    inline void SetCompatibleVersions(Aws::Vector<CompatibleVersionsMap>&& value) { m_compatibleVersions = std::move(value); }

    /**
     * <p>A map of OpenSearch or Elasticsearch versions and the versions you can
     * upgrade them to.</p>
     */
    inline GetCompatibleVersionsResult& WithCompatibleVersions(const Aws::Vector<CompatibleVersionsMap>& value) { SetCompatibleVersions(value); return *this;}

    /**
     * <p>A map of OpenSearch or Elasticsearch versions and the versions you can
     * upgrade them to.</p>
     */
    inline GetCompatibleVersionsResult& WithCompatibleVersions(Aws::Vector<CompatibleVersionsMap>&& value) { SetCompatibleVersions(std::move(value)); return *this;}

    /**
     * <p>A map of OpenSearch or Elasticsearch versions and the versions you can
     * upgrade them to.</p>
     */
    inline GetCompatibleVersionsResult& AddCompatibleVersions(const CompatibleVersionsMap& value) { m_compatibleVersions.push_back(value); return *this; }

    /**
     * <p>A map of OpenSearch or Elasticsearch versions and the versions you can
     * upgrade them to.</p>
     */
    inline GetCompatibleVersionsResult& AddCompatibleVersions(CompatibleVersionsMap&& value) { m_compatibleVersions.push_back(std::move(value)); return *this; }

  private:

    Aws::Vector<CompatibleVersionsMap> m_compatibleVersions;
  };

} // namespace Model
} // namespace OpenSearchService
} // namespace Aws
