﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codepipeline/CodePipeline_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace CodePipeline
{
namespace Model
{

  /**
   * <p>A variable declared at the pipeline level.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/codepipeline-2015-07-09/PipelineVariableDeclaration">AWS
   * API Reference</a></p>
   */
  class PipelineVariableDeclaration
  {
  public:
    AWS_CODEPIPELINE_API PipelineVariableDeclaration();
    AWS_CODEPIPELINE_API PipelineVariableDeclaration(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODEPIPELINE_API PipelineVariableDeclaration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODEPIPELINE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of a pipeline-level variable.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline PipelineVariableDeclaration& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline PipelineVariableDeclaration& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline PipelineVariableDeclaration& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The value of a pipeline-level variable.</p>
     */
    inline const Aws::String& GetDefaultValue() const{ return m_defaultValue; }
    inline bool DefaultValueHasBeenSet() const { return m_defaultValueHasBeenSet; }
    inline void SetDefaultValue(const Aws::String& value) { m_defaultValueHasBeenSet = true; m_defaultValue = value; }
    inline void SetDefaultValue(Aws::String&& value) { m_defaultValueHasBeenSet = true; m_defaultValue = std::move(value); }
    inline void SetDefaultValue(const char* value) { m_defaultValueHasBeenSet = true; m_defaultValue.assign(value); }
    inline PipelineVariableDeclaration& WithDefaultValue(const Aws::String& value) { SetDefaultValue(value); return *this;}
    inline PipelineVariableDeclaration& WithDefaultValue(Aws::String&& value) { SetDefaultValue(std::move(value)); return *this;}
    inline PipelineVariableDeclaration& WithDefaultValue(const char* value) { SetDefaultValue(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The description of a pipeline-level variable. It's used to add additional
     * context about the variable, and not being used at time when pipeline
     * executes.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }
    inline PipelineVariableDeclaration& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline PipelineVariableDeclaration& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline PipelineVariableDeclaration& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}
  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_defaultValue;
    bool m_defaultValueHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;
  };

} // namespace Model
} // namespace CodePipeline
} // namespace Aws
