/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/macie2/Macie2_EXPORTS.h>
#include <aws/macie2/Macie2Request.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/macie2/model/SensitivityInspectionTemplateExcludes.h>
#include <aws/macie2/model/SensitivityInspectionTemplateIncludes.h>
#include <utility>

namespace Aws
{
namespace Macie2
{
namespace Model
{

  /**
   */
  class UpdateSensitivityInspectionTemplateRequest : public Macie2Request
  {
  public:
    AWS_MACIE2_API UpdateSensitivityInspectionTemplateRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateSensitivityInspectionTemplate"; }

    AWS_MACIE2_API Aws::String SerializePayload() const override;


    /**
     * <p>A custom description of the template.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>A custom description of the template.</p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>A custom description of the template.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>A custom description of the template.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>A custom description of the template.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>A custom description of the template.</p>
     */
    inline UpdateSensitivityInspectionTemplateRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>A custom description of the template.</p>
     */
    inline UpdateSensitivityInspectionTemplateRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>A custom description of the template.</p>
     */
    inline UpdateSensitivityInspectionTemplateRequest& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>The managed data identifiers to explicitly exclude (not use) when analyzing
     * data.</p> <p>To exclude an allow list or custom data identifier that's currently
     * included by the template, update the values for the
     * SensitivityInspectionTemplateIncludes.allowListIds and
     * SensitivityInspectionTemplateIncludes.customDataIdentifierIds properties,
     * respectively.</p>
     */
    inline const SensitivityInspectionTemplateExcludes& GetExcludes() const{ return m_excludes; }

    /**
     * <p>The managed data identifiers to explicitly exclude (not use) when analyzing
     * data.</p> <p>To exclude an allow list or custom data identifier that's currently
     * included by the template, update the values for the
     * SensitivityInspectionTemplateIncludes.allowListIds and
     * SensitivityInspectionTemplateIncludes.customDataIdentifierIds properties,
     * respectively.</p>
     */
    inline bool ExcludesHasBeenSet() const { return m_excludesHasBeenSet; }

    /**
     * <p>The managed data identifiers to explicitly exclude (not use) when analyzing
     * data.</p> <p>To exclude an allow list or custom data identifier that's currently
     * included by the template, update the values for the
     * SensitivityInspectionTemplateIncludes.allowListIds and
     * SensitivityInspectionTemplateIncludes.customDataIdentifierIds properties,
     * respectively.</p>
     */
    inline void SetExcludes(const SensitivityInspectionTemplateExcludes& value) { m_excludesHasBeenSet = true; m_excludes = value; }

    /**
     * <p>The managed data identifiers to explicitly exclude (not use) when analyzing
     * data.</p> <p>To exclude an allow list or custom data identifier that's currently
     * included by the template, update the values for the
     * SensitivityInspectionTemplateIncludes.allowListIds and
     * SensitivityInspectionTemplateIncludes.customDataIdentifierIds properties,
     * respectively.</p>
     */
    inline void SetExcludes(SensitivityInspectionTemplateExcludes&& value) { m_excludesHasBeenSet = true; m_excludes = std::move(value); }

    /**
     * <p>The managed data identifiers to explicitly exclude (not use) when analyzing
     * data.</p> <p>To exclude an allow list or custom data identifier that's currently
     * included by the template, update the values for the
     * SensitivityInspectionTemplateIncludes.allowListIds and
     * SensitivityInspectionTemplateIncludes.customDataIdentifierIds properties,
     * respectively.</p>
     */
    inline UpdateSensitivityInspectionTemplateRequest& WithExcludes(const SensitivityInspectionTemplateExcludes& value) { SetExcludes(value); return *this;}

    /**
     * <p>The managed data identifiers to explicitly exclude (not use) when analyzing
     * data.</p> <p>To exclude an allow list or custom data identifier that's currently
     * included by the template, update the values for the
     * SensitivityInspectionTemplateIncludes.allowListIds and
     * SensitivityInspectionTemplateIncludes.customDataIdentifierIds properties,
     * respectively.</p>
     */
    inline UpdateSensitivityInspectionTemplateRequest& WithExcludes(SensitivityInspectionTemplateExcludes&& value) { SetExcludes(std::move(value)); return *this;}


    /**
     * <p>The unique identifier for the Amazon Macie resource that the request applies
     * to.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }

    /**
     * <p>The unique identifier for the Amazon Macie resource that the request applies
     * to.</p>
     */
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }

    /**
     * <p>The unique identifier for the Amazon Macie resource that the request applies
     * to.</p>
     */
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }

    /**
     * <p>The unique identifier for the Amazon Macie resource that the request applies
     * to.</p>
     */
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }

    /**
     * <p>The unique identifier for the Amazon Macie resource that the request applies
     * to.</p>
     */
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }

    /**
     * <p>The unique identifier for the Amazon Macie resource that the request applies
     * to.</p>
     */
    inline UpdateSensitivityInspectionTemplateRequest& WithId(const Aws::String& value) { SetId(value); return *this;}

    /**
     * <p>The unique identifier for the Amazon Macie resource that the request applies
     * to.</p>
     */
    inline UpdateSensitivityInspectionTemplateRequest& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}

    /**
     * <p>The unique identifier for the Amazon Macie resource that the request applies
     * to.</p>
     */
    inline UpdateSensitivityInspectionTemplateRequest& WithId(const char* value) { SetId(value); return *this;}


    /**
     * <p>The allow lists, custom data identifiers, and managed data identifiers to
     * include (use) when analyzing data.</p>
     */
    inline const SensitivityInspectionTemplateIncludes& GetIncludes() const{ return m_includes; }

    /**
     * <p>The allow lists, custom data identifiers, and managed data identifiers to
     * include (use) when analyzing data.</p>
     */
    inline bool IncludesHasBeenSet() const { return m_includesHasBeenSet; }

    /**
     * <p>The allow lists, custom data identifiers, and managed data identifiers to
     * include (use) when analyzing data.</p>
     */
    inline void SetIncludes(const SensitivityInspectionTemplateIncludes& value) { m_includesHasBeenSet = true; m_includes = value; }

    /**
     * <p>The allow lists, custom data identifiers, and managed data identifiers to
     * include (use) when analyzing data.</p>
     */
    inline void SetIncludes(SensitivityInspectionTemplateIncludes&& value) { m_includesHasBeenSet = true; m_includes = std::move(value); }

    /**
     * <p>The allow lists, custom data identifiers, and managed data identifiers to
     * include (use) when analyzing data.</p>
     */
    inline UpdateSensitivityInspectionTemplateRequest& WithIncludes(const SensitivityInspectionTemplateIncludes& value) { SetIncludes(value); return *this;}

    /**
     * <p>The allow lists, custom data identifiers, and managed data identifiers to
     * include (use) when analyzing data.</p>
     */
    inline UpdateSensitivityInspectionTemplateRequest& WithIncludes(SensitivityInspectionTemplateIncludes&& value) { SetIncludes(std::move(value)); return *this;}

  private:

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    SensitivityInspectionTemplateExcludes m_excludes;
    bool m_excludesHasBeenSet = false;

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    SensitivityInspectionTemplateIncludes m_includes;
    bool m_includesHasBeenSet = false;
  };

} // namespace Model
} // namespace Macie2
} // namespace Aws
