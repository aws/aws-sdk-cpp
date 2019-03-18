/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#pragma once
#include <aws/appsync/AppSync_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/appsync/model/TypeDefinitionFormat.h>
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
namespace AppSync
{
namespace Model
{

  /**
   * <p>Describes a type.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/appsync-2017-07-25/Type">AWS API
   * Reference</a></p>
   */
  class AWS_APPSYNC_API Type
  {
  public:
    Type();
    Type(Aws::Utils::Json::JsonView jsonValue);
    Type& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The type name.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The type name.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The type name.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The type name.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The type name.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The type name.</p>
     */
    inline Type& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The type name.</p>
     */
    inline Type& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The type name.</p>
     */
    inline Type& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The type description.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>The type description.</p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>The type description.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>The type description.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>The type description.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>The type description.</p>
     */
    inline Type& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>The type description.</p>
     */
    inline Type& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>The type description.</p>
     */
    inline Type& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>The type ARN.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }

    /**
     * <p>The type ARN.</p>
     */
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }

    /**
     * <p>The type ARN.</p>
     */
    inline void SetArn(const Aws::String& value) { m_arnHasBeenSet = true; m_arn = value; }

    /**
     * <p>The type ARN.</p>
     */
    inline void SetArn(Aws::String&& value) { m_arnHasBeenSet = true; m_arn = std::move(value); }

    /**
     * <p>The type ARN.</p>
     */
    inline void SetArn(const char* value) { m_arnHasBeenSet = true; m_arn.assign(value); }

    /**
     * <p>The type ARN.</p>
     */
    inline Type& WithArn(const Aws::String& value) { SetArn(value); return *this;}

    /**
     * <p>The type ARN.</p>
     */
    inline Type& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}

    /**
     * <p>The type ARN.</p>
     */
    inline Type& WithArn(const char* value) { SetArn(value); return *this;}


    /**
     * <p>The type definition.</p>
     */
    inline const Aws::String& GetDefinition() const{ return m_definition; }

    /**
     * <p>The type definition.</p>
     */
    inline bool DefinitionHasBeenSet() const { return m_definitionHasBeenSet; }

    /**
     * <p>The type definition.</p>
     */
    inline void SetDefinition(const Aws::String& value) { m_definitionHasBeenSet = true; m_definition = value; }

    /**
     * <p>The type definition.</p>
     */
    inline void SetDefinition(Aws::String&& value) { m_definitionHasBeenSet = true; m_definition = std::move(value); }

    /**
     * <p>The type definition.</p>
     */
    inline void SetDefinition(const char* value) { m_definitionHasBeenSet = true; m_definition.assign(value); }

    /**
     * <p>The type definition.</p>
     */
    inline Type& WithDefinition(const Aws::String& value) { SetDefinition(value); return *this;}

    /**
     * <p>The type definition.</p>
     */
    inline Type& WithDefinition(Aws::String&& value) { SetDefinition(std::move(value)); return *this;}

    /**
     * <p>The type definition.</p>
     */
    inline Type& WithDefinition(const char* value) { SetDefinition(value); return *this;}


    /**
     * <p>The type format: SDL or JSON.</p>
     */
    inline const TypeDefinitionFormat& GetFormat() const{ return m_format; }

    /**
     * <p>The type format: SDL or JSON.</p>
     */
    inline bool FormatHasBeenSet() const { return m_formatHasBeenSet; }

    /**
     * <p>The type format: SDL or JSON.</p>
     */
    inline void SetFormat(const TypeDefinitionFormat& value) { m_formatHasBeenSet = true; m_format = value; }

    /**
     * <p>The type format: SDL or JSON.</p>
     */
    inline void SetFormat(TypeDefinitionFormat&& value) { m_formatHasBeenSet = true; m_format = std::move(value); }

    /**
     * <p>The type format: SDL or JSON.</p>
     */
    inline Type& WithFormat(const TypeDefinitionFormat& value) { SetFormat(value); return *this;}

    /**
     * <p>The type format: SDL or JSON.</p>
     */
    inline Type& WithFormat(TypeDefinitionFormat&& value) { SetFormat(std::move(value)); return *this;}

  private:

    Aws::String m_name;
    bool m_nameHasBeenSet;

    Aws::String m_description;
    bool m_descriptionHasBeenSet;

    Aws::String m_arn;
    bool m_arnHasBeenSet;

    Aws::String m_definition;
    bool m_definitionHasBeenSet;

    TypeDefinitionFormat m_format;
    bool m_formatHasBeenSet;
  };

} // namespace Model
} // namespace AppSync
} // namespace Aws
