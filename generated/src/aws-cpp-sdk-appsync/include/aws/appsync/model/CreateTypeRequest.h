/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
  class CreateTypeRequest : public AppSyncRequest
  {
  public:
    AWS_APPSYNC_API CreateTypeRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateType"; }

    AWS_APPSYNC_API Aws::String SerializePayload() const override;


    /**
     * <p>The API ID.</p>
     */
    inline const Aws::String& GetApiId() const{ return m_apiId; }

    /**
     * <p>The API ID.</p>
     */
    inline bool ApiIdHasBeenSet() const { return m_apiIdHasBeenSet; }

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
    inline CreateTypeRequest& WithApiId(const Aws::String& value) { SetApiId(value); return *this;}

    /**
     * <p>The API ID.</p>
     */
    inline CreateTypeRequest& WithApiId(Aws::String&& value) { SetApiId(std::move(value)); return *this;}

    /**
     * <p>The API ID.</p>
     */
    inline CreateTypeRequest& WithApiId(const char* value) { SetApiId(value); return *this;}


    /**
     * <p>The type definition, in GraphQL Schema Definition Language (SDL) format.</p>
     * <p>For more information, see the <a
     * href="http://graphql.org/learn/schema/">GraphQL SDL documentation</a>.</p>
     */
    inline const Aws::String& GetDefinition() const{ return m_definition; }

    /**
     * <p>The type definition, in GraphQL Schema Definition Language (SDL) format.</p>
     * <p>For more information, see the <a
     * href="http://graphql.org/learn/schema/">GraphQL SDL documentation</a>.</p>
     */
    inline bool DefinitionHasBeenSet() const { return m_definitionHasBeenSet; }

    /**
     * <p>The type definition, in GraphQL Schema Definition Language (SDL) format.</p>
     * <p>For more information, see the <a
     * href="http://graphql.org/learn/schema/">GraphQL SDL documentation</a>.</p>
     */
    inline void SetDefinition(const Aws::String& value) { m_definitionHasBeenSet = true; m_definition = value; }

    /**
     * <p>The type definition, in GraphQL Schema Definition Language (SDL) format.</p>
     * <p>For more information, see the <a
     * href="http://graphql.org/learn/schema/">GraphQL SDL documentation</a>.</p>
     */
    inline void SetDefinition(Aws::String&& value) { m_definitionHasBeenSet = true; m_definition = std::move(value); }

    /**
     * <p>The type definition, in GraphQL Schema Definition Language (SDL) format.</p>
     * <p>For more information, see the <a
     * href="http://graphql.org/learn/schema/">GraphQL SDL documentation</a>.</p>
     */
    inline void SetDefinition(const char* value) { m_definitionHasBeenSet = true; m_definition.assign(value); }

    /**
     * <p>The type definition, in GraphQL Schema Definition Language (SDL) format.</p>
     * <p>For more information, see the <a
     * href="http://graphql.org/learn/schema/">GraphQL SDL documentation</a>.</p>
     */
    inline CreateTypeRequest& WithDefinition(const Aws::String& value) { SetDefinition(value); return *this;}

    /**
     * <p>The type definition, in GraphQL Schema Definition Language (SDL) format.</p>
     * <p>For more information, see the <a
     * href="http://graphql.org/learn/schema/">GraphQL SDL documentation</a>.</p>
     */
    inline CreateTypeRequest& WithDefinition(Aws::String&& value) { SetDefinition(std::move(value)); return *this;}

    /**
     * <p>The type definition, in GraphQL Schema Definition Language (SDL) format.</p>
     * <p>For more information, see the <a
     * href="http://graphql.org/learn/schema/">GraphQL SDL documentation</a>.</p>
     */
    inline CreateTypeRequest& WithDefinition(const char* value) { SetDefinition(value); return *this;}


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
    inline CreateTypeRequest& WithFormat(const TypeDefinitionFormat& value) { SetFormat(value); return *this;}

    /**
     * <p>The type format: SDL or JSON.</p>
     */
    inline CreateTypeRequest& WithFormat(TypeDefinitionFormat&& value) { SetFormat(std::move(value)); return *this;}

  private:

    Aws::String m_apiId;
    bool m_apiIdHasBeenSet = false;

    Aws::String m_definition;
    bool m_definitionHasBeenSet = false;

    TypeDefinitionFormat m_format;
    bool m_formatHasBeenSet = false;
  };

} // namespace Model
} // namespace AppSync
} // namespace Aws
