/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/appfabric/AppFabric_EXPORTS.h>
#include <aws/appfabric/model/AuditLogDestinationConfiguration.h>
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
namespace AppFabric
{
namespace Model
{

  /**
   * <p>Contains information about the destination of ingested data.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/appfabric-2023-05-19/DestinationConfiguration">AWS
   * API Reference</a></p>
   */
  class DestinationConfiguration
  {
  public:
    AWS_APPFABRIC_API DestinationConfiguration() = default;
    AWS_APPFABRIC_API DestinationConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPFABRIC_API DestinationConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPFABRIC_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Contains information about an audit log destination configuration.</p>
     */
    inline const AuditLogDestinationConfiguration& GetAuditLog() const { return m_auditLog; }
    inline bool AuditLogHasBeenSet() const { return m_auditLogHasBeenSet; }
    template<typename AuditLogT = AuditLogDestinationConfiguration>
    void SetAuditLog(AuditLogT&& value) { m_auditLogHasBeenSet = true; m_auditLog = std::forward<AuditLogT>(value); }
    template<typename AuditLogT = AuditLogDestinationConfiguration>
    DestinationConfiguration& WithAuditLog(AuditLogT&& value) { SetAuditLog(std::forward<AuditLogT>(value)); return *this;}
    ///@}
  private:

    AuditLogDestinationConfiguration m_auditLog;
    bool m_auditLogHasBeenSet = false;
  };

} // namespace Model
} // namespace AppFabric
} // namespace Aws
