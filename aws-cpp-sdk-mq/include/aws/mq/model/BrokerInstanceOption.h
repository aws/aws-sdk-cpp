/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mq/MQ_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/mq/model/EngineType.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/mq/model/BrokerStorageType.h>
#include <aws/mq/model/AvailabilityZone.h>
#include <aws/mq/model/DeploymentMode.h>
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
namespace MQ
{
namespace Model
{

  /**
   * Option for host instance type.<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mq-2017-11-27/BrokerInstanceOption">AWS
   * API Reference</a></p>
   */
  class AWS_MQ_API BrokerInstanceOption
  {
  public:
    BrokerInstanceOption();
    BrokerInstanceOption(Aws::Utils::Json::JsonView jsonValue);
    BrokerInstanceOption& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * The list of available az.
     */
    inline const Aws::Vector<AvailabilityZone>& GetAvailabilityZones() const{ return m_availabilityZones; }

    /**
     * The list of available az.
     */
    inline bool AvailabilityZonesHasBeenSet() const { return m_availabilityZonesHasBeenSet; }

    /**
     * The list of available az.
     */
    inline void SetAvailabilityZones(const Aws::Vector<AvailabilityZone>& value) { m_availabilityZonesHasBeenSet = true; m_availabilityZones = value; }

    /**
     * The list of available az.
     */
    inline void SetAvailabilityZones(Aws::Vector<AvailabilityZone>&& value) { m_availabilityZonesHasBeenSet = true; m_availabilityZones = std::move(value); }

    /**
     * The list of available az.
     */
    inline BrokerInstanceOption& WithAvailabilityZones(const Aws::Vector<AvailabilityZone>& value) { SetAvailabilityZones(value); return *this;}

    /**
     * The list of available az.
     */
    inline BrokerInstanceOption& WithAvailabilityZones(Aws::Vector<AvailabilityZone>&& value) { SetAvailabilityZones(std::move(value)); return *this;}

    /**
     * The list of available az.
     */
    inline BrokerInstanceOption& AddAvailabilityZones(const AvailabilityZone& value) { m_availabilityZonesHasBeenSet = true; m_availabilityZones.push_back(value); return *this; }

    /**
     * The list of available az.
     */
    inline BrokerInstanceOption& AddAvailabilityZones(AvailabilityZone&& value) { m_availabilityZonesHasBeenSet = true; m_availabilityZones.push_back(std::move(value)); return *this; }


    /**
     * The type of broker engine.
     */
    inline const EngineType& GetEngineType() const{ return m_engineType; }

    /**
     * The type of broker engine.
     */
    inline bool EngineTypeHasBeenSet() const { return m_engineTypeHasBeenSet; }

    /**
     * The type of broker engine.
     */
    inline void SetEngineType(const EngineType& value) { m_engineTypeHasBeenSet = true; m_engineType = value; }

    /**
     * The type of broker engine.
     */
    inline void SetEngineType(EngineType&& value) { m_engineTypeHasBeenSet = true; m_engineType = std::move(value); }

    /**
     * The type of broker engine.
     */
    inline BrokerInstanceOption& WithEngineType(const EngineType& value) { SetEngineType(value); return *this;}

    /**
     * The type of broker engine.
     */
    inline BrokerInstanceOption& WithEngineType(EngineType&& value) { SetEngineType(std::move(value)); return *this;}


    /**
     * The type of broker instance.
     */
    inline const Aws::String& GetHostInstanceType() const{ return m_hostInstanceType; }

    /**
     * The type of broker instance.
     */
    inline bool HostInstanceTypeHasBeenSet() const { return m_hostInstanceTypeHasBeenSet; }

    /**
     * The type of broker instance.
     */
    inline void SetHostInstanceType(const Aws::String& value) { m_hostInstanceTypeHasBeenSet = true; m_hostInstanceType = value; }

    /**
     * The type of broker instance.
     */
    inline void SetHostInstanceType(Aws::String&& value) { m_hostInstanceTypeHasBeenSet = true; m_hostInstanceType = std::move(value); }

    /**
     * The type of broker instance.
     */
    inline void SetHostInstanceType(const char* value) { m_hostInstanceTypeHasBeenSet = true; m_hostInstanceType.assign(value); }

    /**
     * The type of broker instance.
     */
    inline BrokerInstanceOption& WithHostInstanceType(const Aws::String& value) { SetHostInstanceType(value); return *this;}

    /**
     * The type of broker instance.
     */
    inline BrokerInstanceOption& WithHostInstanceType(Aws::String&& value) { SetHostInstanceType(std::move(value)); return *this;}

    /**
     * The type of broker instance.
     */
    inline BrokerInstanceOption& WithHostInstanceType(const char* value) { SetHostInstanceType(value); return *this;}


    /**
     * The broker's storage type.
     */
    inline const BrokerStorageType& GetStorageType() const{ return m_storageType; }

    /**
     * The broker's storage type.
     */
    inline bool StorageTypeHasBeenSet() const { return m_storageTypeHasBeenSet; }

    /**
     * The broker's storage type.
     */
    inline void SetStorageType(const BrokerStorageType& value) { m_storageTypeHasBeenSet = true; m_storageType = value; }

