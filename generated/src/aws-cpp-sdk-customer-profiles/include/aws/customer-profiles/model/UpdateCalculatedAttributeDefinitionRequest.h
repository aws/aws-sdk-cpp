/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/customer-profiles/CustomerProfiles_EXPORTS.h>
#include <aws/customer-profiles/CustomerProfilesRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/customer-profiles/model/Conditions.h>
#include <utility>

namespace Aws
{
namespace CustomerProfiles
{
namespace Model
{

  /**
   */
  class UpdateCalculatedAttributeDefinitionRequest : public CustomerProfilesRequest
  {
  public:
    AWS_CUSTOMERPROFILES_API UpdateCalculatedAttributeDefinitionRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateCalculatedAttributeDefinition"; }

    AWS_CUSTOMERPROFILES_API Aws::String SerializePayload() const override;


    /**
     * <p>The unique name of the domain.</p>
     */
    inline const Aws::String& GetDomainName() const{ return m_domainName; }

    /**
     * <p>The unique name of the domain.</p>
     */
    inline bool DomainNameHasBeenSet() const { return m_domainNameHasBeenSet; }

    /**
     * <p>The unique name of the domain.</p>
     */
    inline void SetDomainName(const Aws::String& value) { m_domainNameHasBeenSet = true; m_domainName = value; }

    /**
     * <p>The unique name of the domain.</p>
     */
    inline void SetDomainName(Aws::String&& value) { m_domainNameHasBeenSet = true; m_domainName = std::move(value); }

    /**
     * <p>The unique name of the domain.</p>
     */
    inline void SetDomainName(const char* value) { m_domainNameHasBeenSet = true; m_domainName.assign(value); }

    /**
     * <p>The unique name of the domain.</p>
     */
    inline UpdateCalculatedAttributeDefinitionRequest& WithDomainName(const Aws::String& value) { SetDomainName(value); return *this;}

    /**
     * <p>The unique name of the domain.</p>
     */
    inline UpdateCalculatedAttributeDefinitionRequest& WithDomainName(Aws::String&& value) { SetDomainName(std::move(value)); return *this;}

    /**
     * <p>The unique name of the domain.</p>
     */
    inline UpdateCalculatedAttributeDefinitionRequest& WithDomainName(const char* value) { SetDomainName(value); return *this;}


    /**
     * <p>The unique name of the calculated attribute.</p>
     */
    inline const Aws::String& GetCalculatedAttributeName() const{ return m_calculatedAttributeName; }

    /**
     * <p>The unique name of the calculated attribute.</p>
     */
    inline bool CalculatedAttributeNameHasBeenSet() const { return m_calculatedAttributeNameHasBeenSet; }

    /**
     * <p>The unique name of the calculated attribute.</p>
     */
    inline void SetCalculatedAttributeName(const Aws::String& value) { m_calculatedAttributeNameHasBeenSet = true; m_calculatedAttributeName = value; }

    /**
     * <p>The unique name of the calculated attribute.</p>
     */
    inline void SetCalculatedAttributeName(Aws::String&& value) { m_calculatedAttributeNameHasBeenSet = true; m_calculatedAttributeName = std::move(value); }

    /**
     * <p>The unique name of the calculated attribute.</p>
     */
    inline void SetCalculatedAttributeName(const char* value) { m_calculatedAttributeNameHasBeenSet = true; m_calculatedAttributeName.assign(value); }

    /**
     * <p>The unique name of the calculated attribute.</p>
     */
    inline UpdateCalculatedAttributeDefinitionRequest& WithCalculatedAttributeName(const Aws::String& value) { SetCalculatedAttributeName(value); return *this;}

    /**
     * <p>The unique name of the calculated attribute.</p>
     */
    inline UpdateCalculatedAttributeDefinitionRequest& WithCalculatedAttributeName(Aws::String&& value) { SetCalculatedAttributeName(std::move(value)); return *this;}

