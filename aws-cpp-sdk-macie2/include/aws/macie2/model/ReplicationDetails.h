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
    AWS_MACIE2_API ReplicationDetails();
    AWS_MACIE2_API ReplicationDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_MACIE2_API ReplicationDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MACIE2_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Specifies whether the bucket is configured to replicate one or more objects
     * to any destination.</p>
     */
    inline bool GetReplicated() const{ return m_replicated; }

    /**
     * <p>Specifies whether the bucket is configured to replicate one or more objects
     * to any destination.</p>
     */
    inline bool ReplicatedHasBeenSet() const { return m_replicatedHasBeenSet; }

    /**
     * <p>Specifies whether the bucket is configured to replicate one or more objects
     * to any destination.</p>
     */
    inline void SetReplicated(bool value) { m_replicatedHasBeenSet = true; m_replicated = value; }

    /**
     * <p>Specifies whether the bucket is configured to replicate one or more objects
     * to any destination.</p>
     */
    inline ReplicationDetails& WithReplicated(bool value) { SetReplicated(value); return *this;}


    /**
     * <p>Specifies whether the bucket is configured to replicate one or more objects
     * to an Amazon Web Services account that isn't part of the same Amazon Macie
     * organization.</p>
     */
    inline bool GetReplicatedExternally() const{ return m_replicatedExternally; }

    /**
     * <p>Specifies whether the bucket is configured to replicate one or more objects
     * to an Amazon Web Services account that isn't part of the same Amazon Macie
     * organization.</p>
     */
    inline bool ReplicatedExternallyHasBeenSet() const { return m_replicatedExternallyHasBeenSet; }

    /**
     * <p>Specifies whether the bucket is configured to replicate one or more objects
     * to an Amazon Web Services account that isn't part of the same Amazon Macie
     * organization.</p>
     */
    inline void SetReplicatedExternally(bool value) { m_replicatedExternallyHasBeenSet = true; m_replicatedExternally = value; }

    /**
     * <p>Specifies whether the bucket is configured to replicate one or more objects
     * to an Amazon Web Services account that isn't part of the same Amazon Macie
     * organization.</p>
     */
    inline ReplicationDetails& WithReplicatedExternally(bool value) { SetReplicatedExternally(value); return *this;}


    /**
     * <p>An array of Amazon Web Services account IDs, one for each Amazon Web Services
     * account that the bucket is configured to replicate one or more objects to.</p>
     */
    inline const Aws::Vector<Aws::String>& GetReplicationAccounts() const{ return m_replicationAccounts; }

    /**
     * <p>An array of Amazon Web Services account IDs, one for each Amazon Web Services
     * account that the bucket is configured to replicate one or more objects to.</p>
     */
    inline bool ReplicationAccountsHasBeenSet() const { return m_replicationAccountsHasBeenSet; }

    /**
     * <p>An array of Amazon Web Services account IDs, one for each Amazon Web Services
     * account that the bucket is configured to replicate one or more objects to.</p>
     */
    inline void SetReplicationAccounts(const Aws::Vector<Aws::String>& value) { m_replicationAccountsHasBeenSet = true; m_replicationAccounts = value; }

    /**
     * <p>An array of Amazon Web Services account IDs, one for each Amazon Web Services
     * account that the bucket is configured to replicate one or more objects to.</p>
     */
    inline void SetReplicationAccounts(Aws::Vector<Aws::String>&& value) { m_replicationAccountsHasBeenSet = true; m_replicationAccounts = std::move(value); }

    /**
     * <p>An array of Amazon Web Services account IDs, one for each Amazon Web Services
     * account that the bucket is configured to replicate one or more objects to.</p>
     */
    inline ReplicationDetails& WithReplicationAccounts(const Aws::Vector<Aws::String>& value) { SetReplicationAccounts(value); return *this;}

    /**
     * <p>An array of Amazon Web Services account IDs, one for each Amazon Web Services
     * account that the bucket is configured to replicate one or more objects to.</p>
     */
    inline ReplicationDetails& WithReplicationAccounts(Aws::Vector<Aws::String>&& value) { SetReplicationAccounts(std::move(value)); return *this;}

    /**
     * <p>An array of Amazon Web Services account IDs, one for each Amazon Web Services
     * account that the bucket is configured to replicate one or more objects to.</p>
     */
    inline ReplicationDetails& AddReplicationAccounts(const Aws::String& value) { m_replicationAccountsHasBeenSet = true; m_replicationAccounts.push_back(value); return *this; }

    /**
     * <p>An array of Amazon Web Services account IDs, one for each Amazon Web Services
     * account that the bucket is configured to replicate one or more objects to.</p>
     */
    inline ReplicationDetails& AddReplicationAccounts(Aws::String&& value) { m_replicationAccountsHasBeenSet = true; m_replicationAccounts.push_back(std::move(value)); return *this; }

    /**
     * <p>An array of Amazon Web Services account IDs, one for each Amazon Web Services
     * account that the bucket is configured to replicate one or more objects to.</p>
     */
    inline ReplicationDetails& AddReplicationAccounts(const char* value) { m_replicationAccountsHasBeenSet = true; m_replicationAccounts.push_back(value); return *this; }

  private:

    bool m_replicated;
    bool m_replicatedHasBeenSet = false;

    bool m_replicatedExternally;
    bool m_replicatedExternallyHasBeenSet = false;

    Aws::Vector<Aws::String> m_replicationAccounts;
    bool m_replicationAccountsHasBeenSet = false;
  };

} // namespace Model
} // namespace Macie2
} // namespace Aws
