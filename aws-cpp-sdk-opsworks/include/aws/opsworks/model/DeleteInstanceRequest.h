/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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
  class AWS_OPSWORKS_API DeleteInstanceRequest : public OpsWorksRequest
  {
  public:
    DeleteInstanceRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DeleteInstance"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


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
    bool m_instanceIdHasBeenSet;

    bool m_deleteElasticIp;
    bool m_deleteElasticIpHasBeenSet;

    bool m_deleteVolumes;
    bool m_deleteVolumesHasBeenSet;
  };

} // namespace Model
} // namespace OpsWorks
} // namespace Aws
