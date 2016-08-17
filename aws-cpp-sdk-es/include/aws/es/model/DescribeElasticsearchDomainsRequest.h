/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/
#pragma once
#include <aws/es/ElasticsearchService_EXPORTS.h>
#include <aws/es/ElasticsearchServiceRequest.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace ElasticsearchService
{
namespace Model
{

  /**
   * <p>Container for the parameters to the
   * <code><a>DescribeElasticsearchDomains</a></code> operation. By default, the API
   * returns the status of all Elasticsearch domains.</p>
   */
  class AWS_ELASTICSEARCHSERVICE_API DescribeElasticsearchDomainsRequest : public ElasticsearchServiceRequest
  {
  public:
    DescribeElasticsearchDomainsRequest();
    Aws::String SerializePayload() const override;

    /**
     * <p>The Elasticsearch domains for which you want information.</p>
     */
    inline const Aws::Vector<Aws::String>& GetDomainNames() const{ return m_domainNames; }

    /**
     * <p>The Elasticsearch domains for which you want information.</p>
     */
    inline void SetDomainNames(const Aws::Vector<Aws::String>& value) { m_domainNamesHasBeenSet = true; m_domainNames = value; }

    /**
     * <p>The Elasticsearch domains for which you want information.</p>
     */
    inline void SetDomainNames(Aws::Vector<Aws::String>&& value) { m_domainNamesHasBeenSet = true; m_domainNames = value; }

    /**
     * <p>The Elasticsearch domains for which you want information.</p>
     */
    inline DescribeElasticsearchDomainsRequest& WithDomainNames(const Aws::Vector<Aws::String>& value) { SetDomainNames(value); return *this;}

    /**
     * <p>The Elasticsearch domains for which you want information.</p>
     */
    inline DescribeElasticsearchDomainsRequest& WithDomainNames(Aws::Vector<Aws::String>&& value) { SetDomainNames(value); return *this;}

    /**
     * <p>The Elasticsearch domains for which you want information.</p>
     */
    inline DescribeElasticsearchDomainsRequest& AddDomainNames(const Aws::String& value) { m_domainNamesHasBeenSet = true; m_domainNames.push_back(value); return *this; }

    /**
     * <p>The Elasticsearch domains for which you want information.</p>
     */
    inline DescribeElasticsearchDomainsRequest& AddDomainNames(Aws::String&& value) { m_domainNamesHasBeenSet = true; m_domainNames.push_back(value); return *this; }

    /**
     * <p>The Elasticsearch domains for which you want information.</p>
     */
    inline DescribeElasticsearchDomainsRequest& AddDomainNames(const char* value) { m_domainNamesHasBeenSet = true; m_domainNames.push_back(value); return *this; }

  private:
    Aws::Vector<Aws::String> m_domainNames;
    bool m_domainNamesHasBeenSet;
  };

} // namespace Model
} // namespace ElasticsearchService
} // namespace Aws
