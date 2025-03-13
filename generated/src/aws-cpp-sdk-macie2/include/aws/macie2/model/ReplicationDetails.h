/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/macie2/Macie2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace Macie2
{
namespace Model
{

  /**
   * <p>Provides information about settings that define whether one or more objects
   * in an S3 bucket are replicated to S3 buckets for other Amazon Web Services
   * accounts and, if so, which accounts.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/macie2-2020-01-01/ReplicationDetails">AWS
   * API Reference</a></p>
   */
  class ReplicationDetails
  {
  public:
    AWS_MACIE2_API ReplicationDetails() = default;
    AWS_MACIE2_API ReplicationDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_MACIE2_API ReplicationDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MACIE2_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Specifies whether the bucket is configured to replicate one or more objects
     * to any destination.</p>
     */
    inline bool GetReplicated() const { return m_replicated; }
    inline bool ReplicatedHasBeenSet() const { return m_replicatedHasBeenSet; }
    inline void SetReplicated(bool value) { m_replicatedHasBeenSet = true; m_replicated = value; }
    inline ReplicationDetails& WithReplicated(bool value) { SetReplicated(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies whether the bucket is configured to replicate one or more objects
     * to a bucket for an Amazon Web Services account that isn't part of your Amazon
     * Macie organization. An <i>Amazon Macie organization</i> is a set of Macie
     * accounts that are centrally managed as a group of related accounts through
     * Organizations or by Macie invitation.</p>
     */
    inline bool GetReplicatedExternally() const { return m_replicatedExternally; }
    inline bool ReplicatedExternallyHasBeenSet() const { return m_replicatedExternallyHasBeenSet; }
    inline void SetReplicatedExternally(bool value) { m_replicatedExternallyHasBeenSet = true; m_replicatedExternally = value; }
    inline ReplicationDetails& WithReplicatedExternally(bool value) { SetReplicatedExternally(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>An array of Amazon Web Services account IDs, one for each Amazon Web Services
     * account that owns a bucket that the bucket is configured to replicate one or
     * more objects to.</p>
     */
    inline const Aws::Vector<Aws::String>& GetReplicationAccounts() const { return m_replicationAccounts; }
    inline bool ReplicationAccountsHasBeenSet() const { return m_replicationAccountsHasBeenSet; }
    template<typename ReplicationAccountsT = Aws::Vector<Aws::String>>
    void SetReplicationAccounts(ReplicationAccountsT&& value) { m_replicationAccountsHasBeenSet = true; m_replicationAccounts = std::forward<ReplicationAccountsT>(value); }
    template<typename ReplicationAccountsT = Aws::Vector<Aws::String>>
    ReplicationDetails& WithReplicationAccounts(ReplicationAccountsT&& value) { SetReplicationAccounts(std::forward<ReplicationAccountsT>(value)); return *this;}
    template<typename ReplicationAccountsT = Aws::String>
    ReplicationDetails& AddReplicationAccounts(ReplicationAccountsT&& value) { m_replicationAccountsHasBeenSet = true; m_replicationAccounts.emplace_back(std::forward<ReplicationAccountsT>(value)); return *this; }
    ///@}
  private:

    bool m_replicated{false};
    bool m_replicatedHasBeenSet = false;

    bool m_replicatedExternally{false};
    bool m_replicatedExternallyHasBeenSet = false;

    Aws::Vector<Aws::String> m_replicationAccounts;
    bool m_replicationAccountsHasBeenSet = false;
  };

} // namespace Model
} // namespace Macie2
} // namespace Aws
