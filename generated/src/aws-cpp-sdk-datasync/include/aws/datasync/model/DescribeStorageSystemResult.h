/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/datasync/DataSync_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/datasync/model/DiscoveryServerConfiguration.h>
#include <aws/datasync/model/DiscoverySystemType.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/datasync/model/StorageSystemConnectivityStatus.h>
#include <aws/core/utils/DateTime.h>
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
namespace DataSync
{
namespace Model
{
  class DescribeStorageSystemResult
  {
  public:
    AWS_DATASYNC_API DescribeStorageSystemResult();
    AWS_DATASYNC_API DescribeStorageSystemResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_DATASYNC_API DescribeStorageSystemResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The ARN of the on-premises storage system that the discovery job looked
     * at.</p>
     */
    inline const Aws::String& GetStorageSystemArn() const{ return m_storageSystemArn; }

    /**
     * <p>The ARN of the on-premises storage system that the discovery job looked
     * at.</p>
     */
    inline void SetStorageSystemArn(const Aws::String& value) { m_storageSystemArn = value; }

    /**
     * <p>The ARN of the on-premises storage system that the discovery job looked
     * at.</p>
     */
    inline void SetStorageSystemArn(Aws::String&& value) { m_storageSystemArn = std::move(value); }

    /**
     * <p>The ARN of the on-premises storage system that the discovery job looked
     * at.</p>
     */
    inline void SetStorageSystemArn(const char* value) { m_storageSystemArn.assign(value); }

    /**
     * <p>The ARN of the on-premises storage system that the discovery job looked
     * at.</p>
     */
    inline DescribeStorageSystemResult& WithStorageSystemArn(const Aws::String& value) { SetStorageSystemArn(value); return *this;}

