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
namespace ElasticsearchService
{
namespace Model
{

  /**
   * <p>Container for the parameters to the
   * <code><a>CancelElasticsearchServiceSoftwareUpdate</a></code> operation.
   * Specifies the name of the Elasticsearch domain that you wish to cancel a service
   * software update on.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/es-2015-01-01/CancelElasticsearchServiceSoftwareUpdateRequest">AWS
   * API Reference</a></p>
   */
  class CancelElasticsearchServiceSoftwareUpdateRequest : public ElasticsearchServiceRequest
  {
  public:
    AWS_ELASTICSEARCHSERVICE_API CancelElasticsearchServiceSoftwareUpdateRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CancelElasticsearchServiceSoftwareUpdate"; }

    AWS_ELASTICSEARCHSERVICE_API Aws::String SerializePayload() const override;


    /**
     * <p>The name of the domain that you want to stop the latest service software
     * update on.</p>
     */
    inline const Aws::String& GetDomainName() const{ return m_domainName; }

    /**
     * <p>The name of the domain that you want to stop the latest service software
     * update on.</p>
     */
    inline bool DomainNameHasBeenSet() const { return m_domainNameHasBeenSet; }

    /**
     * <p>The name of the domain that you want to stop the latest service software
     * update on.</p>
     */
    inline void SetDomainName(const Aws::String& value) { m_domainNameHasBeenSet = true; m_domainName = value; }

    /**
     * <p>The name of the domain that you want to stop the latest service software
     * update on.</p>
     */
    inline void SetDomainName(Aws::String&& value) { m_domainNameHasBeenSet = true; m_domainName = std::move(value); }

    /**
     * <p>The name of the domain that you want to stop the latest service software
     * update on.</p>
     */
    inline void SetDomainName(const char* value) { m_domainNameHasBeenSet = true; m_domainName.assign(value); }

    /**
     * <p>The name of the domain that you want to stop the latest service software
     * update on.</p>
     */
    inline CancelElasticsearchServiceSoftwareUpdateRequest& WithDomainName(const Aws::String& value) { SetDomainName(value); return *this;}

    /**
     * <p>The name of the domain that you want to stop the latest service software
     * update on.</p>
     */
    inline CancelElasticsearchServiceSoftwareUpdateRequest& WithDomainName(Aws::String&& value) { SetDomainName(std::move(value)); return *this;}

    /**
     * <p>The name of the domain that you want to stop the latest service software
     * update on.</p>
     */
    inline CancelElasticsearchServiceSoftwareUpdateRequest& WithDomainName(const char* value) { SetDomainName(value); return *this;}

  private:

    Aws::String m_domainName;
    bool m_domainNameHasBeenSet = false;
  };

} // namespace Model
} // namespace ElasticsearchService
} // namespace Aws
