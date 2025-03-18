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
    AWS_DATABASEMIGRATIONSERVICE_API SchemaConversionRequest() = default;
    AWS_DATABASEMIGRATIONSERVICE_API SchemaConversionRequest(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATABASEMIGRATIONSERVICE_API SchemaConversionRequest& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATABASEMIGRATIONSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The schema conversion action status.</p>
     */
    inline const Aws::String& GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    template<typename StatusT = Aws::String>
    void SetStatus(StatusT&& value) { m_statusHasBeenSet = true; m_status = std::forward<StatusT>(value); }
    template<typename StatusT = Aws::String>
    SchemaConversionRequest& WithStatus(StatusT&& value) { SetStatus(std::forward<StatusT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier for the schema conversion action.</p>
     */
    inline const Aws::String& GetRequestIdentifier() const { return m_requestIdentifier; }
    inline bool RequestIdentifierHasBeenSet() const { return m_requestIdentifierHasBeenSet; }
    template<typename RequestIdentifierT = Aws::String>
    void SetRequestIdentifier(RequestIdentifierT&& value) { m_requestIdentifierHasBeenSet = true; m_requestIdentifier = std::forward<RequestIdentifierT>(value); }
    template<typename RequestIdentifierT = Aws::String>
    SchemaConversionRequest& WithRequestIdentifier(RequestIdentifierT&& value) { SetRequestIdentifier(std::forward<RequestIdentifierT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The migration project ARN.</p>
     */
    inline const Aws::String& GetMigrationProjectArn() const { return m_migrationProjectArn; }
    inline bool MigrationProjectArnHasBeenSet() const { return m_migrationProjectArnHasBeenSet; }
    template<typename MigrationProjectArnT = Aws::String>
    void SetMigrationProjectArn(MigrationProjectArnT&& value) { m_migrationProjectArnHasBeenSet = true; m_migrationProjectArn = std::forward<MigrationProjectArnT>(value); }
    template<typename MigrationProjectArnT = Aws::String>
    SchemaConversionRequest& WithMigrationProjectArn(MigrationProjectArnT&& value) { SetMigrationProjectArn(std::forward<MigrationProjectArnT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const ErrorDetails& GetError() const { return m_error; }
    inline bool ErrorHasBeenSet() const { return m_errorHasBeenSet; }
    template<typename ErrorT = ErrorDetails>
    void SetError(ErrorT&& value) { m_errorHasBeenSet = true; m_error = std::forward<ErrorT>(value); }
    template<typename ErrorT = ErrorDetails>
    SchemaConversionRequest& WithError(ErrorT&& value) { SetError(std::forward<ErrorT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const ExportSqlDetails& GetExportSqlDetails() const { return m_exportSqlDetails; }
    inline bool ExportSqlDetailsHasBeenSet() const { return m_exportSqlDetailsHasBeenSet; }
    template<typename ExportSqlDetailsT = ExportSqlDetails>
    void SetExportSqlDetails(ExportSqlDetailsT&& value) { m_exportSqlDetailsHasBeenSet = true; m_exportSqlDetails = std::forward<ExportSqlDetailsT>(value); }
    template<typename ExportSqlDetailsT = ExportSqlDetails>
    SchemaConversionRequest& WithExportSqlDetails(ExportSqlDetailsT&& value) { SetExportSqlDetails(std::forward<ExportSqlDetailsT>(value)); return *this;}
    ///@}
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
