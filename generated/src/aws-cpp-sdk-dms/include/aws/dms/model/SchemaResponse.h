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
    AWS_DATABASEMIGRATIONSERVICE_API SchemaResponse();
    AWS_DATABASEMIGRATIONSERVICE_API SchemaResponse(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATABASEMIGRATIONSERVICE_API SchemaResponse& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATABASEMIGRATIONSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The number of lines of code in a schema in a Fleet Advisor collector
     * inventory.</p>
     */
    inline long long GetCodeLineCount() const{ return m_codeLineCount; }

    /**
     * <p>The number of lines of code in a schema in a Fleet Advisor collector
     * inventory.</p>
     */
    inline bool CodeLineCountHasBeenSet() const { return m_codeLineCountHasBeenSet; }

    /**
     * <p>The number of lines of code in a schema in a Fleet Advisor collector
     * inventory.</p>
     */
    inline void SetCodeLineCount(long long value) { m_codeLineCountHasBeenSet = true; m_codeLineCount = value; }

    /**
     * <p>The number of lines of code in a schema in a Fleet Advisor collector
     * inventory.</p>
     */
    inline SchemaResponse& WithCodeLineCount(long long value) { SetCodeLineCount(value); return *this;}


    /**
     * <p>The size level of the code in a schema in a Fleet Advisor collector
     * inventory.</p>
     */
    inline long long GetCodeSize() const{ return m_codeSize; }

    /**
     * <p>The size level of the code in a schema in a Fleet Advisor collector
     * inventory.</p>
     */
    inline bool CodeSizeHasBeenSet() const { return m_codeSizeHasBeenSet; }

    /**
     * <p>The size level of the code in a schema in a Fleet Advisor collector
     * inventory.</p>
     */
    inline void SetCodeSize(long long value) { m_codeSizeHasBeenSet = true; m_codeSize = value; }

    /**
     * <p>The size level of the code in a schema in a Fleet Advisor collector
     * inventory.</p>
     */
    inline SchemaResponse& WithCodeSize(long long value) { SetCodeSize(value); return *this;}


    /**
     * <p>The complexity level of the code in a schema in a Fleet Advisor collector
     * inventory.</p>
     */
    inline const Aws::String& GetComplexity() const{ return m_complexity; }

    /**
     * <p>The complexity level of the code in a schema in a Fleet Advisor collector
     * inventory.</p>
     */
    inline bool ComplexityHasBeenSet() const { return m_complexityHasBeenSet; }

    /**
     * <p>The complexity level of the code in a schema in a Fleet Advisor collector
     * inventory.</p>
     */
    inline void SetComplexity(const Aws::String& value) { m_complexityHasBeenSet = true; m_complexity = value; }

    /**
     * <p>The complexity level of the code in a schema in a Fleet Advisor collector
     * inventory.</p>
     */
    inline void SetComplexity(Aws::String&& value) { m_complexityHasBeenSet = true; m_complexity = std::move(value); }

    /**
     * <p>The complexity level of the code in a schema in a Fleet Advisor collector
     * inventory.</p>
     */
    inline void SetComplexity(const char* value) { m_complexityHasBeenSet = true; m_complexity.assign(value); }

    /**
     * <p>The complexity level of the code in a schema in a Fleet Advisor collector
     * inventory.</p>
     */
    inline SchemaResponse& WithComplexity(const Aws::String& value) { SetComplexity(value); return *this;}

    /**
     * <p>The complexity level of the code in a schema in a Fleet Advisor collector
     * inventory.</p>
     */
    inline SchemaResponse& WithComplexity(Aws::String&& value) { SetComplexity(std::move(value)); return *this;}

    /**
     * <p>The complexity level of the code in a schema in a Fleet Advisor collector
     * inventory.</p>
     */
    inline SchemaResponse& WithComplexity(const char* value) { SetComplexity(value); return *this;}


    /**
     * <p>The database server for a schema in a Fleet Advisor collector inventory.</p>
     */
    inline const ServerShortInfoResponse& GetServer() const{ return m_server; }

    /**
     * <p>The database server for a schema in a Fleet Advisor collector inventory.</p>
     */
    inline bool ServerHasBeenSet() const { return m_serverHasBeenSet; }

    /**
     * <p>The database server for a schema in a Fleet Advisor collector inventory.</p>
     */
    inline void SetServer(const ServerShortInfoResponse& value) { m_serverHasBeenSet = true; m_server = value; }

    /**
     * <p>The database server for a schema in a Fleet Advisor collector inventory.</p>
     */
    inline void SetServer(ServerShortInfoResponse&& value) { m_serverHasBeenSet = true; m_server = std::move(value); }

    /**
     * <p>The database server for a schema in a Fleet Advisor collector inventory.</p>
     */
    inline SchemaResponse& WithServer(const ServerShortInfoResponse& value) { SetServer(value); return *this;}

    /**
     * <p>The database server for a schema in a Fleet Advisor collector inventory.</p>
     */
    inline SchemaResponse& WithServer(ServerShortInfoResponse&& value) { SetServer(std::move(value)); return *this;}


    /**
     * <p>The database for a schema in a Fleet Advisor collector inventory.</p>
     */
    inline const DatabaseShortInfoResponse& GetDatabaseInstance() const{ return m_databaseInstance; }

    /**
     * <p>The database for a schema in a Fleet Advisor collector inventory.</p>
     */
    inline bool DatabaseInstanceHasBeenSet() const { return m_databaseInstanceHasBeenSet; }

    /**
     * <p>The database for a schema in a Fleet Advisor collector inventory.</p>
     */
    inline void SetDatabaseInstance(const DatabaseShortInfoResponse& value) { m_databaseInstanceHasBeenSet = true; m_databaseInstance = value; }

    /**
     * <p>The database for a schema in a Fleet Advisor collector inventory.</p>
     */
    inline void SetDatabaseInstance(DatabaseShortInfoResponse&& value) { m_databaseInstanceHasBeenSet = true; m_databaseInstance = std::move(value); }

    /**
     * <p>The database for a schema in a Fleet Advisor collector inventory.</p>
     */
    inline SchemaResponse& WithDatabaseInstance(const DatabaseShortInfoResponse& value) { SetDatabaseInstance(value); return *this;}

    /**
     * <p>The database for a schema in a Fleet Advisor collector inventory.</p>
     */
    inline SchemaResponse& WithDatabaseInstance(DatabaseShortInfoResponse&& value) { SetDatabaseInstance(std::move(value)); return *this;}


    /**
     * <p>The ID of a schema in a Fleet Advisor collector inventory.</p>
     */
    inline const Aws::String& GetSchemaId() const{ return m_schemaId; }

    /**
     * <p>The ID of a schema in a Fleet Advisor collector inventory.</p>
     */
    inline bool SchemaIdHasBeenSet() const { return m_schemaIdHasBeenSet; }

    /**
     * <p>The ID of a schema in a Fleet Advisor collector inventory.</p>
     */
    inline void SetSchemaId(const Aws::String& value) { m_schemaIdHasBeenSet = true; m_schemaId = value; }

    /**
     * <p>The ID of a schema in a Fleet Advisor collector inventory.</p>
     */
    inline void SetSchemaId(Aws::String&& value) { m_schemaIdHasBeenSet = true; m_schemaId = std::move(value); }

    /**
     * <p>The ID of a schema in a Fleet Advisor collector inventory.</p>
     */
    inline void SetSchemaId(const char* value) { m_schemaIdHasBeenSet = true; m_schemaId.assign(value); }

    /**
     * <p>The ID of a schema in a Fleet Advisor collector inventory.</p>
     */
    inline SchemaResponse& WithSchemaId(const Aws::String& value) { SetSchemaId(value); return *this;}

    /**
     * <p>The ID of a schema in a Fleet Advisor collector inventory.</p>
     */
    inline SchemaResponse& WithSchemaId(Aws::String&& value) { SetSchemaId(std::move(value)); return *this;}

    /**
     * <p>The ID of a schema in a Fleet Advisor collector inventory.</p>
     */
    inline SchemaResponse& WithSchemaId(const char* value) { SetSchemaId(value); return *this;}


    /**
     * <p>The name of a schema in a Fleet Advisor collector inventory.</p>
     */
    inline const Aws::String& GetSchemaName() const{ return m_schemaName; }

    /**
     * <p>The name of a schema in a Fleet Advisor collector inventory.</p>
     */
    inline bool SchemaNameHasBeenSet() const { return m_schemaNameHasBeenSet; }

    /**
     * <p>The name of a schema in a Fleet Advisor collector inventory.</p>
     */
    inline void SetSchemaName(const Aws::String& value) { m_schemaNameHasBeenSet = true; m_schemaName = value; }

    /**
     * <p>The name of a schema in a Fleet Advisor collector inventory.</p>
     */
    inline void SetSchemaName(Aws::String&& value) { m_schemaNameHasBeenSet = true; m_schemaName = std::move(value); }

    /**
     * <p>The name of a schema in a Fleet Advisor collector inventory.</p>
     */
    inline void SetSchemaName(const char* value) { m_schemaNameHasBeenSet = true; m_schemaName.assign(value); }

    /**
     * <p>The name of a schema in a Fleet Advisor collector inventory.</p>
     */
    inline SchemaResponse& WithSchemaName(const Aws::String& value) { SetSchemaName(value); return *this;}

    /**
     * <p>The name of a schema in a Fleet Advisor collector inventory.</p>
     */
    inline SchemaResponse& WithSchemaName(Aws::String&& value) { SetSchemaName(std::move(value)); return *this;}

    /**
     * <p>The name of a schema in a Fleet Advisor collector inventory.</p>
     */
    inline SchemaResponse& WithSchemaName(const char* value) { SetSchemaName(value); return *this;}


    
    inline const SchemaShortInfoResponse& GetOriginalSchema() const{ return m_originalSchema; }

    
    inline bool OriginalSchemaHasBeenSet() const { return m_originalSchemaHasBeenSet; }

    
    inline void SetOriginalSchema(const SchemaShortInfoResponse& value) { m_originalSchemaHasBeenSet = true; m_originalSchema = value; }

    
    inline void SetOriginalSchema(SchemaShortInfoResponse&& value) { m_originalSchemaHasBeenSet = true; m_originalSchema = std::move(value); }

    
    inline SchemaResponse& WithOriginalSchema(const SchemaShortInfoResponse& value) { SetOriginalSchema(value); return *this;}

    
    inline SchemaResponse& WithOriginalSchema(SchemaShortInfoResponse&& value) { SetOriginalSchema(std::move(value)); return *this;}


    /**
     * <p>The similarity value for a schema in a Fleet Advisor collector inventory. A
     * higher similarity value indicates that a schema is likely to be a duplicate.</p>
     */
    inline double GetSimilarity() const{ return m_similarity; }

    /**
     * <p>The similarity value for a schema in a Fleet Advisor collector inventory. A
     * higher similarity value indicates that a schema is likely to be a duplicate.</p>
     */
    inline bool SimilarityHasBeenSet() const { return m_similarityHasBeenSet; }

    /**
     * <p>The similarity value for a schema in a Fleet Advisor collector inventory. A
     * higher similarity value indicates that a schema is likely to be a duplicate.</p>
     */
    inline void SetSimilarity(double value) { m_similarityHasBeenSet = true; m_similarity = value; }

    /**
     * <p>The similarity value for a schema in a Fleet Advisor collector inventory. A
     * higher similarity value indicates that a schema is likely to be a duplicate.</p>
     */
    inline SchemaResponse& WithSimilarity(double value) { SetSimilarity(value); return *this;}

  private:

    long long m_codeLineCount;
    bool m_codeLineCountHasBeenSet = false;

    long long m_codeSize;
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

    double m_similarity;
    bool m_similarityHasBeenSet = false;
  };

} // namespace Model
} // namespace DatabaseMigrationService
} // namespace Aws
