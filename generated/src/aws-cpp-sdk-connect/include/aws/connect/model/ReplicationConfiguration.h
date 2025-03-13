/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/connect/model/ReplicationStatusSummary.h>
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
namespace Connect
{
namespace Model
{

  /**
   * <p>Details about the status of the replication of a source Amazon Connect
   * instance across Amazon Web Services Regions. Use these details to understand the
   * general status of a given replication. For information about why a replication
   * process may fail, see <a
   * href="https://docs.aws.amazon.com/connect/latest/adminguide/create-replica-connect-instance.html#why-replicateinstance-fails">Why
   * a ReplicateInstance call fails</a> in the <i>Create a replica of your existing
   * Amazon Connect instance</i> topic in the <i>Amazon Connect Administrator
   * Guide</i>. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/ReplicationConfiguration">AWS
   * API Reference</a></p>
   */
  class ReplicationConfiguration
  {
  public:
    AWS_CONNECT_API ReplicationConfiguration() = default;
    AWS_CONNECT_API ReplicationConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECT_API ReplicationConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>A list of replication status summaries. The summaries contain details about
     * the replication of configuration information for Amazon Connect resources, for
     * each Amazon Web Services Region.</p>
     */
    inline const Aws::Vector<ReplicationStatusSummary>& GetReplicationStatusSummaryList() const { return m_replicationStatusSummaryList; }
    inline bool ReplicationStatusSummaryListHasBeenSet() const { return m_replicationStatusSummaryListHasBeenSet; }
    template<typename ReplicationStatusSummaryListT = Aws::Vector<ReplicationStatusSummary>>
    void SetReplicationStatusSummaryList(ReplicationStatusSummaryListT&& value) { m_replicationStatusSummaryListHasBeenSet = true; m_replicationStatusSummaryList = std::forward<ReplicationStatusSummaryListT>(value); }
    template<typename ReplicationStatusSummaryListT = Aws::Vector<ReplicationStatusSummary>>
    ReplicationConfiguration& WithReplicationStatusSummaryList(ReplicationStatusSummaryListT&& value) { SetReplicationStatusSummaryList(std::forward<ReplicationStatusSummaryListT>(value)); return *this;}
    template<typename ReplicationStatusSummaryListT = ReplicationStatusSummary>
    ReplicationConfiguration& AddReplicationStatusSummaryList(ReplicationStatusSummaryListT&& value) { m_replicationStatusSummaryListHasBeenSet = true; m_replicationStatusSummaryList.emplace_back(std::forward<ReplicationStatusSummaryListT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The Amazon Web Services Region where the source Amazon Connect instance was
     * created. This is the Region where the <a
     * href="https://docs.aws.amazon.com/connect/latest/APIReference/API_ReplicateInstance.html">ReplicateInstance</a>
     * API was called to start the replication process.</p>
     */
    inline const Aws::String& GetSourceRegion() const { return m_sourceRegion; }
    inline bool SourceRegionHasBeenSet() const { return m_sourceRegionHasBeenSet; }
    template<typename SourceRegionT = Aws::String>
    void SetSourceRegion(SourceRegionT&& value) { m_sourceRegionHasBeenSet = true; m_sourceRegion = std::forward<SourceRegionT>(value); }
    template<typename SourceRegionT = Aws::String>
    ReplicationConfiguration& WithSourceRegion(SourceRegionT&& value) { SetSourceRegion(std::forward<SourceRegionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The URL that is used to sign-in to your Amazon Connect instance according to
     * your traffic distribution group configuration. For more information about
     * sign-in and traffic distribution groups, see <a
     * href="https://docs.aws.amazon.com/connect/latest/adminguide/setup-traffic-distribution-groups.html">Important
     * things to know</a> in the <i>Create traffic distribution groups</i> topic in the
     * <i>Amazon Connect Administrator Guide</i>. </p>
     */
    inline const Aws::String& GetGlobalSignInEndpoint() const { return m_globalSignInEndpoint; }
    inline bool GlobalSignInEndpointHasBeenSet() const { return m_globalSignInEndpointHasBeenSet; }
    template<typename GlobalSignInEndpointT = Aws::String>
    void SetGlobalSignInEndpoint(GlobalSignInEndpointT&& value) { m_globalSignInEndpointHasBeenSet = true; m_globalSignInEndpoint = std::forward<GlobalSignInEndpointT>(value); }
    template<typename GlobalSignInEndpointT = Aws::String>
    ReplicationConfiguration& WithGlobalSignInEndpoint(GlobalSignInEndpointT&& value) { SetGlobalSignInEndpoint(std::forward<GlobalSignInEndpointT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<ReplicationStatusSummary> m_replicationStatusSummaryList;
    bool m_replicationStatusSummaryListHasBeenSet = false;

    Aws::String m_sourceRegion;
    bool m_sourceRegionHasBeenSet = false;

    Aws::String m_globalSignInEndpoint;
    bool m_globalSignInEndpointHasBeenSet = false;
  };

} // namespace Model
} // namespace Connect
} // namespace Aws
