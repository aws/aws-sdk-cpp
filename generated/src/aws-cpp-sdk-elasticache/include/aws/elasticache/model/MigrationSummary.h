/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/elasticache/ElastiCache_EXPORTS.h>
#include <aws/elasticache/model/Endpoint.h>

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
 * <p>Provides a summary of the current migration status for a serverless
 * cache.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/elasticache-2015-02-02/MigrationSummary">AWS
 * API Reference</a></p>
 */
class MigrationSummary {
 public:
  AWS_ELASTICACHE_API MigrationSummary() = default;
  AWS_ELASTICACHE_API MigrationSummary(const Aws::Utils::Xml::XmlNode& xmlNode);
  AWS_ELASTICACHE_API MigrationSummary& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

  AWS_ELASTICACHE_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
  AWS_ELASTICACHE_API void OutputToStream(Aws::OStream& oStream, const char* location) const;

  ///@{
  /**
   * <p>The current status of the migration.</p>
   */
  inline const Aws::String& GetStatus() const { return m_status; }
  inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
  template <typename StatusT = Aws::String>
  void SetStatus(StatusT&& value) {
    m_statusHasBeenSet = true;
    m_status = std::forward<StatusT>(value);
  }
  template <typename StatusT = Aws::String>
  MigrationSummary& WithStatus(StatusT&& value) {
    SetStatus(std::forward<StatusT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The migration endpoint, which is the standard endpoint of the serverless
   * cache. Point your application at this endpoint during the migration. Until
   * cutover, ElastiCache routes requests on this endpoint to your source.</p>
   */
  inline const Endpoint& GetMigrationEndpoint() const { return m_migrationEndpoint; }
  inline bool MigrationEndpointHasBeenSet() const { return m_migrationEndpointHasBeenSet; }
  template <typename MigrationEndpointT = Endpoint>
  void SetMigrationEndpoint(MigrationEndpointT&& value) {
    m_migrationEndpointHasBeenSet = true;
    m_migrationEndpoint = std::forward<MigrationEndpointT>(value);
  }
  template <typename MigrationEndpointT = Endpoint>
  MigrationSummary& WithMigrationEndpoint(MigrationEndpointT&& value) {
    SetMigrationEndpoint(std::forward<MigrationEndpointT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The cutover configuration for the migration.</p>
   */
  inline const Aws::String& GetCutoverMode() const { return m_cutoverMode; }
  inline bool CutoverModeHasBeenSet() const { return m_cutoverModeHasBeenSet; }
  template <typename CutoverModeT = Aws::String>
  void SetCutoverMode(CutoverModeT&& value) {
    m_cutoverModeHasBeenSet = true;
    m_cutoverMode = std::forward<CutoverModeT>(value);
  }
  template <typename CutoverModeT = Aws::String>
  MigrationSummary& WithCutoverMode(CutoverModeT&& value) {
    SetCutoverMode(std::forward<CutoverModeT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_status;

  Endpoint m_migrationEndpoint;

  Aws::String m_cutoverMode;
  bool m_statusHasBeenSet = false;
  bool m_migrationEndpointHasBeenSet = false;
  bool m_cutoverModeHasBeenSet = false;
};

}  // namespace Model
}  // namespace ElastiCache
}  // namespace Aws
