/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/dms/DatabaseMigrationService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/dms/model/ErrorDetails.h>
#include <aws/dms/model/ExportSqlDetails.h>
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
namespace DatabaseMigrationService
{
namespace Model
{

  /**
   * <p>Provides information about a schema conversion action.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/dms-2016-01-01/SchemaConversionRequest">AWS
   * API Reference</a></p>
   */
  class SchemaConversionRequest
  {
  public:
    AWS_DATABASEMIGRATIONSERVICE_API SchemaConversionRequest();
    AWS_DATABASEMIGRATIONSERVICE_API SchemaConversionRequest(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATABASEMIGRATIONSERVICE_API SchemaConversionRequest& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATABASEMIGRATIONSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The schema conversion action status.</p>
     */
    inline const Aws::String& GetStatus() const{ return m_status; }

    /**
     * <p>The schema conversion action status.</p>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p>The schema conversion action status.</p>
     */
    inline void SetStatus(const Aws::String& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>The schema conversion action status.</p>
     */
    inline void SetStatus(Aws::String&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p>The schema conversion action status.</p>
     */
    inline void SetStatus(const char* value) { m_statusHasBeenSet = true; m_status.assign(value); }

    /**
     * <p>The schema conversion action status.</p>
     */
    inline SchemaConversionRequest& WithStatus(const Aws::String& value) { SetStatus(value); return *this;}

    /**
     * <p>The schema conversion action status.</p>
     */
    inline SchemaConversionRequest& WithStatus(Aws::String&& value) { SetStatus(std::move(value)); return *this;}

    /**
     * <p>The schema conversion action status.</p>
     */
    inline SchemaConversionRequest& WithStatus(const char* value) { SetStatus(value); return *this;}


    /**
     * <p>The identifier for the schema conversion action.</p>
     */
    inline const Aws::String& GetRequestIdentifier() const{ return m_requestIdentifier; }

    /**
     * <p>The identifier for the schema conversion action.</p>
     */
    inline bool RequestIdentifierHasBeenSet() const { return m_requestIdentifierHasBeenSet; }

    /**
     * <p>The identifier for the schema conversion action.</p>
     */
    inline void SetRequestIdentifier(const Aws::String& value) { m_requestIdentifierHasBeenSet = true; m_requestIdentifier = value; }

    /**
     * <p>The identifier for the schema conversion action.</p>
     */
    inline void SetRequestIdentifier(Aws::String&& value) { m_requestIdentifierHasBeenSet = true; m_requestIdentifier = std::move(value); }

    /**
     * <p>The identifier for the schema conversion action.</p>
     */
    inline void SetRequestIdentifier(const char* value) { m_requestIdentifierHasBeenSet = true; m_requestIdentifier.assign(value); }

    /**
     * <p>The identifier for the schema conversion action.</p>
     */
    inline SchemaConversionRequest& WithRequestIdentifier(const Aws::String& value) { SetRequestIdentifier(value); return *this;}

    /**
     * <p>The identifier for the schema conversion action.</p>
     */
    inline SchemaConversionRequest& WithRequestIdentifier(Aws::String&& value) { SetRequestIdentifier(std::move(value)); return *this;}

    /**
     * <p>The identifier for the schema conversion action.</p>
     */
    inline SchemaConversionRequest& WithRequestIdentifier(const char* value) { SetRequestIdentifier(value); return *this;}


    /**
     * <p>The migration project ARN.</p>
     */
    inline const Aws::String& GetMigrationProjectArn() const{ return m_migrationProjectArn; }

    /**
     * <p>The migration project ARN.</p>
     */
    inline bool MigrationProjectArnHasBeenSet() const { return m_migrationProjectArnHasBeenSet; }

    /**
     * <p>The migration project ARN.</p>
     */
    inline void SetMigrationProjectArn(const Aws::String& value) { m_migrationProjectArnHasBeenSet = true; m_migrationProjectArn = value; }

    /**
     * <p>The migration project ARN.</p>
     */
    inline void SetMigrationProjectArn(Aws::String&& value) { m_migrationProjectArnHasBeenSet = true; m_migrationProjectArn = std::move(value); }

    /**
     * <p>The migration project ARN.</p>
     */
    inline void SetMigrationProjectArn(const char* value) { m_migrationProjectArnHasBeenSet = true; m_migrationProjectArn.assign(value); }

    /**
     * <p>The migration project ARN.</p>
     */
    inline SchemaConversionRequest& WithMigrationProjectArn(const Aws::String& value) { SetMigrationProjectArn(value); return *this;}

    /**
     * <p>The migration project ARN.</p>
     */
    inline SchemaConversionRequest& WithMigrationProjectArn(Aws::String&& value) { SetMigrationProjectArn(std::move(value)); return *this;}

    /**
     * <p>The migration project ARN.</p>
     */
    inline SchemaConversionRequest& WithMigrationProjectArn(const char* value) { SetMigrationProjectArn(value); return *this;}


    
    inline const ErrorDetails& GetError() const{ return m_error; }

    
    inline bool ErrorHasBeenSet() const { return m_errorHasBeenSet; }

    
    inline void SetError(const ErrorDetails& value) { m_errorHasBeenSet = true; m_error = value; }

    
    inline void SetError(ErrorDetails&& value) { m_errorHasBeenSet = true; m_error = std::move(value); }

    
    inline SchemaConversionRequest& WithError(const ErrorDetails& value) { SetError(value); return *this;}

    
    inline SchemaConversionRequest& WithError(ErrorDetails&& value) { SetError(std::move(value)); return *this;}


    
    inline const ExportSqlDetails& GetExportSqlDetails() const{ return m_exportSqlDetails; }

    
    inline bool ExportSqlDetailsHasBeenSet() const { return m_exportSqlDetailsHasBeenSet; }

    
    inline void SetExportSqlDetails(const ExportSqlDetails& value) { m_exportSqlDetailsHasBeenSet = true; m_exportSqlDetails = value; }

    
    inline void SetExportSqlDetails(ExportSqlDetails&& value) { m_exportSqlDetailsHasBeenSet = true; m_exportSqlDetails = std::move(value); }

    
    inline SchemaConversionRequest& WithExportSqlDetails(const ExportSqlDetails& value) { SetExportSqlDetails(value); return *this;}

    
    inline SchemaConversionRequest& WithExportSqlDetails(ExportSqlDetails&& value) { SetExportSqlDetails(std::move(value)); return *this;}

  private:

    Aws::String m_status;
    bool m_statusHasBeenSet = false;

    Aws::String m_requestIdentifier;
    bool m_requestIdentifierHasBeenSet = false;

    Aws::String m_migrationProjectArn;
    bool m_migrationProjectArnHasBeenSet = false;

    ErrorDetails m_error;
    bool m_errorHasBeenSet = false;

    ExportSqlDetails m_exportSqlDetails;
    bool m_exportSqlDetailsHasBeenSet = false;
  };

} // namespace Model
} // namespace DatabaseMigrationService
} // namespace Aws
