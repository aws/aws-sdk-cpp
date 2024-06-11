/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/keyspaces/Keyspaces_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/keyspaces/model/AutoScalingSpecification.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/keyspaces/model/ReplicaAutoScalingSpecification.h>
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
namespace Keyspaces
{
namespace Model
{
  class GetTableAutoScalingSettingsResult
  {
  public:
    AWS_KEYSPACES_API GetTableAutoScalingSettingsResult();
    AWS_KEYSPACES_API GetTableAutoScalingSettingsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_KEYSPACES_API GetTableAutoScalingSettingsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The name of the keyspace.</p>
     */
    inline const Aws::String& GetKeyspaceName() const{ return m_keyspaceName; }
    inline void SetKeyspaceName(const Aws::String& value) { m_keyspaceName = value; }
    inline void SetKeyspaceName(Aws::String&& value) { m_keyspaceName = std::move(value); }
    inline void SetKeyspaceName(const char* value) { m_keyspaceName.assign(value); }
    inline GetTableAutoScalingSettingsResult& WithKeyspaceName(const Aws::String& value) { SetKeyspaceName(value); return *this;}
    inline GetTableAutoScalingSettingsResult& WithKeyspaceName(Aws::String&& value) { SetKeyspaceName(std::move(value)); return *this;}
    inline GetTableAutoScalingSettingsResult& WithKeyspaceName(const char* value) { SetKeyspaceName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the table.</p>
     */
    inline const Aws::String& GetTableName() const{ return m_tableName; }
    inline void SetTableName(const Aws::String& value) { m_tableName = value; }
    inline void SetTableName(Aws::String&& value) { m_tableName = std::move(value); }
    inline void SetTableName(const char* value) { m_tableName.assign(value); }
    inline GetTableAutoScalingSettingsResult& WithTableName(const Aws::String& value) { SetTableName(value); return *this;}
    inline GetTableAutoScalingSettingsResult& WithTableName(Aws::String&& value) { SetTableName(std::move(value)); return *this;}
    inline GetTableAutoScalingSettingsResult& WithTableName(const char* value) { SetTableName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the table.</p>
     */
    inline const Aws::String& GetResourceArn() const{ return m_resourceArn; }
    inline void SetResourceArn(const Aws::String& value) { m_resourceArn = value; }
    inline void SetResourceArn(Aws::String&& value) { m_resourceArn = std::move(value); }
    inline void SetResourceArn(const char* value) { m_resourceArn.assign(value); }
    inline GetTableAutoScalingSettingsResult& WithResourceArn(const Aws::String& value) { SetResourceArn(value); return *this;}
    inline GetTableAutoScalingSettingsResult& WithResourceArn(Aws::String&& value) { SetResourceArn(std::move(value)); return *this;}
    inline GetTableAutoScalingSettingsResult& WithResourceArn(const char* value) { SetResourceArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The auto scaling settings of the table.</p>
     */
    inline const AutoScalingSpecification& GetAutoScalingSpecification() const{ return m_autoScalingSpecification; }
    inline void SetAutoScalingSpecification(const AutoScalingSpecification& value) { m_autoScalingSpecification = value; }
    inline void SetAutoScalingSpecification(AutoScalingSpecification&& value) { m_autoScalingSpecification = std::move(value); }
    inline GetTableAutoScalingSettingsResult& WithAutoScalingSpecification(const AutoScalingSpecification& value) { SetAutoScalingSpecification(value); return *this;}
    inline GetTableAutoScalingSettingsResult& WithAutoScalingSpecification(AutoScalingSpecification&& value) { SetAutoScalingSpecification(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Web Services Region specific settings of a multi-Region table.
     * Returns the settings for all Regions the table is replicated in.</p>
     */
    inline const Aws::Vector<ReplicaAutoScalingSpecification>& GetReplicaSpecifications() const{ return m_replicaSpecifications; }
    inline void SetReplicaSpecifications(const Aws::Vector<ReplicaAutoScalingSpecification>& value) { m_replicaSpecifications = value; }
    inline void SetReplicaSpecifications(Aws::Vector<ReplicaAutoScalingSpecification>&& value) { m_replicaSpecifications = std::move(value); }
    inline GetTableAutoScalingSettingsResult& WithReplicaSpecifications(const Aws::Vector<ReplicaAutoScalingSpecification>& value) { SetReplicaSpecifications(value); return *this;}
    inline GetTableAutoScalingSettingsResult& WithReplicaSpecifications(Aws::Vector<ReplicaAutoScalingSpecification>&& value) { SetReplicaSpecifications(std::move(value)); return *this;}
    inline GetTableAutoScalingSettingsResult& AddReplicaSpecifications(const ReplicaAutoScalingSpecification& value) { m_replicaSpecifications.push_back(value); return *this; }
    inline GetTableAutoScalingSettingsResult& AddReplicaSpecifications(ReplicaAutoScalingSpecification&& value) { m_replicaSpecifications.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline GetTableAutoScalingSettingsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline GetTableAutoScalingSettingsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline GetTableAutoScalingSettingsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_keyspaceName;

    Aws::String m_tableName;

    Aws::String m_resourceArn;

    AutoScalingSpecification m_autoScalingSpecification;

    Aws::Vector<ReplicaAutoScalingSpecification> m_replicaSpecifications;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Keyspaces
} // namespace Aws
