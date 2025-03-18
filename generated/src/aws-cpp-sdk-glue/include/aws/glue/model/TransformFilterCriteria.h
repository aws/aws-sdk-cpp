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
    AWS_GLUE_API TransformFilterCriteria() = default;
    AWS_GLUE_API TransformFilterCriteria(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API TransformFilterCriteria& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>A unique transform name that is used to filter the machine learning
     * transforms.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    TransformFilterCriteria& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of machine learning transform that is used to filter the machine
     * learning transforms.</p>
     */
    inline TransformType GetTransformType() const { return m_transformType; }
    inline bool TransformTypeHasBeenSet() const { return m_transformTypeHasBeenSet; }
    inline void SetTransformType(TransformType value) { m_transformTypeHasBeenSet = true; m_transformType = value; }
    inline TransformFilterCriteria& WithTransformType(TransformType value) { SetTransformType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Filters the list of machine learning transforms by the last known status of
     * the transforms (to indicate whether a transform can be used or not). One of
     * "NOT_READY", "READY", or "DELETING".</p>
     */
    inline TransformStatusType GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(TransformStatusType value) { m_statusHasBeenSet = true; m_status = value; }
    inline TransformFilterCriteria& WithStatus(TransformStatusType value) { SetStatus(value); return *this;}
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
    inline const Aws::String& GetGlueVersion() const { return m_glueVersion; }
    inline bool GlueVersionHasBeenSet() const { return m_glueVersionHasBeenSet; }
    template<typename GlueVersionT = Aws::String>
    void SetGlueVersion(GlueVersionT&& value) { m_glueVersionHasBeenSet = true; m_glueVersion = std::forward<GlueVersionT>(value); }
    template<typename GlueVersionT = Aws::String>
    TransformFilterCriteria& WithGlueVersion(GlueVersionT&& value) { SetGlueVersion(std::forward<GlueVersionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time and date before which the transforms were created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedBefore() const { return m_createdBefore; }
    inline bool CreatedBeforeHasBeenSet() const { return m_createdBeforeHasBeenSet; }
    template<typename CreatedBeforeT = Aws::Utils::DateTime>
    void SetCreatedBefore(CreatedBeforeT&& value) { m_createdBeforeHasBeenSet = true; m_createdBefore = std::forward<CreatedBeforeT>(value); }
    template<typename CreatedBeforeT = Aws::Utils::DateTime>
    TransformFilterCriteria& WithCreatedBefore(CreatedBeforeT&& value) { SetCreatedBefore(std::forward<CreatedBeforeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time and date after which the transforms were created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAfter() const { return m_createdAfter; }
    inline bool CreatedAfterHasBeenSet() const { return m_createdAfterHasBeenSet; }
    template<typename CreatedAfterT = Aws::Utils::DateTime>
    void SetCreatedAfter(CreatedAfterT&& value) { m_createdAfterHasBeenSet = true; m_createdAfter = std::forward<CreatedAfterT>(value); }
    template<typename CreatedAfterT = Aws::Utils::DateTime>
    TransformFilterCriteria& WithCreatedAfter(CreatedAfterT&& value) { SetCreatedAfter(std::forward<CreatedAfterT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Filter on transforms last modified before this date.</p>
     */
    inline const Aws::Utils::DateTime& GetLastModifiedBefore() const { return m_lastModifiedBefore; }
    inline bool LastModifiedBeforeHasBeenSet() const { return m_lastModifiedBeforeHasBeenSet; }
    template<typename LastModifiedBeforeT = Aws::Utils::DateTime>
    void SetLastModifiedBefore(LastModifiedBeforeT&& value) { m_lastModifiedBeforeHasBeenSet = true; m_lastModifiedBefore = std::forward<LastModifiedBeforeT>(value); }
    template<typename LastModifiedBeforeT = Aws::Utils::DateTime>
    TransformFilterCriteria& WithLastModifiedBefore(LastModifiedBeforeT&& value) { SetLastModifiedBefore(std::forward<LastModifiedBeforeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Filter on transforms last modified after this date.</p>
     */
    inline const Aws::Utils::DateTime& GetLastModifiedAfter() const { return m_lastModifiedAfter; }
    inline bool LastModifiedAfterHasBeenSet() const { return m_lastModifiedAfterHasBeenSet; }
    template<typename LastModifiedAfterT = Aws::Utils::DateTime>
    void SetLastModifiedAfter(LastModifiedAfterT&& value) { m_lastModifiedAfterHasBeenSet = true; m_lastModifiedAfter = std::forward<LastModifiedAfterT>(value); }
    template<typename LastModifiedAfterT = Aws::Utils::DateTime>
    TransformFilterCriteria& WithLastModifiedAfter(LastModifiedAfterT&& value) { SetLastModifiedAfter(std::forward<LastModifiedAfterT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Filters on datasets with a specific schema. The <code>Map&lt;Column,
     * Type&gt;</code> object is an array of key-value pairs representing the schema
     * this transform accepts, where <code>Column</code> is the name of a column, and
     * <code>Type</code> is the type of the data such as an integer or string. Has an
     * upper bound of 100 columns.</p>
     */
    inline const Aws::Vector<SchemaColumn>& GetSchema() const { return m_schema; }
    inline bool SchemaHasBeenSet() const { return m_schemaHasBeenSet; }
    template<typename SchemaT = Aws::Vector<SchemaColumn>>
    void SetSchema(SchemaT&& value) { m_schemaHasBeenSet = true; m_schema = std::forward<SchemaT>(value); }
    template<typename SchemaT = Aws::Vector<SchemaColumn>>
    TransformFilterCriteria& WithSchema(SchemaT&& value) { SetSchema(std::forward<SchemaT>(value)); return *this;}
    template<typename SchemaT = SchemaColumn>
    TransformFilterCriteria& AddSchema(SchemaT&& value) { m_schemaHasBeenSet = true; m_schema.emplace_back(std::forward<SchemaT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    TransformType m_transformType{TransformType::NOT_SET};
    bool m_transformTypeHasBeenSet = false;

    TransformStatusType m_status{TransformStatusType::NOT_SET};
    bool m_statusHasBeenSet = false;

    Aws::String m_glueVersion;
    bool m_glueVersionHasBeenSet = false;

    Aws::Utils::DateTime m_createdBefore{};
    bool m_createdBeforeHasBeenSet = false;

    Aws::Utils::DateTime m_createdAfter{};
    bool m_createdAfterHasBeenSet = false;

    Aws::Utils::DateTime m_lastModifiedBefore{};
    bool m_lastModifiedBeforeHasBeenSet = false;

    Aws::Utils::DateTime m_lastModifiedAfter{};
    bool m_lastModifiedAfterHasBeenSet = false;

    Aws::Vector<SchemaColumn> m_schema;
    bool m_schemaHasBeenSet = false;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
