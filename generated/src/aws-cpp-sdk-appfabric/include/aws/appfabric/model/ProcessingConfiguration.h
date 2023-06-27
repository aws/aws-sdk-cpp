/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/appfabric/AppFabric_EXPORTS.h>
#include <aws/appfabric/model/AuditLogProcessingConfiguration.h>
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
   * <p>Contains information about how ingested data is processed.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/appfabric-2023-05-19/ProcessingConfiguration">AWS
   * API Reference</a></p>
   */
  class ProcessingConfiguration
  {
  public:
    AWS_APPFABRIC_API ProcessingConfiguration();
    AWS_APPFABRIC_API ProcessingConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPFABRIC_API ProcessingConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPFABRIC_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Contains information about an audit log processing configuration.</p>
     */
    inline const AuditLogProcessingConfiguration& GetAuditLog() const{ return m_auditLog; }

    /**
     * <p>Contains information about an audit log processing configuration.</p>
     */
    inline bool AuditLogHasBeenSet() const { return m_auditLogHasBeenSet; }

    /**
     * <p>Contains information about an audit log processing configuration.</p>
     */
    inline void SetAuditLog(const AuditLogProcessingConfiguration& value) { m_auditLogHasBeenSet = true; m_auditLog = value; }

    /**
     * <p>Contains information about an audit log processing configuration.</p>
     */
    inline void SetAuditLog(AuditLogProcessingConfiguration&& value) { m_auditLogHasBeenSet = true; m_auditLog = std::move(value); }

    /**
     * <p>Contains information about an audit log processing configuration.</p>
     */
    inline ProcessingConfiguration& WithAuditLog(const AuditLogProcessingConfiguration& value) { SetAuditLog(value); return *this;}

    /**
     * <p>Contains information about an audit log processing configuration.</p>
     */
    inline ProcessingConfiguration& WithAuditLog(AuditLogProcessingConfiguration&& value) { SetAuditLog(std::move(value)); return *this;}

  private:

    AuditLogProcessingConfiguration m_auditLog;
    bool m_auditLogHasBeenSet = false;
  };

} // namespace Model
} // namespace AppFabric
} // namespace Aws
