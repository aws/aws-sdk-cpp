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


    ///@{
    /**
     * <p>A unique transform name that is used to filter the machine learning
     * transforms.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline TransformFilterCriteria& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline TransformFilterCriteria& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline TransformFilterCriteria& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of machine learning transform that is used to filter the machine
     * learning transforms.</p>
     */
    inline const TransformType& GetTransformType() const{ return m_transformType; }
    inline bool TransformTypeHasBeenSet() const { return m_transformTypeHasBeenSet; }
    inline void SetTransformType(const TransformType& value) { m_transformTypeHasBeenSet = true; m_transformType = value; }
    inline void SetTransformType(TransformType&& value) { m_transformTypeHasBeenSet = true; m_transformType = std::move(value); }
    inline TransformFilterCriteria& WithTransformType(const TransformType& value) { SetTransformType(value); return *this;}
    inline TransformFilterCriteria& WithTransformType(TransformType&& value) { SetTransformType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Filters the list of machine learning transforms by the last known status of
     * the transforms (to indicate whether a transform can be used or not). One of
     * "NOT_READY", "READY", or "DELETING".</p>
     */
    inline const TransformStatusType& GetStatus() const{ return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(const TransformStatusType& value) { m_statusHasBeenSet = true; m_status = value; }
    inline void SetStatus(TransformStatusType&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }
    inline TransformFilterCriteria& WithStatus(const TransformStatusType& value) { SetStatus(value); return *this;}
    inline TransformFilterCriteria& WithStatus(TransformStatusType&& value) { SetStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>This value determines which version of Glue this machine learning transform
     * is compatible with. Glue 1.0 is recommended for most customers. If the value is
     * not set, the Glue compatibility defaults to Glue 0.9. For more information, see
     * <a
     * href="https://docs.aws.amazon.com/glue/latest/dg/release-notes.html#release-notes-versions">Glue
     * Versions</a> in the developer guide.</p>
     */
    inline const Aws::String& GetGlueVersion() const{ return m_glueVersion; }
    inline bool GlueVersionHasBeenSet() const { return m_glueVersionHasBeenSet; }
    inline void SetGlueVersion(const Aws::String& value) { m_glueVersionHasBeenSet = true; m_glueVersion = value; }
    inline void SetGlueVersion(Aws::String&& value) { m_glueVersionHasBeenSet = true; m_glueVersion = std::move(value); }
    inline void SetGlueVersion(const char* value) { m_glueVersionHasBeenSet = true; m_glueVersion.assign(value); }
    inline TransformFilterCriteria& WithGlueVersion(const Aws::String& value) { SetGlueVersion(value); return *this;}
    inline TransformFilterCriteria& WithGlueVersion(Aws::String&& value) { SetGlueVersion(std::move(value)); return *this;}
    inline TransformFilterCriteria& WithGlueVersion(const char* value) { SetGlueVersion(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time and date before which the transforms were created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedBefore() const{ return m_createdBefore; }
    inline bool CreatedBeforeHasBeenSet() const { return m_createdBeforeHasBeenSet; }
    inline void SetCreatedBefore(const Aws::Utils::DateTime& value) { m_createdBeforeHasBeenSet = true; m_createdBefore = value; }
    inline void SetCreatedBefore(Aws::Utils::DateTime&& value) { m_createdBeforeHasBeenSet = true; m_createdBefore = std::move(value); }
    inline TransformFilterCriteria& WithCreatedBefore(const Aws::Utils::DateTime& value) { SetCreatedBefore(value); return *this;}
    inline TransformFilterCriteria& WithCreatedBefore(Aws::Utils::DateTime&& value) { SetCreatedBefore(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time and date after which the transforms were created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAfter() const{ return m_createdAfter; }
    inline bool CreatedAfterHasBeenSet() const { return m_createdAfterHasBeenSet; }
    inline void SetCreatedAfter(const Aws::Utils::DateTime& value) { m_createdAfterHasBeenSet = true; m_createdAfter = value; }
    inline void SetCreatedAfter(Aws::Utils::DateTime&& value) { m_createdAfterHasBeenSet = true; m_createdAfter = std::move(value); }
    inline TransformFilterCriteria& WithCreatedAfter(const Aws::Utils::DateTime& value) { SetCreatedAfter(value); return *this;}
    inline TransformFilterCriteria& WithCreatedAfter(Aws::Utils::DateTime&& value) { SetCreatedAfter(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Filter on transforms last modified before this date.</p>
     */
    inline const Aws::Utils::DateTime& GetLastModifiedBefore() const{ return m_lastModifiedBefore; }
    inline bool LastModifiedBeforeHasBeenSet() const { return m_lastModifiedBeforeHasBeenSet; }
    inline void SetLastModifiedBefore(const Aws::Utils::DateTime& value) { m_lastModifiedBeforeHasBeenSet = true; m_lastModifiedBefore = value; }
    inline void SetLastModifiedBefore(Aws::Utils::DateTime&& value) { m_lastModifiedBeforeHasBeenSet = true; m_lastModifiedBefore = std::move(value); }
    inline TransformFilterCriteria& WithLastModifiedBefore(const Aws::Utils::DateTime& value) { SetLastModifiedBefore(value); return *this;}
    inline TransformFilterCriteria& WithLastModifiedBefore(Aws::Utils::DateTime&& value) { SetLastModifiedBefore(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Filter on transforms last modified after this date.</p>
     */
    inline const Aws::Utils::DateTime& GetLastModifiedAfter() const{ return m_lastModifiedAfter; }
    inline bool LastModifiedAfterHasBeenSet() const { return m_lastModifiedAfterHasBeenSet; }
    inline void SetLastModifiedAfter(const Aws::Utils::DateTime& value) { m_lastModifiedAfterHasBeenSet = true; m_lastModifiedAfter = value; }
    inline void SetLastModifiedAfter(Aws::Utils::DateTime&& value) { m_lastModifiedAfterHasBeenSet = true; m_lastModifiedAfter = std::move(value); }
    inline TransformFilterCriteria& WithLastModifiedAfter(const Aws::Utils::DateTime& value) { SetLastModifiedAfter(value); return *this;}
    inline TransformFilterCriteria& WithLastModifiedAfter(Aws::Utils::DateTime&& value) { SetLastModifiedAfter(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Filters on datasets with a specific schema. The <code>Map&lt;Column,
     * Type&gt;</code> object is an array of key-value pairs representing the schema
     * this transform accepts, where <code>Column</code> is the name of a column, and
     * <code>Type</code> is the type of the data such as an integer or string. Has an
     * upper bound of 100 columns.</p>
     */
    inline const Aws::Vector<SchemaColumn>& GetSchema() const{ return m_schema; }
    inline bool SchemaHasBeenSet() const { return m_schemaHasBeenSet; }
    inline void SetSchema(const Aws::Vector<SchemaColumn>& value) { m_schemaHasBeenSet = true; m_schema = value; }
    inline void SetSchema(Aws::Vector<SchemaColumn>&& value) { m_schemaHasBeenSet = true; m_schema = std::move(value); }
    inline TransformFilterCriteria& WithSchema(const Aws::Vector<SchemaColumn>& value) { SetSchema(value); return *this;}
    inline TransformFilterCriteria& WithSchema(Aws::Vector<SchemaColumn>&& value) { SetSchema(std::move(value)); return *this;}
    inline TransformFilterCriteria& AddSchema(const SchemaColumn& value) { m_schemaHasBeenSet = true; m_schema.push_back(value); return *this; }
    inline TransformFilterCriteria& AddSchema(SchemaColumn&& value) { m_schemaHasBeenSet = true; m_schema.push_back(std::move(value)); return *this; }
    ///@}
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
