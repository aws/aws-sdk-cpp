/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securityhub/SecurityHub_EXPORTS.h>
#include <aws/securityhub/model/AwsOpenSearchServiceDomainLogPublishingOption.h>
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
   * <p>Configures the CloudWatch Logs to publish for the OpenSearch
   * domain.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/AwsOpenSearchServiceDomainLogPublishingOptionsDetails">AWS
   * API Reference</a></p>
   */
  class AwsOpenSearchServiceDomainLogPublishingOptionsDetails
  {
  public:
    AWS_SECURITYHUB_API AwsOpenSearchServiceDomainLogPublishingOptionsDetails();
    AWS_SECURITYHUB_API AwsOpenSearchServiceDomainLogPublishingOptionsDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API AwsOpenSearchServiceDomainLogPublishingOptionsDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Configures the OpenSearch index logs publishing.</p>
     */
    inline const AwsOpenSearchServiceDomainLogPublishingOption& GetIndexSlowLogs() const{ return m_indexSlowLogs; }

    /**
     * <p>Configures the OpenSearch index logs publishing.</p>
     */
    inline bool IndexSlowLogsHasBeenSet() const { return m_indexSlowLogsHasBeenSet; }

    /**
     * <p>Configures the OpenSearch index logs publishing.</p>
     */
    inline void SetIndexSlowLogs(const AwsOpenSearchServiceDomainLogPublishingOption& value) { m_indexSlowLogsHasBeenSet = true; m_indexSlowLogs = value; }

    /**
     * <p>Configures the OpenSearch index logs publishing.</p>
     */
    inline void SetIndexSlowLogs(AwsOpenSearchServiceDomainLogPublishingOption&& value) { m_indexSlowLogsHasBeenSet = true; m_indexSlowLogs = std::move(value); }

    /**
     * <p>Configures the OpenSearch index logs publishing.</p>
     */
    inline AwsOpenSearchServiceDomainLogPublishingOptionsDetails& WithIndexSlowLogs(const AwsOpenSearchServiceDomainLogPublishingOption& value) { SetIndexSlowLogs(value); return *this;}

    /**
     * <p>Configures the OpenSearch index logs publishing.</p>
     */
    inline AwsOpenSearchServiceDomainLogPublishingOptionsDetails& WithIndexSlowLogs(AwsOpenSearchServiceDomainLogPublishingOption&& value) { SetIndexSlowLogs(std::move(value)); return *this;}


    /**
     * <p>Configures the OpenSearch search slow log publishing.</p>
     */
    inline const AwsOpenSearchServiceDomainLogPublishingOption& GetSearchSlowLogs() const{ return m_searchSlowLogs; }

    /**
     * <p>Configures the OpenSearch search slow log publishing.</p>
     */
    inline bool SearchSlowLogsHasBeenSet() const { return m_searchSlowLogsHasBeenSet; }

    /**
     * <p>Configures the OpenSearch search slow log publishing.</p>
     */
    inline void SetSearchSlowLogs(const AwsOpenSearchServiceDomainLogPublishingOption& value) { m_searchSlowLogsHasBeenSet = true; m_searchSlowLogs = value; }

    /**
     * <p>Configures the OpenSearch search slow log publishing.</p>
     */
    inline void SetSearchSlowLogs(AwsOpenSearchServiceDomainLogPublishingOption&& value) { m_searchSlowLogsHasBeenSet = true; m_searchSlowLogs = std::move(value); }

    /**
     * <p>Configures the OpenSearch search slow log publishing.</p>
     */
    inline AwsOpenSearchServiceDomainLogPublishingOptionsDetails& WithSearchSlowLogs(const AwsOpenSearchServiceDomainLogPublishingOption& value) { SetSearchSlowLogs(value); return *this;}

    /**
     * <p>Configures the OpenSearch search slow log publishing.</p>
     */
    inline AwsOpenSearchServiceDomainLogPublishingOptionsDetails& WithSearchSlowLogs(AwsOpenSearchServiceDomainLogPublishingOption&& value) { SetSearchSlowLogs(std::move(value)); return *this;}


    /**
     * <p>Configures the OpenSearch audit logs publishing.</p>
     */
    inline const AwsOpenSearchServiceDomainLogPublishingOption& GetAuditLogs() const{ return m_auditLogs; }

    /**
     * <p>Configures the OpenSearch audit logs publishing.</p>
     */
    inline bool AuditLogsHasBeenSet() const { return m_auditLogsHasBeenSet; }

    /**
     * <p>Configures the OpenSearch audit logs publishing.</p>
     */
    inline void SetAuditLogs(const AwsOpenSearchServiceDomainLogPublishingOption& value) { m_auditLogsHasBeenSet = true; m_auditLogs = value; }

    /**
     * <p>Configures the OpenSearch audit logs publishing.</p>
     */
    inline void SetAuditLogs(AwsOpenSearchServiceDomainLogPublishingOption&& value) { m_auditLogsHasBeenSet = true; m_auditLogs = std::move(value); }

    /**
     * <p>Configures the OpenSearch audit logs publishing.</p>
     */
    inline AwsOpenSearchServiceDomainLogPublishingOptionsDetails& WithAuditLogs(const AwsOpenSearchServiceDomainLogPublishingOption& value) { SetAuditLogs(value); return *this;}

    /**
     * <p>Configures the OpenSearch audit logs publishing.</p>
     */
    inline AwsOpenSearchServiceDomainLogPublishingOptionsDetails& WithAuditLogs(AwsOpenSearchServiceDomainLogPublishingOption&& value) { SetAuditLogs(std::move(value)); return *this;}

  private:

    AwsOpenSearchServiceDomainLogPublishingOption m_indexSlowLogs;
    bool m_indexSlowLogsHasBeenSet = false;

    AwsOpenSearchServiceDomainLogPublishingOption m_searchSlowLogs;
    bool m_searchSlowLogsHasBeenSet = false;

    AwsOpenSearchServiceDomainLogPublishingOption m_auditLogs;
    bool m_auditLogsHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
