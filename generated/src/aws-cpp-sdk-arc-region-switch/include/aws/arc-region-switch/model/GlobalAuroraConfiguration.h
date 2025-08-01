/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/arc-region-switch/ARCRegionswitch_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/arc-region-switch/model/GlobalAuroraDefaultBehavior.h>
#include <aws/arc-region-switch/model/GlobalAuroraUngraceful.h>
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
namespace ARCRegionswitch
{
namespace Model
{

  /**
   * <p>Configuration for Amazon Aurora global databases used in a Region switch
   * plan.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/arc-region-switch-2022-07-26/GlobalAuroraConfiguration">AWS
   * API Reference</a></p>
   */
  class GlobalAuroraConfiguration
  {
  public:
    AWS_ARCREGIONSWITCH_API GlobalAuroraConfiguration() = default;
    AWS_ARCREGIONSWITCH_API GlobalAuroraConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_ARCREGIONSWITCH_API GlobalAuroraConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_ARCREGIONSWITCH_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The timeout value specified for the configuration.</p>
     */
    inline int GetTimeoutMinutes() const { return m_timeoutMinutes; }
    inline bool TimeoutMinutesHasBeenSet() const { return m_timeoutMinutesHasBeenSet; }
    inline void SetTimeoutMinutes(int value) { m_timeoutMinutesHasBeenSet = true; m_timeoutMinutes = value; }
    inline GlobalAuroraConfiguration& WithTimeoutMinutes(int value) { SetTimeoutMinutes(value); return *this;}
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
    GlobalAuroraConfiguration& WithCrossAccountRole(CrossAccountRoleT&& value) { SetCrossAccountRole(std::forward<CrossAccountRoleT>(value)); return *this;}
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
    GlobalAuroraConfiguration& WithExternalId(ExternalIdT&& value) { SetExternalId(std::forward<ExternalIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The behavior for a global database, that is, only allow switchover or also
     * allow failover.</p>
     */
    inline GlobalAuroraDefaultBehavior GetBehavior() const { return m_behavior; }
    inline bool BehaviorHasBeenSet() const { return m_behaviorHasBeenSet; }
    inline void SetBehavior(GlobalAuroraDefaultBehavior value) { m_behaviorHasBeenSet = true; m_behavior = value; }
    inline GlobalAuroraConfiguration& WithBehavior(GlobalAuroraDefaultBehavior value) { SetBehavior(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The settings for ungraceful execution.</p>
     */
    inline const GlobalAuroraUngraceful& GetUngraceful() const { return m_ungraceful; }
    inline bool UngracefulHasBeenSet() const { return m_ungracefulHasBeenSet; }
    template<typename UngracefulT = GlobalAuroraUngraceful>
    void SetUngraceful(UngracefulT&& value) { m_ungracefulHasBeenSet = true; m_ungraceful = std::forward<UngracefulT>(value); }
    template<typename UngracefulT = GlobalAuroraUngraceful>
    GlobalAuroraConfiguration& WithUngraceful(UngracefulT&& value) { SetUngraceful(std::forward<UngracefulT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The global cluster identifier for a global database.</p>
     */
    inline const Aws::String& GetGlobalClusterIdentifier() const { return m_globalClusterIdentifier; }
    inline bool GlobalClusterIdentifierHasBeenSet() const { return m_globalClusterIdentifierHasBeenSet; }
    template<typename GlobalClusterIdentifierT = Aws::String>
    void SetGlobalClusterIdentifier(GlobalClusterIdentifierT&& value) { m_globalClusterIdentifierHasBeenSet = true; m_globalClusterIdentifier = std::forward<GlobalClusterIdentifierT>(value); }
    template<typename GlobalClusterIdentifierT = Aws::String>
    GlobalAuroraConfiguration& WithGlobalClusterIdentifier(GlobalClusterIdentifierT&& value) { SetGlobalClusterIdentifier(std::forward<GlobalClusterIdentifierT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The database cluster Amazon Resource Names (ARNs) for a global database.</p>
     */
    inline const Aws::Vector<Aws::String>& GetDatabaseClusterArns() const { return m_databaseClusterArns; }
    inline bool DatabaseClusterArnsHasBeenSet() const { return m_databaseClusterArnsHasBeenSet; }
    template<typename DatabaseClusterArnsT = Aws::Vector<Aws::String>>
    void SetDatabaseClusterArns(DatabaseClusterArnsT&& value) { m_databaseClusterArnsHasBeenSet = true; m_databaseClusterArns = std::forward<DatabaseClusterArnsT>(value); }
    template<typename DatabaseClusterArnsT = Aws::Vector<Aws::String>>
    GlobalAuroraConfiguration& WithDatabaseClusterArns(DatabaseClusterArnsT&& value) { SetDatabaseClusterArns(std::forward<DatabaseClusterArnsT>(value)); return *this;}
    template<typename DatabaseClusterArnsT = Aws::String>
    GlobalAuroraConfiguration& AddDatabaseClusterArns(DatabaseClusterArnsT&& value) { m_databaseClusterArnsHasBeenSet = true; m_databaseClusterArns.emplace_back(std::forward<DatabaseClusterArnsT>(value)); return *this; }
    ///@}
  private:

    int m_timeoutMinutes{0};
    bool m_timeoutMinutesHasBeenSet = false;

    Aws::String m_crossAccountRole;
    bool m_crossAccountRoleHasBeenSet = false;

    Aws::String m_externalId;
    bool m_externalIdHasBeenSet = false;

    GlobalAuroraDefaultBehavior m_behavior{GlobalAuroraDefaultBehavior::NOT_SET};
    bool m_behaviorHasBeenSet = false;

    GlobalAuroraUngraceful m_ungraceful;
    bool m_ungracefulHasBeenSet = false;

    Aws::String m_globalClusterIdentifier;
    bool m_globalClusterIdentifierHasBeenSet = false;

    Aws::Vector<Aws::String> m_databaseClusterArns;
    bool m_databaseClusterArnsHasBeenSet = false;
  };

} // namespace Model
} // namespace ARCRegionswitch
} // namespace Aws
