/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/managedblockchain/ManagedBlockchain_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/managedblockchain/model/NodeLogPublishingConfiguration.h>
#include <aws/managedblockchain/model/StateDBType.h>
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
namespace ManagedBlockchain
{
namespace Model
{

  /**
   * <p>Configuration properties of a node.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/managedblockchain-2018-09-24/NodeConfiguration">AWS
   * API Reference</a></p>
   */
  class AWS_MANAGEDBLOCKCHAIN_API NodeConfiguration
  {
  public:
    NodeConfiguration();
    NodeConfiguration(Aws::Utils::Json::JsonView jsonValue);
    NodeConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The Amazon Managed Blockchain instance type for the node.</p>
     */
    inline const Aws::String& GetInstanceType() const{ return m_instanceType; }

    /**
     * <p>The Amazon Managed Blockchain instance type for the node.</p>
     */
    inline bool InstanceTypeHasBeenSet() const { return m_instanceTypeHasBeenSet; }

    /**
     * <p>The Amazon Managed Blockchain instance type for the node.</p>
     */
    inline void SetInstanceType(const Aws::String& value) { m_instanceTypeHasBeenSet = true; m_instanceType = value; }

    /**
     * <p>The Amazon Managed Blockchain instance type for the node.</p>
     */
    inline void SetInstanceType(Aws::String&& value) { m_instanceTypeHasBeenSet = true; m_instanceType = std::move(value); }

    /**
     * <p>The Amazon Managed Blockchain instance type for the node.</p>
     */
    inline void SetInstanceType(const char* value) { m_instanceTypeHasBeenSet = true; m_instanceType.assign(value); }

    /**
     * <p>The Amazon Managed Blockchain instance type for the node.</p>
     */
    inline NodeConfiguration& WithInstanceType(const Aws::String& value) { SetInstanceType(value); return *this;}

    /**
     * <p>The Amazon Managed Blockchain instance type for the node.</p>
     */
    inline NodeConfiguration& WithInstanceType(Aws::String&& value) { SetInstanceType(std::move(value)); return *this;}

    /**
     * <p>The Amazon Managed Blockchain instance type for the node.</p>
     */
    inline NodeConfiguration& WithInstanceType(const char* value) { SetInstanceType(value); return *this;}


    /**
     * <p>The Availability Zone in which the node exists. Required for Ethereum nodes.
     * </p>
     */
    inline const Aws::String& GetAvailabilityZone() const{ return m_availabilityZone; }

    /**
     * <p>The Availability Zone in which the node exists. Required for Ethereum nodes.
     * </p>
     */
    inline bool AvailabilityZoneHasBeenSet() const { return m_availabilityZoneHasBeenSet; }

    /**
     * <p>The Availability Zone in which the node exists. Required for Ethereum nodes.
     * </p>
     */
    inline void SetAvailabilityZone(const Aws::String& value) { m_availabilityZoneHasBeenSet = true; m_availabilityZone = value; }

    /**
     * <p>The Availability Zone in which the node exists. Required for Ethereum nodes.
     * </p>
     */
    inline void SetAvailabilityZone(Aws::String&& value) { m_availabilityZoneHasBeenSet = true; m_availabilityZone = std::move(value); }

    /**
     * <p>The Availability Zone in which the node exists. Required for Ethereum nodes.
     * </p>
     */
    inline void SetAvailabilityZone(const char* value) { m_availabilityZoneHasBeenSet = true; m_availabilityZone.assign(value); }

    /**
     * <p>The Availability Zone in which the node exists. Required for Ethereum nodes.
     * </p>
     */
    inline NodeConfiguration& WithAvailabilityZone(const Aws::String& value) { SetAvailabilityZone(value); return *this;}

    /**
     * <p>The Availability Zone in which the node exists. Required for Ethereum nodes.
     * </p>
     */
    inline NodeConfiguration& WithAvailabilityZone(Aws::String&& value) { SetAvailabilityZone(std::move(value)); return *this;}

    /**
     * <p>The Availability Zone in which the node exists. Required for Ethereum nodes.
     * </p>
     */
    inline NodeConfiguration& WithAvailabilityZone(const char* value) { SetAvailabilityZone(value); return *this;}


    /**
     * <p>Configuration properties for logging events associated with a peer node on a
     * Hyperledger Fabric network on Managed Blockchain. </p>
     */
    inline const NodeLogPublishingConfiguration& GetLogPublishingConfiguration() const{ return m_logPublishingConfiguration; }

    /**
     * <p>Configuration properties for logging events associated with a peer node on a
     * Hyperledger Fabric network on Managed Blockchain. </p>
     */
    inline bool LogPublishingConfigurationHasBeenSet() const { return m_logPublishingConfigurationHasBeenSet; }

