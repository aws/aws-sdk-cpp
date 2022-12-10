/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/glue/Glue_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace Glue
{
namespace Model
{
  class PutSchemaVersionMetadataResult
  {
  public:
    AWS_GLUE_API PutSchemaVersionMetadataResult();
    AWS_GLUE_API PutSchemaVersionMetadataResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_GLUE_API PutSchemaVersionMetadataResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The Amazon Resource Name (ARN) for the schema.</p>
     */
    inline const Aws::String& GetSchemaArn() const{ return m_schemaArn; }

    /**
     * <p>The Amazon Resource Name (ARN) for the schema.</p>
     */
    inline void SetSchemaArn(const Aws::String& value) { m_schemaArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) for the schema.</p>
     */
    inline void SetSchemaArn(Aws::String&& value) { m_schemaArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) for the schema.</p>
     */
    inline void SetSchemaArn(const char* value) { m_schemaArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) for the schema.</p>
     */
    inline PutSchemaVersionMetadataResult& WithSchemaArn(const Aws::String& value) { SetSchemaArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) for the schema.</p>
     */
    inline PutSchemaVersionMetadataResult& WithSchemaArn(Aws::String&& value) { SetSchemaArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) for the schema.</p>
     */
    inline PutSchemaVersionMetadataResult& WithSchemaArn(const char* value) { SetSchemaArn(value); return *this;}


    /**
     * <p>The name for the schema.</p>
     */
    inline const Aws::String& GetSchemaName() const{ return m_schemaName; }

    /**
     * <p>The name for the schema.</p>
     */
    inline void SetSchemaName(const Aws::String& value) { m_schemaName = value; }

    /**
     * <p>The name for the schema.</p>
     */
    inline void SetSchemaName(Aws::String&& value) { m_schemaName = std::move(value); }

    /**
     * <p>The name for the schema.</p>
     */
    inline void SetSchemaName(const char* value) { m_schemaName.assign(value); }

    /**
     * <p>The name for the schema.</p>
     */
    inline PutSchemaVersionMetadataResult& WithSchemaName(const Aws::String& value) { SetSchemaName(value); return *this;}

    /**
     * <p>The name for the schema.</p>
     */
    inline PutSchemaVersionMetadataResult& WithSchemaName(Aws::String&& value) { SetSchemaName(std::move(value)); return *this;}

    /**
     * <p>The name for the schema.</p>
     */
    inline PutSchemaVersionMetadataResult& WithSchemaName(const char* value) { SetSchemaName(value); return *this;}


    /**
     * <p>The name for the registry.</p>
     */
    inline const Aws::String& GetRegistryName() const{ return m_registryName; }

    /**
     * <p>The name for the registry.</p>
     */
    inline void SetRegistryName(const Aws::String& value) { m_registryName = value; }

    /**
     * <p>The name for the registry.</p>
     */
    inline void SetRegistryName(Aws::String&& value) { m_registryName = std::move(value); }

    /**
     * <p>The name for the registry.</p>
     */
    inline void SetRegistryName(const char* value) { m_registryName.assign(value); }

    /**
     * <p>The name for the registry.</p>
     */
    inline PutSchemaVersionMetadataResult& WithRegistryName(const Aws::String& value) { SetRegistryName(value); return *this;}

    /**
     * <p>The name for the registry.</p>
     */
    inline PutSchemaVersionMetadataResult& WithRegistryName(Aws::String&& value) { SetRegistryName(std::move(value)); return *this;}

    /**
     * <p>The name for the registry.</p>
     */
    inline PutSchemaVersionMetadataResult& WithRegistryName(const char* value) { SetRegistryName(value); return *this;}


    /**
     * <p>The latest version of the schema.</p>
     */
    inline bool GetLatestVersion() const{ return m_latestVersion; }

    /**
     * <p>The latest version of the schema.</p>
     */
    inline void SetLatestVersion(bool value) { m_latestVersion = value; }

    /**
     * <p>The latest version of the schema.</p>
     */
    inline PutSchemaVersionMetadataResult& WithLatestVersion(bool value) { SetLatestVersion(value); return *this;}


    /**
     * <p>The version number of the schema.</p>
     */
    inline long long GetVersionNumber() const{ return m_versionNumber; }

    /**
     * <p>The version number of the schema.</p>
     */
    inline void SetVersionNumber(long long value) { m_versionNumber = value; }

    /**
     * <p>The version number of the schema.</p>
     */
    inline PutSchemaVersionMetadataResult& WithVersionNumber(long long value) { SetVersionNumber(value); return *this;}


    /**
     * <p>The unique version ID of the schema version.</p>
     */
    inline const Aws::String& GetSchemaVersionId() const{ return m_schemaVersionId; }

    /**
     * <p>The unique version ID of the schema version.</p>
     */
    inline void SetSchemaVersionId(const Aws::String& value) { m_schemaVersionId = value; }

    /**
     * <p>The unique version ID of the schema version.</p>
     */
    inline void SetSchemaVersionId(Aws::String&& value) { m_schemaVersionId = std::move(value); }

    /**
     * <p>The unique version ID of the schema version.</p>
     */
    inline void SetSchemaVersionId(const char* value) { m_schemaVersionId.assign(value); }

    /**
     * <p>The unique version ID of the schema version.</p>
     */
    inline PutSchemaVersionMetadataResult& WithSchemaVersionId(const Aws::String& value) { SetSchemaVersionId(value); return *this;}

    /**
     * <p>The unique version ID of the schema version.</p>
     */
    inline PutSchemaVersionMetadataResult& WithSchemaVersionId(Aws::String&& value) { SetSchemaVersionId(std::move(value)); return *this;}

    /**
     * <p>The unique version ID of the schema version.</p>
     */
    inline PutSchemaVersionMetadataResult& WithSchemaVersionId(const char* value) { SetSchemaVersionId(value); return *this;}


    /**
     * <p>The metadata key.</p>
     */
    inline const Aws::String& GetMetadataKey() const{ return m_metadataKey; }

    /**
     * <p>The metadata key.</p>
     */
    inline void SetMetadataKey(const Aws::String& value) { m_metadataKey = value; }

    /**
     * <p>The metadata key.</p>
     */
    inline void SetMetadataKey(Aws::String&& value) { m_metadataKey = std::move(value); }

    /**
     * <p>The metadata key.</p>
     */
    inline void SetMetadataKey(const char* value) { m_metadataKey.assign(value); }

    /**
     * <p>The metadata key.</p>
     */
    inline PutSchemaVersionMetadataResult& WithMetadataKey(const Aws::String& value) { SetMetadataKey(value); return *this;}

    /**
     * <p>The metadata key.</p>
     */
    inline PutSchemaVersionMetadataResult& WithMetadataKey(Aws::String&& value) { SetMetadataKey(std::move(value)); return *this;}

    /**
     * <p>The metadata key.</p>
     */
    inline PutSchemaVersionMetadataResult& WithMetadataKey(const char* value) { SetMetadataKey(value); return *this;}


    /**
     * <p>The value of the metadata key.</p>
     */
    inline const Aws::String& GetMetadataValue() const{ return m_metadataValue; }

    /**
     * <p>The value of the metadata key.</p>
     */
    inline void SetMetadataValue(const Aws::String& value) { m_metadataValue = value; }

    /**
     * <p>The value of the metadata key.</p>
     */
    inline void SetMetadataValue(Aws::String&& value) { m_metadataValue = std::move(value); }

    /**
     * <p>The value of the metadata key.</p>
     */
    inline void SetMetadataValue(const char* value) { m_metadataValue.assign(value); }

    /**
     * <p>The value of the metadata key.</p>
     */
    inline PutSchemaVersionMetadataResult& WithMetadataValue(const Aws::String& value) { SetMetadataValue(value); return *this;}

    /**
     * <p>The value of the metadata key.</p>
     */
    inline PutSchemaVersionMetadataResult& WithMetadataValue(Aws::String&& value) { SetMetadataValue(std::move(value)); return *this;}

    /**
     * <p>The value of the metadata key.</p>
     */
    inline PutSchemaVersionMetadataResult& WithMetadataValue(const char* value) { SetMetadataValue(value); return *this;}

  private:

    Aws::String m_schemaArn;

    Aws::String m_schemaName;

    Aws::String m_registryName;

    bool m_latestVersion;

    long long m_versionNumber;

    Aws::String m_schemaVersionId;

    Aws::String m_metadataKey;

    Aws::String m_metadataValue;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
