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
#include <aws/core/utils/DateTime.h>
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
namespace Schemas
{
namespace Model
{

  class AWS_SCHEMAS_API SearchSchemaVersionSummary
  {
  public:
    SearchSchemaVersionSummary();
    SearchSchemaVersionSummary(Aws::Utils::Json::JsonView jsonValue);
    SearchSchemaVersionSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    
    inline const Aws::Utils::DateTime& GetCreatedDate() const{ return m_createdDate; }

    
    inline bool CreatedDateHasBeenSet() const { return m_createdDateHasBeenSet; }

    
    inline void SetCreatedDate(const Aws::Utils::DateTime& value) { m_createdDateHasBeenSet = true; m_createdDate = value; }

    
    inline void SetCreatedDate(Aws::Utils::DateTime&& value) { m_createdDateHasBeenSet = true; m_createdDate = std::move(value); }

    
    inline SearchSchemaVersionSummary& WithCreatedDate(const Aws::Utils::DateTime& value) { SetCreatedDate(value); return *this;}

    
    inline SearchSchemaVersionSummary& WithCreatedDate(Aws::Utils::DateTime&& value) { SetCreatedDate(std::move(value)); return *this;}


    /**
     * <p>The version number of the schema</p>
     */
    inline const Aws::String& GetSchemaVersion() const{ return m_schemaVersion; }

    /**
     * <p>The version number of the schema</p>
     */
    inline bool SchemaVersionHasBeenSet() const { return m_schemaVersionHasBeenSet; }

    /**
     * <p>The version number of the schema</p>
     */
    inline void SetSchemaVersion(const Aws::String& value) { m_schemaVersionHasBeenSet = true; m_schemaVersion = value; }

    /**
     * <p>The version number of the schema</p>
     */
    inline void SetSchemaVersion(Aws::String&& value) { m_schemaVersionHasBeenSet = true; m_schemaVersion = std::move(value); }

    /**
     * <p>The version number of the schema</p>
     */
    inline void SetSchemaVersion(const char* value) { m_schemaVersionHasBeenSet = true; m_schemaVersion.assign(value); }

    /**
     * <p>The version number of the schema</p>
     */
    inline SearchSchemaVersionSummary& WithSchemaVersion(const Aws::String& value) { SetSchemaVersion(value); return *this;}

    /**
     * <p>The version number of the schema</p>
     */
    inline SearchSchemaVersionSummary& WithSchemaVersion(Aws::String&& value) { SetSchemaVersion(std::move(value)); return *this;}

    /**
     * <p>The version number of the schema</p>
     */
    inline SearchSchemaVersionSummary& WithSchemaVersion(const char* value) { SetSchemaVersion(value); return *this;}

  private:

    Aws::Utils::DateTime m_createdDate;
    bool m_createdDateHasBeenSet;

    Aws::String m_schemaVersion;
    bool m_schemaVersionHasBeenSet;
  };

} // namespace Model
} // namespace Schemas
} // namespace Aws
