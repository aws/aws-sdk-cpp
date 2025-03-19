/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/glue/Glue_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/glue/model/DataFormat.h>
#include <aws/glue/model/Compatibility.h>
#include <aws/glue/model/SchemaStatus.h>
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
  class GetSchemaResult
  {
  public:
    AWS_GLUE_API GetSchemaResult() = default;
    AWS_GLUE_API GetSchemaResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_GLUE_API GetSchemaResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The name of the registry.</p>
     */
    inline const Aws::String& GetRegistryName() const { return m_registryName; }
    template<typename RegistryNameT = Aws::String>
    void SetRegistryName(RegistryNameT&& value) { m_registryNameHasBeenSet = true; m_registryName = std::forward<RegistryNameT>(value); }
    template<typename RegistryNameT = Aws::String>
    GetSchemaResult& WithRegistryName(RegistryNameT&& value) { SetRegistryName(std::forward<RegistryNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the registry.</p>
     */
    inline const Aws::String& GetRegistryArn() const { return m_registryArn; }
    template<typename RegistryArnT = Aws::String>
    void SetRegistryArn(RegistryArnT&& value) { m_registryArnHasBeenSet = true; m_registryArn = std::forward<RegistryArnT>(value); }
    template<typename RegistryArnT = Aws::String>
    GetSchemaResult& WithRegistryArn(RegistryArnT&& value) { SetRegistryArn(std::forward<RegistryArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the schema.</p>
     */
    inline const Aws::String& GetSchemaName() const { return m_schemaName; }
    template<typename SchemaNameT = Aws::String>
    void SetSchemaName(SchemaNameT&& value) { m_schemaNameHasBeenSet = true; m_schemaName = std::forward<SchemaNameT>(value); }
    template<typename SchemaNameT = Aws::String>
    GetSchemaResult& WithSchemaName(SchemaNameT&& value) { SetSchemaName(std::forward<SchemaNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the schema.</p>
     */
    inline const Aws::String& GetSchemaArn() const { return m_schemaArn; }
    template<typename SchemaArnT = Aws::String>
    void SetSchemaArn(SchemaArnT&& value) { m_schemaArnHasBeenSet = true; m_schemaArn = std::forward<SchemaArnT>(value); }
    template<typename SchemaArnT = Aws::String>
    GetSchemaResult& WithSchemaArn(SchemaArnT&& value) { SetSchemaArn(std::forward<SchemaArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A description of schema if specified when created</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    GetSchemaResult& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The data format of the schema definition. Currently <code>AVRO</code>,
     * <code>JSON</code> and <code>PROTOBUF</code> are supported.</p>
     */
    inline DataFormat GetDataFormat() const { return m_dataFormat; }
    inline void SetDataFormat(DataFormat value) { m_dataFormatHasBeenSet = true; m_dataFormat = value; }
    inline GetSchemaResult& WithDataFormat(DataFormat value) { SetDataFormat(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The compatibility mode of the schema.</p>
     */
    inline Compatibility GetCompatibility() const { return m_compatibility; }
    inline void SetCompatibility(Compatibility value) { m_compatibilityHasBeenSet = true; m_compatibility = value; }
    inline GetSchemaResult& WithCompatibility(Compatibility value) { SetCompatibility(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The version number of the checkpoint (the last time the compatibility mode
     * was changed).</p>
     */
    inline long long GetSchemaCheckpoint() const { return m_schemaCheckpoint; }
    inline void SetSchemaCheckpoint(long long value) { m_schemaCheckpointHasBeenSet = true; m_schemaCheckpoint = value; }
    inline GetSchemaResult& WithSchemaCheckpoint(long long value) { SetSchemaCheckpoint(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The latest version of the schema associated with the returned schema
     * definition.</p>
     */
    inline long long GetLatestSchemaVersion() const { return m_latestSchemaVersion; }
    inline void SetLatestSchemaVersion(long long value) { m_latestSchemaVersionHasBeenSet = true; m_latestSchemaVersion = value; }
    inline GetSchemaResult& WithLatestSchemaVersion(long long value) { SetLatestSchemaVersion(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The next version of the schema associated with the returned schema
     * definition.</p>
     */
    inline long long GetNextSchemaVersion() const { return m_nextSchemaVersion; }
    inline void SetNextSchemaVersion(long long value) { m_nextSchemaVersionHasBeenSet = true; m_nextSchemaVersion = value; }
    inline GetSchemaResult& WithNextSchemaVersion(long long value) { SetNextSchemaVersion(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the schema.</p>
     */
    inline SchemaStatus GetSchemaStatus() const { return m_schemaStatus; }
    inline void SetSchemaStatus(SchemaStatus value) { m_schemaStatusHasBeenSet = true; m_schemaStatus = value; }
    inline GetSchemaResult& WithSchemaStatus(SchemaStatus value) { SetSchemaStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time the schema was created.</p>
     */
    inline const Aws::String& GetCreatedTime() const { return m_createdTime; }
    template<typename CreatedTimeT = Aws::String>
    void SetCreatedTime(CreatedTimeT&& value) { m_createdTimeHasBeenSet = true; m_createdTime = std::forward<CreatedTimeT>(value); }
    template<typename CreatedTimeT = Aws::String>
    GetSchemaResult& WithCreatedTime(CreatedTimeT&& value) { SetCreatedTime(std::forward<CreatedTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time the schema was updated.</p>
     */
    inline const Aws::String& GetUpdatedTime() const { return m_updatedTime; }
    template<typename UpdatedTimeT = Aws::String>
    void SetUpdatedTime(UpdatedTimeT&& value) { m_updatedTimeHasBeenSet = true; m_updatedTime = std::forward<UpdatedTimeT>(value); }
    template<typename UpdatedTimeT = Aws::String>
    GetSchemaResult& WithUpdatedTime(UpdatedTimeT&& value) { SetUpdatedTime(std::forward<UpdatedTimeT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetSchemaResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_registryName;
    bool m_registryNameHasBeenSet = false;

    Aws::String m_registryArn;
    bool m_registryArnHasBeenSet = false;

    Aws::String m_schemaName;
    bool m_schemaNameHasBeenSet = false;

    Aws::String m_schemaArn;
    bool m_schemaArnHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    DataFormat m_dataFormat{DataFormat::NOT_SET};
    bool m_dataFormatHasBeenSet = false;

    Compatibility m_compatibility{Compatibility::NOT_SET};
    bool m_compatibilityHasBeenSet = false;

    long long m_schemaCheckpoint{0};
    bool m_schemaCheckpointHasBeenSet = false;

    long long m_latestSchemaVersion{0};
    bool m_latestSchemaVersionHasBeenSet = false;

    long long m_nextSchemaVersion{0};
    bool m_nextSchemaVersionHasBeenSet = false;

    SchemaStatus m_schemaStatus{SchemaStatus::NOT_SET};
    bool m_schemaStatusHasBeenSet = false;

    Aws::String m_createdTime;
    bool m_createdTimeHasBeenSet = false;

    Aws::String m_updatedTime;
    bool m_updatedTimeHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
