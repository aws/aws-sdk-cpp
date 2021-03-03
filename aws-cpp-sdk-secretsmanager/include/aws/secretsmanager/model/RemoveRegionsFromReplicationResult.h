/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/secretsmanager/SecretsManager_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/secretsmanager/model/ReplicationStatusType.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace SecretsManager
{
namespace Model
{
  class AWS_SECRETSMANAGER_API RemoveRegionsFromReplicationResult
  {
  public:
    RemoveRegionsFromReplicationResult();
    RemoveRegionsFromReplicationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    RemoveRegionsFromReplicationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The secret <code>ARN</code> removed from replication regions.</p>
     */
    inline const Aws::String& GetARN() const{ return m_aRN; }

    /**
     * <p>The secret <code>ARN</code> removed from replication regions.</p>
     */
    inline void SetARN(const Aws::String& value) { m_aRN = value; }

    /**
     * <p>The secret <code>ARN</code> removed from replication regions.</p>
     */
    inline void SetARN(Aws::String&& value) { m_aRN = std::move(value); }

    /**
     * <p>The secret <code>ARN</code> removed from replication regions.</p>
     */
    inline void SetARN(const char* value) { m_aRN.assign(value); }

    /**
     * <p>The secret <code>ARN</code> removed from replication regions.</p>
     */
    inline RemoveRegionsFromReplicationResult& WithARN(const Aws::String& value) { SetARN(value); return *this;}

    /**
     * <p>The secret <code>ARN</code> removed from replication regions.</p>
     */
    inline RemoveRegionsFromReplicationResult& WithARN(Aws::String&& value) { SetARN(std::move(value)); return *this;}

    /**
     * <p>The secret <code>ARN</code> removed from replication regions.</p>
     */
    inline RemoveRegionsFromReplicationResult& WithARN(const char* value) { SetARN(value); return *this;}


    /**
     * <p>Describes the remaining replication status after you remove regions from the
     * replication list.</p>
     */
    inline const Aws::Vector<ReplicationStatusType>& GetReplicationStatus() const{ return m_replicationStatus; }

    /**
     * <p>Describes the remaining replication status after you remove regions from the
     * replication list.</p>
     */
    inline void SetReplicationStatus(const Aws::Vector<ReplicationStatusType>& value) { m_replicationStatus = value; }

    /**
     * <p>Describes the remaining replication status after you remove regions from the
     * replication list.</p>
     */
    inline void SetReplicationStatus(Aws::Vector<ReplicationStatusType>&& value) { m_replicationStatus = std::move(value); }

    /**
     * <p>Describes the remaining replication status after you remove regions from the
     * replication list.</p>
     */
    inline RemoveRegionsFromReplicationResult& WithReplicationStatus(const Aws::Vector<ReplicationStatusType>& value) { SetReplicationStatus(value); return *this;}

    /**
     * <p>Describes the remaining replication status after you remove regions from the
     * replication list.</p>
     */
    inline RemoveRegionsFromReplicationResult& WithReplicationStatus(Aws::Vector<ReplicationStatusType>&& value) { SetReplicationStatus(std::move(value)); return *this;}

    /**
     * <p>Describes the remaining replication status after you remove regions from the
     * replication list.</p>
     */
    inline RemoveRegionsFromReplicationResult& AddReplicationStatus(const ReplicationStatusType& value) { m_replicationStatus.push_back(value); return *this; }

    /**
     * <p>Describes the remaining replication status after you remove regions from the
     * replication list.</p>
     */
    inline RemoveRegionsFromReplicationResult& AddReplicationStatus(ReplicationStatusType&& value) { m_replicationStatus.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_aRN;

    Aws::Vector<ReplicationStatusType> m_replicationStatus;
  };

} // namespace Model
} // namespace SecretsManager
} // namespace Aws
