/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/secretsmanager/SecretsManager_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
  class AWS_SECRETSMANAGER_API StopReplicationToReplicaResult
  {
  public:
    StopReplicationToReplicaResult();
    StopReplicationToReplicaResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    StopReplicationToReplicaResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Response <code>StopReplicationToReplica</code> of a secret, based on the
     * <code>ARN,</code>.</p>
     */
    inline const Aws::String& GetARN() const{ return m_aRN; }

    /**
     * <p>Response <code>StopReplicationToReplica</code> of a secret, based on the
     * <code>ARN,</code>.</p>
     */
    inline void SetARN(const Aws::String& value) { m_aRN = value; }

    /**
     * <p>Response <code>StopReplicationToReplica</code> of a secret, based on the
     * <code>ARN,</code>.</p>
     */
    inline void SetARN(Aws::String&& value) { m_aRN = std::move(value); }

    /**
     * <p>Response <code>StopReplicationToReplica</code> of a secret, based on the
     * <code>ARN,</code>.</p>
     */
    inline void SetARN(const char* value) { m_aRN.assign(value); }

    /**
     * <p>Response <code>StopReplicationToReplica</code> of a secret, based on the
     * <code>ARN,</code>.</p>
     */
    inline StopReplicationToReplicaResult& WithARN(const Aws::String& value) { SetARN(value); return *this;}

    /**
     * <p>Response <code>StopReplicationToReplica</code> of a secret, based on the
     * <code>ARN,</code>.</p>
     */
    inline StopReplicationToReplicaResult& WithARN(Aws::String&& value) { SetARN(std::move(value)); return *this;}

    /**
     * <p>Response <code>StopReplicationToReplica</code> of a secret, based on the
     * <code>ARN,</code>.</p>
     */
    inline StopReplicationToReplicaResult& WithARN(const char* value) { SetARN(value); return *this;}

  private:

    Aws::String m_aRN;
  };

} // namespace Model
} // namespace SecretsManager
} // namespace Aws
