/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/arc-region-switch/ARCRegionswitch_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/arc-region-switch/model/Route53ResourceRecordSet.h>
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
namespace ARCRegionswitch
{
namespace Model
{

  /**
   * <p>The Amazon Route 53 health check configuration.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/arc-region-switch-2022-07-26/Route53HealthCheckConfiguration">AWS
   * API Reference</a></p>
   */
  class Route53HealthCheckConfiguration
  {
  public:
    AWS_ARCREGIONSWITCH_API Route53HealthCheckConfiguration() = default;
    AWS_ARCREGIONSWITCH_API Route53HealthCheckConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_ARCREGIONSWITCH_API Route53HealthCheckConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_ARCREGIONSWITCH_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Amazon Route 53 health check configuration time out (in minutes).</p>
     */
    inline int GetTimeoutMinutes() const { return m_timeoutMinutes; }
    inline bool TimeoutMinutesHasBeenSet() const { return m_timeoutMinutesHasBeenSet; }
    inline void SetTimeoutMinutes(int value) { m_timeoutMinutesHasBeenSet = true; m_timeoutMinutes = value; }
    inline Route53HealthCheckConfiguration& WithTimeoutMinutes(int value) { SetTimeoutMinutes(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The cross account role for the configuration.</p>
     */
    inline const Aws::String& GetCrossAccountRole() const { return m_crossAccountRole; }
    inline bool CrossAccountRoleHasBeenSet() const { return m_crossAccountRoleHasBeenSet; }
    template<typename CrossAccountRoleT = Aws::String>
    void SetCrossAccountRole(CrossAccountRoleT&& value) { m_crossAccountRoleHasBeenSet = true; m_crossAccountRole = std::forward<CrossAccountRoleT>(value); }
    template<typename CrossAccountRoleT = Aws::String>
    Route53HealthCheckConfiguration& WithCrossAccountRole(CrossAccountRoleT&& value) { SetCrossAccountRole(std::forward<CrossAccountRoleT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The external ID (secret key) for the configuration.</p>
     */
    inline const Aws::String& GetExternalId() const { return m_externalId; }
    inline bool ExternalIdHasBeenSet() const { return m_externalIdHasBeenSet; }
    template<typename ExternalIdT = Aws::String>
    void SetExternalId(ExternalIdT&& value) { m_externalIdHasBeenSet = true; m_externalId = std::forward<ExternalIdT>(value); }
    template<typename ExternalIdT = Aws::String>
    Route53HealthCheckConfiguration& WithExternalId(ExternalIdT&& value) { SetExternalId(std::forward<ExternalIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Route 53 health check configuration hosted zone ID.</p>
     */
    inline const Aws::String& GetHostedZoneId() const { return m_hostedZoneId; }
    inline bool HostedZoneIdHasBeenSet() const { return m_hostedZoneIdHasBeenSet; }
    template<typename HostedZoneIdT = Aws::String>
    void SetHostedZoneId(HostedZoneIdT&& value) { m_hostedZoneIdHasBeenSet = true; m_hostedZoneId = std::forward<HostedZoneIdT>(value); }
    template<typename HostedZoneIdT = Aws::String>
    Route53HealthCheckConfiguration& WithHostedZoneId(HostedZoneIdT&& value) { SetHostedZoneId(std::forward<HostedZoneIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Route 53 health check configuration record name.</p>
     */
    inline const Aws::String& GetRecordName() const { return m_recordName; }
    inline bool RecordNameHasBeenSet() const { return m_recordNameHasBeenSet; }
    template<typename RecordNameT = Aws::String>
    void SetRecordName(RecordNameT&& value) { m_recordNameHasBeenSet = true; m_recordName = std::forward<RecordNameT>(value); }
    template<typename RecordNameT = Aws::String>
    Route53HealthCheckConfiguration& WithRecordName(RecordNameT&& value) { SetRecordName(std::forward<RecordNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Route 53 health check configuration record sets.</p>
     */
    inline const Aws::Vector<Route53ResourceRecordSet>& GetRecordSets() const { return m_recordSets; }
    inline bool RecordSetsHasBeenSet() const { return m_recordSetsHasBeenSet; }
    template<typename RecordSetsT = Aws::Vector<Route53ResourceRecordSet>>
    void SetRecordSets(RecordSetsT&& value) { m_recordSetsHasBeenSet = true; m_recordSets = std::forward<RecordSetsT>(value); }
    template<typename RecordSetsT = Aws::Vector<Route53ResourceRecordSet>>
    Route53HealthCheckConfiguration& WithRecordSets(RecordSetsT&& value) { SetRecordSets(std::forward<RecordSetsT>(value)); return *this;}
    template<typename RecordSetsT = Route53ResourceRecordSet>
    Route53HealthCheckConfiguration& AddRecordSets(RecordSetsT&& value) { m_recordSetsHasBeenSet = true; m_recordSets.emplace_back(std::forward<RecordSetsT>(value)); return *this; }
    ///@}
  private:

    int m_timeoutMinutes{0};
    bool m_timeoutMinutesHasBeenSet = false;

    Aws::String m_crossAccountRole;
    bool m_crossAccountRoleHasBeenSet = false;

    Aws::String m_externalId;
    bool m_externalIdHasBeenSet = false;

    Aws::String m_hostedZoneId;
    bool m_hostedZoneIdHasBeenSet = false;

    Aws::String m_recordName;
    bool m_recordNameHasBeenSet = false;

    Aws::Vector<Route53ResourceRecordSet> m_recordSets;
    bool m_recordSetsHasBeenSet = false;
  };

} // namespace Model
} // namespace ARCRegionswitch
} // namespace Aws
