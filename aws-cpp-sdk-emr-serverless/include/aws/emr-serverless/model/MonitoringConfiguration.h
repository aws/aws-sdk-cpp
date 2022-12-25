/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/emr-serverless/EMRServerless_EXPORTS.h>
#include <aws/emr-serverless/model/S3MonitoringConfiguration.h>
#include <aws/emr-serverless/model/ManagedPersistenceMonitoringConfiguration.h>
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
namespace EMRServerless
{
namespace Model
{

  /**
   * <p>The configuration setting for monitoring.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/emr-serverless-2021-07-13/MonitoringConfiguration">AWS
   * API Reference</a></p>
   */
  class MonitoringConfiguration
  {
  public:
    AWS_EMRSERVERLESS_API MonitoringConfiguration();
    AWS_EMRSERVERLESS_API MonitoringConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_EMRSERVERLESS_API MonitoringConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_EMRSERVERLESS_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The Amazon S3 configuration for monitoring log publishing.</p>
     */
    inline const S3MonitoringConfiguration& GetS3MonitoringConfiguration() const{ return m_s3MonitoringConfiguration; }

    /**
     * <p>The Amazon S3 configuration for monitoring log publishing.</p>
     */
    inline bool S3MonitoringConfigurationHasBeenSet() const { return m_s3MonitoringConfigurationHasBeenSet; }

    /**
     * <p>The Amazon S3 configuration for monitoring log publishing.</p>
     */
    inline void SetS3MonitoringConfiguration(const S3MonitoringConfiguration& value) { m_s3MonitoringConfigurationHasBeenSet = true; m_s3MonitoringConfiguration = value; }

    /**
     * <p>The Amazon S3 configuration for monitoring log publishing.</p>
     */
    inline void SetS3MonitoringConfiguration(S3MonitoringConfiguration&& value) { m_s3MonitoringConfigurationHasBeenSet = true; m_s3MonitoringConfiguration = std::move(value); }

    /**
     * <p>The Amazon S3 configuration for monitoring log publishing.</p>
     */
    inline MonitoringConfiguration& WithS3MonitoringConfiguration(const S3MonitoringConfiguration& value) { SetS3MonitoringConfiguration(value); return *this;}

    /**
     * <p>The Amazon S3 configuration for monitoring log publishing.</p>
     */
    inline MonitoringConfiguration& WithS3MonitoringConfiguration(S3MonitoringConfiguration&& value) { SetS3MonitoringConfiguration(std::move(value)); return *this;}


    /**
     * <p>The managed log persistence configuration for a job run.</p>
     */
    inline const ManagedPersistenceMonitoringConfiguration& GetManagedPersistenceMonitoringConfiguration() const{ return m_managedPersistenceMonitoringConfiguration; }

    /**
     * <p>The managed log persistence configuration for a job run.</p>
     */
    inline bool ManagedPersistenceMonitoringConfigurationHasBeenSet() const { return m_managedPersistenceMonitoringConfigurationHasBeenSet; }

    /**
     * <p>The managed log persistence configuration for a job run.</p>
     */
    inline void SetManagedPersistenceMonitoringConfiguration(const ManagedPersistenceMonitoringConfiguration& value) { m_managedPersistenceMonitoringConfigurationHasBeenSet = true; m_managedPersistenceMonitoringConfiguration = value; }

    /**
     * <p>The managed log persistence configuration for a job run.</p>
     */
    inline void SetManagedPersistenceMonitoringConfiguration(ManagedPersistenceMonitoringConfiguration&& value) { m_managedPersistenceMonitoringConfigurationHasBeenSet = true; m_managedPersistenceMonitoringConfiguration = std::move(value); }

    /**
     * <p>The managed log persistence configuration for a job run.</p>
     */
    inline MonitoringConfiguration& WithManagedPersistenceMonitoringConfiguration(const ManagedPersistenceMonitoringConfiguration& value) { SetManagedPersistenceMonitoringConfiguration(value); return *this;}

    /**
     * <p>The managed log persistence configuration for a job run.</p>
     */
    inline MonitoringConfiguration& WithManagedPersistenceMonitoringConfiguration(ManagedPersistenceMonitoringConfiguration&& value) { SetManagedPersistenceMonitoringConfiguration(std::move(value)); return *this;}

  private:

    S3MonitoringConfiguration m_s3MonitoringConfiguration;
    bool m_s3MonitoringConfigurationHasBeenSet = false;

    ManagedPersistenceMonitoringConfiguration m_managedPersistenceMonitoringConfiguration;
    bool m_managedPersistenceMonitoringConfigurationHasBeenSet = false;
  };

} // namespace Model
} // namespace EMRServerless
} // namespace Aws
