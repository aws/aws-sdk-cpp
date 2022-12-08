/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securityhub/SecurityHub_EXPORTS.h>
#include <aws/securityhub/model/AwsElasticsearchDomainLogPublishingOptionsLogConfig.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace SecurityHub
{
namespace Model
{

  /**
   * <p>configures the CloudWatch Logs to publish for the Elasticsearch
   * domain.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/AwsElasticsearchDomainLogPublishingOptions">AWS
   * API Reference</a></p>
   */
  class AwsElasticsearchDomainLogPublishingOptions
  {
  public:
    AWS_SECURITYHUB_API AwsElasticsearchDomainLogPublishingOptions();
    AWS_SECURITYHUB_API AwsElasticsearchDomainLogPublishingOptions(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API AwsElasticsearchDomainLogPublishingOptions& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Configures the OpenSearch index logs publishing.</p>
     */
    inline const AwsElasticsearchDomainLogPublishingOptionsLogConfig& GetIndexSlowLogs() const{ return m_indexSlowLogs; }

    /**
     * <p>Configures the OpenSearch index logs publishing.</p>
     */
    inline bool IndexSlowLogsHasBeenSet() const { return m_indexSlowLogsHasBeenSet; }

    /**
     * <p>Configures the OpenSearch index logs publishing.</p>
     */
    inline void SetIndexSlowLogs(const AwsElasticsearchDomainLogPublishingOptionsLogConfig& value) { m_indexSlowLogsHasBeenSet = true; m_indexSlowLogs = value; }

    /**
     * <p>Configures the OpenSearch index logs publishing.</p>
     */
    inline void SetIndexSlowLogs(AwsElasticsearchDomainLogPublishingOptionsLogConfig&& value) { m_indexSlowLogsHasBeenSet = true; m_indexSlowLogs = std::move(value); }

    /**
     * <p>Configures the OpenSearch index logs publishing.</p>
     */
    inline AwsElasticsearchDomainLogPublishingOptions& WithIndexSlowLogs(const AwsElasticsearchDomainLogPublishingOptionsLogConfig& value) { SetIndexSlowLogs(value); return *this;}

    /**
     * <p>Configures the OpenSearch index logs publishing.</p>
     */
    inline AwsElasticsearchDomainLogPublishingOptions& WithIndexSlowLogs(AwsElasticsearchDomainLogPublishingOptionsLogConfig&& value) { SetIndexSlowLogs(std::move(value)); return *this;}


    /**
     * <p>Configures the OpenSearch search slow log publishing.</p>
     */
    inline const AwsElasticsearchDomainLogPublishingOptionsLogConfig& GetSearchSlowLogs() const{ return m_searchSlowLogs; }

    /**
     * <p>Configures the OpenSearch search slow log publishing.</p>
     */
    inline bool SearchSlowLogsHasBeenSet() const { return m_searchSlowLogsHasBeenSet; }

    /**
     * <p>Configures the OpenSearch search slow log publishing.</p>
     */
    inline void SetSearchSlowLogs(const AwsElasticsearchDomainLogPublishingOptionsLogConfig& value) { m_searchSlowLogsHasBeenSet = true; m_searchSlowLogs = value; }

    /**
     * <p>Configures the OpenSearch search slow log publishing.</p>
     */
    inline void SetSearchSlowLogs(AwsElasticsearchDomainLogPublishingOptionsLogConfig&& value) { m_searchSlowLogsHasBeenSet = true; m_searchSlowLogs = std::move(value); }

    /**
     * <p>Configures the OpenSearch search slow log publishing.</p>
     */
    inline AwsElasticsearchDomainLogPublishingOptions& WithSearchSlowLogs(const AwsElasticsearchDomainLogPublishingOptionsLogConfig& value) { SetSearchSlowLogs(value); return *this;}

    /**
     * <p>Configures the OpenSearch search slow log publishing.</p>
     */
    inline AwsElasticsearchDomainLogPublishingOptions& WithSearchSlowLogs(AwsElasticsearchDomainLogPublishingOptionsLogConfig&& value) { SetSearchSlowLogs(std::move(value)); return *this;}


    
    inline const AwsElasticsearchDomainLogPublishingOptionsLogConfig& GetAuditLogs() const{ return m_auditLogs; }

    
    inline bool AuditLogsHasBeenSet() const { return m_auditLogsHasBeenSet; }

    
    inline void SetAuditLogs(const AwsElasticsearchDomainLogPublishingOptionsLogConfig& value) { m_auditLogsHasBeenSet = true; m_auditLogs = value; }

    
    inline void SetAuditLogs(AwsElasticsearchDomainLogPublishingOptionsLogConfig&& value) { m_auditLogsHasBeenSet = true; m_auditLogs = std::move(value); }

    
    inline AwsElasticsearchDomainLogPublishingOptions& WithAuditLogs(const AwsElasticsearchDomainLogPublishingOptionsLogConfig& value) { SetAuditLogs(value); return *this;}

    
    inline AwsElasticsearchDomainLogPublishingOptions& WithAuditLogs(AwsElasticsearchDomainLogPublishingOptionsLogConfig&& value) { SetAuditLogs(std::move(value)); return *this;}

  private:

    AwsElasticsearchDomainLogPublishingOptionsLogConfig m_indexSlowLogs;
    bool m_indexSlowLogsHasBeenSet = false;

    AwsElasticsearchDomainLogPublishingOptionsLogConfig m_searchSlowLogs;
    bool m_searchSlowLogsHasBeenSet = false;

    AwsElasticsearchDomainLogPublishingOptionsLogConfig m_auditLogs;
    bool m_auditLogsHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
