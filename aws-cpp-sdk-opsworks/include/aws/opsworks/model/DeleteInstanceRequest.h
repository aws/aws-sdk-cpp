/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/opsworks/OpsWorks_EXPORTS.h>
#include <aws/opsworks/OpsWorksRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace OpsWorks
{
namespace Model
{

  /**
   */
  class DeleteInstanceRequest : public OpsWorksRequest
  {
  public:
    AWS_OPSWORKS_API DeleteInstanceRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DeleteInstance"; }

    AWS_OPSWORKS_API Aws::String SerializePayload() const override;

    AWS_OPSWORKS_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The instance ID.</p>
     */
    inline const Aws::String& GetInstanceId() const{ return m_instanceId; }

    /**
     * <p>The instance ID.</p>
     */
    inline bool InstanceIdHasBeenSet() const { return m_instanceIdHasBeenSet; }

    /**
     * <p>The instance ID.</p>
     */
    inline void SetInstanceId(const Aws::String& value) { m_instanceIdHasBeenSet = true; m_instanceId = value; }

    /**
     * <p>The instance ID.</p>
     */
    inline void SetInstanceId(Aws::String&& value) { m_instanceIdHasBeenSet = true; m_instanceId = std::move(value); }

    /**
     * <p>The instance ID.</p>
     */
    inline void SetInstanceId(const char* value) { m_instanceIdHasBeenSet = true; m_instanceId.assign(value); }

    /**
     * <p>The instance ID.</p>
     */
    inline DeleteInstanceRequest& WithInstanceId(const Aws::String& value) { SetInstanceId(value); return *this;}

    /**
     * <p>The instance ID.</p>
     */
    inline DeleteInstanceRequest& WithInstanceId(Aws::String&& value) { SetInstanceId(std::move(value)); return *this;}

    /**
     * <p>The instance ID.</p>
     */
    inline DeleteInstanceRequest& WithInstanceId(const char* value) { SetInstanceId(value); return *this;}


    /**
     * <p>Whether to delete the instance Elastic IP address.</p>
     */
    inline bool GetDeleteElasticIp() const{ return m_deleteElasticIp; }

    /**
     * <p>Whether to delete the instance Elastic IP address.</p>
     */
    inline bool DeleteElasticIpHasBeenSet() const { return m_deleteElasticIpHasBeenSet; }

    /**
     * <p>Whether to delete the instance Elastic IP address.</p>
     */
    inline void SetDeleteElasticIp(bool value) { m_deleteElasticIpHasBeenSet = true; m_deleteElasticIp = value; }

    /**
     * <p>Whether to delete the instance Elastic IP address.</p>
     */
    inline DeleteInstanceRequest& WithDeleteElasticIp(bool value) { SetDeleteElasticIp(value); return *this;}


    /**
     * <p>Whether to delete the instance's Amazon EBS volumes.</p>
     */
    inline bool GetDeleteVolumes() const{ return m_deleteVolumes; }

    /**
     * <p>Whether to delete the instance's Amazon EBS volumes.</p>
     */
    inline bool DeleteVolumesHasBeenSet() const { return m_deleteVolumesHasBeenSet; }

    /**
     * <p>Whether to delete the instance's Amazon EBS volumes.</p>
     */
    inline void SetDeleteVolumes(bool value) { m_deleteVolumesHasBeenSet = true; m_deleteVolumes = value; }

    /**
     * <p>Whether to delete the instance's Amazon EBS volumes.</p>
     */
    inline DeleteInstanceRequest& WithDeleteVolumes(bool value) { SetDeleteVolumes(value); return *this;}

  private:

    Aws::String m_instanceId;
    bool m_instanceIdHasBeenSet = false;

    bool m_deleteElasticIp;
    bool m_deleteElasticIpHasBeenSet = false;

    bool m_deleteVolumes;
    bool m_deleteVolumesHasBeenSet = false;
  };

} // namespace Model
} // namespace OpsWorks
} // namespace Aws
