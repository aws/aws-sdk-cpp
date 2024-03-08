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
   * <p>Container for parameters of the <code>CancelDomainConfigChange</code>
   * operation.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/es-2015-01-01/CancelDomainConfigChangeRequest">AWS
   * API Reference</a></p>
   */
  class CancelDomainConfigChangeRequest : public ElasticsearchServiceRequest
  {
  public:
    AWS_ELASTICSEARCHSERVICE_API CancelDomainConfigChangeRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CancelDomainConfigChange"; }

    AWS_ELASTICSEARCHSERVICE_API Aws::String SerializePayload() const override;


    /**
     * <p>Name of the OpenSearch Service domain configuration request to cancel.</p>
     */
    inline const Aws::String& GetDomainName() const{ return m_domainName; }

    /**
     * <p>Name of the OpenSearch Service domain configuration request to cancel.</p>
     */
    inline bool DomainNameHasBeenSet() const { return m_domainNameHasBeenSet; }

    /**
     * <p>Name of the OpenSearch Service domain configuration request to cancel.</p>
     */
    inline void SetDomainName(const Aws::String& value) { m_domainNameHasBeenSet = true; m_domainName = value; }

    /**
     * <p>Name of the OpenSearch Service domain configuration request to cancel.</p>
     */
    inline void SetDomainName(Aws::String&& value) { m_domainNameHasBeenSet = true; m_domainName = std::move(value); }

    /**
     * <p>Name of the OpenSearch Service domain configuration request to cancel.</p>
     */
    inline void SetDomainName(const char* value) { m_domainNameHasBeenSet = true; m_domainName.assign(value); }

    /**
     * <p>Name of the OpenSearch Service domain configuration request to cancel.</p>
     */
    inline CancelDomainConfigChangeRequest& WithDomainName(const Aws::String& value) { SetDomainName(value); return *this;}

    /**
     * <p>Name of the OpenSearch Service domain configuration request to cancel.</p>
     */
    inline CancelDomainConfigChangeRequest& WithDomainName(Aws::String&& value) { SetDomainName(std::move(value)); return *this;}

    /**
     * <p>Name of the OpenSearch Service domain configuration request to cancel.</p>
     */
    inline CancelDomainConfigChangeRequest& WithDomainName(const char* value) { SetDomainName(value); return *this;}


    /**
     * <p>When set to <b>True</b>, returns the list of change IDs and properties that
     * will be cancelled without actually cancelling the change.</p>
     */
    inline bool GetDryRun() const{ return m_dryRun; }

    /**
     * <p>When set to <b>True</b>, returns the list of change IDs and properties that
     * will be cancelled without actually cancelling the change.</p>
     */
    inline bool DryRunHasBeenSet() const { return m_dryRunHasBeenSet; }

    /**
     * <p>When set to <b>True</b>, returns the list of change IDs and properties that
     * will be cancelled without actually cancelling the change.</p>
     */
    inline void SetDryRun(bool value) { m_dryRunHasBeenSet = true; m_dryRun = value; }

    /**
     * <p>When set to <b>True</b>, returns the list of change IDs and properties that
     * will be cancelled without actually cancelling the change.</p>
     */
    inline CancelDomainConfigChangeRequest& WithDryRun(bool value) { SetDryRun(value); return *this;}

  private:

    Aws::String m_domainName;
    bool m_domainNameHasBeenSet = false;

    bool m_dryRun;
    bool m_dryRunHasBeenSet = false;
  };

} // namespace Model
} // namespace ElasticsearchService
} // namespace Aws
