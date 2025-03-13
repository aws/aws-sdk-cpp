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
    AWS_BEDROCK_API ImportedModelSummary() = default;
    AWS_BEDROCK_API ImportedModelSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCK_API ImportedModelSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCK_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the imported model.</p>
     */
    inline const Aws::String& GetModelArn() const { return m_modelArn; }
    inline bool ModelArnHasBeenSet() const { return m_modelArnHasBeenSet; }
    template<typename ModelArnT = Aws::String>
    void SetModelArn(ModelArnT&& value) { m_modelArnHasBeenSet = true; m_modelArn = std::forward<ModelArnT>(value); }
    template<typename ModelArnT = Aws::String>
    ImportedModelSummary& WithModelArn(ModelArnT&& value) { SetModelArn(std::forward<ModelArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Name of the imported model.</p>
     */
    inline const Aws::String& GetModelName() const { return m_modelName; }
    inline bool ModelNameHasBeenSet() const { return m_modelNameHasBeenSet; }
    template<typename ModelNameT = Aws::String>
    void SetModelName(ModelNameT&& value) { m_modelNameHasBeenSet = true; m_modelName = std::forward<ModelNameT>(value); }
    template<typename ModelNameT = Aws::String>
    ImportedModelSummary& WithModelName(ModelNameT&& value) { SetModelName(std::forward<ModelNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Creation time of the imported model.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const { return m_creationTime; }
    inline bool CreationTimeHasBeenSet() const { return m_creationTimeHasBeenSet; }
    template<typename CreationTimeT = Aws::Utils::DateTime>
    void SetCreationTime(CreationTimeT&& value) { m_creationTimeHasBeenSet = true; m_creationTime = std::forward<CreationTimeT>(value); }
    template<typename CreationTimeT = Aws::Utils::DateTime>
    ImportedModelSummary& WithCreationTime(CreationTimeT&& value) { SetCreationTime(std::forward<CreationTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies if the imported model supports converse.</p>
     */
    inline bool GetInstructSupported() const { return m_instructSupported; }
    inline bool InstructSupportedHasBeenSet() const { return m_instructSupportedHasBeenSet; }
    inline void SetInstructSupported(bool value) { m_instructSupportedHasBeenSet = true; m_instructSupported = value; }
    inline ImportedModelSummary& WithInstructSupported(bool value) { SetInstructSupported(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The architecture of the imported model.</p>
     */
    inline const Aws::String& GetModelArchitecture() const { return m_modelArchitecture; }
    inline bool ModelArchitectureHasBeenSet() const { return m_modelArchitectureHasBeenSet; }
    template<typename ModelArchitectureT = Aws::String>
    void SetModelArchitecture(ModelArchitectureT&& value) { m_modelArchitectureHasBeenSet = true; m_modelArchitecture = std::forward<ModelArchitectureT>(value); }
    template<typename ModelArchitectureT = Aws::String>
    ImportedModelSummary& WithModelArchitecture(ModelArchitectureT&& value) { SetModelArchitecture(std::forward<ModelArchitectureT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_modelArn;
    bool m_modelArnHasBeenSet = false;

    Aws::String m_modelName;
    bool m_modelNameHasBeenSet = false;

    Aws::Utils::DateTime m_creationTime{};
    bool m_creationTimeHasBeenSet = false;

    bool m_instructSupported{false};
    bool m_instructSupportedHasBeenSet = false;

    Aws::String m_modelArchitecture;
    bool m_modelArchitectureHasBeenSet = false;
  };

} // namespace Model
} // namespace Bedrock
} // namespace Aws
