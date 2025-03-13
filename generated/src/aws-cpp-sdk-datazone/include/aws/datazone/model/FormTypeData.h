/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/datazone/DataZone_EXPORTS.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/datazone/model/Model.h>
#include <aws/datazone/model/FormTypeStatus.h>
#include <aws/datazone/model/Import.h>
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
namespace DataZone
{
namespace Model
{

  /**
   * <p>The details of the metadata form type.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/datazone-2018-05-10/FormTypeData">AWS
   * API Reference</a></p>
   */
  class FormTypeData
  {
  public:
    AWS_DATAZONE_API FormTypeData() = default;
    AWS_DATAZONE_API FormTypeData(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATAZONE_API FormTypeData& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATAZONE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The timestamp of when the metadata form type was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const { return m_createdAt; }
    inline bool CreatedAtHasBeenSet() const { return m_createdAtHasBeenSet; }
    template<typename CreatedAtT = Aws::Utils::DateTime>
    void SetCreatedAt(CreatedAtT&& value) { m_createdAtHasBeenSet = true; m_createdAt = std::forward<CreatedAtT>(value); }
    template<typename CreatedAtT = Aws::Utils::DateTime>
    FormTypeData& WithCreatedAt(CreatedAtT&& value) { SetCreatedAt(std::forward<CreatedAtT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon DataZone user who created teh metadata form type.</p>
     */
    inline const Aws::String& GetCreatedBy() const { return m_createdBy; }
    inline bool CreatedByHasBeenSet() const { return m_createdByHasBeenSet; }
    template<typename CreatedByT = Aws::String>
    void SetCreatedBy(CreatedByT&& value) { m_createdByHasBeenSet = true; m_createdBy = std::forward<CreatedByT>(value); }
    template<typename CreatedByT = Aws::String>
    FormTypeData& WithCreatedBy(CreatedByT&& value) { SetCreatedBy(std::forward<CreatedByT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The description of the metadata form type.</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    FormTypeData& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of the Amazon DataZone domain in which the form type
     * exists.</p>
     */
    inline const Aws::String& GetDomainId() const { return m_domainId; }
    inline bool DomainIdHasBeenSet() const { return m_domainIdHasBeenSet; }
    template<typename DomainIdT = Aws::String>
    void SetDomainId(DomainIdT&& value) { m_domainIdHasBeenSet = true; m_domainId = std::forward<DomainIdT>(value); }
    template<typename DomainIdT = Aws::String>
    FormTypeData& WithDomainId(DomainIdT&& value) { SetDomainId(std::forward<DomainIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The imports specified in the form type.</p>
     */
    inline const Aws::Vector<Import>& GetImports() const { return m_imports; }
    inline bool ImportsHasBeenSet() const { return m_importsHasBeenSet; }
    template<typename ImportsT = Aws::Vector<Import>>
    void SetImports(ImportsT&& value) { m_importsHasBeenSet = true; m_imports = std::forward<ImportsT>(value); }
    template<typename ImportsT = Aws::Vector<Import>>
    FormTypeData& WithImports(ImportsT&& value) { SetImports(std::forward<ImportsT>(value)); return *this;}
    template<typename ImportsT = Import>
    FormTypeData& AddImports(ImportsT&& value) { m_importsHasBeenSet = true; m_imports.emplace_back(std::forward<ImportsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The model of the form type.</p>
     */
    inline const Model& GetModel() const { return m_model; }
    inline bool ModelHasBeenSet() const { return m_modelHasBeenSet; }
    template<typename ModelT = Model>
    void SetModel(ModelT&& value) { m_modelHasBeenSet = true; m_model = std::forward<ModelT>(value); }
    template<typename ModelT = Model>
    FormTypeData& WithModel(ModelT&& value) { SetModel(std::forward<ModelT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the form type.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    FormTypeData& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of the Amazon DataZone domain in which the form type was
     * originally created.</p>
     */
    inline const Aws::String& GetOriginDomainId() const { return m_originDomainId; }
    inline bool OriginDomainIdHasBeenSet() const { return m_originDomainIdHasBeenSet; }
    template<typename OriginDomainIdT = Aws::String>
    void SetOriginDomainId(OriginDomainIdT&& value) { m_originDomainIdHasBeenSet = true; m_originDomainId = std::forward<OriginDomainIdT>(value); }
    template<typename OriginDomainIdT = Aws::String>
    FormTypeData& WithOriginDomainId(OriginDomainIdT&& value) { SetOriginDomainId(std::forward<OriginDomainIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of the project in which the form type was originally
     * created.</p>
     */
    inline const Aws::String& GetOriginProjectId() const { return m_originProjectId; }
    inline bool OriginProjectIdHasBeenSet() const { return m_originProjectIdHasBeenSet; }
    template<typename OriginProjectIdT = Aws::String>
    void SetOriginProjectId(OriginProjectIdT&& value) { m_originProjectIdHasBeenSet = true; m_originProjectId = std::forward<OriginProjectIdT>(value); }
    template<typename OriginProjectIdT = Aws::String>
    FormTypeData& WithOriginProjectId(OriginProjectIdT&& value) { SetOriginProjectId(std::forward<OriginProjectIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of the project that owns the form type.</p>
     */
    inline const Aws::String& GetOwningProjectId() const { return m_owningProjectId; }
    inline bool OwningProjectIdHasBeenSet() const { return m_owningProjectIdHasBeenSet; }
    template<typename OwningProjectIdT = Aws::String>
    void SetOwningProjectId(OwningProjectIdT&& value) { m_owningProjectIdHasBeenSet = true; m_owningProjectId = std::forward<OwningProjectIdT>(value); }
    template<typename OwningProjectIdT = Aws::String>
    FormTypeData& WithOwningProjectId(OwningProjectIdT&& value) { SetOwningProjectId(std::forward<OwningProjectIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The revision of the form type.</p>
     */
    inline const Aws::String& GetRevision() const { return m_revision; }
    inline bool RevisionHasBeenSet() const { return m_revisionHasBeenSet; }
    template<typename RevisionT = Aws::String>
    void SetRevision(RevisionT&& value) { m_revisionHasBeenSet = true; m_revision = std::forward<RevisionT>(value); }
    template<typename RevisionT = Aws::String>
    FormTypeData& WithRevision(RevisionT&& value) { SetRevision(std::forward<RevisionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the form type.</p>
     */
    inline FormTypeStatus GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(FormTypeStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline FormTypeData& WithStatus(FormTypeStatus value) { SetStatus(value); return *this;}
    ///@}
  private:

    Aws::Utils::DateTime m_createdAt{};
    bool m_createdAtHasBeenSet = false;

    Aws::String m_createdBy;
    bool m_createdByHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::String m_domainId;
    bool m_domainIdHasBeenSet = false;

    Aws::Vector<Import> m_imports;
    bool m_importsHasBeenSet = false;

    Model m_model;
    bool m_modelHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_originDomainId;
    bool m_originDomainIdHasBeenSet = false;

    Aws::String m_originProjectId;
    bool m_originProjectIdHasBeenSet = false;

    Aws::String m_owningProjectId;
    bool m_owningProjectIdHasBeenSet = false;

    Aws::String m_revision;
    bool m_revisionHasBeenSet = false;

    FormTypeStatus m_status{FormTypeStatus::NOT_SET};
    bool m_statusHasBeenSet = false;
  };

} // namespace Model
} // namespace DataZone
} // namespace Aws
