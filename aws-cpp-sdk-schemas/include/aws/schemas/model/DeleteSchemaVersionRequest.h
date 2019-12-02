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
#include <aws/schemas/Schemas_EXPORTS.h>
#include <aws/schemas/SchemasRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Schemas
{
namespace Model
{

  /**
   */
  class AWS_SCHEMAS_API DeleteSchemaVersionRequest : public SchemasRequest
  {
  public:
    DeleteSchemaVersionRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DeleteSchemaVersion"; }

    Aws::String SerializePayload() const override;


    
    inline const Aws::String& GetRegistryName() const{ return m_registryName; }

    
    inline bool RegistryNameHasBeenSet() const { return m_registryNameHasBeenSet; }

    
    inline void SetRegistryName(const Aws::String& value) { m_registryNameHasBeenSet = true; m_registryName = value; }

    
    inline void SetRegistryName(Aws::String&& value) { m_registryNameHasBeenSet = true; m_registryName = std::move(value); }

    
    inline void SetRegistryName(const char* value) { m_registryNameHasBeenSet = true; m_registryName.assign(value); }

    
    inline DeleteSchemaVersionRequest& WithRegistryName(const Aws::String& value) { SetRegistryName(value); return *this;}

    
    inline DeleteSchemaVersionRequest& WithRegistryName(Aws::String&& value) { SetRegistryName(std::move(value)); return *this;}

    
    inline DeleteSchemaVersionRequest& WithRegistryName(const char* value) { SetRegistryName(value); return *this;}


    
    inline const Aws::String& GetSchemaName() const{ return m_schemaName; }

    
    inline bool SchemaNameHasBeenSet() const { return m_schemaNameHasBeenSet; }

    
    inline void SetSchemaName(const Aws::String& value) { m_schemaNameHasBeenSet = true; m_schemaName = value; }

    
    inline void SetSchemaName(Aws::String&& value) { m_schemaNameHasBeenSet = true; m_schemaName = std::move(value); }

    
    inline void SetSchemaName(const char* value) { m_schemaNameHasBeenSet = true; m_schemaName.assign(value); }

    
    inline DeleteSchemaVersionRequest& WithSchemaName(const Aws::String& value) { SetSchemaName(value); return *this;}

    
    inline DeleteSchemaVersionRequest& WithSchemaName(Aws::String&& value) { SetSchemaName(std::move(value)); return *this;}

    
    inline DeleteSchemaVersionRequest& WithSchemaName(const char* value) { SetSchemaName(value); return *this;}


    
    inline const Aws::String& GetSchemaVersion() const{ return m_schemaVersion; }

    
    inline bool SchemaVersionHasBeenSet() const { return m_schemaVersionHasBeenSet; }

    
    inline void SetSchemaVersion(const Aws::String& value) { m_schemaVersionHasBeenSet = true; m_schemaVersion = value; }

    
    inline void SetSchemaVersion(Aws::String&& value) { m_schemaVersionHasBeenSet = true; m_schemaVersion = std::move(value); }

    
    inline void SetSchemaVersion(const char* value) { m_schemaVersionHasBeenSet = true; m_schemaVersion.assign(value); }

    
    inline DeleteSchemaVersionRequest& WithSchemaVersion(const Aws::String& value) { SetSchemaVersion(value); return *this;}

    
    inline DeleteSchemaVersionRequest& WithSchemaVersion(Aws::String&& value) { SetSchemaVersion(std::move(value)); return *this;}

    
    inline DeleteSchemaVersionRequest& WithSchemaVersion(const char* value) { SetSchemaVersion(value); return *this;}

  private:

    Aws::String m_registryName;
    bool m_registryNameHasBeenSet;

    Aws::String m_schemaName;
    bool m_schemaNameHasBeenSet;

    Aws::String m_schemaVersion;
    bool m_schemaVersionHasBeenSet;
  };

} // namespace Model
} // namespace Schemas
} // namespace Aws
