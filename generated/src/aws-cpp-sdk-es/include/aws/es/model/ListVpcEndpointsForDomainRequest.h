/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/es/ElasticsearchService_EXPORTS.h>
#include <aws/es/ElasticsearchServiceRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
   * <p>Container for request parameters to the
   * <code><a>ListVpcEndpointsForDomain</a></code> operation. Specifies the domain
   * whose VPC endpoints will be listed.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/es-2015-01-01/ListVpcEndpointsForDomainRequest">AWS
   * API Reference</a></p>
   */
  class ListVpcEndpointsForDomainRequest : public ElasticsearchServiceRequest
  {
  public:
    AWS_ELASTICSEARCHSERVICE_API ListVpcEndpointsForDomainRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListVpcEndpointsForDomain"; }

    AWS_ELASTICSEARCHSERVICE_API Aws::String SerializePayload() const override;

    AWS_ELASTICSEARCHSERVICE_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    /**
     * <p>Name of the ElasticSearch domain whose VPC endpoints are to be listed.</p>
     */
    inline const Aws::String& GetDomainName() const{ return m_domainName; }

    /**
     * <p>Name of the ElasticSearch domain whose VPC endpoints are to be listed.</p>
     */
    inline bool DomainNameHasBeenSet() const { return m_domainNameHasBeenSet; }

    /**
     * <p>Name of the ElasticSearch domain whose VPC endpoints are to be listed.</p>
     */
    inline void SetDomainName(const Aws::String& value) { m_domainNameHasBeenSet = true; m_domainName = value; }

    /**
     * <p>Name of the ElasticSearch domain whose VPC endpoints are to be listed.</p>
     */
    inline void SetDomainName(Aws::String&& value) { m_domainNameHasBeenSet = true; m_domainName = std::move(value); }

    /**
     * <p>Name of the ElasticSearch domain whose VPC endpoints are to be listed.</p>
     */
    inline void SetDomainName(const char* value) { m_domainNameHasBeenSet = true; m_domainName.assign(value); }

    /**
     * <p>Name of the ElasticSearch domain whose VPC endpoints are to be listed.</p>
     */
    inline ListVpcEndpointsForDomainRequest& WithDomainName(const Aws::String& value) { SetDomainName(value); return *this;}

    /**
     * <p>Name of the ElasticSearch domain whose VPC endpoints are to be listed.</p>
     */
    inline ListVpcEndpointsForDomainRequest& WithDomainName(Aws::String&& value) { SetDomainName(std::move(value)); return *this;}

    /**
     * <p>Name of the ElasticSearch domain whose VPC endpoints are to be listed.</p>
     */
    inline ListVpcEndpointsForDomainRequest& WithDomainName(const char* value) { SetDomainName(value); return *this;}


    /**
     * <p>Provides an identifier to allow retrieval of paginated results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>Provides an identifier to allow retrieval of paginated results.</p>
     */
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    /**
     * <p>Provides an identifier to allow retrieval of paginated results.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>Provides an identifier to allow retrieval of paginated results.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    /**
     * <p>Provides an identifier to allow retrieval of paginated results.</p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p>Provides an identifier to allow retrieval of paginated results.</p>
     */
    inline ListVpcEndpointsForDomainRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>Provides an identifier to allow retrieval of paginated results.</p>
     */
    inline ListVpcEndpointsForDomainRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>Provides an identifier to allow retrieval of paginated results.</p>
     */
    inline ListVpcEndpointsForDomainRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::String m_domainName;
    bool m_domainNameHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace ElasticsearchService
} // namespace Aws
