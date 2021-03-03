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
  class AWS_SECRETSMANAGER_API CreateSecretResult
  {
  public:
    CreateSecretResult();
    CreateSecretResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    CreateSecretResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The Amazon Resource Name (ARN) of the secret that you just created.</p>
     *  <p>Secrets Manager automatically adds several random characters to the
     * name at the end of the ARN when you initially create a secret. This affects only
     * the ARN and not the actual friendly name. This ensures that if you create a new
     * secret with the same name as an old secret that you previously deleted, then
     * users with access to the old secret <i>don't</i> automatically get access to the
     * new secret because the ARNs are different.</p> 
     */
    inline const Aws::String& GetARN() const{ return m_aRN; }

    /**
     * <p>The Amazon Resource Name (ARN) of the secret that you just created.</p>
     *  <p>Secrets Manager automatically adds several random characters to the
     * name at the end of the ARN when you initially create a secret. This affects only
     * the ARN and not the actual friendly name. This ensures that if you create a new
     * secret with the same name as an old secret that you previously deleted, then
     * users with access to the old secret <i>don't</i> automatically get access to the
     * new secret because the ARNs are different.</p> 
     */
    inline void SetARN(const Aws::String& value) { m_aRN = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the secret that you just created.</p>
     *  <p>Secrets Manager automatically adds several random characters to the
     * name at the end of the ARN when you initially create a secret. This affects only
     * the ARN and not the actual friendly name. This ensures that if you create a new
     * secret with the same name as an old secret that you previously deleted, then
     * users with access to the old secret <i>don't</i> automatically get access to the
     * new secret because the ARNs are different.</p> 
     */
    inline void SetARN(Aws::String&& value) { m_aRN = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the secret that you just created.</p>
     *  <p>Secrets Manager automatically adds several random characters to the
     * name at the end of the ARN when you initially create a secret. This affects only
     * the ARN and not the actual friendly name. This ensures that if you create a new
     * secret with the same name as an old secret that you previously deleted, then
     * users with access to the old secret <i>don't</i> automatically get access to the
     * new secret because the ARNs are different.</p> 
     */
    inline void SetARN(const char* value) { m_aRN.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the secret that you just created.</p>
     *  <p>Secrets Manager automatically adds several random characters to the
     * name at the end of the ARN when you initially create a secret. This affects only
     * the ARN and not the actual friendly name. This ensures that if you create a new
     * secret with the same name as an old secret that you previously deleted, then
     * users with access to the old secret <i>don't</i> automatically get access to the
     * new secret because the ARNs are different.</p> 
     */
    inline CreateSecretResult& WithARN(const Aws::String& value) { SetARN(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the secret that you just created.</p>
     *  <p>Secrets Manager automatically adds several random characters to the
     * name at the end of the ARN when you initially create a secret. This affects only
     * the ARN and not the actual friendly name. This ensures that if you create a new
     * secret with the same name as an old secret that you previously deleted, then
     * users with access to the old secret <i>don't</i> automatically get access to the
     * new secret because the ARNs are different.</p> 
     */
    inline CreateSecretResult& WithARN(Aws::String&& value) { SetARN(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the secret that you just created.</p>
     *  <p>Secrets Manager automatically adds several random characters to the
     * name at the end of the ARN when you initially create a secret. This affects only
     * the ARN and not the actual friendly name. This ensures that if you create a new
     * secret with the same name as an old secret that you previously deleted, then
     * users with access to the old secret <i>don't</i> automatically get access to the
     * new secret because the ARNs are different.</p> 
     */
    inline CreateSecretResult& WithARN(const char* value) { SetARN(value); return *this;}


    /**
     * <p>The friendly name of the secret that you just created.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The friendly name of the secret that you just created.</p>
     */
    inline void SetName(const Aws::String& value) { m_name = value; }

    /**
     * <p>The friendly name of the secret that you just created.</p>
     */
    inline void SetName(Aws::String&& value) { m_name = std::move(value); }

    /**
     * <p>The friendly name of the secret that you just created.</p>
     */
    inline void SetName(const char* value) { m_name.assign(value); }

    /**
     * <p>The friendly name of the secret that you just created.</p>
     */
    inline CreateSecretResult& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The friendly name of the secret that you just created.</p>
     */
    inline CreateSecretResult& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The friendly name of the secret that you just created.</p>
     */
    inline CreateSecretResult& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The unique identifier associated with the version of the secret you just
     * created.</p>
     */
    inline const Aws::String& GetVersionId() const{ return m_versionId; }

    /**
     * <p>The unique identifier associated with the version of the secret you just
     * created.</p>
     */
    inline void SetVersionId(const Aws::String& value) { m_versionId = value; }

    /**
     * <p>The unique identifier associated with the version of the secret you just
     * created.</p>
     */
    inline void SetVersionId(Aws::String&& value) { m_versionId = std::move(value); }

    /**
     * <p>The unique identifier associated with the version of the secret you just
     * created.</p>
     */
    inline void SetVersionId(const char* value) { m_versionId.assign(value); }

    /**
     * <p>The unique identifier associated with the version of the secret you just
     * created.</p>
     */
    inline CreateSecretResult& WithVersionId(const Aws::String& value) { SetVersionId(value); return *this;}

    /**
     * <p>The unique identifier associated with the version of the secret you just
     * created.</p>
     */
    inline CreateSecretResult& WithVersionId(Aws::String&& value) { SetVersionId(std::move(value)); return *this;}

    /**
     * <p>The unique identifier associated with the version of the secret you just
     * created.</p>
     */
    inline CreateSecretResult& WithVersionId(const char* value) { SetVersionId(value); return *this;}


    /**
     * <p>Describes a list of replication status objects as <code>InProgress</code>,
     * <code>Failed</code> or <code>InSync</code>.</p>
     */
    inline const Aws::Vector<ReplicationStatusType>& GetReplicationStatus() const{ return m_replicationStatus; }

    /**
     * <p>Describes a list of replication status objects as <code>InProgress</code>,
     * <code>Failed</code> or <code>InSync</code>.</p>
     */
    inline void SetReplicationStatus(const Aws::Vector<ReplicationStatusType>& value) { m_replicationStatus = value; }

    /**
     * <p>Describes a list of replication status objects as <code>InProgress</code>,
     * <code>Failed</code> or <code>InSync</code>.</p>
     */
    inline void SetReplicationStatus(Aws::Vector<ReplicationStatusType>&& value) { m_replicationStatus = std::move(value); }

    /**
     * <p>Describes a list of replication status objects as <code>InProgress</code>,
     * <code>Failed</code> or <code>InSync</code>.</p>
     */
    inline CreateSecretResult& WithReplicationStatus(const Aws::Vector<ReplicationStatusType>& value) { SetReplicationStatus(value); return *this;}

    /**
     * <p>Describes a list of replication status objects as <code>InProgress</code>,
     * <code>Failed</code> or <code>InSync</code>.</p>
     */
    inline CreateSecretResult& WithReplicationStatus(Aws::Vector<ReplicationStatusType>&& value) { SetReplicationStatus(std::move(value)); return *this;}

    /**
     * <p>Describes a list of replication status objects as <code>InProgress</code>,
     * <code>Failed</code> or <code>InSync</code>.</p>
     */
    inline CreateSecretResult& AddReplicationStatus(const ReplicationStatusType& value) { m_replicationStatus.push_back(value); return *this; }

    /**
     * <p>Describes a list of replication status objects as <code>InProgress</code>,
     * <code>Failed</code> or <code>InSync</code>.</p>
     */
    inline CreateSecretResult& AddReplicationStatus(ReplicationStatusType&& value) { m_replicationStatus.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_aRN;

    Aws::String m_name;

    Aws::String m_versionId;

    Aws::Vector<ReplicationStatusType> m_replicationStatus;
  };

} // namespace Model
} // namespace SecretsManager
} // namespace Aws