    /**
     * The broker's storage type.
     */
    inline void SetStorageType(BrokerStorageType&& value) { m_storageTypeHasBeenSet = true; m_storageType = std::move(value); }

    /**
     * The broker's storage type.
     */
    inline BrokerInstanceOption& WithStorageType(const BrokerStorageType& value) { SetStorageType(value); return *this;}

    /**
     * The broker's storage type.
     */
    inline BrokerInstanceOption& WithStorageType(BrokerStorageType&& value) { SetStorageType(std::move(value)); return *this;}


    /**
     * The list of supported deployment modes.
     */
    inline const Aws::Vector<DeploymentMode>& GetSupportedDeploymentModes() const{ return m_supportedDeploymentModes; }

    /**
     * The list of supported deployment modes.
     */
    inline bool SupportedDeploymentModesHasBeenSet() const { return m_supportedDeploymentModesHasBeenSet; }

    /**
     * The list of supported deployment modes.
     */
    inline void SetSupportedDeploymentModes(const Aws::Vector<DeploymentMode>& value) { m_supportedDeploymentModesHasBeenSet = true; m_supportedDeploymentModes = value; }

    /**
     * The list of supported deployment modes.
     */
    inline void SetSupportedDeploymentModes(Aws::Vector<DeploymentMode>&& value) { m_supportedDeploymentModesHasBeenSet = true; m_supportedDeploymentModes = std::move(value); }

    /**
     * The list of supported deployment modes.
     */
    inline BrokerInstanceOption& WithSupportedDeploymentModes(const Aws::Vector<DeploymentMode>& value) { SetSupportedDeploymentModes(value); return *this;}

    /**
     * The list of supported deployment modes.
     */
    inline BrokerInstanceOption& WithSupportedDeploymentModes(Aws::Vector<DeploymentMode>&& value) { SetSupportedDeploymentModes(std::move(value)); return *this;}

    /**
     * The list of supported deployment modes.
     */
    inline BrokerInstanceOption& AddSupportedDeploymentModes(const DeploymentMode& value) { m_supportedDeploymentModesHasBeenSet = true; m_supportedDeploymentModes.push_back(value); return *this; }

    /**
     * The list of supported deployment modes.
     */
    inline BrokerInstanceOption& AddSupportedDeploymentModes(DeploymentMode&& value) { m_supportedDeploymentModesHasBeenSet = true; m_supportedDeploymentModes.push_back(std::move(value)); return *this; }


    /**
     * The list of supported engine versions.
     */
    inline const Aws::Vector<Aws::String>& GetSupportedEngineVersions() const{ return m_supportedEngineVersions; }

    /**
     * The list of supported engine versions.
     */
    inline bool SupportedEngineVersionsHasBeenSet() const { return m_supportedEngineVersionsHasBeenSet; }

    /**
     * The list of supported engine versions.
     */
    inline void SetSupportedEngineVersions(const Aws::Vector<Aws::String>& value) { m_supportedEngineVersionsHasBeenSet = true; m_supportedEngineVersions = value; }

    /**
     * The list of supported engine versions.
     */
    inline void SetSupportedEngineVersions(Aws::Vector<Aws::String>&& value) { m_supportedEngineVersionsHasBeenSet = true; m_supportedEngineVersions = std::move(value); }

    /**
     * The list of supported engine versions.
     */
    inline BrokerInstanceOption& WithSupportedEngineVersions(const Aws::Vector<Aws::String>& value) { SetSupportedEngineVersions(value); return *this;}

    /**
     * The list of supported engine versions.
     */
    inline BrokerInstanceOption& WithSupportedEngineVersions(Aws::Vector<Aws::String>&& value) { SetSupportedEngineVersions(std::move(value)); return *this;}

    /**
     * The list of supported engine versions.
     */
    inline BrokerInstanceOption& AddSupportedEngineVersions(const Aws::String& value) { m_supportedEngineVersionsHasBeenSet = true; m_supportedEngineVersions.push_back(value); return *this; }

    /**
     * The list of supported engine versions.
     */
    inline BrokerInstanceOption& AddSupportedEngineVersions(Aws::String&& value) { m_supportedEngineVersionsHasBeenSet = true; m_supportedEngineVersions.push_back(std::move(value)); return *this; }

    /**
     * The list of supported engine versions.
     */
    inline BrokerInstanceOption& AddSupportedEngineVersions(const char* value) { m_supportedEngineVersionsHasBeenSet = true; m_supportedEngineVersions.push_back(value); return *this; }

  private:

    Aws::Vector<AvailabilityZone> m_availabilityZones;
    bool m_availabilityZonesHasBeenSet;

    EngineType m_engineType;
    bool m_engineTypeHasBeenSet;

    Aws::String m_hostInstanceType;
    bool m_hostInstanceTypeHasBeenSet;

    BrokerStorageType m_storageType;
    bool m_storageTypeHasBeenSet;

    Aws::Vector<DeploymentMode> m_supportedDeploymentModes;
    bool m_supportedDeploymentModesHasBeenSet;

    Aws::Vector<Aws::String> m_supportedEngineVersions;
    bool m_supportedEngineVersionsHasBeenSet;
  };

} // namespace Model
} // namespace MQ
} // namespace Aws
