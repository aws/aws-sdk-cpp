/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/datazone/DataZone_EXPORTS.h>
#include <aws/datazone/DataZoneRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/datazone/model/Model.h>
#include <aws/datazone/model/FormTypeStatus.h>
#include <utility>

namespace Aws
{
namespace DataZone
{
namespace Model
{

  /**
   */
  class CreateFormTypeRequest : public DataZoneRequest
  {
  public:
    AWS_DATAZONE_API CreateFormTypeRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateFormType"; }

    AWS_DATAZONE_API Aws::String SerializePayload() const override;


    /**
     * <p>The description of this Amazon DataZone metadata form type.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>The description of this Amazon DataZone metadata form type.</p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>The description of this Amazon DataZone metadata form type.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>The description of this Amazon DataZone metadata form type.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>The description of this Amazon DataZone metadata form type.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>The description of this Amazon DataZone metadata form type.</p>
     */
    inline CreateFormTypeRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>The description of this Amazon DataZone metadata form type.</p>
     */
    inline CreateFormTypeRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>The description of this Amazon DataZone metadata form type.</p>
     */
    inline CreateFormTypeRequest& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>The ID of the Amazon DataZone domain in which this metadata form type is
     * created.</p>
     */
    inline const Aws::String& GetDomainIdentifier() const{ return m_domainIdentifier; }

    /**
     * <p>The ID of the Amazon DataZone domain in which this metadata form type is
     * created.</p>
     */
    inline bool DomainIdentifierHasBeenSet() const { return m_domainIdentifierHasBeenSet; }

    /**
     * <p>The ID of the Amazon DataZone domain in which this metadata form type is
     * created.</p>
     */
    inline void SetDomainIdentifier(const Aws::String& value) { m_domainIdentifierHasBeenSet = true; m_domainIdentifier = value; }

    /**
     * <p>The ID of the Amazon DataZone domain in which this metadata form type is
     * created.</p>
     */
    inline void SetDomainIdentifier(Aws::String&& value) { m_domainIdentifierHasBeenSet = true; m_domainIdentifier = std::move(value); }

    /**
     * <p>The ID of the Amazon DataZone domain in which this metadata form type is
     * created.</p>
     */
    inline void SetDomainIdentifier(const char* value) { m_domainIdentifierHasBeenSet = true; m_domainIdentifier.assign(value); }

    /**
     * <p>The ID of the Amazon DataZone domain in which this metadata form type is
     * created.</p>
     */
    inline CreateFormTypeRequest& WithDomainIdentifier(const Aws::String& value) { SetDomainIdentifier(value); return *this;}

    /**
     * <p>The ID of the Amazon DataZone domain in which this metadata form type is
     * created.</p>
     */
    inline CreateFormTypeRequest& WithDomainIdentifier(Aws::String&& value) { SetDomainIdentifier(std::move(value)); return *this;}

    /**
     * <p>The ID of the Amazon DataZone domain in which this metadata form type is
     * created.</p>
     */
    inline CreateFormTypeRequest& WithDomainIdentifier(const char* value) { SetDomainIdentifier(value); return *this;}


    /**
     * <p>The model of this Amazon DataZone metadata form type.</p>
     */
    inline const Model& GetModel() const{ return m_model; }

    /**
     * <p>The model of this Amazon DataZone metadata form type.</p>
     */
    inline bool ModelHasBeenSet() const { return m_modelHasBeenSet; }

    /**
     * <p>The model of this Amazon DataZone metadata form type.</p>
     */
    inline void SetModel(const Model& value) { m_modelHasBeenSet = true; m_model = value; }

    /**
     * <p>The model of this Amazon DataZone metadata form type.</p>
     */
    inline void SetModel(Model&& value) { m_modelHasBeenSet = true; m_model = std::move(value); }

    /**
     * <p>The model of this Amazon DataZone metadata form type.</p>
     */
    inline CreateFormTypeRequest& WithModel(const Model& value) { SetModel(value); return *this;}

