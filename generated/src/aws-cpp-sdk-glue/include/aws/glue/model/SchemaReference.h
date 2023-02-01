/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/glue/Glue_EXPORTS.h>
#include <aws/glue/model/SchemaId.h>
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

  /**
   * <p>An object that references a schema stored in the Glue Schema
   * Registry.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/SchemaReference">AWS
   * API Reference</a></p>
   */
  class SchemaReference
  {
  public:
    AWS_GLUE_API SchemaReference();
    AWS_GLUE_API SchemaReference(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API SchemaReference& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>A structure that contains schema identity fields. Either this or the
     * <code>SchemaVersionId</code> has to be provided.</p>
     */
    inline const SchemaId& GetSchemaId() const{ return m_schemaId; }

    /**
     * <p>A structure that contains schema identity fields. Either this or the
     * <code>SchemaVersionId</code> has to be provided.</p>
     */
    inline bool SchemaIdHasBeenSet() const { return m_schemaIdHasBeenSet; }

    /**
     * <p>A structure that contains schema identity fields. Either this or the
     * <code>SchemaVersionId</code> has to be provided.</p>
     */
    inline void SetSchemaId(const SchemaId& value) { m_schemaIdHasBeenSet = true; m_schemaId = value; }

    /**
     * <p>A structure that contains schema identity fields. Either this or the
     * <code>SchemaVersionId</code> has to be provided.</p>
     */
    inline void SetSchemaId(SchemaId&& value) { m_schemaIdHasBeenSet = true; m_schemaId = std::move(value); }

    /**
     * <p>A structure that contains schema identity fields. Either this or the
     * <code>SchemaVersionId</code> has to be provided.</p>
     */
    inline SchemaReference& WithSchemaId(const SchemaId& value) { SetSchemaId(value); return *this;}

    /**
     * <p>A structure that contains schema identity fields. Either this or the
     * <code>SchemaVersionId</code> has to be provided.</p>
     */
    inline SchemaReference& WithSchemaId(SchemaId&& value) { SetSchemaId(std::move(value)); return *this;}


    /**
     * <p>The unique ID assigned to a version of the schema. Either this or the
     * <code>SchemaId</code> has to be provided.</p>
     */
    inline const Aws::String& GetSchemaVersionId() const{ return m_schemaVersionId; }

    /**
     * <p>The unique ID assigned to a version of the schema. Either this or the
     * <code>SchemaId</code> has to be provided.</p>
     */
    inline bool SchemaVersionIdHasBeenSet() const { return m_schemaVersionIdHasBeenSet; }

    /**
     * <p>The unique ID assigned to a version of the schema. Either this or the
     * <code>SchemaId</code> has to be provided.</p>
     */
    inline void SetSchemaVersionId(const Aws::String& value) { m_schemaVersionIdHasBeenSet = true; m_schemaVersionId = value; }

    /**
     * <p>The unique ID assigned to a version of the schema. Either this or the
     * <code>SchemaId</code> has to be provided.</p>
     */
    inline void SetSchemaVersionId(Aws::String&& value) { m_schemaVersionIdHasBeenSet = true; m_schemaVersionId = std::move(value); }

    /**
     * <p>The unique ID assigned to a version of the schema. Either this or the
     * <code>SchemaId</code> has to be provided.</p>
     */
    inline void SetSchemaVersionId(const char* value) { m_schemaVersionIdHasBeenSet = true; m_schemaVersionId.assign(value); }

    /**
     * <p>The unique ID assigned to a version of the schema. Either this or the
     * <code>SchemaId</code> has to be provided.</p>
     */
    inline SchemaReference& WithSchemaVersionId(const Aws::String& value) { SetSchemaVersionId(value); return *this;}

    /**
     * <p>The unique ID assigned to a version of the schema. Either this or the
     * <code>SchemaId</code> has to be provided.</p>
     */
    inline SchemaReference& WithSchemaVersionId(Aws::String&& value) { SetSchemaVersionId(std::move(value)); return *this;}

    /**
     * <p>The unique ID assigned to a version of the schema. Either this or the
     * <code>SchemaId</code> has to be provided.</p>
     */
    inline SchemaReference& WithSchemaVersionId(const char* value) { SetSchemaVersionId(value); return *this;}


    /**
     * <p>The version number of the schema.</p>
     */
    inline long long GetSchemaVersionNumber() const{ return m_schemaVersionNumber; }

    /**
     * <p>The version number of the schema.</p>
     */
    inline bool SchemaVersionNumberHasBeenSet() const { return m_schemaVersionNumberHasBeenSet; }

    /**
     * <p>The version number of the schema.</p>
     */
    inline void SetSchemaVersionNumber(long long value) { m_schemaVersionNumberHasBeenSet = true; m_schemaVersionNumber = value; }

    /**
     * <p>The version number of the schema.</p>
     */
    inline SchemaReference& WithSchemaVersionNumber(long long value) { SetSchemaVersionNumber(value); return *this;}

  private:

    SchemaId m_schemaId;
    bool m_schemaIdHasBeenSet = false;

    Aws::String m_schemaVersionId;
    bool m_schemaVersionIdHasBeenSet = false;

    long long m_schemaVersionNumber;
    bool m_schemaVersionNumberHasBeenSet = false;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
