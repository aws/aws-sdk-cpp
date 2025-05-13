/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock/Bedrock_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/bedrock/model/GuardrailStatus.h>
#include <aws/core/utils/DateTime.h>
#include <aws/bedrock/model/GuardrailCrossRegionDetails.h>
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
namespace Bedrock
{
namespace Model
{

  /**
   * <p>Contains details about a guardrail.</p> <p>This data type is used in the
   * following API operations:</p> <ul> <li> <p> <a
   * href="https://docs.aws.amazon.com/bedrock/latest/APIReference/API_ListGuardrails.html#API_ListGuardrails_ResponseSyntax">ListGuardrails
   * response body</a> </p> </li> </ul><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-2023-04-20/GuardrailSummary">AWS
   * API Reference</a></p>
   */
  class GuardrailSummary
  {
  public:
    AWS_BEDROCK_API GuardrailSummary() = default;
    AWS_BEDROCK_API GuardrailSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCK_API GuardrailSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCK_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The unique identifier of the guardrail.</p>
     */
    inline const Aws::String& GetId() const { return m_id; }
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
    template<typename IdT = Aws::String>
    void SetId(IdT&& value) { m_idHasBeenSet = true; m_id = std::forward<IdT>(value); }
    template<typename IdT = Aws::String>
    GuardrailSummary& WithId(IdT&& value) { SetId(std::forward<IdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the guardrail.</p>
     */
    inline const Aws::String& GetArn() const { return m_arn; }
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }
    template<typename ArnT = Aws::String>
    void SetArn(ArnT&& value) { m_arnHasBeenSet = true; m_arn = std::forward<ArnT>(value); }
    template<typename ArnT = Aws::String>
    GuardrailSummary& WithArn(ArnT&& value) { SetArn(std::forward<ArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the guardrail.</p>
     */
    inline GuardrailStatus GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(GuardrailStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline GuardrailSummary& WithStatus(GuardrailStatus value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the guardrail.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    GuardrailSummary& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A description of the guardrail.</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    GuardrailSummary& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The version of the guardrail.</p>
     */
    inline const Aws::String& GetVersion() const { return m_version; }
    inline bool VersionHasBeenSet() const { return m_versionHasBeenSet; }
    template<typename VersionT = Aws::String>
    void SetVersion(VersionT&& value) { m_versionHasBeenSet = true; m_version = std::forward<VersionT>(value); }
    template<typename VersionT = Aws::String>
    GuardrailSummary& WithVersion(VersionT&& value) { SetVersion(std::forward<VersionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time at which the guardrail was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const { return m_createdAt; }
    inline bool CreatedAtHasBeenSet() const { return m_createdAtHasBeenSet; }
    template<typename CreatedAtT = Aws::Utils::DateTime>
    void SetCreatedAt(CreatedAtT&& value) { m_createdAtHasBeenSet = true; m_createdAt = std::forward<CreatedAtT>(value); }
    template<typename CreatedAtT = Aws::Utils::DateTime>
    GuardrailSummary& WithCreatedAt(CreatedAtT&& value) { SetCreatedAt(std::forward<CreatedAtT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time at which the guardrail was last updated.</p>
     */
    inline const Aws::Utils::DateTime& GetUpdatedAt() const { return m_updatedAt; }
    inline bool UpdatedAtHasBeenSet() const { return m_updatedAtHasBeenSet; }
    template<typename UpdatedAtT = Aws::Utils::DateTime>
    void SetUpdatedAt(UpdatedAtT&& value) { m_updatedAtHasBeenSet = true; m_updatedAt = std::forward<UpdatedAtT>(value); }
    template<typename UpdatedAtT = Aws::Utils::DateTime>
    GuardrailSummary& WithUpdatedAt(UpdatedAtT&& value) { SetUpdatedAt(std::forward<UpdatedAtT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Details about the system-defined guardrail profile that you're using with
     * your guardrail, including the guardrail profile ID and Amazon Resource Name
     * (ARN).</p>
     */
    inline const GuardrailCrossRegionDetails& GetCrossRegionDetails() const { return m_crossRegionDetails; }
    inline bool CrossRegionDetailsHasBeenSet() const { return m_crossRegionDetailsHasBeenSet; }
    template<typename CrossRegionDetailsT = GuardrailCrossRegionDetails>
    void SetCrossRegionDetails(CrossRegionDetailsT&& value) { m_crossRegionDetailsHasBeenSet = true; m_crossRegionDetails = std::forward<CrossRegionDetailsT>(value); }
    template<typename CrossRegionDetailsT = GuardrailCrossRegionDetails>
    GuardrailSummary& WithCrossRegionDetails(CrossRegionDetailsT&& value) { SetCrossRegionDetails(std::forward<CrossRegionDetailsT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    GuardrailStatus m_status{GuardrailStatus::NOT_SET};
    bool m_statusHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::String m_version;
    bool m_versionHasBeenSet = false;

    Aws::Utils::DateTime m_createdAt{};
    bool m_createdAtHasBeenSet = false;

    Aws::Utils::DateTime m_updatedAt{};
    bool m_updatedAtHasBeenSet = false;

    GuardrailCrossRegionDetails m_crossRegionDetails;
    bool m_crossRegionDetailsHasBeenSet = false;
  };

} // namespace Model
} // namespace Bedrock
} // namespace Aws
