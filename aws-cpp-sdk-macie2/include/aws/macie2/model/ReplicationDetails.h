/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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
   * in an S3 bucket are replicated to S3 buckets for other AWS accounts and, if so,
   * which accounts.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/macie2-2020-01-01T00:00:00Z/ReplicationDetails">AWS
   * API Reference</a></p>
   */
  class AWS_MACIE2_API ReplicationDetails
  {
  public:
    ReplicationDetails();
    ReplicationDetails(Aws::Utils::Json::JsonView jsonValue);
    ReplicationDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


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
     * to an AWS account that isn't part of the Amazon Macie organization.</p>
     */
    inline bool GetReplicatedExternally() const{ return m_replicatedExternally; }

    /**
     * <p>Specifies whether the bucket is configured to replicate one or more objects
     * to an AWS account that isn't part of the Amazon Macie organization.</p>
     */
    inline bool ReplicatedExternallyHasBeenSet() const { return m_replicatedExternallyHasBeenSet; }

    /**
     * <p>Specifies whether the bucket is configured to replicate one or more objects
     * to an AWS account that isn't part of the Amazon Macie organization.</p>
     */
    inline void SetReplicatedExternally(bool value) { m_replicatedExternallyHasBeenSet = true; m_replicatedExternally = value; }

    /**
     * <p>Specifies whether the bucket is configured to replicate one or more objects
     * to an AWS account that isn't part of the Amazon Macie organization.</p>
     */
    inline ReplicationDetails& WithReplicatedExternally(bool value) { SetReplicatedExternally(value); return *this;}


    /**
     * <p>An array of AWS account IDs, one for each AWS account that the bucket is
     * configured to replicate one or more objects to.</p>
     */
    inline const Aws::Vector<Aws::String>& GetReplicationAccounts() const{ return m_replicationAccounts; }

    /**
     * <p>An array of AWS account IDs, one for each AWS account that the bucket is
     * configured to replicate one or more objects to.</p>
     */
    inline bool ReplicationAccountsHasBeenSet() const { return m_replicationAccountsHasBeenSet; }

    /**
     * <p>An array of AWS account IDs, one for each AWS account that the bucket is
     * configured to replicate one or more objects to.</p>
     */
    inline void SetReplicationAccounts(const Aws::Vector<Aws::String>& value) { m_replicationAccountsHasBeenSet = true; m_replicationAccounts = value; }

    /**
     * <p>An array of AWS account IDs, one for each AWS account that the bucket is
     * configured to replicate one or more objects to.</p>
     */
    inline void SetReplicationAccounts(Aws::Vector<Aws::String>&& value) { m_replicationAccountsHasBeenSet = true; m_replicationAccounts = std::move(value); }

    /**
     * <p>An array of AWS account IDs, one for each AWS account that the bucket is
     * configured to replicate one or more objects to.</p>
     */
    inline ReplicationDetails& WithReplicationAccounts(const Aws::Vector<Aws::String>& value) { SetReplicationAccounts(value); return *this;}

    /**
     * <p>An array of AWS account IDs, one for each AWS account that the bucket is
     * configured to replicate one or more objects to.</p>
     */
    inline ReplicationDetails& WithReplicationAccounts(Aws::Vector<Aws::String>&& value) { SetReplicationAccounts(std::move(value)); return *this;}

    /**
     * <p>An array of AWS account IDs, one for each AWS account that the bucket is
     * configured to replicate one or more objects to.</p>
     */
    inline ReplicationDetails& AddReplicationAccounts(const Aws::String& value) { m_replicationAccountsHasBeenSet = true; m_replicationAccounts.push_back(value); return *this; }

    /**
     * <p>An array of AWS account IDs, one for each AWS account that the bucket is
     * configured to replicate one or more objects to.</p>
     */
    inline ReplicationDetails& AddReplicationAccounts(Aws::String&& value) { m_replicationAccountsHasBeenSet = true; m_replicationAccounts.push_back(std::move(value)); return *this; }

    /**
     * <p>An array of AWS account IDs, one for each AWS account that the bucket is
     * configured to replicate one or more objects to.</p>
     */
    inline ReplicationDetails& AddReplicationAccounts(const char* value) { m_replicationAccountsHasBeenSet = true; m_replicationAccounts.push_back(value); return *this; }

  private:

    bool m_replicated;
    bool m_replicatedHasBeenSet;

    bool m_replicatedExternally;
    bool m_replicatedExternallyHasBeenSet;

    Aws::Vector<Aws::String> m_replicationAccounts;
    bool m_replicationAccountsHasBeenSet;
  };

} // namespace Model
} // namespace Macie2
} // namespace Aws
