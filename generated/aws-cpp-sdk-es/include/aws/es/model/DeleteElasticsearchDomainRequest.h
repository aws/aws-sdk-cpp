﻿/**
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
namespace ElasticsearchService
{
namespace Model
{

  /**
   * <p>Container for the parameters to the
   * <code><a>DeleteElasticsearchDomain</a></code> operation. Specifies the name of
   * the Elasticsearch domain that you want to delete.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/es-2015-01-01/DeleteElasticsearchDomainRequest">AWS
   * API Reference</a></p>
   */
  class AWS_ELASTICSEARCHSERVICE_API DeleteElasticsearchDomainRequest : public ElasticsearchServiceRequest
  {
  public:
    DeleteElasticsearchDomainRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DeleteElasticsearchDomain"; }

    Aws::String SerializePayload() const override;


    /**
     * <p>The name of the Elasticsearch domain that you want to permanently delete.</p>
     */
    inline const Aws::String& GetDomainName() const{ return m_domainName; }

    /**
     * <p>The name of the Elasticsearch domain that you want to permanently delete.</p>
     */
    inline bool DomainNameHasBeenSet() const { return m_domainNameHasBeenSet; }

    /**
     * <p>The name of the Elasticsearch domain that you want to permanently delete.</p>
     */
    inline void SetDomainName(const Aws::String& value) { m_domainNameHasBeenSet = true; m_domainName = value; }

    /**
     * <p>The name of the Elasticsearch domain that you want to permanently delete.</p>
     */
    inline void SetDomainName(Aws::String&& value) { m_domainNameHasBeenSet = true; m_domainName = std::move(value); }

    /**
     * <p>The name of the Elasticsearch domain that you want to permanently delete.</p>
     */
    inline void SetDomainName(const char* value) { m_domainNameHasBeenSet = true; m_domainName.assign(value); }

    /**
     * <p>The name of the Elasticsearch domain that you want to permanently delete.</p>
     */
    inline DeleteElasticsearchDomainRequest& WithDomainName(const Aws::String& value) { SetDomainName(value); return *this;}

    /**
     * <p>The name of the Elasticsearch domain that you want to permanently delete.</p>
     */
    inline DeleteElasticsearchDomainRequest& WithDomainName(Aws::String&& value) { SetDomainName(std::move(value)); return *this;}

    /**
     * <p>The name of the Elasticsearch domain that you want to permanently delete.</p>
     */
    inline DeleteElasticsearchDomainRequest& WithDomainName(const char* value) { SetDomainName(value); return *this;}

  private:

    Aws::String m_domainName;
    bool m_domainNameHasBeenSet;
  };

} // namespace Model
} // namespace ElasticsearchService
} // namespace Aws
