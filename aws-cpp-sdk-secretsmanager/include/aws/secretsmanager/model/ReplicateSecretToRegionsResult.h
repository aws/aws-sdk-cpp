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
  class AWS_SECRETSMANAGER_API ReplicateSecretToRegionsResult
  {
  public:
    ReplicateSecretToRegionsResult();
    ReplicateSecretToRegionsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    ReplicateSecretToRegionsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Replicate a secret based on the <code>ReplicaRegionType</code>&gt; consisting
     * of a Region(required) and a KMSKeyId (optional) which can be the ARN, KeyID, or
     * Alias. </p>
     */
    inline const Aws::String& GetARN() const{ return m_aRN; }

    /**
     * <p>Replicate a secret based on the <code>ReplicaRegionType</code>&gt; consisting
     * of a Region(required) and a KMSKeyId (optional) which can be the ARN, KeyID, or
     * Alias. </p>
     */
    inline void SetARN(const Aws::String& value) { m_aRN = value; }

    /**
     * <p>Replicate a secret based on the <code>ReplicaRegionType</code>&gt; consisting
     * of a Region(required) and a KMSKeyId (optional) which can be the ARN, KeyID, or
     * Alias. </p>
     */
    inline void SetARN(Aws::String&& value) { m_aRN = std::move(value); }

    /**
     * <p>Replicate a secret based on the <code>ReplicaRegionType</code>&gt; consisting
     * of a Region(required) and a KMSKeyId (optional) which can be the ARN, KeyID, or
     * Alias. </p>
     */
    inline void SetARN(const char* value) { m_aRN.assign(value); }

    /**
     * <p>Replicate a secret based on the <code>ReplicaRegionType</code>&gt; consisting
     * of a Region(required) and a KMSKeyId (optional) which can be the ARN, KeyID, or
     * Alias. </p>
     */
    inline ReplicateSecretToRegionsResult& WithARN(const Aws::String& value) { SetARN(value); return *this;}

    /**
     * <p>Replicate a secret based on the <code>ReplicaRegionType</code>&gt; consisting
     * of a Region(required) and a KMSKeyId (optional) which can be the ARN, KeyID, or
     * Alias. </p>
     */
    inline ReplicateSecretToRegionsResult& WithARN(Aws::String&& value) { SetARN(std::move(value)); return *this;}

    /**
     * <p>Replicate a secret based on the <code>ReplicaRegionType</code>&gt; consisting
     * of a Region(required) and a KMSKeyId (optional) which can be the ARN, KeyID, or
     * Alias. </p>
     */
    inline ReplicateSecretToRegionsResult& WithARN(const char* value) { SetARN(value); return *this;}


    /**
     * <p>Describes the secret replication status as <code>PENDING</code>,
     * <code>SUCCESS</code> or <code>FAIL</code>.</p>
     */
    inline const Aws::Vector<ReplicationStatusType>& GetReplicationStatus() const{ return m_replicationStatus; }

    /**
     * <p>Describes the secret replication status as <code>PENDING</code>,
     * <code>SUCCESS</code> or <code>FAIL</code>.</p>
     */
    inline void SetReplicationStatus(const Aws::Vector<ReplicationStatusType>& value) { m_replicationStatus = value; }

    /**
     * <p>Describes the secret replication status as <code>PENDING</code>,
     * <code>SUCCESS</code> or <code>FAIL</code>.</p>
     */
    inline void SetReplicationStatus(Aws::Vector<ReplicationStatusType>&& value) { m_replicationStatus = std::move(value); }

    /**
     * <p>Describes the secret replication status as <code>PENDING</code>,
     * <code>SUCCESS</code> or <code>FAIL</code>.</p>
     */
    inline ReplicateSecretToRegionsResult& WithReplicationStatus(const Aws::Vector<ReplicationStatusType>& value) { SetReplicationStatus(value); return *this;}

    /**
     * <p>Describes the secret replication status as <code>PENDING</code>,
     * <code>SUCCESS</code> or <code>FAIL</code>.</p>
     */
    inline ReplicateSecretToRegionsResult& WithReplicationStatus(Aws::Vector<ReplicationStatusType>&& value) { SetReplicationStatus(std::move(value)); return *this;}

    /**
     * <p>Describes the secret replication status as <code>PENDING</code>,
     * <code>SUCCESS</code> or <code>FAIL</code>.</p>
     */
    inline ReplicateSecretToRegionsResult& AddReplicationStatus(const ReplicationStatusType& value) { m_replicationStatus.push_back(value); return *this; }

    /**
     * <p>Describes the secret replication status as <code>PENDING</code>,
     * <code>SUCCESS</code> or <code>FAIL</code>.</p>
     */
    inline ReplicateSecretToRegionsResult& AddReplicationStatus(ReplicationStatusType&& value) { m_replicationStatus.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_aRN;

    Aws::Vector<ReplicationStatusType> m_replicationStatus;
  };

} // namespace Model
} // namespace SecretsManager
} // namespace Aws
