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
    AWS_GUARDDUTY_API Sequence();
    AWS_GUARDDUTY_API Sequence(Aws::Utils::Json::JsonView jsonValue);
    AWS_GUARDDUTY_API Sequence& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GUARDDUTY_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Unique identifier of the attack sequence.</p>
     */
    inline const Aws::String& GetUid() const{ return m_uid; }
    inline bool UidHasBeenSet() const { return m_uidHasBeenSet; }
    inline void SetUid(const Aws::String& value) { m_uidHasBeenSet = true; m_uid = value; }
    inline void SetUid(Aws::String&& value) { m_uidHasBeenSet = true; m_uid = std::move(value); }
    inline void SetUid(const char* value) { m_uidHasBeenSet = true; m_uid.assign(value); }
    inline Sequence& WithUid(const Aws::String& value) { SetUid(value); return *this;}
    inline Sequence& WithUid(Aws::String&& value) { SetUid(std::move(value)); return *this;}
    inline Sequence& WithUid(const char* value) { SetUid(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Description of the attack sequence.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }
    inline Sequence& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline Sequence& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline Sequence& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Contains information about the actors involved in the attack sequence.</p>
     */
    inline const Aws::Vector<Actor>& GetActors() const{ return m_actors; }
    inline bool ActorsHasBeenSet() const { return m_actorsHasBeenSet; }
    inline void SetActors(const Aws::Vector<Actor>& value) { m_actorsHasBeenSet = true; m_actors = value; }
    inline void SetActors(Aws::Vector<Actor>&& value) { m_actorsHasBeenSet = true; m_actors = std::move(value); }
    inline Sequence& WithActors(const Aws::Vector<Actor>& value) { SetActors(value); return *this;}
    inline Sequence& WithActors(Aws::Vector<Actor>&& value) { SetActors(std::move(value)); return *this;}
    inline Sequence& AddActors(const Actor& value) { m_actorsHasBeenSet = true; m_actors.push_back(value); return *this; }
    inline Sequence& AddActors(Actor&& value) { m_actorsHasBeenSet = true; m_actors.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Contains information about the resources involved in the attack sequence.</p>
     */
    inline const Aws::Vector<ResourceV2>& GetResources() const{ return m_resources; }
    inline bool ResourcesHasBeenSet() const { return m_resourcesHasBeenSet; }
    inline void SetResources(const Aws::Vector<ResourceV2>& value) { m_resourcesHasBeenSet = true; m_resources = value; }
    inline void SetResources(Aws::Vector<ResourceV2>&& value) { m_resourcesHasBeenSet = true; m_resources = std::move(value); }
    inline Sequence& WithResources(const Aws::Vector<ResourceV2>& value) { SetResources(value); return *this;}
    inline Sequence& WithResources(Aws::Vector<ResourceV2>&& value) { SetResources(std::move(value)); return *this;}
    inline Sequence& AddResources(const ResourceV2& value) { m_resourcesHasBeenSet = true; m_resources.push_back(value); return *this; }
    inline Sequence& AddResources(ResourceV2&& value) { m_resourcesHasBeenSet = true; m_resources.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Contains information about the network endpoints that were used in the attack
     * sequence.</p>
     */
    inline const Aws::Vector<NetworkEndpoint>& GetEndpoints() const{ return m_endpoints; }
    inline bool EndpointsHasBeenSet() const { return m_endpointsHasBeenSet; }
    inline void SetEndpoints(const Aws::Vector<NetworkEndpoint>& value) { m_endpointsHasBeenSet = true; m_endpoints = value; }
    inline void SetEndpoints(Aws::Vector<NetworkEndpoint>&& value) { m_endpointsHasBeenSet = true; m_endpoints = std::move(value); }
    inline Sequence& WithEndpoints(const Aws::Vector<NetworkEndpoint>& value) { SetEndpoints(value); return *this;}
    inline Sequence& WithEndpoints(Aws::Vector<NetworkEndpoint>&& value) { SetEndpoints(std::move(value)); return *this;}
    inline Sequence& AddEndpoints(const NetworkEndpoint& value) { m_endpointsHasBeenSet = true; m_endpoints.push_back(value); return *this; }
    inline Sequence& AddEndpoints(NetworkEndpoint&& value) { m_endpointsHasBeenSet = true; m_endpoints.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Contains information about the signals involved in the attack sequence.</p>
     */
    inline const Aws::Vector<Signal>& GetSignals() const{ return m_signals; }
    inline bool SignalsHasBeenSet() const { return m_signalsHasBeenSet; }
    inline void SetSignals(const Aws::Vector<Signal>& value) { m_signalsHasBeenSet = true; m_signals = value; }
    inline void SetSignals(Aws::Vector<Signal>&& value) { m_signalsHasBeenSet = true; m_signals = std::move(value); }
    inline Sequence& WithSignals(const Aws::Vector<Signal>& value) { SetSignals(value); return *this;}
    inline Sequence& WithSignals(Aws::Vector<Signal>&& value) { SetSignals(std::move(value)); return *this;}
    inline Sequence& AddSignals(const Signal& value) { m_signalsHasBeenSet = true; m_signals.push_back(value); return *this; }
    inline Sequence& AddSignals(Signal&& value) { m_signalsHasBeenSet = true; m_signals.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Contains information about the indicators observed in the attack
     * sequence.</p>
     */
    inline const Aws::Vector<Indicator>& GetSequenceIndicators() const{ return m_sequenceIndicators; }
    inline bool SequenceIndicatorsHasBeenSet() const { return m_sequenceIndicatorsHasBeenSet; }
    inline void SetSequenceIndicators(const Aws::Vector<Indicator>& value) { m_sequenceIndicatorsHasBeenSet = true; m_sequenceIndicators = value; }
    inline void SetSequenceIndicators(Aws::Vector<Indicator>&& value) { m_sequenceIndicatorsHasBeenSet = true; m_sequenceIndicators = std::move(value); }
    inline Sequence& WithSequenceIndicators(const Aws::Vector<Indicator>& value) { SetSequenceIndicators(value); return *this;}
    inline Sequence& WithSequenceIndicators(Aws::Vector<Indicator>&& value) { SetSequenceIndicators(std::move(value)); return *this;}
    inline Sequence& AddSequenceIndicators(const Indicator& value) { m_sequenceIndicatorsHasBeenSet = true; m_sequenceIndicators.push_back(value); return *this; }
    inline Sequence& AddSequenceIndicators(Indicator&& value) { m_sequenceIndicatorsHasBeenSet = true; m_sequenceIndicators.push_back(std::move(value)); return *this; }
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
  };

} // namespace Model
} // namespace GuardDuty
} // namespace Aws
