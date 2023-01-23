/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/es/ElasticsearchService_EXPORTS.h>
#include <aws/es/ElasticsearchServiceRequest.h>
#include <aws/es/model/EngineType.h>
#include <utility>

namespace Aws
{
namespace Http
{
    class URI;
} //namespace Http
namespace ElasticsearchService
{
namespace Model
{

  /**
   * <p> Container for the parameters to the <code><a>ListDomainNames</a></code>
   * operation.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/es-2015-01-01/ListDomainNamesRequest">AWS
   * API Reference</a></p>
   */
  class ListDomainNamesRequest : public ElasticsearchServiceRequest
  {
  public:
    AWS_ELASTICSEARCHSERVICE_API ListDomainNamesRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListDomainNames"; }

    AWS_ELASTICSEARCHSERVICE_API Aws::String SerializePayload() const override;

    AWS_ELASTICSEARCHSERVICE_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    /**
     * <p> Optional parameter to filter the output by domain engine type. Acceptable
     * values are 'Elasticsearch' and 'OpenSearch'. </p>
     */
    inline const EngineType& GetEngineType() const{ return m_engineType; }

    /**
     * <p> Optional parameter to filter the output by domain engine type. Acceptable
     * values are 'Elasticsearch' and 'OpenSearch'. </p>
     */
    inline bool EngineTypeHasBeenSet() const { return m_engineTypeHasBeenSet; }

    /**
     * <p> Optional parameter to filter the output by domain engine type. Acceptable
     * values are 'Elasticsearch' and 'OpenSearch'. </p>
     */
    inline void SetEngineType(const EngineType& value) { m_engineTypeHasBeenSet = true; m_engineType = value; }

    /**
     * <p> Optional parameter to filter the output by domain engine type. Acceptable
     * values are 'Elasticsearch' and 'OpenSearch'. </p>
     */
    inline void SetEngineType(EngineType&& value) { m_engineTypeHasBeenSet = true; m_engineType = std::move(value); }

    /**
     * <p> Optional parameter to filter the output by domain engine type. Acceptable
     * values are 'Elasticsearch' and 'OpenSearch'. </p>
     */
    inline ListDomainNamesRequest& WithEngineType(const EngineType& value) { SetEngineType(value); return *this;}

    /**
     * <p> Optional parameter to filter the output by domain engine type. Acceptable
     * values are 'Elasticsearch' and 'OpenSearch'. </p>
     */
    inline ListDomainNamesRequest& WithEngineType(EngineType&& value) { SetEngineType(std::move(value)); return *this;}

  private:

    EngineType m_engineType;
    bool m_engineTypeHasBeenSet = false;
  };

} // namespace Model
} // namespace ElasticsearchService
} // namespace Aws
