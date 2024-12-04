/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-data-automation/BedrockDataAutomation_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/bedrock-data-automation/model/Type.h>
#include <aws/core/utils/DateTime.h>
#include <aws/bedrock-data-automation/model/BlueprintStage.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
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
namespace BedrockDataAutomation
{
namespace Model
{

  /**
   * <p>Contains the information of a Blueprint.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-data-automation-2023-07-26/Blueprint">AWS
   * API Reference</a></p>
   */
  class Blueprint
  {
  public:
    AWS_BEDROCKDATAAUTOMATION_API Blueprint();
    AWS_BEDROCKDATAAUTOMATION_API Blueprint(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKDATAAUTOMATION_API Blueprint& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKDATAAUTOMATION_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    
    inline const Aws::String& GetBlueprintArn() const{ return m_blueprintArn; }
    inline bool BlueprintArnHasBeenSet() const { return m_blueprintArnHasBeenSet; }
    inline void SetBlueprintArn(const Aws::String& value) { m_blueprintArnHasBeenSet = true; m_blueprintArn = value; }
    inline void SetBlueprintArn(Aws::String&& value) { m_blueprintArnHasBeenSet = true; m_blueprintArn = std::move(value); }
    inline void SetBlueprintArn(const char* value) { m_blueprintArnHasBeenSet = true; m_blueprintArn.assign(value); }
    inline Blueprint& WithBlueprintArn(const Aws::String& value) { SetBlueprintArn(value); return *this;}
    inline Blueprint& WithBlueprintArn(Aws::String&& value) { SetBlueprintArn(std::move(value)); return *this;}
    inline Blueprint& WithBlueprintArn(const char* value) { SetBlueprintArn(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetSchema() const{ return m_schema; }
    inline bool SchemaHasBeenSet() const { return m_schemaHasBeenSet; }
    inline void SetSchema(const Aws::String& value) { m_schemaHasBeenSet = true; m_schema = value; }
    inline void SetSchema(Aws::String&& value) { m_schemaHasBeenSet = true; m_schema = std::move(value); }
    inline void SetSchema(const char* value) { m_schemaHasBeenSet = true; m_schema.assign(value); }
    inline Blueprint& WithSchema(const Aws::String& value) { SetSchema(value); return *this;}
    inline Blueprint& WithSchema(Aws::String&& value) { SetSchema(std::move(value)); return *this;}
    inline Blueprint& WithSchema(const char* value) { SetSchema(value); return *this;}
    ///@}

    ///@{
    
    inline const Type& GetType() const{ return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(const Type& value) { m_typeHasBeenSet = true; m_type = value; }
    inline void SetType(Type&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }
    inline Blueprint& WithType(const Type& value) { SetType(value); return *this;}
    inline Blueprint& WithType(Type&& value) { SetType(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::Utils::DateTime& GetCreationTime() const{ return m_creationTime; }
    inline bool CreationTimeHasBeenSet() const { return m_creationTimeHasBeenSet; }
    inline void SetCreationTime(const Aws::Utils::DateTime& value) { m_creationTimeHasBeenSet = true; m_creationTime = value; }
    inline void SetCreationTime(Aws::Utils::DateTime&& value) { m_creationTimeHasBeenSet = true; m_creationTime = std::move(value); }
    inline Blueprint& WithCreationTime(const Aws::Utils::DateTime& value) { SetCreationTime(value); return *this;}
    inline Blueprint& WithCreationTime(Aws::Utils::DateTime&& value) { SetCreationTime(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::Utils::DateTime& GetLastModifiedTime() const{ return m_lastModifiedTime; }
    inline bool LastModifiedTimeHasBeenSet() const { return m_lastModifiedTimeHasBeenSet; }
    inline void SetLastModifiedTime(const Aws::Utils::DateTime& value) { m_lastModifiedTimeHasBeenSet = true; m_lastModifiedTime = value; }
    inline void SetLastModifiedTime(Aws::Utils::DateTime&& value) { m_lastModifiedTimeHasBeenSet = true; m_lastModifiedTime = std::move(value); }
    inline Blueprint& WithLastModifiedTime(const Aws::Utils::DateTime& value) { SetLastModifiedTime(value); return *this;}
    inline Blueprint& WithLastModifiedTime(Aws::Utils::DateTime&& value) { SetLastModifiedTime(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetBlueprintName() const{ return m_blueprintName; }
    inline bool BlueprintNameHasBeenSet() const { return m_blueprintNameHasBeenSet; }
    inline void SetBlueprintName(const Aws::String& value) { m_blueprintNameHasBeenSet = true; m_blueprintName = value; }
    inline void SetBlueprintName(Aws::String&& value) { m_blueprintNameHasBeenSet = true; m_blueprintName = std::move(value); }
    inline void SetBlueprintName(const char* value) { m_blueprintNameHasBeenSet = true; m_blueprintName.assign(value); }
    inline Blueprint& WithBlueprintName(const Aws::String& value) { SetBlueprintName(value); return *this;}
    inline Blueprint& WithBlueprintName(Aws::String&& value) { SetBlueprintName(std::move(value)); return *this;}
    inline Blueprint& WithBlueprintName(const char* value) { SetBlueprintName(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetBlueprintVersion() const{ return m_blueprintVersion; }
    inline bool BlueprintVersionHasBeenSet() const { return m_blueprintVersionHasBeenSet; }
    inline void SetBlueprintVersion(const Aws::String& value) { m_blueprintVersionHasBeenSet = true; m_blueprintVersion = value; }
    inline void SetBlueprintVersion(Aws::String&& value) { m_blueprintVersionHasBeenSet = true; m_blueprintVersion = std::move(value); }
    inline void SetBlueprintVersion(const char* value) { m_blueprintVersionHasBeenSet = true; m_blueprintVersion.assign(value); }
    inline Blueprint& WithBlueprintVersion(const Aws::String& value) { SetBlueprintVersion(value); return *this;}
    inline Blueprint& WithBlueprintVersion(Aws::String&& value) { SetBlueprintVersion(std::move(value)); return *this;}
    inline Blueprint& WithBlueprintVersion(const char* value) { SetBlueprintVersion(value); return *this;}
    ///@}

    ///@{
    
    inline const BlueprintStage& GetBlueprintStage() const{ return m_blueprintStage; }
    inline bool BlueprintStageHasBeenSet() const { return m_blueprintStageHasBeenSet; }
    inline void SetBlueprintStage(const BlueprintStage& value) { m_blueprintStageHasBeenSet = true; m_blueprintStage = value; }
    inline void SetBlueprintStage(BlueprintStage&& value) { m_blueprintStageHasBeenSet = true; m_blueprintStage = std::move(value); }
    inline Blueprint& WithBlueprintStage(const BlueprintStage& value) { SetBlueprintStage(value); return *this;}
    inline Blueprint& WithBlueprintStage(BlueprintStage&& value) { SetBlueprintStage(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetKmsKeyId() const{ return m_kmsKeyId; }
    inline bool KmsKeyIdHasBeenSet() const { return m_kmsKeyIdHasBeenSet; }
    inline void SetKmsKeyId(const Aws::String& value) { m_kmsKeyIdHasBeenSet = true; m_kmsKeyId = value; }
    inline void SetKmsKeyId(Aws::String&& value) { m_kmsKeyIdHasBeenSet = true; m_kmsKeyId = std::move(value); }
    inline void SetKmsKeyId(const char* value) { m_kmsKeyIdHasBeenSet = true; m_kmsKeyId.assign(value); }
    inline Blueprint& WithKmsKeyId(const Aws::String& value) { SetKmsKeyId(value); return *this;}
    inline Blueprint& WithKmsKeyId(Aws::String&& value) { SetKmsKeyId(std::move(value)); return *this;}
    inline Blueprint& WithKmsKeyId(const char* value) { SetKmsKeyId(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::Map<Aws::String, Aws::String>& GetKmsEncryptionContext() const{ return m_kmsEncryptionContext; }
    inline bool KmsEncryptionContextHasBeenSet() const { return m_kmsEncryptionContextHasBeenSet; }
    inline void SetKmsEncryptionContext(const Aws::Map<Aws::String, Aws::String>& value) { m_kmsEncryptionContextHasBeenSet = true; m_kmsEncryptionContext = value; }
    inline void SetKmsEncryptionContext(Aws::Map<Aws::String, Aws::String>&& value) { m_kmsEncryptionContextHasBeenSet = true; m_kmsEncryptionContext = std::move(value); }
    inline Blueprint& WithKmsEncryptionContext(const Aws::Map<Aws::String, Aws::String>& value) { SetKmsEncryptionContext(value); return *this;}
    inline Blueprint& WithKmsEncryptionContext(Aws::Map<Aws::String, Aws::String>&& value) { SetKmsEncryptionContext(std::move(value)); return *this;}
    inline Blueprint& AddKmsEncryptionContext(const Aws::String& key, const Aws::String& value) { m_kmsEncryptionContextHasBeenSet = true; m_kmsEncryptionContext.emplace(key, value); return *this; }
    inline Blueprint& AddKmsEncryptionContext(Aws::String&& key, const Aws::String& value) { m_kmsEncryptionContextHasBeenSet = true; m_kmsEncryptionContext.emplace(std::move(key), value); return *this; }
    inline Blueprint& AddKmsEncryptionContext(const Aws::String& key, Aws::String&& value) { m_kmsEncryptionContextHasBeenSet = true; m_kmsEncryptionContext.emplace(key, std::move(value)); return *this; }
    inline Blueprint& AddKmsEncryptionContext(Aws::String&& key, Aws::String&& value) { m_kmsEncryptionContextHasBeenSet = true; m_kmsEncryptionContext.emplace(std::move(key), std::move(value)); return *this; }
    inline Blueprint& AddKmsEncryptionContext(const char* key, Aws::String&& value) { m_kmsEncryptionContextHasBeenSet = true; m_kmsEncryptionContext.emplace(key, std::move(value)); return *this; }
    inline Blueprint& AddKmsEncryptionContext(Aws::String&& key, const char* value) { m_kmsEncryptionContextHasBeenSet = true; m_kmsEncryptionContext.emplace(std::move(key), value); return *this; }
    inline Blueprint& AddKmsEncryptionContext(const char* key, const char* value) { m_kmsEncryptionContextHasBeenSet = true; m_kmsEncryptionContext.emplace(key, value); return *this; }
    ///@}
  private:

    Aws::String m_blueprintArn;
    bool m_blueprintArnHasBeenSet = false;

    Aws::String m_schema;
    bool m_schemaHasBeenSet = false;

    Type m_type;
    bool m_typeHasBeenSet = false;

    Aws::Utils::DateTime m_creationTime;
    bool m_creationTimeHasBeenSet = false;

    Aws::Utils::DateTime m_lastModifiedTime;
    bool m_lastModifiedTimeHasBeenSet = false;

    Aws::String m_blueprintName;
    bool m_blueprintNameHasBeenSet = false;

    Aws::String m_blueprintVersion;
    bool m_blueprintVersionHasBeenSet = false;

    BlueprintStage m_blueprintStage;
    bool m_blueprintStageHasBeenSet = false;

    Aws::String m_kmsKeyId;
    bool m_kmsKeyIdHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_kmsEncryptionContext;
    bool m_kmsEncryptionContextHasBeenSet = false;
  };

} // namespace Model
} // namespace BedrockDataAutomation
} // namespace Aws
