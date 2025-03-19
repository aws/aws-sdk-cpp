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
    AWS_MACIE2_API UpdateSensitivityInspectionTemplateRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateSensitivityInspectionTemplate"; }

    AWS_MACIE2_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>A custom description of the template. The description can contain as many as
     * 200 characters.</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    UpdateSensitivityInspectionTemplateRequest& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The managed data identifiers to explicitly exclude (not use) when performing
     * automated sensitive data discovery.</p> <p>To exclude an allow list or custom
     * data identifier that's currently included by the template, update the values for
     * the SensitivityInspectionTemplateIncludes.allowListIds and
     * SensitivityInspectionTemplateIncludes.customDataIdentifierIds properties,
     * respectively.</p>
     */
    inline const SensitivityInspectionTemplateExcludes& GetExcludes() const { return m_excludes; }
    inline bool ExcludesHasBeenSet() const { return m_excludesHasBeenSet; }
    template<typename ExcludesT = SensitivityInspectionTemplateExcludes>
    void SetExcludes(ExcludesT&& value) { m_excludesHasBeenSet = true; m_excludes = std::forward<ExcludesT>(value); }
    template<typename ExcludesT = SensitivityInspectionTemplateExcludes>
    UpdateSensitivityInspectionTemplateRequest& WithExcludes(ExcludesT&& value) { SetExcludes(std::forward<ExcludesT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique identifier for the Amazon Macie resource that the request applies
     * to.</p>
     */
    inline const Aws::String& GetId() const { return m_id; }
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
    template<typename IdT = Aws::String>
    void SetId(IdT&& value) { m_idHasBeenSet = true; m_id = std::forward<IdT>(value); }
    template<typename IdT = Aws::String>
    UpdateSensitivityInspectionTemplateRequest& WithId(IdT&& value) { SetId(std::forward<IdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The allow lists, custom data identifiers, and managed data identifiers to
     * explicitly include (use) when performing automated sensitive data discovery.</p>
     */
    inline const SensitivityInspectionTemplateIncludes& GetIncludes() const { return m_includes; }
    inline bool IncludesHasBeenSet() const { return m_includesHasBeenSet; }
    template<typename IncludesT = SensitivityInspectionTemplateIncludes>
    void SetIncludes(IncludesT&& value) { m_includesHasBeenSet = true; m_includes = std::forward<IncludesT>(value); }
    template<typename IncludesT = SensitivityInspectionTemplateIncludes>
    UpdateSensitivityInspectionTemplateRequest& WithIncludes(IncludesT&& value) { SetIncludes(std::forward<IncludesT>(value)); return *this;}
    ///@}
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
