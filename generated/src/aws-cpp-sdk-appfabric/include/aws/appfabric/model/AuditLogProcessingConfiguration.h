/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/appfabric/AppFabric_EXPORTS.h>
#include <aws/appfabric/model/Schema.h>
#include <aws/appfabric/model/Format.h>
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
   * <p>Contains information about an audit log processing
   * configuration.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/appfabric-2023-05-19/AuditLogProcessingConfiguration">AWS
   * API Reference</a></p>
   */
  class AuditLogProcessingConfiguration
  {
  public:
    AWS_APPFABRIC_API AuditLogProcessingConfiguration();
    AWS_APPFABRIC_API AuditLogProcessingConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPFABRIC_API AuditLogProcessingConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPFABRIC_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The event schema in which the audit logs need to be formatted.</p>
     */
    inline const Schema& GetSchema() const{ return m_schema; }

    /**
     * <p>The event schema in which the audit logs need to be formatted.</p>
     */
    inline bool SchemaHasBeenSet() const { return m_schemaHasBeenSet; }

    /**
     * <p>The event schema in which the audit logs need to be formatted.</p>
     */
    inline void SetSchema(const Schema& value) { m_schemaHasBeenSet = true; m_schema = value; }

    /**
     * <p>The event schema in which the audit logs need to be formatted.</p>
     */
    inline void SetSchema(Schema&& value) { m_schemaHasBeenSet = true; m_schema = std::move(value); }

    /**
     * <p>The event schema in which the audit logs need to be formatted.</p>
     */
    inline AuditLogProcessingConfiguration& WithSchema(const Schema& value) { SetSchema(value); return *this;}

    /**
     * <p>The event schema in which the audit logs need to be formatted.</p>
     */
    inline AuditLogProcessingConfiguration& WithSchema(Schema&& value) { SetSchema(std::move(value)); return *this;}


    /**
     * <p>The format in which the audit logs need to be formatted.</p>
     */
    inline const Format& GetFormat() const{ return m_format; }

    /**
     * <p>The format in which the audit logs need to be formatted.</p>
     */
    inline bool FormatHasBeenSet() const { return m_formatHasBeenSet; }

    /**
     * <p>The format in which the audit logs need to be formatted.</p>
     */
    inline void SetFormat(const Format& value) { m_formatHasBeenSet = true; m_format = value; }

    /**
     * <p>The format in which the audit logs need to be formatted.</p>
     */
    inline void SetFormat(Format&& value) { m_formatHasBeenSet = true; m_format = std::move(value); }

    /**
     * <p>The format in which the audit logs need to be formatted.</p>
     */
    inline AuditLogProcessingConfiguration& WithFormat(const Format& value) { SetFormat(value); return *this;}

    /**
     * <p>The format in which the audit logs need to be formatted.</p>
     */
    inline AuditLogProcessingConfiguration& WithFormat(Format&& value) { SetFormat(std::move(value)); return *this;}

  private:

    Schema m_schema;
    bool m_schemaHasBeenSet = false;

    Format m_format;
    bool m_formatHasBeenSet = false;
  };

} // namespace Model
} // namespace AppFabric
} // namespace Aws
