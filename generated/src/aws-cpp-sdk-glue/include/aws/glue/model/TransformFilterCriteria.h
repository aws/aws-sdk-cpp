/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/glue/Glue_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/glue/model/TransformType.h>
#include <aws/glue/model/TransformStatusType.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/glue/model/SchemaColumn.h>
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
   * <p>The criteria used to filter the machine learning transforms.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/TransformFilterCriteria">AWS
   * API Reference</a></p>
   */
  class TransformFilterCriteria
  {
  public:
    AWS_GLUE_API TransformFilterCriteria();
    AWS_GLUE_API TransformFilterCriteria(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API TransformFilterCriteria& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>A unique transform name that is used to filter the machine learning
     * transforms.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>A unique transform name that is used to filter the machine learning
     * transforms.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>A unique transform name that is used to filter the machine learning
     * transforms.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>A unique transform name that is used to filter the machine learning
     * transforms.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>A unique transform name that is used to filter the machine learning
     * transforms.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>A unique transform name that is used to filter the machine learning
     * transforms.</p>
     */
    inline TransformFilterCriteria& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>A unique transform name that is used to filter the machine learning
     * transforms.</p>
     */
    inline TransformFilterCriteria& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>A unique transform name that is used to filter the machine learning
     * transforms.</p>
     */
    inline TransformFilterCriteria& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The type of machine learning transform that is used to filter the machine
     * learning transforms.</p>
     */
    inline const TransformType& GetTransformType() const{ return m_transformType; }

    /**
     * <p>The type of machine learning transform that is used to filter the machine
     * learning transforms.</p>
     */
    inline bool TransformTypeHasBeenSet() const { return m_transformTypeHasBeenSet; }

    /**
     * <p>The type of machine learning transform that is used to filter the machine
     * learning transforms.</p>
     */
    inline void SetTransformType(const TransformType& value) { m_transformTypeHasBeenSet = true; m_transformType = value; }

    /**
     * <p>The type of machine learning transform that is used to filter the machine
     * learning transforms.</p>
     */
    inline void SetTransformType(TransformType&& value) { m_transformTypeHasBeenSet = true; m_transformType = std::move(value); }

    /**
     * <p>The type of machine learning transform that is used to filter the machine
     * learning transforms.</p>
     */
    inline TransformFilterCriteria& WithTransformType(const TransformType& value) { SetTransformType(value); return *this;}

    /**
     * <p>The type of machine learning transform that is used to filter the machine
     * learning transforms.</p>
     */
    inline TransformFilterCriteria& WithTransformType(TransformType&& value) { SetTransformType(std::move(value)); return *this;}


    /**
     * <p>Filters the list of machine learning transforms by the last known status of
     * the transforms (to indicate whether a transform can be used or not). One of
     * "NOT_READY", "READY", or "DELETING".</p>
     */
    inline const TransformStatusType& GetStatus() const{ return m_status; }

    /**
     * <p>Filters the list of machine learning transforms by the last known status of
     * the transforms (to indicate whether a transform can be used or not). One of
     * "NOT_READY", "READY", or "DELETING".</p>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p>Filters the list of machine learning transforms by the last known status of
     * the transforms (to indicate whether a transform can be used or not). One of
     * "NOT_READY", "READY", or "DELETING".</p>
     */
    inline void SetStatus(const TransformStatusType& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>Filters the list of machine learning transforms by the last known status of
     * the transforms (to indicate whether a transform can be used or not). One of
     * "NOT_READY", "READY", or "DELETING".</p>
     */
    inline void SetStatus(TransformStatusType&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p>Filters the list of machine learning transforms by the last known status of
     * the transforms (to indicate whether a transform can be used or not). One of
     * "NOT_READY", "READY", or "DELETING".</p>
     */
    inline TransformFilterCriteria& WithStatus(const TransformStatusType& value) { SetStatus(value); return *this;}

    /**
     * <p>Filters the list of machine learning transforms by the last known status of
     * the transforms (to indicate whether a transform can be used or not). One of
     * "NOT_READY", "READY", or "DELETING".</p>
     */
    inline TransformFilterCriteria& WithStatus(TransformStatusType&& value) { SetStatus(std::move(value)); return *this;}


    /**
     * <p>This value determines which version of Glue this machine learning transform
     * is compatible with. Glue 1.0 is recommended for most customers. If the value is
     * not set, the Glue compatibility defaults to Glue 0.9. For more information, see
     * <a
     * href="https://docs.aws.amazon.com/glue/latest/dg/release-notes.html#release-notes-versions">Glue
     * Versions</a> in the developer guide.</p>
     */
    inline const Aws::String& GetGlueVersion() const{ return m_glueVersion; }

    /**
     * <p>This value determines which version of Glue this machine learning transform
     * is compatible with. Glue 1.0 is recommended for most customers. If the value is
     * not set, the Glue compatibility defaults to Glue 0.9. For more information, see
     * <a
     * href="https://docs.aws.amazon.com/glue/latest/dg/release-notes.html#release-notes-versions">Glue
     * Versions</a> in the developer guide.</p>
     */
    inline bool GlueVersionHasBeenSet() const { return m_glueVersionHasBeenSet; }

    /**
     * <p>This value determines which version of Glue this machine learning transform
     * is compatible with. Glue 1.0 is recommended for most customers. If the value is
     * not set, the Glue compatibility defaults to Glue 0.9. For more information, see
     * <a
     * href="https://docs.aws.amazon.com/glue/latest/dg/release-notes.html#release-notes-versions">Glue
     * Versions</a> in the developer guide.</p>
     */
    inline void SetGlueVersion(const Aws::String& value) { m_glueVersionHasBeenSet = true; m_glueVersion = value; }

    /**
     * <p>This value determines which version of Glue this machine learning transform
     * is compatible with. Glue 1.0 is recommended for most customers. If the value is
     * not set, the Glue compatibility defaults to Glue 0.9. For more information, see
     * <a
     * href="https://docs.aws.amazon.com/glue/latest/dg/release-notes.html#release-notes-versions">Glue
     * Versions</a> in the developer guide.</p>
     */
    inline void SetGlueVersion(Aws::String&& value) { m_glueVersionHasBeenSet = true; m_glueVersion = std::move(value); }

    /**
     * <p>This value determines which version of Glue this machine learning transform
     * is compatible with. Glue 1.0 is recommended for most customers. If the value is
     * not set, the Glue compatibility defaults to Glue 0.9. For more information, see
     * <a
     * href="https://docs.aws.amazon.com/glue/latest/dg/release-notes.html#release-notes-versions">Glue
     * Versions</a> in the developer guide.</p>
     */
    inline void SetGlueVersion(const char* value) { m_glueVersionHasBeenSet = true; m_glueVersion.assign(value); }

    /**
     * <p>This value determines which version of Glue this machine learning transform
     * is compatible with. Glue 1.0 is recommended for most customers. If the value is
     * not set, the Glue compatibility defaults to Glue 0.9. For more information, see
     * <a
     * href="https://docs.aws.amazon.com/glue/latest/dg/release-notes.html#release-notes-versions">Glue
     * Versions</a> in the developer guide.</p>
     */
    inline TransformFilterCriteria& WithGlueVersion(const Aws::String& value) { SetGlueVersion(value); return *this;}

    /**
     * <p>This value determines which version of Glue this machine learning transform
     * is compatible with. Glue 1.0 is recommended for most customers. If the value is
     * not set, the Glue compatibility defaults to Glue 0.9. For more information, see
     * <a
     * href="https://docs.aws.amazon.com/glue/latest/dg/release-notes.html#release-notes-versions">Glue
     * Versions</a> in the developer guide.</p>
     */
    inline TransformFilterCriteria& WithGlueVersion(Aws::String&& value) { SetGlueVersion(std::move(value)); return *this;}

    /**
     * <p>This value determines which version of Glue this machine learning transform
     * is compatible with. Glue 1.0 is recommended for most customers. If the value is
     * not set, the Glue compatibility defaults to Glue 0.9. For more information, see
     * <a
     * href="https://docs.aws.amazon.com/glue/latest/dg/release-notes.html#release-notes-versions">Glue
     * Versions</a> in the developer guide.</p>
     */
    inline TransformFilterCriteria& WithGlueVersion(const char* value) { SetGlueVersion(value); return *this;}


    /**
     * <p>The time and date before which the transforms were created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedBefore() const{ return m_createdBefore; }

    /**
     * <p>The time and date before which the transforms were created.</p>
     */
    inline bool CreatedBeforeHasBeenSet() const { return m_createdBeforeHasBeenSet; }

    /**
     * <p>The time and date before which the transforms were created.</p>
     */
    inline void SetCreatedBefore(const Aws::Utils::DateTime& value) { m_createdBeforeHasBeenSet = true; m_createdBefore = value; }

    /**
     * <p>The time and date before which the transforms were created.</p>
     */
    inline void SetCreatedBefore(Aws::Utils::DateTime&& value) { m_createdBeforeHasBeenSet = true; m_createdBefore = std::move(value); }

    /**
     * <p>The time and date before which the transforms were created.</p>
     */
    inline TransformFilterCriteria& WithCreatedBefore(const Aws::Utils::DateTime& value) { SetCreatedBefore(value); return *this;}

    /**
     * <p>The time and date before which the transforms were created.</p>
     */
    inline TransformFilterCriteria& WithCreatedBefore(Aws::Utils::DateTime&& value) { SetCreatedBefore(std::move(value)); return *this;}


    /**
     * <p>The time and date after which the transforms were created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAfter() const{ return m_createdAfter; }

    /**
     * <p>The time and date after which the transforms were created.</p>
     */
    inline bool CreatedAfterHasBeenSet() const { return m_createdAfterHasBeenSet; }

    /**
     * <p>The time and date after which the transforms were created.</p>
     */
    inline void SetCreatedAfter(const Aws::Utils::DateTime& value) { m_createdAfterHasBeenSet = true; m_createdAfter = value; }

    /**
     * <p>The time and date after which the transforms were created.</p>
     */
    inline void SetCreatedAfter(Aws::Utils::DateTime&& value) { m_createdAfterHasBeenSet = true; m_createdAfter = std::move(value); }

    /**
     * <p>The time and date after which the transforms were created.</p>
     */
    inline TransformFilterCriteria& WithCreatedAfter(const Aws::Utils::DateTime& value) { SetCreatedAfter(value); return *this;}

    /**
     * <p>The time and date after which the transforms were created.</p>
     */
    inline TransformFilterCriteria& WithCreatedAfter(Aws::Utils::DateTime&& value) { SetCreatedAfter(std::move(value)); return *this;}


    /**
     * <p>Filter on transforms last modified before this date.</p>
     */
    inline const Aws::Utils::DateTime& GetLastModifiedBefore() const{ return m_lastModifiedBefore; }

    /**
     * <p>Filter on transforms last modified before this date.</p>
     */
    inline bool LastModifiedBeforeHasBeenSet() const { return m_lastModifiedBeforeHasBeenSet; }

    /**
     * <p>Filter on transforms last modified before this date.</p>
     */
    inline void SetLastModifiedBefore(const Aws::Utils::DateTime& value) { m_lastModifiedBeforeHasBeenSet = true; m_lastModifiedBefore = value; }

    /**
     * <p>Filter on transforms last modified before this date.</p>
     */
    inline void SetLastModifiedBefore(Aws::Utils::DateTime&& value) { m_lastModifiedBeforeHasBeenSet = true; m_lastModifiedBefore = std::move(value); }

    /**
     * <p>Filter on transforms last modified before this date.</p>
     */
    inline TransformFilterCriteria& WithLastModifiedBefore(const Aws::Utils::DateTime& value) { SetLastModifiedBefore(value); return *this;}

    /**
     * <p>Filter on transforms last modified before this date.</p>
     */
    inline TransformFilterCriteria& WithLastModifiedBefore(Aws::Utils::DateTime&& value) { SetLastModifiedBefore(std::move(value)); return *this;}


    /**
     * <p>Filter on transforms last modified after this date.</p>
     */
    inline const Aws::Utils::DateTime& GetLastModifiedAfter() const{ return m_lastModifiedAfter; }

    /**
     * <p>Filter on transforms last modified after this date.</p>
     */
    inline bool LastModifiedAfterHasBeenSet() const { return m_lastModifiedAfterHasBeenSet; }

    /**
     * <p>Filter on transforms last modified after this date.</p>
     */
    inline void SetLastModifiedAfter(const Aws::Utils::DateTime& value) { m_lastModifiedAfterHasBeenSet = true; m_lastModifiedAfter = value; }

    /**
     * <p>Filter on transforms last modified after this date.</p>
     */
    inline void SetLastModifiedAfter(Aws::Utils::DateTime&& value) { m_lastModifiedAfterHasBeenSet = true; m_lastModifiedAfter = std::move(value); }

    /**
     * <p>Filter on transforms last modified after this date.</p>
     */
    inline TransformFilterCriteria& WithLastModifiedAfter(const Aws::Utils::DateTime& value) { SetLastModifiedAfter(value); return *this;}

    /**
     * <p>Filter on transforms last modified after this date.</p>
     */
    inline TransformFilterCriteria& WithLastModifiedAfter(Aws::Utils::DateTime&& value) { SetLastModifiedAfter(std::move(value)); return *this;}


    /**
     * <p>Filters on datasets with a specific schema. The <code>Map&lt;Column,
     * Type&gt;</code> object is an array of key-value pairs representing the schema
     * this transform accepts, where <code>Column</code> is the name of a column, and
     * <code>Type</code> is the type of the data such as an integer or string. Has an
     * upper bound of 100 columns.</p>
     */
    inline const Aws::Vector<SchemaColumn>& GetSchema() const{ return m_schema; }

    /**
     * <p>Filters on datasets with a specific schema. The <code>Map&lt;Column,
     * Type&gt;</code> object is an array of key-value pairs representing the schema
     * this transform accepts, where <code>Column</code> is the name of a column, and
     * <code>Type</code> is the type of the data such as an integer or string. Has an
     * upper bound of 100 columns.</p>
     */
    inline bool SchemaHasBeenSet() const { return m_schemaHasBeenSet; }

    /**
     * <p>Filters on datasets with a specific schema. The <code>Map&lt;Column,
     * Type&gt;</code> object is an array of key-value pairs representing the schema
     * this transform accepts, where <code>Column</code> is the name of a column, and
     * <code>Type</code> is the type of the data such as an integer or string. Has an
     * upper bound of 100 columns.</p>
     */
    inline void SetSchema(const Aws::Vector<SchemaColumn>& value) { m_schemaHasBeenSet = true; m_schema = value; }

    /**
     * <p>Filters on datasets with a specific schema. The <code>Map&lt;Column,
     * Type&gt;</code> object is an array of key-value pairs representing the schema
     * this transform accepts, where <code>Column</code> is the name of a column, and
     * <code>Type</code> is the type of the data such as an integer or string. Has an
     * upper bound of 100 columns.</p>
     */
    inline void SetSchema(Aws::Vector<SchemaColumn>&& value) { m_schemaHasBeenSet = true; m_schema = std::move(value); }

    /**
     * <p>Filters on datasets with a specific schema. The <code>Map&lt;Column,
     * Type&gt;</code> object is an array of key-value pairs representing the schema
     * this transform accepts, where <code>Column</code> is the name of a column, and
     * <code>Type</code> is the type of the data such as an integer or string. Has an
     * upper bound of 100 columns.</p>
     */
    inline TransformFilterCriteria& WithSchema(const Aws::Vector<SchemaColumn>& value) { SetSchema(value); return *this;}

    /**
     * <p>Filters on datasets with a specific schema. The <code>Map&lt;Column,
     * Type&gt;</code> object is an array of key-value pairs representing the schema
     * this transform accepts, where <code>Column</code> is the name of a column, and
     * <code>Type</code> is the type of the data such as an integer or string. Has an
     * upper bound of 100 columns.</p>
     */
    inline TransformFilterCriteria& WithSchema(Aws::Vector<SchemaColumn>&& value) { SetSchema(std::move(value)); return *this;}

    /**
     * <p>Filters on datasets with a specific schema. The <code>Map&lt;Column,
     * Type&gt;</code> object is an array of key-value pairs representing the schema
     * this transform accepts, where <code>Column</code> is the name of a column, and
     * <code>Type</code> is the type of the data such as an integer or string. Has an
     * upper bound of 100 columns.</p>
     */
    inline TransformFilterCriteria& AddSchema(const SchemaColumn& value) { m_schemaHasBeenSet = true; m_schema.push_back(value); return *this; }

    /**
     * <p>Filters on datasets with a specific schema. The <code>Map&lt;Column,
     * Type&gt;</code> object is an array of key-value pairs representing the schema
     * this transform accepts, where <code>Column</code> is the name of a column, and
     * <code>Type</code> is the type of the data such as an integer or string. Has an
     * upper bound of 100 columns.</p>
     */
    inline TransformFilterCriteria& AddSchema(SchemaColumn&& value) { m_schemaHasBeenSet = true; m_schema.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    TransformType m_transformType;
    bool m_transformTypeHasBeenSet = false;

    TransformStatusType m_status;
    bool m_statusHasBeenSet = false;

    Aws::String m_glueVersion;
    bool m_glueVersionHasBeenSet = false;

    Aws::Utils::DateTime m_createdBefore;
    bool m_createdBeforeHasBeenSet = false;

    Aws::Utils::DateTime m_createdAfter;
    bool m_createdAfterHasBeenSet = false;

    Aws::Utils::DateTime m_lastModifiedBefore;
    bool m_lastModifiedBeforeHasBeenSet = false;

    Aws::Utils::DateTime m_lastModifiedAfter;
    bool m_lastModifiedAfterHasBeenSet = false;

    Aws::Vector<SchemaColumn> m_schema;
    bool m_schemaHasBeenSet = false;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
