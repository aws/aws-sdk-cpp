/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/guardduty/GuardDuty_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/guardduty/model/SignalType.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
   * <p>Contains information about the signals involved in the attack
   * sequence.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/guardduty-2017-11-28/Signal">AWS
   * API Reference</a></p>
   */
  class Signal
  {
  public:
    AWS_GUARDDUTY_API Signal() = default;
    AWS_GUARDDUTY_API Signal(Aws::Utils::Json::JsonView jsonValue);
    AWS_GUARDDUTY_API Signal& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GUARDDUTY_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The unique identifier of the signal.</p>
     */
    inline const Aws::String& GetUid() const { return m_uid; }
    inline bool UidHasBeenSet() const { return m_uidHasBeenSet; }
    template<typename UidT = Aws::String>
    void SetUid(UidT&& value) { m_uidHasBeenSet = true; m_uid = std::forward<UidT>(value); }
    template<typename UidT = Aws::String>
    Signal& WithUid(UidT&& value) { SetUid(std::forward<UidT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of the signal used to identify an attack sequence.</p> <p>Signals
     * can be GuardDuty findings or activities observed in data sources that GuardDuty
     * monitors. For more information, see <a
     * href="https://docs.aws.amazon.com/guardduty/latest/ug/guardduty_data-sources.html">Foundational
     * data sources</a> in the <i>Amazon GuardDuty User Guide</i>.</p> <p>A signal type
     * can be one of the valid values listed in this API. Here are the related
     * descriptions:</p> <ul> <li> <p> <code>FINDING</code> - Individually generated
     * GuardDuty finding.</p> </li> <li> <p> <code>CLOUD_TRAIL</code> - Activity
     * observed from CloudTrail logs</p> </li> <li> <p> <code>S3_DATA_EVENTS</code> -
     * Activity observed from CloudTrail data events for S3. Activities associated with
     * this type will show up only when you have enabled GuardDuty S3 Protection
     * feature in your account. For more information about S3 Protection and steps to
     * enable it, see <a
     * href="https://docs.aws.amazon.com/guardduty/latest/ug/s3-protection.html">S3
     * Protection</a> in the <i>Amazon GuardDuty User Guide</i>.</p> </li> </ul>
     */
    inline SignalType GetType() const { return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(SignalType value) { m_typeHasBeenSet = true; m_type = value; }
    inline Signal& WithType(SignalType value) { SetType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The description of the signal.</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    Signal& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the signal. For example, when signal type is
     * <code>FINDING</code>, the signal name is the name of the finding.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    Signal& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp when the first finding or activity related to this signal was
     * observed.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const { return m_createdAt; }
    inline bool CreatedAtHasBeenSet() const { return m_createdAtHasBeenSet; }
    template<typename CreatedAtT = Aws::Utils::DateTime>
    void SetCreatedAt(CreatedAtT&& value) { m_createdAtHasBeenSet = true; m_createdAt = std::forward<CreatedAtT>(value); }
    template<typename CreatedAtT = Aws::Utils::DateTime>
    Signal& WithCreatedAt(CreatedAtT&& value) { SetCreatedAt(std::forward<CreatedAtT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp when this signal was last observed.</p>
     */
    inline const Aws::Utils::DateTime& GetUpdatedAt() const { return m_updatedAt; }
    inline bool UpdatedAtHasBeenSet() const { return m_updatedAtHasBeenSet; }
    template<typename UpdatedAtT = Aws::Utils::DateTime>
    void SetUpdatedAt(UpdatedAtT&& value) { m_updatedAtHasBeenSet = true; m_updatedAt = std::forward<UpdatedAtT>(value); }
    template<typename UpdatedAtT = Aws::Utils::DateTime>
    Signal& WithUpdatedAt(UpdatedAtT&& value) { SetUpdatedAt(std::forward<UpdatedAtT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp when the first finding or activity related to this signal was
     * observed.</p>
     */
    inline const Aws::Utils::DateTime& GetFirstSeenAt() const { return m_firstSeenAt; }
    inline bool FirstSeenAtHasBeenSet() const { return m_firstSeenAtHasBeenSet; }
    template<typename FirstSeenAtT = Aws::Utils::DateTime>
    void SetFirstSeenAt(FirstSeenAtT&& value) { m_firstSeenAtHasBeenSet = true; m_firstSeenAt = std::forward<FirstSeenAtT>(value); }
    template<typename FirstSeenAtT = Aws::Utils::DateTime>
    Signal& WithFirstSeenAt(FirstSeenAtT&& value) { SetFirstSeenAt(std::forward<FirstSeenAtT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp when the last finding or activity related to this signal was
     * observed.</p>
     */
    inline const Aws::Utils::DateTime& GetLastSeenAt() const { return m_lastSeenAt; }
    inline bool LastSeenAtHasBeenSet() const { return m_lastSeenAtHasBeenSet; }
    template<typename LastSeenAtT = Aws::Utils::DateTime>
    void SetLastSeenAt(LastSeenAtT&& value) { m_lastSeenAtHasBeenSet = true; m_lastSeenAt = std::forward<LastSeenAtT>(value); }
    template<typename LastSeenAtT = Aws::Utils::DateTime>
    Signal& WithLastSeenAt(LastSeenAtT&& value) { SetLastSeenAt(std::forward<LastSeenAtT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The severity associated with the signal. For more information about severity,
     * see <a
     * href="https://docs.aws.amazon.com/guardduty/latest/ug/guardduty_findings-severity.html">Findings
     * severity levels</a> in the <i>Amazon GuardDuty User Guide</i>.</p>
     */
    inline double GetSeverity() const { return m_severity; }
    inline bool SeverityHasBeenSet() const { return m_severityHasBeenSet; }
    inline void SetSeverity(double value) { m_severityHasBeenSet = true; m_severity = value; }
    inline Signal& WithSeverity(double value) { SetSeverity(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of times this signal was observed.</p>
     */
    inline int GetCount() const { return m_count; }
    inline bool CountHasBeenSet() const { return m_countHasBeenSet; }
    inline void SetCount(int value) { m_countHasBeenSet = true; m_count = value; }
    inline Signal& WithCount(int value) { SetCount(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information about the unique identifiers of the resources involved in the
     * signal.</p>
     */
    inline const Aws::Vector<Aws::String>& GetResourceUids() const { return m_resourceUids; }
    inline bool ResourceUidsHasBeenSet() const { return m_resourceUidsHasBeenSet; }
    template<typename ResourceUidsT = Aws::Vector<Aws::String>>
    void SetResourceUids(ResourceUidsT&& value) { m_resourceUidsHasBeenSet = true; m_resourceUids = std::forward<ResourceUidsT>(value); }
    template<typename ResourceUidsT = Aws::Vector<Aws::String>>
    Signal& WithResourceUids(ResourceUidsT&& value) { SetResourceUids(std::forward<ResourceUidsT>(value)); return *this;}
    template<typename ResourceUidsT = Aws::String>
    Signal& AddResourceUids(ResourceUidsT&& value) { m_resourceUidsHasBeenSet = true; m_resourceUids.emplace_back(std::forward<ResourceUidsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Information about the IDs of the threat actors involved in the signal.</p>
     */
    inline const Aws::Vector<Aws::String>& GetActorIds() const { return m_actorIds; }
    inline bool ActorIdsHasBeenSet() const { return m_actorIdsHasBeenSet; }
    template<typename ActorIdsT = Aws::Vector<Aws::String>>
    void SetActorIds(ActorIdsT&& value) { m_actorIdsHasBeenSet = true; m_actorIds = std::forward<ActorIdsT>(value); }
    template<typename ActorIdsT = Aws::Vector<Aws::String>>
    Signal& WithActorIds(ActorIdsT&& value) { SetActorIds(std::forward<ActorIdsT>(value)); return *this;}
    template<typename ActorIdsT = Aws::String>
    Signal& AddActorIds(ActorIdsT&& value) { m_actorIdsHasBeenSet = true; m_actorIds.emplace_back(std::forward<ActorIdsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Information about the endpoint IDs associated with this signal.</p>
     */
    inline const Aws::Vector<Aws::String>& GetEndpointIds() const { return m_endpointIds; }
    inline bool EndpointIdsHasBeenSet() const { return m_endpointIdsHasBeenSet; }
    template<typename EndpointIdsT = Aws::Vector<Aws::String>>
    void SetEndpointIds(EndpointIdsT&& value) { m_endpointIdsHasBeenSet = true; m_endpointIds = std::forward<EndpointIdsT>(value); }
    template<typename EndpointIdsT = Aws::Vector<Aws::String>>
    Signal& WithEndpointIds(EndpointIdsT&& value) { SetEndpointIds(std::forward<EndpointIdsT>(value)); return *this;}
    template<typename EndpointIdsT = Aws::String>
    Signal& AddEndpointIds(EndpointIdsT&& value) { m_endpointIdsHasBeenSet = true; m_endpointIds.emplace_back(std::forward<EndpointIdsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Contains information about the indicators associated with the signals.</p>
     */
    inline const Aws::Vector<Indicator>& GetSignalIndicators() const { return m_signalIndicators; }
    inline bool SignalIndicatorsHasBeenSet() const { return m_signalIndicatorsHasBeenSet; }
    template<typename SignalIndicatorsT = Aws::Vector<Indicator>>
    void SetSignalIndicators(SignalIndicatorsT&& value) { m_signalIndicatorsHasBeenSet = true; m_signalIndicators = std::forward<SignalIndicatorsT>(value); }
    template<typename SignalIndicatorsT = Aws::Vector<Indicator>>
    Signal& WithSignalIndicators(SignalIndicatorsT&& value) { SetSignalIndicators(std::forward<SignalIndicatorsT>(value)); return *this;}
    template<typename SignalIndicatorsT = Indicator>
    Signal& AddSignalIndicators(SignalIndicatorsT&& value) { m_signalIndicatorsHasBeenSet = true; m_signalIndicators.emplace_back(std::forward<SignalIndicatorsT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_uid;
    bool m_uidHasBeenSet = false;

    SignalType m_type{SignalType::NOT_SET};
    bool m_typeHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::Utils::DateTime m_createdAt{};
    bool m_createdAtHasBeenSet = false;

    Aws::Utils::DateTime m_updatedAt{};
    bool m_updatedAtHasBeenSet = false;

    Aws::Utils::DateTime m_firstSeenAt{};
    bool m_firstSeenAtHasBeenSet = false;

    Aws::Utils::DateTime m_lastSeenAt{};
    bool m_lastSeenAtHasBeenSet = false;

    double m_severity{0.0};
    bool m_severityHasBeenSet = false;

    int m_count{0};
    bool m_countHasBeenSet = false;

    Aws::Vector<Aws::String> m_resourceUids;
    bool m_resourceUidsHasBeenSet = false;

    Aws::Vector<Aws::String> m_actorIds;
    bool m_actorIdsHasBeenSet = false;

    Aws::Vector<Aws::String> m_endpointIds;
    bool m_endpointIdsHasBeenSet = false;

    Aws::Vector<Indicator> m_signalIndicators;
    bool m_signalIndicatorsHasBeenSet = false;
  };

} // namespace Model
} // namespace GuardDuty
} // namespace Aws
