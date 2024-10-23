/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock/Bedrock_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
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
namespace Bedrock
{
namespace Model
{

  /**
   * <p>Information about the imported model.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-2023-04-20/ImportedModelSummary">AWS
   * API Reference</a></p>
   */
  class ImportedModelSummary
  {
  public:
    AWS_BEDROCK_API ImportedModelSummary();
    AWS_BEDROCK_API ImportedModelSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCK_API ImportedModelSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCK_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the imported model.</p>
     */
    inline const Aws::String& GetModelArn() const{ return m_modelArn; }
    inline bool ModelArnHasBeenSet() const { return m_modelArnHasBeenSet; }
    inline void SetModelArn(const Aws::String& value) { m_modelArnHasBeenSet = true; m_modelArn = value; }
    inline void SetModelArn(Aws::String&& value) { m_modelArnHasBeenSet = true; m_modelArn = std::move(value); }
    inline void SetModelArn(const char* value) { m_modelArnHasBeenSet = true; m_modelArn.assign(value); }
    inline ImportedModelSummary& WithModelArn(const Aws::String& value) { SetModelArn(value); return *this;}
    inline ImportedModelSummary& WithModelArn(Aws::String&& value) { SetModelArn(std::move(value)); return *this;}
    inline ImportedModelSummary& WithModelArn(const char* value) { SetModelArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Name of the imported model.</p>
     */
    inline const Aws::String& GetModelName() const{ return m_modelName; }
    inline bool ModelNameHasBeenSet() const { return m_modelNameHasBeenSet; }
    inline void SetModelName(const Aws::String& value) { m_modelNameHasBeenSet = true; m_modelName = value; }
    inline void SetModelName(Aws::String&& value) { m_modelNameHasBeenSet = true; m_modelName = std::move(value); }
    inline void SetModelName(const char* value) { m_modelNameHasBeenSet = true; m_modelName.assign(value); }
    inline ImportedModelSummary& WithModelName(const Aws::String& value) { SetModelName(value); return *this;}
    inline ImportedModelSummary& WithModelName(Aws::String&& value) { SetModelName(std::move(value)); return *this;}
    inline ImportedModelSummary& WithModelName(const char* value) { SetModelName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Creation time of the imported model.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const{ return m_creationTime; }
    inline bool CreationTimeHasBeenSet() const { return m_creationTimeHasBeenSet; }
    inline void SetCreationTime(const Aws::Utils::DateTime& value) { m_creationTimeHasBeenSet = true; m_creationTime = value; }
    inline void SetCreationTime(Aws::Utils::DateTime&& value) { m_creationTimeHasBeenSet = true; m_creationTime = std::move(value); }
    inline ImportedModelSummary& WithCreationTime(const Aws::Utils::DateTime& value) { SetCreationTime(value); return *this;}
    inline ImportedModelSummary& WithCreationTime(Aws::Utils::DateTime&& value) { SetCreationTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies if the imported model supports converse.</p>
     */
    inline bool GetInstructSupported() const{ return m_instructSupported; }
    inline bool InstructSupportedHasBeenSet() const { return m_instructSupportedHasBeenSet; }
    inline void SetInstructSupported(bool value) { m_instructSupportedHasBeenSet = true; m_instructSupported = value; }
    inline ImportedModelSummary& WithInstructSupported(bool value) { SetInstructSupported(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The architecture of the imported model.</p>
     */
    inline const Aws::String& GetModelArchitecture() const{ return m_modelArchitecture; }
    inline bool ModelArchitectureHasBeenSet() const { return m_modelArchitectureHasBeenSet; }
    inline void SetModelArchitecture(const Aws::String& value) { m_modelArchitectureHasBeenSet = true; m_modelArchitecture = value; }
    inline void SetModelArchitecture(Aws::String&& value) { m_modelArchitectureHasBeenSet = true; m_modelArchitecture = std::move(value); }
    inline void SetModelArchitecture(const char* value) { m_modelArchitectureHasBeenSet = true; m_modelArchitecture.assign(value); }
    inline ImportedModelSummary& WithModelArchitecture(const Aws::String& value) { SetModelArchitecture(value); return *this;}
    inline ImportedModelSummary& WithModelArchitecture(Aws::String&& value) { SetModelArchitecture(std::move(value)); return *this;}
    inline ImportedModelSummary& WithModelArchitecture(const char* value) { SetModelArchitecture(value); return *this;}
    ///@}
  private:

    Aws::String m_modelArn;
    bool m_modelArnHasBeenSet = false;

    Aws::String m_modelName;
    bool m_modelNameHasBeenSet = false;

    Aws::Utils::DateTime m_creationTime;
    bool m_creationTimeHasBeenSet = false;

    bool m_instructSupported;
    bool m_instructSupportedHasBeenSet = false;

    Aws::String m_modelArchitecture;
    bool m_modelArchitectureHasBeenSet = false;
  };

} // namespace Model
} // namespace Bedrock
} // namespace Aws
