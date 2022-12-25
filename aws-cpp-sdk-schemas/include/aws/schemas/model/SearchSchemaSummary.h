/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/schemas/Schemas_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/schemas/model/SearchSchemaVersionSummary.h>
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
namespace Schemas
{
namespace Model
{

  class SearchSchemaSummary
  {
  public:
    AWS_SCHEMAS_API SearchSchemaSummary();
    AWS_SCHEMAS_API SearchSchemaSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_SCHEMAS_API SearchSchemaSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SCHEMAS_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name of the registry.</p>
     */
    inline const Aws::String& GetRegistryName() const{ return m_registryName; }

    /**
     * <p>The name of the registry.</p>
     */
    inline bool RegistryNameHasBeenSet() const { return m_registryNameHasBeenSet; }

    /**
     * <p>The name of the registry.</p>
     */
    inline void SetRegistryName(const Aws::String& value) { m_registryNameHasBeenSet = true; m_registryName = value; }

    /**
     * <p>The name of the registry.</p>
     */
    inline void SetRegistryName(Aws::String&& value) { m_registryNameHasBeenSet = true; m_registryName = std::move(value); }

    /**
     * <p>The name of the registry.</p>
     */
    inline void SetRegistryName(const char* value) { m_registryNameHasBeenSet = true; m_registryName.assign(value); }

    /**
     * <p>The name of the registry.</p>
     */
    inline SearchSchemaSummary& WithRegistryName(const Aws::String& value) { SetRegistryName(value); return *this;}

    /**
     * <p>The name of the registry.</p>
     */
    inline SearchSchemaSummary& WithRegistryName(Aws::String&& value) { SetRegistryName(std::move(value)); return *this;}

    /**
     * <p>The name of the registry.</p>
     */
    inline SearchSchemaSummary& WithRegistryName(const char* value) { SetRegistryName(value); return *this;}


    /**
     * <p>The ARN of the schema.</p>
     */
    inline const Aws::String& GetSchemaArn() const{ return m_schemaArn; }

    /**
     * <p>The ARN of the schema.</p>
     */
    inline bool SchemaArnHasBeenSet() const { return m_schemaArnHasBeenSet; }

    /**
     * <p>The ARN of the schema.</p>
     */
    inline void SetSchemaArn(const Aws::String& value) { m_schemaArnHasBeenSet = true; m_schemaArn = value; }

    /**
     * <p>The ARN of the schema.</p>
     */
    inline void SetSchemaArn(Aws::String&& value) { m_schemaArnHasBeenSet = true; m_schemaArn = std::move(value); }

    /**
     * <p>The ARN of the schema.</p>
     */
    inline void SetSchemaArn(const char* value) { m_schemaArnHasBeenSet = true; m_schemaArn.assign(value); }

    /**
     * <p>The ARN of the schema.</p>
     */
    inline SearchSchemaSummary& WithSchemaArn(const Aws::String& value) { SetSchemaArn(value); return *this;}

    /**
     * <p>The ARN of the schema.</p>
     */
    inline SearchSchemaSummary& WithSchemaArn(Aws::String&& value) { SetSchemaArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the schema.</p>
     */
    inline SearchSchemaSummary& WithSchemaArn(const char* value) { SetSchemaArn(value); return *this;}


    /**
     * <p>The name of the schema.</p>
     */
    inline const Aws::String& GetSchemaName() const{ return m_schemaName; }

    /**
     * <p>The name of the schema.</p>
     */
    inline bool SchemaNameHasBeenSet() const { return m_schemaNameHasBeenSet; }

    /**
     * <p>The name of the schema.</p>
     */
    inline void SetSchemaName(const Aws::String& value) { m_schemaNameHasBeenSet = true; m_schemaName = value; }

    /**
     * <p>The name of the schema.</p>
     */
    inline void SetSchemaName(Aws::String&& value) { m_schemaNameHasBeenSet = true; m_schemaName = std::move(value); }

    /**
     * <p>The name of the schema.</p>
     */
    inline void SetSchemaName(const char* value) { m_schemaNameHasBeenSet = true; m_schemaName.assign(value); }

    /**
     * <p>The name of the schema.</p>
     */
    inline SearchSchemaSummary& WithSchemaName(const Aws::String& value) { SetSchemaName(value); return *this;}

    /**
     * <p>The name of the schema.</p>
     */
    inline SearchSchemaSummary& WithSchemaName(Aws::String&& value) { SetSchemaName(std::move(value)); return *this;}

    /**
     * <p>The name of the schema.</p>
     */
    inline SearchSchemaSummary& WithSchemaName(const char* value) { SetSchemaName(value); return *this;}


    /**
     * <p>An array of schema version summaries.</p>
     */
    inline const Aws::Vector<SearchSchemaVersionSummary>& GetSchemaVersions() const{ return m_schemaVersions; }

    /**
     * <p>An array of schema version summaries.</p>
     */
    inline bool SchemaVersionsHasBeenSet() const { return m_schemaVersionsHasBeenSet; }

    /**
     * <p>An array of schema version summaries.</p>
     */
    inline void SetSchemaVersions(const Aws::Vector<SearchSchemaVersionSummary>& value) { m_schemaVersionsHasBeenSet = true; m_schemaVersions = value; }

    /**
     * <p>An array of schema version summaries.</p>
     */
    inline void SetSchemaVersions(Aws::Vector<SearchSchemaVersionSummary>&& value) { m_schemaVersionsHasBeenSet = true; m_schemaVersions = std::move(value); }

    /**
     * <p>An array of schema version summaries.</p>
     */
    inline SearchSchemaSummary& WithSchemaVersions(const Aws::Vector<SearchSchemaVersionSummary>& value) { SetSchemaVersions(value); return *this;}

    /**
     * <p>An array of schema version summaries.</p>
     */
    inline SearchSchemaSummary& WithSchemaVersions(Aws::Vector<SearchSchemaVersionSummary>&& value) { SetSchemaVersions(std::move(value)); return *this;}

    /**
     * <p>An array of schema version summaries.</p>
     */
    inline SearchSchemaSummary& AddSchemaVersions(const SearchSchemaVersionSummary& value) { m_schemaVersionsHasBeenSet = true; m_schemaVersions.push_back(value); return *this; }

    /**
     * <p>An array of schema version summaries.</p>
     */
    inline SearchSchemaSummary& AddSchemaVersions(SearchSchemaVersionSummary&& value) { m_schemaVersionsHasBeenSet = true; m_schemaVersions.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_registryName;
    bool m_registryNameHasBeenSet = false;

    Aws::String m_schemaArn;
    bool m_schemaArnHasBeenSet = false;

    Aws::String m_schemaName;
    bool m_schemaNameHasBeenSet = false;

    Aws::Vector<SearchSchemaVersionSummary> m_schemaVersions;
    bool m_schemaVersionsHasBeenSet = false;
  };

} // namespace Model
} // namespace Schemas
} // namespace Aws
