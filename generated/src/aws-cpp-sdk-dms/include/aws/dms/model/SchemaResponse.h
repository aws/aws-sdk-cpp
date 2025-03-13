/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/dms/DatabaseMigrationService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/dms/model/ServerShortInfoResponse.h>
#include <aws/dms/model/DatabaseShortInfoResponse.h>
#include <aws/dms/model/SchemaShortInfoResponse.h>
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
   * <p>Describes a schema in a Fleet Advisor collector inventory.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/dms-2016-01-01/SchemaResponse">AWS
   * API Reference</a></p>
   */
  class SchemaResponse
  {
  public:
    AWS_DATABASEMIGRATIONSERVICE_API SchemaResponse() = default;
    AWS_DATABASEMIGRATIONSERVICE_API SchemaResponse(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATABASEMIGRATIONSERVICE_API SchemaResponse& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATABASEMIGRATIONSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The number of lines of code in a schema in a Fleet Advisor collector
     * inventory.</p>
     */
    inline long long GetCodeLineCount() const { return m_codeLineCount; }
    inline bool CodeLineCountHasBeenSet() const { return m_codeLineCountHasBeenSet; }
    inline void SetCodeLineCount(long long value) { m_codeLineCountHasBeenSet = true; m_codeLineCount = value; }
    inline SchemaResponse& WithCodeLineCount(long long value) { SetCodeLineCount(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The size level of the code in a schema in a Fleet Advisor collector
     * inventory.</p>
     */
    inline long long GetCodeSize() const { return m_codeSize; }
    inline bool CodeSizeHasBeenSet() const { return m_codeSizeHasBeenSet; }
    inline void SetCodeSize(long long value) { m_codeSizeHasBeenSet = true; m_codeSize = value; }
    inline SchemaResponse& WithCodeSize(long long value) { SetCodeSize(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The complexity level of the code in a schema in a Fleet Advisor collector
     * inventory.</p>
     */
    inline const Aws::String& GetComplexity() const { return m_complexity; }
    inline bool ComplexityHasBeenSet() const { return m_complexityHasBeenSet; }
    template<typename ComplexityT = Aws::String>
    void SetComplexity(ComplexityT&& value) { m_complexityHasBeenSet = true; m_complexity = std::forward<ComplexityT>(value); }
    template<typename ComplexityT = Aws::String>
    SchemaResponse& WithComplexity(ComplexityT&& value) { SetComplexity(std::forward<ComplexityT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The database server for a schema in a Fleet Advisor collector inventory.</p>
     */
    inline const ServerShortInfoResponse& GetServer() const { return m_server; }
    inline bool ServerHasBeenSet() const { return m_serverHasBeenSet; }
    template<typename ServerT = ServerShortInfoResponse>
    void SetServer(ServerT&& value) { m_serverHasBeenSet = true; m_server = std::forward<ServerT>(value); }
    template<typename ServerT = ServerShortInfoResponse>
    SchemaResponse& WithServer(ServerT&& value) { SetServer(std::forward<ServerT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The database for a schema in a Fleet Advisor collector inventory.</p>
     */
    inline const DatabaseShortInfoResponse& GetDatabaseInstance() const { return m_databaseInstance; }
    inline bool DatabaseInstanceHasBeenSet() const { return m_databaseInstanceHasBeenSet; }
    template<typename DatabaseInstanceT = DatabaseShortInfoResponse>
    void SetDatabaseInstance(DatabaseInstanceT&& value) { m_databaseInstanceHasBeenSet = true; m_databaseInstance = std::forward<DatabaseInstanceT>(value); }
    template<typename DatabaseInstanceT = DatabaseShortInfoResponse>
    SchemaResponse& WithDatabaseInstance(DatabaseInstanceT&& value) { SetDatabaseInstance(std::forward<DatabaseInstanceT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of a schema in a Fleet Advisor collector inventory.</p>
     */
    inline const Aws::String& GetSchemaId() const { return m_schemaId; }
    inline bool SchemaIdHasBeenSet() const { return m_schemaIdHasBeenSet; }
    template<typename SchemaIdT = Aws::String>
    void SetSchemaId(SchemaIdT&& value) { m_schemaIdHasBeenSet = true; m_schemaId = std::forward<SchemaIdT>(value); }
    template<typename SchemaIdT = Aws::String>
    SchemaResponse& WithSchemaId(SchemaIdT&& value) { SetSchemaId(std::forward<SchemaIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of a schema in a Fleet Advisor collector inventory.</p>
     */
    inline const Aws::String& GetSchemaName() const { return m_schemaName; }
    inline bool SchemaNameHasBeenSet() const { return m_schemaNameHasBeenSet; }
    template<typename SchemaNameT = Aws::String>
    void SetSchemaName(SchemaNameT&& value) { m_schemaNameHasBeenSet = true; m_schemaName = std::forward<SchemaNameT>(value); }
    template<typename SchemaNameT = Aws::String>
    SchemaResponse& WithSchemaName(SchemaNameT&& value) { SetSchemaName(std::forward<SchemaNameT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const SchemaShortInfoResponse& GetOriginalSchema() const { return m_originalSchema; }
    inline bool OriginalSchemaHasBeenSet() const { return m_originalSchemaHasBeenSet; }
    template<typename OriginalSchemaT = SchemaShortInfoResponse>
    void SetOriginalSchema(OriginalSchemaT&& value) { m_originalSchemaHasBeenSet = true; m_originalSchema = std::forward<OriginalSchemaT>(value); }
    template<typename OriginalSchemaT = SchemaShortInfoResponse>
    SchemaResponse& WithOriginalSchema(OriginalSchemaT&& value) { SetOriginalSchema(std::forward<OriginalSchemaT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The similarity value for a schema in a Fleet Advisor collector inventory. A
     * higher similarity value indicates that a schema is likely to be a duplicate.</p>
     */
    inline double GetSimilarity() const { return m_similarity; }
    inline bool SimilarityHasBeenSet() const { return m_similarityHasBeenSet; }
    inline void SetSimilarity(double value) { m_similarityHasBeenSet = true; m_similarity = value; }
    inline SchemaResponse& WithSimilarity(double value) { SetSimilarity(value); return *this;}
    ///@}
  private:

    long long m_codeLineCount{0};
    bool m_codeLineCountHasBeenSet = false;

    long long m_codeSize{0};
    bool m_codeSizeHasBeenSet = false;

    Aws::String m_complexity;
    bool m_complexityHasBeenSet = false;

    ServerShortInfoResponse m_server;
    bool m_serverHasBeenSet = false;

    DatabaseShortInfoResponse m_databaseInstance;
    bool m_databaseInstanceHasBeenSet = false;

    Aws::String m_schemaId;
    bool m_schemaIdHasBeenSet = false;

    Aws::String m_schemaName;
    bool m_schemaNameHasBeenSet = false;

    SchemaShortInfoResponse m_originalSchema;
    bool m_originalSchemaHasBeenSet = false;

    double m_similarity{0.0};
    bool m_similarityHasBeenSet = false;
  };

} // namespace Model
} // namespace DatabaseMigrationService
} // namespace Aws
