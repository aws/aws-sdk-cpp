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
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace ElasticsearchService
{
namespace Model
{

  /**
   * <p> Container for the parameters to the
   * <code>DescribeElasticsearchDomainConfig</code> operation. Specifies the domain
   * name for which you want configuration information.</p>
   */
  class AWS_ELASTICSEARCHSERVICE_API DescribeElasticsearchDomainConfigRequest : public ElasticsearchServiceRequest
  {
  public:
    DescribeElasticsearchDomainConfigRequest();
    Aws::String SerializePayload() const override;

    /**
     * <p>The Elasticsearch domain that you want to get information about.</p>
     */
    inline const Aws::String& GetDomainName() const{ return m_domainName; }

    /**
     * <p>The Elasticsearch domain that you want to get information about.</p>
     */
    inline void SetDomainName(const Aws::String& value) { m_domainNameHasBeenSet = true; m_domainName = value; }

    /**
     * <p>The Elasticsearch domain that you want to get information about.</p>
     */
    inline void SetDomainName(Aws::String&& value) { m_domainNameHasBeenSet = true; m_domainName = value; }

    /**
     * <p>The Elasticsearch domain that you want to get information about.</p>
     */
    inline void SetDomainName(const char* value) { m_domainNameHasBeenSet = true; m_domainName.assign(value); }

    /**
     * <p>The Elasticsearch domain that you want to get information about.</p>
     */
    inline DescribeElasticsearchDomainConfigRequest& WithDomainName(const Aws::String& value) { SetDomainName(value); return *this;}

    /**
     * <p>The Elasticsearch domain that you want to get information about.</p>
     */
    inline DescribeElasticsearchDomainConfigRequest& WithDomainName(Aws::String&& value) { SetDomainName(value); return *this;}

    /**
     * <p>The Elasticsearch domain that you want to get information about.</p>
     */
    inline DescribeElasticsearchDomainConfigRequest& WithDomainName(const char* value) { SetDomainName(value); return *this;}

  private:
    Aws::String m_domainName;
    bool m_domainNameHasBeenSet;
  };

} // namespace Model
} // namespace ElasticsearchService
} // namespace Aws
