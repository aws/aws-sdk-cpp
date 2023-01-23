/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/dms/DatabaseMigrationService_EXPORTS.h>
#include <aws/dms/model/CollectorStatus.h>
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
namespace DatabaseMigrationService
{
namespace Model
{

  /**
   * <p>Describes the last Fleet Advisor collector health check.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/dms-2016-01-01/CollectorHealthCheck">AWS
   * API Reference</a></p>
   */
  class CollectorHealthCheck
  {
  public:
    AWS_DATABASEMIGRATIONSERVICE_API CollectorHealthCheck();
    AWS_DATABASEMIGRATIONSERVICE_API CollectorHealthCheck(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATABASEMIGRATIONSERVICE_API CollectorHealthCheck& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATABASEMIGRATIONSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The status of the Fleet Advisor collector.</p>
     */
    inline const CollectorStatus& GetCollectorStatus() const{ return m_collectorStatus; }

    /**
     * <p>The status of the Fleet Advisor collector.</p>
     */
    inline bool CollectorStatusHasBeenSet() const { return m_collectorStatusHasBeenSet; }

    /**
     * <p>The status of the Fleet Advisor collector.</p>
     */
    inline void SetCollectorStatus(const CollectorStatus& value) { m_collectorStatusHasBeenSet = true; m_collectorStatus = value; }

    /**
     * <p>The status of the Fleet Advisor collector.</p>
     */
    inline void SetCollectorStatus(CollectorStatus&& value) { m_collectorStatusHasBeenSet = true; m_collectorStatus = std::move(value); }

    /**
     * <p>The status of the Fleet Advisor collector.</p>
     */
    inline CollectorHealthCheck& WithCollectorStatus(const CollectorStatus& value) { SetCollectorStatus(value); return *this;}

    /**
     * <p>The status of the Fleet Advisor collector.</p>
     */
    inline CollectorHealthCheck& WithCollectorStatus(CollectorStatus&& value) { SetCollectorStatus(std::move(value)); return *this;}


    /**
     * <p>Whether the local collector can access its Amazon S3 bucket.</p>
     */
    inline bool GetLocalCollectorS3Access() const{ return m_localCollectorS3Access; }

    /**
     * <p>Whether the local collector can access its Amazon S3 bucket.</p>
     */
    inline bool LocalCollectorS3AccessHasBeenSet() const { return m_localCollectorS3AccessHasBeenSet; }

    /**
     * <p>Whether the local collector can access its Amazon S3 bucket.</p>
     */
    inline void SetLocalCollectorS3Access(bool value) { m_localCollectorS3AccessHasBeenSet = true; m_localCollectorS3Access = value; }

    /**
     * <p>Whether the local collector can access its Amazon S3 bucket.</p>
     */
    inline CollectorHealthCheck& WithLocalCollectorS3Access(bool value) { SetLocalCollectorS3Access(value); return *this;}


    /**
     * <p>Whether the web collector can access its Amazon S3 bucket.</p>
     */
    inline bool GetWebCollectorS3Access() const{ return m_webCollectorS3Access; }

    /**
     * <p>Whether the web collector can access its Amazon S3 bucket.</p>
     */
    inline bool WebCollectorS3AccessHasBeenSet() const { return m_webCollectorS3AccessHasBeenSet; }

    /**
     * <p>Whether the web collector can access its Amazon S3 bucket.</p>
     */
    inline void SetWebCollectorS3Access(bool value) { m_webCollectorS3AccessHasBeenSet = true; m_webCollectorS3Access = value; }

    /**
     * <p>Whether the web collector can access its Amazon S3 bucket.</p>
     */
    inline CollectorHealthCheck& WithWebCollectorS3Access(bool value) { SetWebCollectorS3Access(value); return *this;}


    /**
     * <p>Whether the role that you provided when creating the Fleet Advisor collector
     * has sufficient permissions to access the Fleet Advisor web collector.</p>
     */
    inline bool GetWebCollectorGrantedRoleBasedAccess() const{ return m_webCollectorGrantedRoleBasedAccess; }

    /**
     * <p>Whether the role that you provided when creating the Fleet Advisor collector
     * has sufficient permissions to access the Fleet Advisor web collector.</p>
     */
    inline bool WebCollectorGrantedRoleBasedAccessHasBeenSet() const { return m_webCollectorGrantedRoleBasedAccessHasBeenSet; }

    /**
     * <p>Whether the role that you provided when creating the Fleet Advisor collector
     * has sufficient permissions to access the Fleet Advisor web collector.</p>
     */
    inline void SetWebCollectorGrantedRoleBasedAccess(bool value) { m_webCollectorGrantedRoleBasedAccessHasBeenSet = true; m_webCollectorGrantedRoleBasedAccess = value; }

    /**
     * <p>Whether the role that you provided when creating the Fleet Advisor collector
     * has sufficient permissions to access the Fleet Advisor web collector.</p>
     */
    inline CollectorHealthCheck& WithWebCollectorGrantedRoleBasedAccess(bool value) { SetWebCollectorGrantedRoleBasedAccess(value); return *this;}

  private:

    CollectorStatus m_collectorStatus;
    bool m_collectorStatusHasBeenSet = false;

    bool m_localCollectorS3Access;
    bool m_localCollectorS3AccessHasBeenSet = false;

    bool m_webCollectorS3Access;
    bool m_webCollectorS3AccessHasBeenSet = false;

    bool m_webCollectorGrantedRoleBasedAccess;
    bool m_webCollectorGrantedRoleBasedAccessHasBeenSet = false;
  };

} // namespace Model
} // namespace DatabaseMigrationService
} // namespace Aws
