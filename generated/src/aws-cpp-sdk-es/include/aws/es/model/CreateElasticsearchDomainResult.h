/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/es/ElasticsearchService_EXPORTS.h>
#include <aws/es/model/ElasticsearchDomainStatus.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace ElasticsearchService
{
namespace Model
{
  /**
   * <p>The result of a <code>CreateElasticsearchDomain</code> operation. Contains
   * the status of the newly created Elasticsearch domain.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/es-2015-01-01/CreateElasticsearchDomainResponse">AWS
   * API Reference</a></p>
   */
  class CreateElasticsearchDomainResult
  {
  public:
    AWS_ELASTICSEARCHSERVICE_API CreateElasticsearchDomainResult();
    AWS_ELASTICSEARCHSERVICE_API CreateElasticsearchDomainResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_ELASTICSEARCHSERVICE_API CreateElasticsearchDomainResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The status of the newly created Elasticsearch domain. </p>
     */
    inline const ElasticsearchDomainStatus& GetDomainStatus() const{ return m_domainStatus; }

    /**
     * <p>The status of the newly created Elasticsearch domain. </p>
     */
    inline void SetDomainStatus(const ElasticsearchDomainStatus& value) { m_domainStatus = value; }

    /**
     * <p>The status of the newly created Elasticsearch domain. </p>
     */
    inline void SetDomainStatus(ElasticsearchDomainStatus&& value) { m_domainStatus = std::move(value); }

    /**
     * <p>The status of the newly created Elasticsearch domain. </p>
     */
    inline CreateElasticsearchDomainResult& WithDomainStatus(const ElasticsearchDomainStatus& value) { SetDomainStatus(value); return *this;}

    /**
     * <p>The status of the newly created Elasticsearch domain. </p>
     */
    inline CreateElasticsearchDomainResult& WithDomainStatus(ElasticsearchDomainStatus&& value) { SetDomainStatus(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline CreateElasticsearchDomainResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline CreateElasticsearchDomainResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline CreateElasticsearchDomainResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    ElasticsearchDomainStatus m_domainStatus;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace ElasticsearchService
} // namespace Aws