    /**
     * <p>The model of this Amazon DataZone metadata form type.</p>
     */
    inline CreateFormTypeRequest& WithModel(Model&& value) { SetModel(std::move(value)); return *this;}


    /**
     * <p>The name of this Amazon DataZone metadata form type.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of this Amazon DataZone metadata form type.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of this Amazon DataZone metadata form type.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of this Amazon DataZone metadata form type.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of this Amazon DataZone metadata form type.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of this Amazon DataZone metadata form type.</p>
     */
    inline CreateFormTypeRequest& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of this Amazon DataZone metadata form type.</p>
     */
    inline CreateFormTypeRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of this Amazon DataZone metadata form type.</p>
     */
    inline CreateFormTypeRequest& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The ID of the Amazon DataZone project that owns this metadata form type.</p>
     */
    inline const Aws::String& GetOwningProjectIdentifier() const{ return m_owningProjectIdentifier; }

    /**
     * <p>The ID of the Amazon DataZone project that owns this metadata form type.</p>
     */
    inline bool OwningProjectIdentifierHasBeenSet() const { return m_owningProjectIdentifierHasBeenSet; }

    /**
     * <p>The ID of the Amazon DataZone project that owns this metadata form type.</p>
     */
    inline void SetOwningProjectIdentifier(const Aws::String& value) { m_owningProjectIdentifierHasBeenSet = true; m_owningProjectIdentifier = value; }

    /**
     * <p>The ID of the Amazon DataZone project that owns this metadata form type.</p>
     */
    inline void SetOwningProjectIdentifier(Aws::String&& value) { m_owningProjectIdentifierHasBeenSet = true; m_owningProjectIdentifier = std::move(value); }

    /**
     * <p>The ID of the Amazon DataZone project that owns this metadata form type.</p>
     */
    inline void SetOwningProjectIdentifier(const char* value) { m_owningProjectIdentifierHasBeenSet = true; m_owningProjectIdentifier.assign(value); }

    /**
     * <p>The ID of the Amazon DataZone project that owns this metadata form type.</p>
     */
    inline CreateFormTypeRequest& WithOwningProjectIdentifier(const Aws::String& value) { SetOwningProjectIdentifier(value); return *this;}

    /**
     * <p>The ID of the Amazon DataZone project that owns this metadata form type.</p>
     */
    inline CreateFormTypeRequest& WithOwningProjectIdentifier(Aws::String&& value) { SetOwningProjectIdentifier(std::move(value)); return *this;}

    /**
     * <p>The ID of the Amazon DataZone project that owns this metadata form type.</p>
     */
    inline CreateFormTypeRequest& WithOwningProjectIdentifier(const char* value) { SetOwningProjectIdentifier(value); return *this;}


    /**
     * <p>The status of this Amazon DataZone metadata form type.</p>
     */
    inline const FormTypeStatus& GetStatus() const{ return m_status; }

    /**
     * <p>The status of this Amazon DataZone metadata form type.</p>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p>The status of this Amazon DataZone metadata form type.</p>
     */
    inline void SetStatus(const FormTypeStatus& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>The status of this Amazon DataZone metadata form type.</p>
     */
    inline void SetStatus(FormTypeStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p>The status of this Amazon DataZone metadata form type.</p>
     */
    inline CreateFormTypeRequest& WithStatus(const FormTypeStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>The status of this Amazon DataZone metadata form type.</p>
     */
    inline CreateFormTypeRequest& WithStatus(FormTypeStatus&& value) { SetStatus(std::move(value)); return *this;}

  private:

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::String m_domainIdentifier;
    bool m_domainIdentifierHasBeenSet = false;

    Model m_model;
    bool m_modelHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_owningProjectIdentifier;
    bool m_owningProjectIdentifierHasBeenSet = false;

    FormTypeStatus m_status;
    bool m_statusHasBeenSet = false;
  };

} // namespace Model
} // namespace DataZone
} // namespace Aws
