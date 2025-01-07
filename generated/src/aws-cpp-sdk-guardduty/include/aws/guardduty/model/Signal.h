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
    AWS_GUARDDUTY_API Signal();
    AWS_GUARDDUTY_API Signal(Aws::Utils::Json::JsonView jsonValue);
    AWS_GUARDDUTY_API Signal& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GUARDDUTY_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The unique identifier of the signal.</p>
     */
    inline const Aws::String& GetUid() const{ return m_uid; }
    inline bool UidHasBeenSet() const { return m_uidHasBeenSet; }
    inline void SetUid(const Aws::String& value) { m_uidHasBeenSet = true; m_uid = value; }
    inline void SetUid(Aws::String&& value) { m_uidHasBeenSet = true; m_uid = std::move(value); }
    inline void SetUid(const char* value) { m_uidHasBeenSet = true; m_uid.assign(value); }
    inline Signal& WithUid(const Aws::String& value) { SetUid(value); return *this;}
    inline Signal& WithUid(Aws::String&& value) { SetUid(std::move(value)); return *this;}
    inline Signal& WithUid(const char* value) { SetUid(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of the signal used to identify an attack sequence.</p> <p>Signals
     * can be GuardDuty findings or activities observed in data sources that GuardDuty
     * monitors. For more information, see <a
     * href="https://docs.aws.amazon.com/guardduty/latest/ug/guardduty_data-sources.html">Foundational
     * data sources</a> in the <i>GuardDuty User Guide</i>.</p> <p>A signal type can be
     * one of the valid values listed in this API. Here are the related
     * descriptions:</p> <ul> <li> <p> <code>FINDING</code> - Individually generated
     * GuardDuty finding.</p> </li> <li> <p> <code>CLOUD_TRAIL</code> - Activity
     * observed from CloudTrail logs</p> </li> <li> <p> <code>S3_DATA_EVENTS</code> -
     * Activity observed from CloudTrail data events for S3. Activities associated with
     * this type will show up only when you have enabled GuardDuty S3 Protection
     * feature in your account. For more information about S3 Protection and steps to
     * enable it, see <a
     * href="https://docs.aws.amazon.com/guardduty/latest/ug/s3-protection.html">S3
     * Protection</a> in the <i>GuardDuty User Guide</i>.</p> </li> </ul>
     */
    inline const SignalType& GetType() const{ return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(const SignalType& value) { m_typeHasBeenSet = true; m_type = value; }
    inline void SetType(SignalType&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }
    inline Signal& WithType(const SignalType& value) { SetType(value); return *this;}
    inline Signal& WithType(SignalType&& value) { SetType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The description of the signal.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }
    inline Signal& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline Signal& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline Signal& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the signal. For example, when signal type is
     * <code>FINDING</code>, the signal name is the name of the finding.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline Signal& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline Signal& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline Signal& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp when the first finding or activity related to this signal was
     * observed.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const{ return m_createdAt; }
    inline bool CreatedAtHasBeenSet() const { return m_createdAtHasBeenSet; }
    inline void SetCreatedAt(const Aws::Utils::DateTime& value) { m_createdAtHasBeenSet = true; m_createdAt = value; }
    inline void SetCreatedAt(Aws::Utils::DateTime&& value) { m_createdAtHasBeenSet = true; m_createdAt = std::move(value); }
    inline Signal& WithCreatedAt(const Aws::Utils::DateTime& value) { SetCreatedAt(value); return *this;}
    inline Signal& WithCreatedAt(Aws::Utils::DateTime&& value) { SetCreatedAt(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp when this signal was last observed.</p>
     */
    inline const Aws::Utils::DateTime& GetUpdatedAt() const{ return m_updatedAt; }
    inline bool UpdatedAtHasBeenSet() const { return m_updatedAtHasBeenSet; }
    inline void SetUpdatedAt(const Aws::Utils::DateTime& value) { m_updatedAtHasBeenSet = true; m_updatedAt = value; }
    inline void SetUpdatedAt(Aws::Utils::DateTime&& value) { m_updatedAtHasBeenSet = true; m_updatedAt = std::move(value); }
    inline Signal& WithUpdatedAt(const Aws::Utils::DateTime& value) { SetUpdatedAt(value); return *this;}
    inline Signal& WithUpdatedAt(Aws::Utils::DateTime&& value) { SetUpdatedAt(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp when the first finding or activity related to this signal was
     * observed.</p>
     */
    inline const Aws::Utils::DateTime& GetFirstSeenAt() const{ return m_firstSeenAt; }
    inline bool FirstSeenAtHasBeenSet() const { return m_firstSeenAtHasBeenSet; }
    inline void SetFirstSeenAt(const Aws::Utils::DateTime& value) { m_firstSeenAtHasBeenSet = true; m_firstSeenAt = value; }
    inline void SetFirstSeenAt(Aws::Utils::DateTime&& value) { m_firstSeenAtHasBeenSet = true; m_firstSeenAt = std::move(value); }
    inline Signal& WithFirstSeenAt(const Aws::Utils::DateTime& value) { SetFirstSeenAt(value); return *this;}
    inline Signal& WithFirstSeenAt(Aws::Utils::DateTime&& value) { SetFirstSeenAt(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp when the last finding or activity related to this signal was
     * observed.</p>
     */
    inline const Aws::Utils::DateTime& GetLastSeenAt() const{ return m_lastSeenAt; }
    inline bool LastSeenAtHasBeenSet() const { return m_lastSeenAtHasBeenSet; }
    inline void SetLastSeenAt(const Aws::Utils::DateTime& value) { m_lastSeenAtHasBeenSet = true; m_lastSeenAt = value; }
    inline void SetLastSeenAt(Aws::Utils::DateTime&& value) { m_lastSeenAtHasBeenSet = true; m_lastSeenAt = std::move(value); }
    inline Signal& WithLastSeenAt(const Aws::Utils::DateTime& value) { SetLastSeenAt(value); return *this;}
    inline Signal& WithLastSeenAt(Aws::Utils::DateTime&& value) { SetLastSeenAt(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The severity associated with the signal. For more information about severity,
     * see <a
     * href="https://docs.aws.amazon.com/guardduty/latest/ug/guardduty_findings-severity.html">Findings
     * severity levels</a> in the <i>GuardDuty User Guide</i>.</p>
     */
    inline double GetSeverity() const{ return m_severity; }
    inline bool SeverityHasBeenSet() const { return m_severityHasBeenSet; }
    inline void SetSeverity(double value) { m_severityHasBeenSet = true; m_severity = value; }
    inline Signal& WithSeverity(double value) { SetSeverity(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of times this signal was observed.</p>
     */
    inline int GetCount() const{ return m_count; }
    inline bool CountHasBeenSet() const { return m_countHasBeenSet; }
    inline void SetCount(int value) { m_countHasBeenSet = true; m_count = value; }
    inline Signal& WithCount(int value) { SetCount(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information about the unique identifiers of the resources involved in the
     * signal.</p>
     */
    inline const Aws::Vector<Aws::String>& GetResourceUids() const{ return m_resourceUids; }
    inline bool ResourceUidsHasBeenSet() const { return m_resourceUidsHasBeenSet; }
    inline void SetResourceUids(const Aws::Vector<Aws::String>& value) { m_resourceUidsHasBeenSet = true; m_resourceUids = value; }
    inline void SetResourceUids(Aws::Vector<Aws::String>&& value) { m_resourceUidsHasBeenSet = true; m_resourceUids = std::move(value); }
    inline Signal& WithResourceUids(const Aws::Vector<Aws::String>& value) { SetResourceUids(value); return *this;}
    inline Signal& WithResourceUids(Aws::Vector<Aws::String>&& value) { SetResourceUids(std::move(value)); return *this;}
    inline Signal& AddResourceUids(const Aws::String& value) { m_resourceUidsHasBeenSet = true; m_resourceUids.push_back(value); return *this; }
    inline Signal& AddResourceUids(Aws::String&& value) { m_resourceUidsHasBeenSet = true; m_resourceUids.push_back(std::move(value)); return *this; }
    inline Signal& AddResourceUids(const char* value) { m_resourceUidsHasBeenSet = true; m_resourceUids.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>Information about the IDs of the threat actors involved in the signal.</p>
     */
    inline const Aws::Vector<Aws::String>& GetActorIds() const{ return m_actorIds; }
    inline bool ActorIdsHasBeenSet() const { return m_actorIdsHasBeenSet; }
    inline void SetActorIds(const Aws::Vector<Aws::String>& value) { m_actorIdsHasBeenSet = true; m_actorIds = value; }
    inline void SetActorIds(Aws::Vector<Aws::String>&& value) { m_actorIdsHasBeenSet = true; m_actorIds = std::move(value); }
    inline Signal& WithActorIds(const Aws::Vector<Aws::String>& value) { SetActorIds(value); return *this;}
    inline Signal& WithActorIds(Aws::Vector<Aws::String>&& value) { SetActorIds(std::move(value)); return *this;}
    inline Signal& AddActorIds(const Aws::String& value) { m_actorIdsHasBeenSet = true; m_actorIds.push_back(value); return *this; }
    inline Signal& AddActorIds(Aws::String&& value) { m_actorIdsHasBeenSet = true; m_actorIds.push_back(std::move(value)); return *this; }
    inline Signal& AddActorIds(const char* value) { m_actorIdsHasBeenSet = true; m_actorIds.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>Information about the endpoint IDs associated with this signal.</p>
     */
    inline const Aws::Vector<Aws::String>& GetEndpointIds() const{ return m_endpointIds; }
    inline bool EndpointIdsHasBeenSet() const { return m_endpointIdsHasBeenSet; }
    inline void SetEndpointIds(const Aws::Vector<Aws::String>& value) { m_endpointIdsHasBeenSet = true; m_endpointIds = value; }
    inline void SetEndpointIds(Aws::Vector<Aws::String>&& value) { m_endpointIdsHasBeenSet = true; m_endpointIds = std::move(value); }
    inline Signal& WithEndpointIds(const Aws::Vector<Aws::String>& value) { SetEndpointIds(value); return *this;}
    inline Signal& WithEndpointIds(Aws::Vector<Aws::String>&& value) { SetEndpointIds(std::move(value)); return *this;}
    inline Signal& AddEndpointIds(const Aws::String& value) { m_endpointIdsHasBeenSet = true; m_endpointIds.push_back(value); return *this; }
    inline Signal& AddEndpointIds(Aws::String&& value) { m_endpointIdsHasBeenSet = true; m_endpointIds.push_back(std::move(value)); return *this; }
    inline Signal& AddEndpointIds(const char* value) { m_endpointIdsHasBeenSet = true; m_endpointIds.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>Contains information about the indicators associated with the signals.</p>
     */
    inline const Aws::Vector<Indicator>& GetSignalIndicators() const{ return m_signalIndicators; }
    inline bool SignalIndicatorsHasBeenSet() const { return m_signalIndicatorsHasBeenSet; }
    inline void SetSignalIndicators(const Aws::Vector<Indicator>& value) { m_signalIndicatorsHasBeenSet = true; m_signalIndicators = value; }
    inline void SetSignalIndicators(Aws::Vector<Indicator>&& value) { m_signalIndicatorsHasBeenSet = true; m_signalIndicators = std::move(value); }
    inline Signal& WithSignalIndicators(const Aws::Vector<Indicator>& value) { SetSignalIndicators(value); return *this;}
    inline Signal& WithSignalIndicators(Aws::Vector<Indicator>&& value) { SetSignalIndicators(std::move(value)); return *this;}
    inline Signal& AddSignalIndicators(const Indicator& value) { m_signalIndicatorsHasBeenSet = true; m_signalIndicators.push_back(value); return *this; }
    inline Signal& AddSignalIndicators(Indicator&& value) { m_signalIndicatorsHasBeenSet = true; m_signalIndicators.push_back(std::move(value)); return *this; }
    ///@}
  private:

    Aws::String m_uid;
    bool m_uidHasBeenSet = false;

    SignalType m_type;
    bool m_typeHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::Utils::DateTime m_createdAt;
    bool m_createdAtHasBeenSet = false;

    Aws::Utils::DateTime m_updatedAt;
    bool m_updatedAtHasBeenSet = false;

    Aws::Utils::DateTime m_firstSeenAt;
    bool m_firstSeenAtHasBeenSet = false;

    Aws::Utils::DateTime m_lastSeenAt;
    bool m_lastSeenAtHasBeenSet = false;

    double m_severity;
    bool m_severityHasBeenSet = false;

    int m_count;
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
