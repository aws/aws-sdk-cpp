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
    AWS_DATAZONE_API FormTypeData();
    AWS_DATAZONE_API FormTypeData(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATAZONE_API FormTypeData& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATAZONE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The timestamp of when the metadata form type was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const{ return m_createdAt; }
    inline bool CreatedAtHasBeenSet() const { return m_createdAtHasBeenSet; }
    inline void SetCreatedAt(const Aws::Utils::DateTime& value) { m_createdAtHasBeenSet = true; m_createdAt = value; }
    inline void SetCreatedAt(Aws::Utils::DateTime&& value) { m_createdAtHasBeenSet = true; m_createdAt = std::move(value); }
    inline FormTypeData& WithCreatedAt(const Aws::Utils::DateTime& value) { SetCreatedAt(value); return *this;}
    inline FormTypeData& WithCreatedAt(Aws::Utils::DateTime&& value) { SetCreatedAt(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon DataZone user who created teh metadata form type.</p>
     */
    inline const Aws::String& GetCreatedBy() const{ return m_createdBy; }
    inline bool CreatedByHasBeenSet() const { return m_createdByHasBeenSet; }
    inline void SetCreatedBy(const Aws::String& value) { m_createdByHasBeenSet = true; m_createdBy = value; }
    inline void SetCreatedBy(Aws::String&& value) { m_createdByHasBeenSet = true; m_createdBy = std::move(value); }
    inline void SetCreatedBy(const char* value) { m_createdByHasBeenSet = true; m_createdBy.assign(value); }
    inline FormTypeData& WithCreatedBy(const Aws::String& value) { SetCreatedBy(value); return *this;}
    inline FormTypeData& WithCreatedBy(Aws::String&& value) { SetCreatedBy(std::move(value)); return *this;}
    inline FormTypeData& WithCreatedBy(const char* value) { SetCreatedBy(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The description of the metadata form type.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }
    inline FormTypeData& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline FormTypeData& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline FormTypeData& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of the Amazon DataZone domain in which the form type
     * exists.</p>
     */
    inline const Aws::String& GetDomainId() const{ return m_domainId; }
    inline bool DomainIdHasBeenSet() const { return m_domainIdHasBeenSet; }
    inline void SetDomainId(const Aws::String& value) { m_domainIdHasBeenSet = true; m_domainId = value; }
    inline void SetDomainId(Aws::String&& value) { m_domainIdHasBeenSet = true; m_domainId = std::move(value); }
    inline void SetDomainId(const char* value) { m_domainIdHasBeenSet = true; m_domainId.assign(value); }
    inline FormTypeData& WithDomainId(const Aws::String& value) { SetDomainId(value); return *this;}
    inline FormTypeData& WithDomainId(Aws::String&& value) { SetDomainId(std::move(value)); return *this;}
    inline FormTypeData& WithDomainId(const char* value) { SetDomainId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The imports specified in the form type.</p>
     */
    inline const Aws::Vector<Import>& GetImports() const{ return m_imports; }
    inline bool ImportsHasBeenSet() const { return m_importsHasBeenSet; }
    inline void SetImports(const Aws::Vector<Import>& value) { m_importsHasBeenSet = true; m_imports = value; }
    inline void SetImports(Aws::Vector<Import>&& value) { m_importsHasBeenSet = true; m_imports = std::move(value); }
    inline FormTypeData& WithImports(const Aws::Vector<Import>& value) { SetImports(value); return *this;}
    inline FormTypeData& WithImports(Aws::Vector<Import>&& value) { SetImports(std::move(value)); return *this;}
    inline FormTypeData& AddImports(const Import& value) { m_importsHasBeenSet = true; m_imports.push_back(value); return *this; }
    inline FormTypeData& AddImports(Import&& value) { m_importsHasBeenSet = true; m_imports.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The model of the form type.</p>
     */
    inline const Model& GetModel() const{ return m_model; }
    inline bool ModelHasBeenSet() const { return m_modelHasBeenSet; }
    inline void SetModel(const Model& value) { m_modelHasBeenSet = true; m_model = value; }
    inline void SetModel(Model&& value) { m_modelHasBeenSet = true; m_model = std::move(value); }
    inline FormTypeData& WithModel(const Model& value) { SetModel(value); return *this;}
    inline FormTypeData& WithModel(Model&& value) { SetModel(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the form type.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline FormTypeData& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline FormTypeData& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline FormTypeData& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of the Amazon DataZone domain in which the form type was
     * originally created.</p>
     */
    inline const Aws::String& GetOriginDomainId() const{ return m_originDomainId; }
    inline bool OriginDomainIdHasBeenSet() const { return m_originDomainIdHasBeenSet; }
    inline void SetOriginDomainId(const Aws::String& value) { m_originDomainIdHasBeenSet = true; m_originDomainId = value; }
    inline void SetOriginDomainId(Aws::String&& value) { m_originDomainIdHasBeenSet = true; m_originDomainId = std::move(value); }
    inline void SetOriginDomainId(const char* value) { m_originDomainIdHasBeenSet = true; m_originDomainId.assign(value); }
    inline FormTypeData& WithOriginDomainId(const Aws::String& value) { SetOriginDomainId(value); return *this;}
    inline FormTypeData& WithOriginDomainId(Aws::String&& value) { SetOriginDomainId(std::move(value)); return *this;}
    inline FormTypeData& WithOriginDomainId(const char* value) { SetOriginDomainId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of the project in which the form type was originally
     * created.</p>
     */
    inline const Aws::String& GetOriginProjectId() const{ return m_originProjectId; }
    inline bool OriginProjectIdHasBeenSet() const { return m_originProjectIdHasBeenSet; }
    inline void SetOriginProjectId(const Aws::String& value) { m_originProjectIdHasBeenSet = true; m_originProjectId = value; }
    inline void SetOriginProjectId(Aws::String&& value) { m_originProjectIdHasBeenSet = true; m_originProjectId = std::move(value); }
    inline void SetOriginProjectId(const char* value) { m_originProjectIdHasBeenSet = true; m_originProjectId.assign(value); }
    inline FormTypeData& WithOriginProjectId(const Aws::String& value) { SetOriginProjectId(value); return *this;}
    inline FormTypeData& WithOriginProjectId(Aws::String&& value) { SetOriginProjectId(std::move(value)); return *this;}
    inline FormTypeData& WithOriginProjectId(const char* value) { SetOriginProjectId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of the project that owns the form type.</p>
     */
    inline const Aws::String& GetOwningProjectId() const{ return m_owningProjectId; }
    inline bool OwningProjectIdHasBeenSet() const { return m_owningProjectIdHasBeenSet; }
    inline void SetOwningProjectId(const Aws::String& value) { m_owningProjectIdHasBeenSet = true; m_owningProjectId = value; }
    inline void SetOwningProjectId(Aws::String&& value) { m_owningProjectIdHasBeenSet = true; m_owningProjectId = std::move(value); }
    inline void SetOwningProjectId(const char* value) { m_owningProjectIdHasBeenSet = true; m_owningProjectId.assign(value); }
    inline FormTypeData& WithOwningProjectId(const Aws::String& value) { SetOwningProjectId(value); return *this;}
    inline FormTypeData& WithOwningProjectId(Aws::String&& value) { SetOwningProjectId(std::move(value)); return *this;}
    inline FormTypeData& WithOwningProjectId(const char* value) { SetOwningProjectId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The revision of the form type.</p>
     */
    inline const Aws::String& GetRevision() const{ return m_revision; }
    inline bool RevisionHasBeenSet() const { return m_revisionHasBeenSet; }
    inline void SetRevision(const Aws::String& value) { m_revisionHasBeenSet = true; m_revision = value; }
    inline void SetRevision(Aws::String&& value) { m_revisionHasBeenSet = true; m_revision = std::move(value); }
    inline void SetRevision(const char* value) { m_revisionHasBeenSet = true; m_revision.assign(value); }
    inline FormTypeData& WithRevision(const Aws::String& value) { SetRevision(value); return *this;}
    inline FormTypeData& WithRevision(Aws::String&& value) { SetRevision(std::move(value)); return *this;}
    inline FormTypeData& WithRevision(const char* value) { SetRevision(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the form type.</p>
     */
    inline const FormTypeStatus& GetStatus() const{ return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(const FormTypeStatus& value) { m_statusHasBeenSet = true; m_status = value; }
    inline void SetStatus(FormTypeStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }
    inline FormTypeData& WithStatus(const FormTypeStatus& value) { SetStatus(value); return *this;}
    inline FormTypeData& WithStatus(FormTypeStatus&& value) { SetStatus(std::move(value)); return *this;}
    ///@}
  private:

    Aws::Utils::DateTime m_createdAt;
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

    FormTypeStatus m_status;
    bool m_statusHasBeenSet = false;
  };

} // namespace Model
} // namespace DataZone
} // namespace Aws
