/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ecr/ECR_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ecr/model/ReplicationStatus.h>
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
namespace ECR
{
namespace Model
{

  /**
   * <p>The status of the replication process for an image.</p><p><h3>See Also:</h3> 
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ecr-2015-09-21/ImageReplicationStatus">AWS
   * API Reference</a></p>
   */
  class ImageReplicationStatus
  {
  public:
    AWS_ECR_API ImageReplicationStatus();
    AWS_ECR_API ImageReplicationStatus(Aws::Utils::Json::JsonView jsonValue);
    AWS_ECR_API ImageReplicationStatus& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_ECR_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The destination Region for the image replication.</p>
     */
    inline const Aws::String& GetRegion() const{ return m_region; }

    /**
     * <p>The destination Region for the image replication.</p>
     */
    inline bool RegionHasBeenSet() const { return m_regionHasBeenSet; }

    /**
     * <p>The destination Region for the image replication.</p>
     */
    inline void SetRegion(const Aws::String& value) { m_regionHasBeenSet = true; m_region = value; }

    /**
     * <p>The destination Region for the image replication.</p>
     */
    inline void SetRegion(Aws::String&& value) { m_regionHasBeenSet = true; m_region = std::move(value); }

    /**
     * <p>The destination Region for the image replication.</p>
     */
    inline void SetRegion(const char* value) { m_regionHasBeenSet = true; m_region.assign(value); }

    /**
     * <p>The destination Region for the image replication.</p>
     */
    inline ImageReplicationStatus& WithRegion(const Aws::String& value) { SetRegion(value); return *this;}

    /**
     * <p>The destination Region for the image replication.</p>
     */
    inline ImageReplicationStatus& WithRegion(Aws::String&& value) { SetRegion(std::move(value)); return *this;}

    /**
     * <p>The destination Region for the image replication.</p>
     */
    inline ImageReplicationStatus& WithRegion(const char* value) { SetRegion(value); return *this;}


    /**
     * <p>The Amazon Web Services account ID associated with the registry to which the
     * image belongs.</p>
     */
    inline const Aws::String& GetRegistryId() const{ return m_registryId; }

    /**
     * <p>The Amazon Web Services account ID associated with the registry to which the
     * image belongs.</p>
     */
    inline bool RegistryIdHasBeenSet() const { return m_registryIdHasBeenSet; }

    /**
     * <p>The Amazon Web Services account ID associated with the registry to which the
     * image belongs.</p>
     */
    inline void SetRegistryId(const Aws::String& value) { m_registryIdHasBeenSet = true; m_registryId = value; }

    /**
     * <p>The Amazon Web Services account ID associated with the registry to which the
     * image belongs.</p>
     */
    inline void SetRegistryId(Aws::String&& value) { m_registryIdHasBeenSet = true; m_registryId = std::move(value); }

    /**
     * <p>The Amazon Web Services account ID associated with the registry to which the
     * image belongs.</p>
     */
    inline void SetRegistryId(const char* value) { m_registryIdHasBeenSet = true; m_registryId.assign(value); }

    /**
     * <p>The Amazon Web Services account ID associated with the registry to which the
     * image belongs.</p>
     */
    inline ImageReplicationStatus& WithRegistryId(const Aws::String& value) { SetRegistryId(value); return *this;}

    /**
     * <p>The Amazon Web Services account ID associated with the registry to which the
     * image belongs.</p>
     */
    inline ImageReplicationStatus& WithRegistryId(Aws::String&& value) { SetRegistryId(std::move(value)); return *this;}

    /**
     * <p>The Amazon Web Services account ID associated with the registry to which the
     * image belongs.</p>
     */
    inline ImageReplicationStatus& WithRegistryId(const char* value) { SetRegistryId(value); return *this;}


    /**
     * <p>The image replication status.</p>
     */
    inline const ReplicationStatus& GetStatus() const{ return m_status; }

    /**
     * <p>The image replication status.</p>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p>The image replication status.</p>
     */
    inline void SetStatus(const ReplicationStatus& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>The image replication status.</p>
     */
    inline void SetStatus(ReplicationStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p>The image replication status.</p>
     */
    inline ImageReplicationStatus& WithStatus(const ReplicationStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>The image replication status.</p>
     */
    inline ImageReplicationStatus& WithStatus(ReplicationStatus&& value) { SetStatus(std::move(value)); return *this;}


    /**
     * <p>The failure code for a replication that has failed.</p>
     */
    inline const Aws::String& GetFailureCode() const{ return m_failureCode; }

    /**
     * <p>The failure code for a replication that has failed.</p>
     */
    inline bool FailureCodeHasBeenSet() const { return m_failureCodeHasBeenSet; }

    /**
     * <p>The failure code for a replication that has failed.</p>
     */
    inline void SetFailureCode(const Aws::String& value) { m_failureCodeHasBeenSet = true; m_failureCode = value; }

    /**
     * <p>The failure code for a replication that has failed.</p>
     */
    inline void SetFailureCode(Aws::String&& value) { m_failureCodeHasBeenSet = true; m_failureCode = std::move(value); }

    /**
     * <p>The failure code for a replication that has failed.</p>
     */
    inline void SetFailureCode(const char* value) { m_failureCodeHasBeenSet = true; m_failureCode.assign(value); }

    /**
     * <p>The failure code for a replication that has failed.</p>
     */
    inline ImageReplicationStatus& WithFailureCode(const Aws::String& value) { SetFailureCode(value); return *this;}

    /**
     * <p>The failure code for a replication that has failed.</p>
     */
    inline ImageReplicationStatus& WithFailureCode(Aws::String&& value) { SetFailureCode(std::move(value)); return *this;}

    /**
     * <p>The failure code for a replication that has failed.</p>
     */
    inline ImageReplicationStatus& WithFailureCode(const char* value) { SetFailureCode(value); return *this;}

  private:

    Aws::String m_region;
    bool m_regionHasBeenSet = false;

    Aws::String m_registryId;
    bool m_registryIdHasBeenSet = false;

    ReplicationStatus m_status;
    bool m_statusHasBeenSet = false;

    Aws::String m_failureCode;
    bool m_failureCodeHasBeenSet = false;
  };

} // namespace Model
} // namespace ECR
} // namespace Aws
