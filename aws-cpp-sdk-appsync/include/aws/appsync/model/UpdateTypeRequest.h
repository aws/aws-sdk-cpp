﻿/*
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
#include <aws/appsync/AppSyncRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/appsync/model/TypeDefinitionFormat.h>
#include <utility>

namespace Aws
{
namespace AppSync
{
namespace Model
{

  /**
   */
  class AWS_APPSYNC_API UpdateTypeRequest : public AppSyncRequest
  {
  public:
    UpdateTypeRequest();
    
    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateType"; }

    Aws::String SerializePayload() const override;


    /**
     * <p>The API ID.</p>
     */
    inline const Aws::String& GetApiId() const{ return m_apiId; }

    /**
     * <p>The API ID.</p>
     */
    inline void SetApiId(const Aws::String& value) { m_apiIdHasBeenSet = true; m_apiId = value; }

    /**
     * <p>The API ID.</p>
     */
    inline void SetApiId(Aws::String&& value) { m_apiIdHasBeenSet = true; m_apiId = std::move(value); }

    /**
     * <p>The API ID.</p>
     */
    inline void SetApiId(const char* value) { m_apiIdHasBeenSet = true; m_apiId.assign(value); }

    /**
     * <p>The API ID.</p>
     */
    inline UpdateTypeRequest& WithApiId(const Aws::String& value) { SetApiId(value); return *this;}

    /**
     * <p>The API ID.</p>
     */
    inline UpdateTypeRequest& WithApiId(Aws::String&& value) { SetApiId(std::move(value)); return *this;}

    /**
     * <p>The API ID.</p>
     */
    inline UpdateTypeRequest& WithApiId(const char* value) { SetApiId(value); return *this;}


    /**
     * <p>The new type name.</p>
     */
    inline const Aws::String& GetTypeName() const{ return m_typeName; }

    /**
     * <p>The new type name.</p>
     */
    inline void SetTypeName(const Aws::String& value) { m_typeNameHasBeenSet = true; m_typeName = value; }

    /**
     * <p>The new type name.</p>
     */
    inline void SetTypeName(Aws::String&& value) { m_typeNameHasBeenSet = true; m_typeName = std::move(value); }

    /**
     * <p>The new type name.</p>
     */
    inline void SetTypeName(const char* value) { m_typeNameHasBeenSet = true; m_typeName.assign(value); }

    /**
     * <p>The new type name.</p>
     */
    inline UpdateTypeRequest& WithTypeName(const Aws::String& value) { SetTypeName(value); return *this;}

    /**
     * <p>The new type name.</p>
     */
    inline UpdateTypeRequest& WithTypeName(Aws::String&& value) { SetTypeName(std::move(value)); return *this;}

    /**
     * <p>The new type name.</p>
     */
    inline UpdateTypeRequest& WithTypeName(const char* value) { SetTypeName(value); return *this;}


    /**
     * <p>The new definition.</p>
     */
    inline const Aws::String& GetDefinition() const{ return m_definition; }

    /**
     * <p>The new definition.</p>
     */
    inline void SetDefinition(const Aws::String& value) { m_definitionHasBeenSet = true; m_definition = value; }

    /**
     * <p>The new definition.</p>
     */
    inline void SetDefinition(Aws::String&& value) { m_definitionHasBeenSet = true; m_definition = std::move(value); }

    /**
     * <p>The new definition.</p>
     */
    inline void SetDefinition(const char* value) { m_definitionHasBeenSet = true; m_definition.assign(value); }

    /**
     * <p>The new definition.</p>
     */
    inline UpdateTypeRequest& WithDefinition(const Aws::String& value) { SetDefinition(value); return *this;}

    /**
     * <p>The new definition.</p>
     */
    inline UpdateTypeRequest& WithDefinition(Aws::String&& value) { SetDefinition(std::move(value)); return *this;}

    /**
     * <p>The new definition.</p>
     */
    inline UpdateTypeRequest& WithDefinition(const char* value) { SetDefinition(value); return *this;}


    /**
     * <p>The new type format: SDL or JSON.</p>
     */
    inline const TypeDefinitionFormat& GetFormat() const{ return m_format; }

    /**
     * <p>The new type format: SDL or JSON.</p>
     */
    inline void SetFormat(const TypeDefinitionFormat& value) { m_formatHasBeenSet = true; m_format = value; }

    /**
     * <p>The new type format: SDL or JSON.</p>
     */
    inline void SetFormat(TypeDefinitionFormat&& value) { m_formatHasBeenSet = true; m_format = std::move(value); }

    /**
     * <p>The new type format: SDL or JSON.</p>
     */
    inline UpdateTypeRequest& WithFormat(const TypeDefinitionFormat& value) { SetFormat(value); return *this;}

    /**
     * <p>The new type format: SDL or JSON.</p>
     */
    inline UpdateTypeRequest& WithFormat(TypeDefinitionFormat&& value) { SetFormat(std::move(value)); return *this;}

  private:

    Aws::String m_apiId;
    bool m_apiIdHasBeenSet;

    Aws::String m_typeName;
    bool m_typeNameHasBeenSet;

    Aws::String m_definition;
    bool m_definitionHasBeenSet;

    TypeDefinitionFormat m_format;
    bool m_formatHasBeenSet;
  };

} // namespace Model
} // namespace AppSync
} // namespace Aws