    /**
     * <p>The unique name of the calculated attribute.</p>
     */
    inline UpdateCalculatedAttributeDefinitionRequest& WithCalculatedAttributeName(const char* value) { SetCalculatedAttributeName(value); return *this;}


    /**
     * <p>The display name of the calculated attribute.</p>
     */
    inline const Aws::String& GetDisplayName() const{ return m_displayName; }

    /**
     * <p>The display name of the calculated attribute.</p>
     */
    inline bool DisplayNameHasBeenSet() const { return m_displayNameHasBeenSet; }

    /**
     * <p>The display name of the calculated attribute.</p>
     */
    inline void SetDisplayName(const Aws::String& value) { m_displayNameHasBeenSet = true; m_displayName = value; }

    /**
     * <p>The display name of the calculated attribute.</p>
     */
    inline void SetDisplayName(Aws::String&& value) { m_displayNameHasBeenSet = true; m_displayName = std::move(value); }

    /**
     * <p>The display name of the calculated attribute.</p>
     */
    inline void SetDisplayName(const char* value) { m_displayNameHasBeenSet = true; m_displayName.assign(value); }

    /**
     * <p>The display name of the calculated attribute.</p>
     */
    inline UpdateCalculatedAttributeDefinitionRequest& WithDisplayName(const Aws::String& value) { SetDisplayName(value); return *this;}

    /**
     * <p>The display name of the calculated attribute.</p>
     */
    inline UpdateCalculatedAttributeDefinitionRequest& WithDisplayName(Aws::String&& value) { SetDisplayName(std::move(value)); return *this;}

    /**
     * <p>The display name of the calculated attribute.</p>
     */
    inline UpdateCalculatedAttributeDefinitionRequest& WithDisplayName(const char* value) { SetDisplayName(value); return *this;}


    /**
     * <p>The description of the calculated attribute.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>The description of the calculated attribute.</p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>The description of the calculated attribute.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>The description of the calculated attribute.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>The description of the calculated attribute.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>The description of the calculated attribute.</p>
     */
    inline UpdateCalculatedAttributeDefinitionRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>The description of the calculated attribute.</p>
     */
    inline UpdateCalculatedAttributeDefinitionRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>The description of the calculated attribute.</p>
     */
    inline UpdateCalculatedAttributeDefinitionRequest& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>The conditions including range, object count, and threshold for the
     * calculated attribute.</p>
     */
    inline const Conditions& GetConditions() const{ return m_conditions; }

    /**
     * <p>The conditions including range, object count, and threshold for the
     * calculated attribute.</p>
     */
    inline bool ConditionsHasBeenSet() const { return m_conditionsHasBeenSet; }

    /**
     * <p>The conditions including range, object count, and threshold for the
     * calculated attribute.</p>
     */
    inline void SetConditions(const Conditions& value) { m_conditionsHasBeenSet = true; m_conditions = value; }

    /**
     * <p>The conditions including range, object count, and threshold for the
     * calculated attribute.</p>
     */
    inline void SetConditions(Conditions&& value) { m_conditionsHasBeenSet = true; m_conditions = std::move(value); }

    /**
     * <p>The conditions including range, object count, and threshold for the
     * calculated attribute.</p>
     */
    inline UpdateCalculatedAttributeDefinitionRequest& WithConditions(const Conditions& value) { SetConditions(value); return *this;}

    /**
     * <p>The conditions including range, object count, and threshold for the
     * calculated attribute.</p>
     */
    inline UpdateCalculatedAttributeDefinitionRequest& WithConditions(Conditions&& value) { SetConditions(std::move(value)); return *this;}

  private:

    Aws::String m_domainName;
    bool m_domainNameHasBeenSet = false;

    Aws::String m_calculatedAttributeName;
    bool m_calculatedAttributeNameHasBeenSet = false;

    Aws::String m_displayName;
    bool m_displayNameHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Conditions m_conditions;
    bool m_conditionsHasBeenSet = false;
  };

} // namespace Model
} // namespace CustomerProfiles
} // namespace Aws
