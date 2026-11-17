/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/elasticache/ElastiCache_EXPORTS.h>
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
 * <p>Specifies an integration to enable on the serverless cache when you create
 * it.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/elasticache-2015-02-02/IntegrationRequest">AWS
 * API Reference</a></p>
 */
class IntegrationRequest {
 public:
  AWS_ELASTICACHE_API IntegrationRequest() = default;
  AWS_ELASTICACHE_API IntegrationRequest(const Aws::Utils::Xml::XmlNode& xmlNode);
  AWS_ELASTICACHE_API IntegrationRequest& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

  AWS_ELASTICACHE_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
  AWS_ELASTICACHE_API void OutputToStream(Aws::OStream& oStream, const char* location) const;

  ///@{
  /**
   * <p>The integration type to enable. Must be <code>dynamodb</code>.</p>
   */
  inline IntegrationType GetIntegrationType() const { return m_integrationType; }
  inline bool IntegrationTypeHasBeenSet() const { return m_integrationTypeHasBeenSet; }
  inline void SetIntegrationType(IntegrationType value) {
    m_integrationTypeHasBeenSet = true;
    m_integrationType = value;
  }
  inline IntegrationRequest& WithIntegrationType(IntegrationType value) {
    SetIntegrationType(value);
    return *this;
  }
  ///@}
 private:
  IntegrationType m_integrationType{IntegrationType::NOT_SET};
  bool m_integrationTypeHasBeenSet = false;
};

}  // namespace Model
}  // namespace ElastiCache
}  // namespace Aws
