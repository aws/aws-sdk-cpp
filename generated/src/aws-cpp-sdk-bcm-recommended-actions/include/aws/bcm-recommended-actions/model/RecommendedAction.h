/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bcm-recommended-actions/BCMRecommendedActions_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/bcm-recommended-actions/model/ActionType.h>
#include <aws/bcm-recommended-actions/model/Severity.h>
#include <aws/bcm-recommended-actions/model/Feature.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
namespace BCMRecommendedActions
{
namespace Model
{

  /**
   * <p>Describes a specific recommended action.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bcm-recommended-actions-2024-11-14/RecommendedAction">AWS
   * API Reference</a></p>
   */
  class RecommendedAction
  {
  public:
    AWS_BCMRECOMMENDEDACTIONS_API RecommendedAction() = default;
    AWS_BCMRECOMMENDEDACTIONS_API RecommendedAction(Aws::Utils::Json::JsonView jsonValue);
    AWS_BCMRECOMMENDEDACTIONS_API RecommendedAction& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BCMRECOMMENDEDACTIONS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The ID for the recommended action.</p>
     */
    inline const Aws::String& GetId() const { return m_id; }
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
    template<typename IdT = Aws::String>
    void SetId(IdT&& value) { m_idHasBeenSet = true; m_id = std::forward<IdT>(value); }
    template<typename IdT = Aws::String>
    RecommendedAction& WithId(IdT&& value) { SetId(std::forward<IdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of action you can take by adopting the recommended action.</p>
     */
    inline ActionType GetType() const { return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(ActionType value) { m_typeHasBeenSet = true; m_type = value; }
    inline RecommendedAction& WithType(ActionType value) { SetType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The account that the recommended action is for.</p>
     */
    inline const Aws::String& GetAccountId() const { return m_accountId; }
    inline bool AccountIdHasBeenSet() const { return m_accountIdHasBeenSet; }
    template<typename AccountIdT = Aws::String>
    void SetAccountId(AccountIdT&& value) { m_accountIdHasBeenSet = true; m_accountId = std::forward<AccountIdT>(value); }
    template<typename AccountIdT = Aws::String>
    RecommendedAction& WithAccountId(AccountIdT&& value) { SetAccountId(std::forward<AccountIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The severity associated with the recommended action.</p>
     */
    inline Severity GetSeverity() const { return m_severity; }
    inline bool SeverityHasBeenSet() const { return m_severityHasBeenSet; }
    inline void SetSeverity(Severity value) { m_severityHasBeenSet = true; m_severity = value; }
    inline RecommendedAction& WithSeverity(Severity value) { SetSeverity(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The feature associated with the recommended action.</p>
     */
    inline Feature GetFeature() const { return m_feature; }
    inline bool FeatureHasBeenSet() const { return m_featureHasBeenSet; }
    inline void SetFeature(Feature value) { m_featureHasBeenSet = true; m_feature = value; }
    inline RecommendedAction& WithFeature(Feature value) { SetFeature(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Context that applies to the recommended action.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetContext() const { return m_context; }
    inline bool ContextHasBeenSet() const { return m_contextHasBeenSet; }
    template<typename ContextT = Aws::Map<Aws::String, Aws::String>>
    void SetContext(ContextT&& value) { m_contextHasBeenSet = true; m_context = std::forward<ContextT>(value); }
    template<typename ContextT = Aws::Map<Aws::String, Aws::String>>
    RecommendedAction& WithContext(ContextT&& value) { SetContext(std::forward<ContextT>(value)); return *this;}
    template<typename ContextKeyT = Aws::String, typename ContextValueT = Aws::String>
    RecommendedAction& AddContext(ContextKeyT&& key, ContextValueT&& value) {
      m_contextHasBeenSet = true; m_context.emplace(std::forward<ContextKeyT>(key), std::forward<ContextValueT>(value)); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>The possible next steps to execute the recommended action.</p>
     */
    inline const Aws::Vector<Aws::String>& GetNextSteps() const { return m_nextSteps; }
    inline bool NextStepsHasBeenSet() const { return m_nextStepsHasBeenSet; }
    template<typename NextStepsT = Aws::Vector<Aws::String>>
    void SetNextSteps(NextStepsT&& value) { m_nextStepsHasBeenSet = true; m_nextSteps = std::forward<NextStepsT>(value); }
    template<typename NextStepsT = Aws::Vector<Aws::String>>
    RecommendedAction& WithNextSteps(NextStepsT&& value) { SetNextSteps(std::forward<NextStepsT>(value)); return *this;}
    template<typename NextStepsT = Aws::String>
    RecommendedAction& AddNextSteps(NextStepsT&& value) { m_nextStepsHasBeenSet = true; m_nextSteps.emplace_back(std::forward<NextStepsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The time when the recommended action status was last updated.</p>
     */
    inline const Aws::String& GetLastUpdatedTimeStamp() const { return m_lastUpdatedTimeStamp; }
    inline bool LastUpdatedTimeStampHasBeenSet() const { return m_lastUpdatedTimeStampHasBeenSet; }
    template<typename LastUpdatedTimeStampT = Aws::String>
    void SetLastUpdatedTimeStamp(LastUpdatedTimeStampT&& value) { m_lastUpdatedTimeStampHasBeenSet = true; m_lastUpdatedTimeStamp = std::forward<LastUpdatedTimeStampT>(value); }
    template<typename LastUpdatedTimeStampT = Aws::String>
    RecommendedAction& WithLastUpdatedTimeStamp(LastUpdatedTimeStampT&& value) { SetLastUpdatedTimeStamp(std::forward<LastUpdatedTimeStampT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    ActionType m_type{ActionType::NOT_SET};
    bool m_typeHasBeenSet = false;

    Aws::String m_accountId;
    bool m_accountIdHasBeenSet = false;

    Severity m_severity{Severity::NOT_SET};
    bool m_severityHasBeenSet = false;

    Feature m_feature{Feature::NOT_SET};
    bool m_featureHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_context;
    bool m_contextHasBeenSet = false;

    Aws::Vector<Aws::String> m_nextSteps;
    bool m_nextStepsHasBeenSet = false;

    Aws::String m_lastUpdatedTimeStamp;
    bool m_lastUpdatedTimeStampHasBeenSet = false;
  };

} // namespace Model
} // namespace BCMRecommendedActions
} // namespace Aws
