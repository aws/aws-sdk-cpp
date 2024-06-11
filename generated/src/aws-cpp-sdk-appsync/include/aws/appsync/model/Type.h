/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
  class Type
  {
  public:
    AWS_APPSYNC_API Type();
    AWS_APPSYNC_API Type(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPSYNC_API Type& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPSYNC_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The type name.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline Type& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline Type& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline Type& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type description.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }
    inline Type& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline Type& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline Type& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type Amazon Resource Name (ARN).</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }
    inline void SetArn(const Aws::String& value) { m_arnHasBeenSet = true; m_arn = value; }
    inline void SetArn(Aws::String&& value) { m_arnHasBeenSet = true; m_arn = std::move(value); }
    inline void SetArn(const char* value) { m_arnHasBeenSet = true; m_arn.assign(value); }
    inline Type& WithArn(const Aws::String& value) { SetArn(value); return *this;}
    inline Type& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}
    inline Type& WithArn(const char* value) { SetArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type definition.</p>
     */
    inline const Aws::String& GetDefinition() const{ return m_definition; }
    inline bool DefinitionHasBeenSet() const { return m_definitionHasBeenSet; }
    inline void SetDefinition(const Aws::String& value) { m_definitionHasBeenSet = true; m_definition = value; }
    inline void SetDefinition(Aws::String&& value) { m_definitionHasBeenSet = true; m_definition = std::move(value); }
    inline void SetDefinition(const char* value) { m_definitionHasBeenSet = true; m_definition.assign(value); }
    inline Type& WithDefinition(const Aws::String& value) { SetDefinition(value); return *this;}
    inline Type& WithDefinition(Aws::String&& value) { SetDefinition(std::move(value)); return *this;}
    inline Type& WithDefinition(const char* value) { SetDefinition(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type format: SDL or JSON.</p>
     */
    inline const TypeDefinitionFormat& GetFormat() const{ return m_format; }
    inline bool FormatHasBeenSet() const { return m_formatHasBeenSet; }
    inline void SetFormat(const TypeDefinitionFormat& value) { m_formatHasBeenSet = true; m_format = value; }
    inline void SetFormat(TypeDefinitionFormat&& value) { m_formatHasBeenSet = true; m_format = std::move(value); }
    inline Type& WithFormat(const TypeDefinitionFormat& value) { SetFormat(value); return *this;}
    inline Type& WithFormat(TypeDefinitionFormat&& value) { SetFormat(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    Aws::String m_definition;
    bool m_definitionHasBeenSet = false;

    TypeDefinitionFormat m_format;
    bool m_formatHasBeenSet = false;
  };

} // namespace Model
} // namespace AppSync
} // namespace Aws
