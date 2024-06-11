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


    ///@{
    /**
     * <p>The destination Region for the image replication.</p>
     */
    inline const Aws::String& GetRegion() const{ return m_region; }
    inline bool RegionHasBeenSet() const { return m_regionHasBeenSet; }
    inline void SetRegion(const Aws::String& value) { m_regionHasBeenSet = true; m_region = value; }
    inline void SetRegion(Aws::String&& value) { m_regionHasBeenSet = true; m_region = std::move(value); }
    inline void SetRegion(const char* value) { m_regionHasBeenSet = true; m_region.assign(value); }
    inline ImageReplicationStatus& WithRegion(const Aws::String& value) { SetRegion(value); return *this;}
    inline ImageReplicationStatus& WithRegion(Aws::String&& value) { SetRegion(std::move(value)); return *this;}
    inline ImageReplicationStatus& WithRegion(const char* value) { SetRegion(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Web Services account ID associated with the registry to which the
     * image belongs.</p>
     */
    inline const Aws::String& GetRegistryId() const{ return m_registryId; }
    inline bool RegistryIdHasBeenSet() const { return m_registryIdHasBeenSet; }
    inline void SetRegistryId(const Aws::String& value) { m_registryIdHasBeenSet = true; m_registryId = value; }
    inline void SetRegistryId(Aws::String&& value) { m_registryIdHasBeenSet = true; m_registryId = std::move(value); }
    inline void SetRegistryId(const char* value) { m_registryIdHasBeenSet = true; m_registryId.assign(value); }
    inline ImageReplicationStatus& WithRegistryId(const Aws::String& value) { SetRegistryId(value); return *this;}
    inline ImageReplicationStatus& WithRegistryId(Aws::String&& value) { SetRegistryId(std::move(value)); return *this;}
    inline ImageReplicationStatus& WithRegistryId(const char* value) { SetRegistryId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The image replication status.</p>
     */
    inline const ReplicationStatus& GetStatus() const{ return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(const ReplicationStatus& value) { m_statusHasBeenSet = true; m_status = value; }
    inline void SetStatus(ReplicationStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }
    inline ImageReplicationStatus& WithStatus(const ReplicationStatus& value) { SetStatus(value); return *this;}
    inline ImageReplicationStatus& WithStatus(ReplicationStatus&& value) { SetStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The failure code for a replication that has failed.</p>
     */
    inline const Aws::String& GetFailureCode() const{ return m_failureCode; }
    inline bool FailureCodeHasBeenSet() const { return m_failureCodeHasBeenSet; }
    inline void SetFailureCode(const Aws::String& value) { m_failureCodeHasBeenSet = true; m_failureCode = value; }
    inline void SetFailureCode(Aws::String&& value) { m_failureCodeHasBeenSet = true; m_failureCode = std::move(value); }
    inline void SetFailureCode(const char* value) { m_failureCodeHasBeenSet = true; m_failureCode.assign(value); }
    inline ImageReplicationStatus& WithFailureCode(const Aws::String& value) { SetFailureCode(value); return *this;}
    inline ImageReplicationStatus& WithFailureCode(Aws::String&& value) { SetFailureCode(std::move(value)); return *this;}
    inline ImageReplicationStatus& WithFailureCode(const char* value) { SetFailureCode(value); return *this;}
    ///@}
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