    /**
     * <p>The ARN of the on-premises storage system that the discovery job looked
     * at.</p>
     */
    inline DescribeStorageSystemResult& WithStorageSystemArn(Aws::String&& value) { SetStorageSystemArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the on-premises storage system that the discovery job looked
     * at.</p>
     */
    inline DescribeStorageSystemResult& WithStorageSystemArn(const char* value) { SetStorageSystemArn(value); return *this;}


    /**
     * <p>The server name and network port required to connect with your on-premises
     * storage system's management interface.</p>
     */
    inline const DiscoveryServerConfiguration& GetServerConfiguration() const{ return m_serverConfiguration; }

    /**
     * <p>The server name and network port required to connect with your on-premises
     * storage system's management interface.</p>
     */
    inline void SetServerConfiguration(const DiscoveryServerConfiguration& value) { m_serverConfiguration = value; }

    /**
     * <p>The server name and network port required to connect with your on-premises
     * storage system's management interface.</p>
     */
    inline void SetServerConfiguration(DiscoveryServerConfiguration&& value) { m_serverConfiguration = std::move(value); }

    /**
     * <p>The server name and network port required to connect with your on-premises
     * storage system's management interface.</p>
     */
    inline DescribeStorageSystemResult& WithServerConfiguration(const DiscoveryServerConfiguration& value) { SetServerConfiguration(value); return *this;}

    /**
     * <p>The server name and network port required to connect with your on-premises
     * storage system's management interface.</p>
     */
    inline DescribeStorageSystemResult& WithServerConfiguration(DiscoveryServerConfiguration&& value) { SetServerConfiguration(std::move(value)); return *this;}


    /**
     * <p>The type of on-premises storage system.</p>  <p>DataSync Discovery
     * currently only supports NetApp Fabric-Attached Storage (FAS) and All Flash FAS
     * (AFF) systems running ONTAP 9.7 or later. </p> 
     */
    inline const DiscoverySystemType& GetSystemType() const{ return m_systemType; }

    /**
     * <p>The type of on-premises storage system.</p>  <p>DataSync Discovery
     * currently only supports NetApp Fabric-Attached Storage (FAS) and All Flash FAS
     * (AFF) systems running ONTAP 9.7 or later. </p> 
     */
    inline void SetSystemType(const DiscoverySystemType& value) { m_systemType = value; }

    /**
     * <p>The type of on-premises storage system.</p>  <p>DataSync Discovery
     * currently only supports NetApp Fabric-Attached Storage (FAS) and All Flash FAS
     * (AFF) systems running ONTAP 9.7 or later. </p> 
     */
    inline void SetSystemType(DiscoverySystemType&& value) { m_systemType = std::move(value); }

    /**
     * <p>The type of on-premises storage system.</p>  <p>DataSync Discovery
     * currently only supports NetApp Fabric-Attached Storage (FAS) and All Flash FAS
     * (AFF) systems running ONTAP 9.7 or later. </p> 
     */
    inline DescribeStorageSystemResult& WithSystemType(const DiscoverySystemType& value) { SetSystemType(value); return *this;}

    /**
     * <p>The type of on-premises storage system.</p>  <p>DataSync Discovery
     * currently only supports NetApp Fabric-Attached Storage (FAS) and All Flash FAS
     * (AFF) systems running ONTAP 9.7 or later. </p> 
     */
    inline DescribeStorageSystemResult& WithSystemType(DiscoverySystemType&& value) { SetSystemType(std::move(value)); return *this;}


    /**
     * <p>The ARN of the DataSync agent that connects to and reads from your
     * on-premises storage system.</p>
     */
    inline const Aws::Vector<Aws::String>& GetAgentArns() const{ return m_agentArns; }

    /**
     * <p>The ARN of the DataSync agent that connects to and reads from your
     * on-premises storage system.</p>
     */
    inline void SetAgentArns(const Aws::Vector<Aws::String>& value) { m_agentArns = value; }

    /**
     * <p>The ARN of the DataSync agent that connects to and reads from your
     * on-premises storage system.</p>
     */
    inline void SetAgentArns(Aws::Vector<Aws::String>&& value) { m_agentArns = std::move(value); }

    /**
     * <p>The ARN of the DataSync agent that connects to and reads from your
     * on-premises storage system.</p>
     */
    inline DescribeStorageSystemResult& WithAgentArns(const Aws::Vector<Aws::String>& value) { SetAgentArns(value); return *this;}

    /**
     * <p>The ARN of the DataSync agent that connects to and reads from your
     * on-premises storage system.</p>
     */
    inline DescribeStorageSystemResult& WithAgentArns(Aws::Vector<Aws::String>&& value) { SetAgentArns(std::move(value)); return *this;}

    /**
     * <p>The ARN of the DataSync agent that connects to and reads from your
     * on-premises storage system.</p>
     */
    inline DescribeStorageSystemResult& AddAgentArns(const Aws::String& value) { m_agentArns.push_back(value); return *this; }

    /**
     * <p>The ARN of the DataSync agent that connects to and reads from your
     * on-premises storage system.</p>
     */
    inline DescribeStorageSystemResult& AddAgentArns(Aws::String&& value) { m_agentArns.push_back(std::move(value)); return *this; }

    /**
     * <p>The ARN of the DataSync agent that connects to and reads from your
     * on-premises storage system.</p>
     */
    inline DescribeStorageSystemResult& AddAgentArns(const char* value) { m_agentArns.push_back(value); return *this; }


    /**
     * <p>The name that you gave your on-premises storage system when adding it to
     * DataSync Discovery.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name that you gave your on-premises storage system when adding it to
     * DataSync Discovery.</p>
     */
    inline void SetName(const Aws::String& value) { m_name = value; }

    /**
     * <p>The name that you gave your on-premises storage system when adding it to
     * DataSync Discovery.</p>
     */
    inline void SetName(Aws::String&& value) { m_name = std::move(value); }

    /**
     * <p>The name that you gave your on-premises storage system when adding it to
     * DataSync Discovery.</p>
     */
    inline void SetName(const char* value) { m_name.assign(value); }

    /**
     * <p>The name that you gave your on-premises storage system when adding it to
     * DataSync Discovery.</p>
     */
    inline DescribeStorageSystemResult& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name that you gave your on-premises storage system when adding it to
     * DataSync Discovery.</p>
     */
    inline DescribeStorageSystemResult& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name that you gave your on-premises storage system when adding it to
     * DataSync Discovery.</p>
     */
    inline DescribeStorageSystemResult& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>Describes the connectivity error that the DataSync agent is encountering with
     * your on-premises storage system.</p>
     */
    inline const Aws::String& GetErrorMessage() const{ return m_errorMessage; }

    /**
     * <p>Describes the connectivity error that the DataSync agent is encountering with
     * your on-premises storage system.</p>
     */
    inline void SetErrorMessage(const Aws::String& value) { m_errorMessage = value; }

    /**
     * <p>Describes the connectivity error that the DataSync agent is encountering with
     * your on-premises storage system.</p>
     */
    inline void SetErrorMessage(Aws::String&& value) { m_errorMessage = std::move(value); }

    /**
     * <p>Describes the connectivity error that the DataSync agent is encountering with
     * your on-premises storage system.</p>
     */
    inline void SetErrorMessage(const char* value) { m_errorMessage.assign(value); }

    /**
     * <p>Describes the connectivity error that the DataSync agent is encountering with
     * your on-premises storage system.</p>
     */
    inline DescribeStorageSystemResult& WithErrorMessage(const Aws::String& value) { SetErrorMessage(value); return *this;}

    /**
     * <p>Describes the connectivity error that the DataSync agent is encountering with
     * your on-premises storage system.</p>
     */
    inline DescribeStorageSystemResult& WithErrorMessage(Aws::String&& value) { SetErrorMessage(std::move(value)); return *this;}

    /**
     * <p>Describes the connectivity error that the DataSync agent is encountering with
     * your on-premises storage system.</p>
     */
    inline DescribeStorageSystemResult& WithErrorMessage(const char* value) { SetErrorMessage(value); return *this;}


    /**
     * <p>Indicates whether your DataSync agent can connect to your on-premises storage
     * system.</p>
     */
    inline const StorageSystemConnectivityStatus& GetConnectivityStatus() const{ return m_connectivityStatus; }

    /**
     * <p>Indicates whether your DataSync agent can connect to your on-premises storage
     * system.</p>
     */
    inline void SetConnectivityStatus(const StorageSystemConnectivityStatus& value) { m_connectivityStatus = value; }

    /**
     * <p>Indicates whether your DataSync agent can connect to your on-premises storage
     * system.</p>
     */
    inline void SetConnectivityStatus(StorageSystemConnectivityStatus&& value) { m_connectivityStatus = std::move(value); }

    /**
     * <p>Indicates whether your DataSync agent can connect to your on-premises storage
     * system.</p>
     */
    inline DescribeStorageSystemResult& WithConnectivityStatus(const StorageSystemConnectivityStatus& value) { SetConnectivityStatus(value); return *this;}

    /**
     * <p>Indicates whether your DataSync agent can connect to your on-premises storage
     * system.</p>
     */
    inline DescribeStorageSystemResult& WithConnectivityStatus(StorageSystemConnectivityStatus&& value) { SetConnectivityStatus(std::move(value)); return *this;}


    /**
     * <p>The ARN of the Amazon CloudWatch log group that's used to monitor and log
     * discovery job events.</p>
     */
    inline const Aws::String& GetCloudWatchLogGroupArn() const{ return m_cloudWatchLogGroupArn; }

    /**
     * <p>The ARN of the Amazon CloudWatch log group that's used to monitor and log
     * discovery job events.</p>
     */
    inline void SetCloudWatchLogGroupArn(const Aws::String& value) { m_cloudWatchLogGroupArn = value; }

    /**
     * <p>The ARN of the Amazon CloudWatch log group that's used to monitor and log
     * discovery job events.</p>
     */
    inline void SetCloudWatchLogGroupArn(Aws::String&& value) { m_cloudWatchLogGroupArn = std::move(value); }

    /**
     * <p>The ARN of the Amazon CloudWatch log group that's used to monitor and log
     * discovery job events.</p>
     */
    inline void SetCloudWatchLogGroupArn(const char* value) { m_cloudWatchLogGroupArn.assign(value); }

    /**
     * <p>The ARN of the Amazon CloudWatch log group that's used to monitor and log
     * discovery job events.</p>
     */
    inline DescribeStorageSystemResult& WithCloudWatchLogGroupArn(const Aws::String& value) { SetCloudWatchLogGroupArn(value); return *this;}

    /**
     * <p>The ARN of the Amazon CloudWatch log group that's used to monitor and log
     * discovery job events.</p>
     */
    inline DescribeStorageSystemResult& WithCloudWatchLogGroupArn(Aws::String&& value) { SetCloudWatchLogGroupArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the Amazon CloudWatch log group that's used to monitor and log
     * discovery job events.</p>
     */
    inline DescribeStorageSystemResult& WithCloudWatchLogGroupArn(const char* value) { SetCloudWatchLogGroupArn(value); return *this;}


    /**
     * <p>The time when you added the on-premises storage system to DataSync
     * Discovery.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const{ return m_creationTime; }

    /**
     * <p>The time when you added the on-premises storage system to DataSync
     * Discovery.</p>
     */
    inline void SetCreationTime(const Aws::Utils::DateTime& value) { m_creationTime = value; }

    /**
     * <p>The time when you added the on-premises storage system to DataSync
     * Discovery.</p>
     */
    inline void SetCreationTime(Aws::Utils::DateTime&& value) { m_creationTime = std::move(value); }

    /**
     * <p>The time when you added the on-premises storage system to DataSync
     * Discovery.</p>
     */
    inline DescribeStorageSystemResult& WithCreationTime(const Aws::Utils::DateTime& value) { SetCreationTime(value); return *this;}

    /**
     * <p>The time when you added the on-premises storage system to DataSync
     * Discovery.</p>
     */
    inline DescribeStorageSystemResult& WithCreationTime(Aws::Utils::DateTime&& value) { SetCreationTime(std::move(value)); return *this;}


    /**
     * <p>The ARN of the secret that stores your on-premises storage system's
     * credentials. DataSync Discovery stores these credentials in <a
     * href="https://docs.aws.amazon.com/datasync/latest/userguide/discovery-configure-storage.html#discovery-add-storage">Secrets
     * Manager</a>.</p>
     */
    inline const Aws::String& GetSecretsManagerArn() const{ return m_secretsManagerArn; }

    /**
     * <p>The ARN of the secret that stores your on-premises storage system's
     * credentials. DataSync Discovery stores these credentials in <a
     * href="https://docs.aws.amazon.com/datasync/latest/userguide/discovery-configure-storage.html#discovery-add-storage">Secrets
     * Manager</a>.</p>
     */
    inline void SetSecretsManagerArn(const Aws::String& value) { m_secretsManagerArn = value; }

    /**
     * <p>The ARN of the secret that stores your on-premises storage system's
     * credentials. DataSync Discovery stores these credentials in <a
     * href="https://docs.aws.amazon.com/datasync/latest/userguide/discovery-configure-storage.html#discovery-add-storage">Secrets
     * Manager</a>.</p>
     */
    inline void SetSecretsManagerArn(Aws::String&& value) { m_secretsManagerArn = std::move(value); }

    /**
     * <p>The ARN of the secret that stores your on-premises storage system's
     * credentials. DataSync Discovery stores these credentials in <a
     * href="https://docs.aws.amazon.com/datasync/latest/userguide/discovery-configure-storage.html#discovery-add-storage">Secrets
     * Manager</a>.</p>
     */
    inline void SetSecretsManagerArn(const char* value) { m_secretsManagerArn.assign(value); }

    /**
     * <p>The ARN of the secret that stores your on-premises storage system's
     * credentials. DataSync Discovery stores these credentials in <a
     * href="https://docs.aws.amazon.com/datasync/latest/userguide/discovery-configure-storage.html#discovery-add-storage">Secrets
     * Manager</a>.</p>
     */
    inline DescribeStorageSystemResult& WithSecretsManagerArn(const Aws::String& value) { SetSecretsManagerArn(value); return *this;}

    /**
     * <p>The ARN of the secret that stores your on-premises storage system's
     * credentials. DataSync Discovery stores these credentials in <a
     * href="https://docs.aws.amazon.com/datasync/latest/userguide/discovery-configure-storage.html#discovery-add-storage">Secrets
     * Manager</a>.</p>
     */
    inline DescribeStorageSystemResult& WithSecretsManagerArn(Aws::String&& value) { SetSecretsManagerArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the secret that stores your on-premises storage system's
     * credentials. DataSync Discovery stores these credentials in <a
     * href="https://docs.aws.amazon.com/datasync/latest/userguide/discovery-configure-storage.html#discovery-add-storage">Secrets
     * Manager</a>.</p>
     */
    inline DescribeStorageSystemResult& WithSecretsManagerArn(const char* value) { SetSecretsManagerArn(value); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline DescribeStorageSystemResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline DescribeStorageSystemResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline DescribeStorageSystemResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::String m_storageSystemArn;

    DiscoveryServerConfiguration m_serverConfiguration;

    DiscoverySystemType m_systemType;

    Aws::Vector<Aws::String> m_agentArns;

    Aws::String m_name;

    Aws::String m_errorMessage;

    StorageSystemConnectivityStatus m_connectivityStatus;

    Aws::String m_cloudWatchLogGroupArn;

    Aws::Utils::DateTime m_creationTime;

    Aws::String m_secretsManagerArn;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace DataSync
} // namespace Aws
