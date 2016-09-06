/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/ec2/EC2Request.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ec2/model/Storage.h>

namespace Aws
{
namespace EC2
{
namespace Model
{

  /**
   * <p>Contains the parameters for BundleInstance.</p>
   */
  class AWS_EC2_API BundleInstanceRequest : public EC2Request
  {
  public:
    BundleInstanceRequest();
    Aws::String SerializePayload() const override;

    /**
     * <p>Checks whether you have the required permissions for the action, without
     * actually making the request, and provides an error response. If you have the
     * required permissions, the error response is <code>DryRunOperation</code>.
     * Otherwise, it is <code>UnauthorizedOperation</code>.</p>
     */
    inline bool GetDryRun() const{ return m_dryRun; }

    /**
     * <p>Checks whether you have the required permissions for the action, without
     * actually making the request, and provides an error response. If you have the
     * required permissions, the error response is <code>DryRunOperation</code>.
     * Otherwise, it is <code>UnauthorizedOperation</code>.</p>
     */
    inline void SetDryRun(bool value) { m_dryRunHasBeenSet = true; m_dryRun = value; }

    /**
     * <p>Checks whether you have the required permissions for the action, without
     * actually making the request, and provides an error response. If you have the
     * required permissions, the error response is <code>DryRunOperation</code>.
     * Otherwise, it is <code>UnauthorizedOperation</code>.</p>
     */
    inline BundleInstanceRequest& WithDryRun(bool value) { SetDryRun(value); return *this;}

    /**
     * <p>The ID of the instance to bundle.</p> <p>Type: String</p> <p>Default:
     * None</p> <p>Required: Yes</p>
     */
    inline const Aws::String& GetInstanceId() const{ return m_instanceId; }

    /**
     * <p>The ID of the instance to bundle.</p> <p>Type: String</p> <p>Default:
     * None</p> <p>Required: Yes</p>
     */
    inline void SetInstanceId(const Aws::String& value) { m_instanceIdHasBeenSet = true; m_instanceId = value; }

    /**
     * <p>The ID of the instance to bundle.</p> <p>Type: String</p> <p>Default:
     * None</p> <p>Required: Yes</p>
     */
    inline void SetInstanceId(Aws::String&& value) { m_instanceIdHasBeenSet = true; m_instanceId = value; }

    /**
     * <p>The ID of the instance to bundle.</p> <p>Type: String</p> <p>Default:
     * None</p> <p>Required: Yes</p>
     */
    inline void SetInstanceId(const char* value) { m_instanceIdHasBeenSet = true; m_instanceId.assign(value); }

    /**
     * <p>The ID of the instance to bundle.</p> <p>Type: String</p> <p>Default:
     * None</p> <p>Required: Yes</p>
     */
    inline BundleInstanceRequest& WithInstanceId(const Aws::String& value) { SetInstanceId(value); return *this;}

    /**
     * <p>The ID of the instance to bundle.</p> <p>Type: String</p> <p>Default:
     * None</p> <p>Required: Yes</p>
     */
    inline BundleInstanceRequest& WithInstanceId(Aws::String&& value) { SetInstanceId(value); return *this;}

    /**
     * <p>The ID of the instance to bundle.</p> <p>Type: String</p> <p>Default:
     * None</p> <p>Required: Yes</p>
     */
    inline BundleInstanceRequest& WithInstanceId(const char* value) { SetInstanceId(value); return *this;}

    /**
     * <p>The bucket in which to store the AMI. You can specify a bucket that you
     * already own or a new bucket that Amazon EC2 creates on your behalf. If you
     * specify a bucket that belongs to someone else, Amazon EC2 returns an error.</p>
     */
    inline const Storage& GetStorage() const{ return m_storage; }

    /**
     * <p>The bucket in which to store the AMI. You can specify a bucket that you
     * already own or a new bucket that Amazon EC2 creates on your behalf. If you
     * specify a bucket that belongs to someone else, Amazon EC2 returns an error.</p>
     */
    inline void SetStorage(const Storage& value) { m_storageHasBeenSet = true; m_storage = value; }

    /**
     * <p>The bucket in which to store the AMI. You can specify a bucket that you
     * already own or a new bucket that Amazon EC2 creates on your behalf. If you
     * specify a bucket that belongs to someone else, Amazon EC2 returns an error.</p>
     */
    inline void SetStorage(Storage&& value) { m_storageHasBeenSet = true; m_storage = value; }

    /**
     * <p>The bucket in which to store the AMI. You can specify a bucket that you
     * already own or a new bucket that Amazon EC2 creates on your behalf. If you
     * specify a bucket that belongs to someone else, Amazon EC2 returns an error.</p>
     */
    inline BundleInstanceRequest& WithStorage(const Storage& value) { SetStorage(value); return *this;}

    /**
     * <p>The bucket in which to store the AMI. You can specify a bucket that you
     * already own or a new bucket that Amazon EC2 creates on your behalf. If you
     * specify a bucket that belongs to someone else, Amazon EC2 returns an error.</p>
     */
    inline BundleInstanceRequest& WithStorage(Storage&& value) { SetStorage(value); return *this;}

  private:
    bool m_dryRun;
    bool m_dryRunHasBeenSet;
    Aws::String m_instanceId;
    bool m_instanceIdHasBeenSet;
    Storage m_storage;
    bool m_storageHasBeenSet;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
