/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/elasticache/ElastiCache_EXPORTS.h>
#include <aws/elasticache/model/IntegrationStatus.h>
#include <aws/elasticache/model/IntegrationType.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Xml {
class XmlNode;
}  // namespace Xml
}  // namespace Utils
namespace ElastiCache {
namespace Model {

/**
 * <p>An integration configured on the serverless cache, and its current status.
 * ElastiCache supports DynamoDB integration.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/elasticache-2015-02-02/Integration">AWS
 * API Reference</a></p>
 */
class Integration {
 public:
  AWS_ELASTICACHE_API Integration() = default;
  AWS_ELASTICACHE_API Integration(const Aws::Utils::Xml::XmlNode& xmlNode);
  AWS_ELASTICACHE_API Integration& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

  AWS_ELASTICACHE_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
  AWS_ELASTICACHE_API void OutputToStream(Aws::OStream& oStream, const char* location) const;

  ///@{
  /**
   * <p>The integration type. ElastiCache supports <code>dynamodb</code>.</p>
   */
  inline IntegrationType GetIntegrationType() const { return m_integrationType; }
  inline bool IntegrationTypeHasBeenSet() const { return m_integrationTypeHasBeenSet; }
  inline void SetIntegrationType(IntegrationType value) {
    m_integrationTypeHasBeenSet = true;
    m_integrationType = value;
  }
  inline Integration& WithIntegrationType(IntegrationType value) {
    SetIntegrationType(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The current status of the integration. Valid values are:</p> <ul> <li> <p>
   * <code>enabled</code> – The integration is enabled.</p> </li> <li> <p>
   * <code>disabled</code> – The integration is disabled.</p> </li> </ul>
   */
  inline IntegrationStatus GetStatus() const { return m_status; }
  inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
  inline void SetStatus(IntegrationStatus value) {
    m_statusHasBeenSet = true;
    m_status = value;
  }
  inline Integration& WithStatus(IntegrationStatus value) {
    SetStatus(value);
    return *this;
  }
  ///@}
 private:
  IntegrationType m_integrationType{IntegrationType::NOT_SET};

  IntegrationStatus m_status{IntegrationStatus::NOT_SET};
  bool m_integrationTypeHasBeenSet = false;
  bool m_statusHasBeenSet = false;
};

}  // namespace Model
}  // namespace ElastiCache
}  // namespace Aws
