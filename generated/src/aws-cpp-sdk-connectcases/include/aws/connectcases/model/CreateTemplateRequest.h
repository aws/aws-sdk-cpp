/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connectcases/ConnectCases_EXPORTS.h>
#include <aws/connectcases/ConnectCasesRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/connectcases/model/LayoutConfiguration.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/connectcases/model/TemplateStatus.h>
#include <aws/connectcases/model/RequiredField.h>
#include <utility>

namespace Aws
{
namespace ConnectCases
{
namespace Model
{

  /**
   */
  class CreateTemplateRequest : public ConnectCasesRequest
  {
  public:
    AWS_CONNECTCASES_API CreateTemplateRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateTemplate"; }

    AWS_CONNECTCASES_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>A brief description of the template.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }
    inline CreateTemplateRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline CreateTemplateRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline CreateTemplateRequest& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique identifier of the Cases domain. </p>
     */
    inline const Aws::String& GetDomainId() const{ return m_domainId; }
    inline bool DomainIdHasBeenSet() const { return m_domainIdHasBeenSet; }
    inline void SetDomainId(const Aws::String& value) { m_domainIdHasBeenSet = true; m_domainId = value; }
    inline void SetDomainId(Aws::String&& value) { m_domainIdHasBeenSet = true; m_domainId = std::move(value); }
    inline void SetDomainId(const char* value) { m_domainIdHasBeenSet = true; m_domainId.assign(value); }
    inline CreateTemplateRequest& WithDomainId(const Aws::String& value) { SetDomainId(value); return *this;}
    inline CreateTemplateRequest& WithDomainId(Aws::String&& value) { SetDomainId(std::move(value)); return *this;}
    inline CreateTemplateRequest& WithDomainId(const char* value) { SetDomainId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Configuration of layouts associated to the template.</p>
     */
    inline const LayoutConfiguration& GetLayoutConfiguration() const{ return m_layoutConfiguration; }
    inline bool LayoutConfigurationHasBeenSet() const { return m_layoutConfigurationHasBeenSet; }
    inline void SetLayoutConfiguration(const LayoutConfiguration& value) { m_layoutConfigurationHasBeenSet = true; m_layoutConfiguration = value; }
    inline void SetLayoutConfiguration(LayoutConfiguration&& value) { m_layoutConfigurationHasBeenSet = true; m_layoutConfiguration = std::move(value); }
    inline CreateTemplateRequest& WithLayoutConfiguration(const LayoutConfiguration& value) { SetLayoutConfiguration(value); return *this;}
    inline CreateTemplateRequest& WithLayoutConfiguration(LayoutConfiguration&& value) { SetLayoutConfiguration(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A name for the template. It must be unique per domain.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline CreateTemplateRequest& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline CreateTemplateRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline CreateTemplateRequest& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of fields that must contain a value for a case to be successfully
     * created with this template.</p>
     */
    inline const Aws::Vector<RequiredField>& GetRequiredFields() const{ return m_requiredFields; }
    inline bool RequiredFieldsHasBeenSet() const { return m_requiredFieldsHasBeenSet; }
    inline void SetRequiredFields(const Aws::Vector<RequiredField>& value) { m_requiredFieldsHasBeenSet = true; m_requiredFields = value; }
    inline void SetRequiredFields(Aws::Vector<RequiredField>&& value) { m_requiredFieldsHasBeenSet = true; m_requiredFields = std::move(value); }
    inline CreateTemplateRequest& WithRequiredFields(const Aws::Vector<RequiredField>& value) { SetRequiredFields(value); return *this;}
    inline CreateTemplateRequest& WithRequiredFields(Aws::Vector<RequiredField>&& value) { SetRequiredFields(std::move(value)); return *this;}
    inline CreateTemplateRequest& AddRequiredFields(const RequiredField& value) { m_requiredFieldsHasBeenSet = true; m_requiredFields.push_back(value); return *this; }
    inline CreateTemplateRequest& AddRequiredFields(RequiredField&& value) { m_requiredFieldsHasBeenSet = true; m_requiredFields.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The status of the template.</p>
     */
    inline const TemplateStatus& GetStatus() const{ return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(const TemplateStatus& value) { m_statusHasBeenSet = true; m_status = value; }
    inline void SetStatus(TemplateStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }
    inline CreateTemplateRequest& WithStatus(const TemplateStatus& value) { SetStatus(value); return *this;}
    inline CreateTemplateRequest& WithStatus(TemplateStatus&& value) { SetStatus(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::String m_domainId;
    bool m_domainIdHasBeenSet = false;

    LayoutConfiguration m_layoutConfiguration;
    bool m_layoutConfigurationHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::Vector<RequiredField> m_requiredFields;
    bool m_requiredFieldsHasBeenSet = false;

    TemplateStatus m_status;
    bool m_statusHasBeenSet = false;
  };

} // namespace Model
} // namespace ConnectCases
} // namespace Aws
