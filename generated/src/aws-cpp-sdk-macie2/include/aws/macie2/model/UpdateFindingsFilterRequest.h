/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/macie2/Macie2_EXPORTS.h>
#include <aws/macie2/Macie2Request.h>
#include <aws/macie2/model/FindingsFilterAction.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/macie2/model/FindingCriteria.h>
#include <utility>
#include <aws/core/utils/UUID.h>

namespace Aws
{
namespace Macie2
{
namespace Model
{

  /**
   */
  class UpdateFindingsFilterRequest : public Macie2Request
  {
  public:
    AWS_MACIE2_API UpdateFindingsFilterRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateFindingsFilter"; }

    AWS_MACIE2_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The action to perform on findings that match the filter criteria
     * (findingCriteria). Valid values are: ARCHIVE, suppress (automatically archive)
     * the findings; and, NOOP, don't perform any action on the findings.</p>
     */
    inline FindingsFilterAction GetAction() const { return m_action; }
    inline bool ActionHasBeenSet() const { return m_actionHasBeenSet; }
    inline void SetAction(FindingsFilterAction value) { m_actionHasBeenSet = true; m_action = value; }
    inline UpdateFindingsFilterRequest& WithAction(FindingsFilterAction value) { SetAction(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A unique, case-sensitive token that you provide to ensure the idempotency of
     * the request.</p>
     */
    inline const Aws::String& GetClientToken() const { return m_clientToken; }
    inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }
    template<typename ClientTokenT = Aws::String>
    void SetClientToken(ClientTokenT&& value) { m_clientTokenHasBeenSet = true; m_clientToken = std::forward<ClientTokenT>(value); }
    template<typename ClientTokenT = Aws::String>
    UpdateFindingsFilterRequest& WithClientToken(ClientTokenT&& value) { SetClientToken(std::forward<ClientTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A custom description of the filter. The description can contain as many as
     * 512 characters.</p> <p>We strongly recommend that you avoid including any
     * sensitive data in the description of a filter. Other users of your account might
     * be able to see this description, depending on the actions that they're allowed
     * to perform in Amazon Macie.</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    UpdateFindingsFilterRequest& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The criteria to use to filter findings.</p>
     */
    inline const FindingCriteria& GetFindingCriteria() const { return m_findingCriteria; }
    inline bool FindingCriteriaHasBeenSet() const { return m_findingCriteriaHasBeenSet; }
    template<typename FindingCriteriaT = FindingCriteria>
    void SetFindingCriteria(FindingCriteriaT&& value) { m_findingCriteriaHasBeenSet = true; m_findingCriteria = std::forward<FindingCriteriaT>(value); }
    template<typename FindingCriteriaT = FindingCriteria>
    UpdateFindingsFilterRequest& WithFindingCriteria(FindingCriteriaT&& value) { SetFindingCriteria(std::forward<FindingCriteriaT>(value)); return *this;}
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
    UpdateFindingsFilterRequest& WithId(IdT&& value) { SetId(std::forward<IdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A custom name for the filter. The name must contain at least 3 characters and
     * can contain as many as 64 characters.</p> <p>We strongly recommend that you
     * avoid including any sensitive data in the name of a filter. Other users of your
     * account might be able to see this name, depending on the actions that they're
     * allowed to perform in Amazon Macie.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    UpdateFindingsFilterRequest& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The position of the filter in the list of saved filters on the Amazon Macie
     * console. This value also determines the order in which the filter is applied to
     * findings, relative to other filters that are also applied to the findings.</p>
     */
    inline int GetPosition() const { return m_position; }
    inline bool PositionHasBeenSet() const { return m_positionHasBeenSet; }
    inline void SetPosition(int value) { m_positionHasBeenSet = true; m_position = value; }
    inline UpdateFindingsFilterRequest& WithPosition(int value) { SetPosition(value); return *this;}
    ///@}
  private:

    FindingsFilterAction m_action{FindingsFilterAction::NOT_SET};
    bool m_actionHasBeenSet = false;

    Aws::String m_clientToken{Aws::Utils::UUID::PseudoRandomUUID()};
    bool m_clientTokenHasBeenSet = true;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    FindingCriteria m_findingCriteria;
    bool m_findingCriteriaHasBeenSet = false;

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    int m_position{0};
    bool m_positionHasBeenSet = false;
  };

} // namespace Model
} // namespace Macie2
} // namespace Aws
