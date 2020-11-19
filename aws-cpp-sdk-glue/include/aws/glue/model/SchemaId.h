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
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace Glue
{
namespace Model
{

  class AWS_GLUE_API SchemaId
  {
  public:
    SchemaId();
    SchemaId(Aws::Utils::Json::JsonView jsonValue);
    SchemaId& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    
    inline const Aws::String& GetSchemaArn() const{ return m_schemaArn; }

    
    inline bool SchemaArnHasBeenSet() const { return m_schemaArnHasBeenSet; }

    
    inline void SetSchemaArn(const Aws::String& value) { m_schemaArnHasBeenSet = true; m_schemaArn = value; }

    
    inline void SetSchemaArn(Aws::String&& value) { m_schemaArnHasBeenSet = true; m_schemaArn = std::move(value); }

    
    inline void SetSchemaArn(const char* value) { m_schemaArnHasBeenSet = true; m_schemaArn.assign(value); }

    
    inline SchemaId& WithSchemaArn(const Aws::String& value) { SetSchemaArn(value); return *this;}

    
    inline SchemaId& WithSchemaArn(Aws::String&& value) { SetSchemaArn(std::move(value)); return *this;}

    
    inline SchemaId& WithSchemaArn(const char* value) { SetSchemaArn(value); return *this;}


    
    inline const Aws::String& GetSchemaName() const{ return m_schemaName; }

    
    inline bool SchemaNameHasBeenSet() const { return m_schemaNameHasBeenSet; }

    
    inline void SetSchemaName(const Aws::String& value) { m_schemaNameHasBeenSet = true; m_schemaName = value; }

    
    inline void SetSchemaName(Aws::String&& value) { m_schemaNameHasBeenSet = true; m_schemaName = std::move(value); }

    
    inline void SetSchemaName(const char* value) { m_schemaNameHasBeenSet = true; m_schemaName.assign(value); }

    
    inline SchemaId& WithSchemaName(const Aws::String& value) { SetSchemaName(value); return *this;}

    
    inline SchemaId& WithSchemaName(Aws::String&& value) { SetSchemaName(std::move(value)); return *this;}

    
    inline SchemaId& WithSchemaName(const char* value) { SetSchemaName(value); return *this;}


    
    inline const Aws::String& GetRegistryName() const{ return m_registryName; }

    
    inline bool RegistryNameHasBeenSet() const { return m_registryNameHasBeenSet; }

    
    inline void SetRegistryName(const Aws::String& value) { m_registryNameHasBeenSet = true; m_registryName = value; }

    
    inline void SetRegistryName(Aws::String&& value) { m_registryNameHasBeenSet = true; m_registryName = std::move(value); }

    
    inline void SetRegistryName(const char* value) { m_registryNameHasBeenSet = true; m_registryName.assign(value); }

    
    inline SchemaId& WithRegistryName(const Aws::String& value) { SetRegistryName(value); return *this;}

    
    inline SchemaId& WithRegistryName(Aws::String&& value) { SetRegistryName(std::move(value)); return *this;}

    
    inline SchemaId& WithRegistryName(const char* value) { SetRegistryName(value); return *this;}

  private:

    Aws::String m_schemaArn;
    bool m_schemaArnHasBeenSet;

    Aws::String m_schemaName;
    bool m_schemaNameHasBeenSet;

    Aws::String m_registryName;
    bool m_registryNameHasBeenSet;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
