/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/guardduty/GuardDuty_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/guardduty/model/Actor.h>
#include <aws/guardduty/model/ResourceV2.h>
#include <aws/guardduty/model/NetworkEndpoint.h>
#include <aws/guardduty/model/Signal.h>
#include <aws/guardduty/model/Indicator.h>
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
namespace GuardDuty
{
namespace Model
{

  /**
   * <p>Contains information about the GuardDuty attack sequence
   * finding.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/guardduty-2017-11-28/Sequence">AWS
   * API Reference</a></p>
   */
  class Sequence
  {
  public:
    AWS_GUARDDUTY_API Sequence() = default;
    AWS_GUARDDUTY_API Sequence(Aws::Utils::Json::JsonView jsonValue);
    AWS_GUARDDUTY_API Sequence& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GUARDDUTY_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Unique identifier of the attack sequence.</p>
     */
    inline const Aws::String& GetUid() const { return m_uid; }
    inline bool UidHasBeenSet() const { return m_uidHasBeenSet; }
    template<typename UidT = Aws::String>
    void SetUid(UidT&& value) { m_uidHasBeenSet = true; m_uid = std::forward<UidT>(value); }
    template<typename UidT = Aws::String>
    Sequence& WithUid(UidT&& value) { SetUid(std::forward<UidT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Description of the attack sequence.</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    Sequence& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Contains information about the actors involved in the attack sequence.</p>
     */
    inline const Aws::Vector<Actor>& GetActors() const { return m_actors; }
    inline bool ActorsHasBeenSet() const { return m_actorsHasBeenSet; }
    template<typename ActorsT = Aws::Vector<Actor>>
    void SetActors(ActorsT&& value) { m_actorsHasBeenSet = true; m_actors = std::forward<ActorsT>(value); }
    template<typename ActorsT = Aws::Vector<Actor>>
    Sequence& WithActors(ActorsT&& value) { SetActors(std::forward<ActorsT>(value)); return *this;}
    template<typename ActorsT = Actor>
    Sequence& AddActors(ActorsT&& value) { m_actorsHasBeenSet = true; m_actors.emplace_back(std::forward<ActorsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Contains information about the resources involved in the attack sequence.</p>
     */
    inline const Aws::Vector<ResourceV2>& GetResources() const { return m_resources; }
    inline bool ResourcesHasBeenSet() const { return m_resourcesHasBeenSet; }
    template<typename ResourcesT = Aws::Vector<ResourceV2>>
    void SetResources(ResourcesT&& value) { m_resourcesHasBeenSet = true; m_resources = std::forward<ResourcesT>(value); }
    template<typename ResourcesT = Aws::Vector<ResourceV2>>
    Sequence& WithResources(ResourcesT&& value) { SetResources(std::forward<ResourcesT>(value)); return *this;}
    template<typename ResourcesT = ResourceV2>
    Sequence& AddResources(ResourcesT&& value) { m_resourcesHasBeenSet = true; m_resources.emplace_back(std::forward<ResourcesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Contains information about the network endpoints that were used in the attack
     * sequence.</p>
     */
    inline const Aws::Vector<NetworkEndpoint>& GetEndpoints() const { return m_endpoints; }
    inline bool EndpointsHasBeenSet() const { return m_endpointsHasBeenSet; }
    template<typename EndpointsT = Aws::Vector<NetworkEndpoint>>
    void SetEndpoints(EndpointsT&& value) { m_endpointsHasBeenSet = true; m_endpoints = std::forward<EndpointsT>(value); }
    template<typename EndpointsT = Aws::Vector<NetworkEndpoint>>
    Sequence& WithEndpoints(EndpointsT&& value) { SetEndpoints(std::forward<EndpointsT>(value)); return *this;}
    template<typename EndpointsT = NetworkEndpoint>
    Sequence& AddEndpoints(EndpointsT&& value) { m_endpointsHasBeenSet = true; m_endpoints.emplace_back(std::forward<EndpointsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Contains information about the signals involved in the attack sequence.</p>
     */
    inline const Aws::Vector<Signal>& GetSignals() const { return m_signals; }
    inline bool SignalsHasBeenSet() const { return m_signalsHasBeenSet; }
    template<typename SignalsT = Aws::Vector<Signal>>
    void SetSignals(SignalsT&& value) { m_signalsHasBeenSet = true; m_signals = std::forward<SignalsT>(value); }
    template<typename SignalsT = Aws::Vector<Signal>>
    Sequence& WithSignals(SignalsT&& value) { SetSignals(std::forward<SignalsT>(value)); return *this;}
    template<typename SignalsT = Signal>
    Sequence& AddSignals(SignalsT&& value) { m_signalsHasBeenSet = true; m_signals.emplace_back(std::forward<SignalsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Contains information about the indicators observed in the attack
     * sequence.</p>
     */
    inline const Aws::Vector<Indicator>& GetSequenceIndicators() const { return m_sequenceIndicators; }
    inline bool SequenceIndicatorsHasBeenSet() const { return m_sequenceIndicatorsHasBeenSet; }
    template<typename SequenceIndicatorsT = Aws::Vector<Indicator>>
    void SetSequenceIndicators(SequenceIndicatorsT&& value) { m_sequenceIndicatorsHasBeenSet = true; m_sequenceIndicators = std::forward<SequenceIndicatorsT>(value); }
    template<typename SequenceIndicatorsT = Aws::Vector<Indicator>>
    Sequence& WithSequenceIndicators(SequenceIndicatorsT&& value) { SetSequenceIndicators(std::forward<SequenceIndicatorsT>(value)); return *this;}
    template<typename SequenceIndicatorsT = Indicator>
    Sequence& AddSequenceIndicators(SequenceIndicatorsT&& value) { m_sequenceIndicatorsHasBeenSet = true; m_sequenceIndicators.emplace_back(std::forward<SequenceIndicatorsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Additional types of sequences that may be associated with the attack sequence
     * finding, providing further context about the nature of the detected threat.</p>
     */
    inline const Aws::Vector<Aws::String>& GetAdditionalSequenceTypes() const { return m_additionalSequenceTypes; }
    inline bool AdditionalSequenceTypesHasBeenSet() const { return m_additionalSequenceTypesHasBeenSet; }
    template<typename AdditionalSequenceTypesT = Aws::Vector<Aws::String>>
    void SetAdditionalSequenceTypes(AdditionalSequenceTypesT&& value) { m_additionalSequenceTypesHasBeenSet = true; m_additionalSequenceTypes = std::forward<AdditionalSequenceTypesT>(value); }
    template<typename AdditionalSequenceTypesT = Aws::Vector<Aws::String>>
    Sequence& WithAdditionalSequenceTypes(AdditionalSequenceTypesT&& value) { SetAdditionalSequenceTypes(std::forward<AdditionalSequenceTypesT>(value)); return *this;}
    template<typename AdditionalSequenceTypesT = Aws::String>
    Sequence& AddAdditionalSequenceTypes(AdditionalSequenceTypesT&& value) { m_additionalSequenceTypesHasBeenSet = true; m_additionalSequenceTypes.emplace_back(std::forward<AdditionalSequenceTypesT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_uid;
    bool m_uidHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::Vector<Actor> m_actors;
    bool m_actorsHasBeenSet = false;

    Aws::Vector<ResourceV2> m_resources;
    bool m_resourcesHasBeenSet = false;

    Aws::Vector<NetworkEndpoint> m_endpoints;
    bool m_endpointsHasBeenSet = false;

    Aws::Vector<Signal> m_signals;
    bool m_signalsHasBeenSet = false;

    Aws::Vector<Indicator> m_sequenceIndicators;
    bool m_sequenceIndicatorsHasBeenSet = false;

    Aws::Vector<Aws::String> m_additionalSequenceTypes;
    bool m_additionalSequenceTypesHasBeenSet = false;
  };

} // namespace Model
} // namespace GuardDuty
} // namespace Aws