    /**
     * <p>Configuration properties for logging events associated with a peer node on a
     * Hyperledger Fabric network on Managed Blockchain. </p>
     */
    inline void SetLogPublishingConfiguration(const NodeLogPublishingConfiguration& value) { m_logPublishingConfigurationHasBeenSet = true; m_logPublishingConfiguration = value; }

    /**
     * <p>Configuration properties for logging events associated with a peer node on a
     * Hyperledger Fabric network on Managed Blockchain. </p>
     */
    inline void SetLogPublishingConfiguration(NodeLogPublishingConfiguration&& value) { m_logPublishingConfigurationHasBeenSet = true; m_logPublishingConfiguration = std::move(value); }

    /**
     * <p>Configuration properties for logging events associated with a peer node on a
     * Hyperledger Fabric network on Managed Blockchain. </p>
     */
    inline NodeConfiguration& WithLogPublishingConfiguration(const NodeLogPublishingConfiguration& value) { SetLogPublishingConfiguration(value); return *this;}

    /**
     * <p>Configuration properties for logging events associated with a peer node on a
     * Hyperledger Fabric network on Managed Blockchain. </p>
     */
    inline NodeConfiguration& WithLogPublishingConfiguration(NodeLogPublishingConfiguration&& value) { SetLogPublishingConfiguration(std::move(value)); return *this;}


    /**
     * <p>The state database that the node uses. Values are <code>LevelDB</code> or
     * <code>CouchDB</code>. When using an Amazon Managed Blockchain network with
     * Hyperledger Fabric version 1.4 or later, the default is
     * <code>CouchDB</code>.</p> <p>Applies only to Hyperledger Fabric.</p>
     */
    inline const StateDBType& GetStateDB() const{ return m_stateDB; }

    /**
     * <p>The state database that the node uses. Values are <code>LevelDB</code> or
     * <code>CouchDB</code>. When using an Amazon Managed Blockchain network with
     * Hyperledger Fabric version 1.4 or later, the default is
     * <code>CouchDB</code>.</p> <p>Applies only to Hyperledger Fabric.</p>
     */
    inline bool StateDBHasBeenSet() const { return m_stateDBHasBeenSet; }

    /**
     * <p>The state database that the node uses. Values are <code>LevelDB</code> or
     * <code>CouchDB</code>. When using an Amazon Managed Blockchain network with
     * Hyperledger Fabric version 1.4 or later, the default is
     * <code>CouchDB</code>.</p> <p>Applies only to Hyperledger Fabric.</p>
     */
    inline void SetStateDB(const StateDBType& value) { m_stateDBHasBeenSet = true; m_stateDB = value; }

    /**
     * <p>The state database that the node uses. Values are <code>LevelDB</code> or
     * <code>CouchDB</code>. When using an Amazon Managed Blockchain network with
     * Hyperledger Fabric version 1.4 or later, the default is
     * <code>CouchDB</code>.</p> <p>Applies only to Hyperledger Fabric.</p>
     */
    inline void SetStateDB(StateDBType&& value) { m_stateDBHasBeenSet = true; m_stateDB = std::move(value); }

    /**
     * <p>The state database that the node uses. Values are <code>LevelDB</code> or
     * <code>CouchDB</code>. When using an Amazon Managed Blockchain network with
     * Hyperledger Fabric version 1.4 or later, the default is
     * <code>CouchDB</code>.</p> <p>Applies only to Hyperledger Fabric.</p>
     */
    inline NodeConfiguration& WithStateDB(const StateDBType& value) { SetStateDB(value); return *this;}

    /**
     * <p>The state database that the node uses. Values are <code>LevelDB</code> or
     * <code>CouchDB</code>. When using an Amazon Managed Blockchain network with
     * Hyperledger Fabric version 1.4 or later, the default is
     * <code>CouchDB</code>.</p> <p>Applies only to Hyperledger Fabric.</p>
     */
    inline NodeConfiguration& WithStateDB(StateDBType&& value) { SetStateDB(std::move(value)); return *this;}

  private:

    Aws::String m_instanceType;
    bool m_instanceTypeHasBeenSet;

    Aws::String m_availabilityZone;
    bool m_availabilityZoneHasBeenSet;

    NodeLogPublishingConfiguration m_logPublishingConfiguration;
    bool m_logPublishingConfigurationHasBeenSet;

    StateDBType m_stateDB;
    bool m_stateDBHasBeenSet;
  };

} // namespace Model
} // namespace ManagedBlockchain
} // namespace Aws
