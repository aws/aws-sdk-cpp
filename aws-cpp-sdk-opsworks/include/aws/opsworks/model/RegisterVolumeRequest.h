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
  class AWS_OPSWORKS_API RegisterVolumeRequest : public OpsWorksRequest
  {
  public:
    RegisterVolumeRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "RegisterVolume"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The Amazon EBS volume ID.</p>
     */
    inline const Aws::String& GetEc2VolumeId() const{ return m_ec2VolumeId; }

    /**
     * <p>The Amazon EBS volume ID.</p>
     */
    inline bool Ec2VolumeIdHasBeenSet() const { return m_ec2VolumeIdHasBeenSet; }

    /**
     * <p>The Amazon EBS volume ID.</p>
     */
    inline void SetEc2VolumeId(const Aws::String& value) { m_ec2VolumeIdHasBeenSet = true; m_ec2VolumeId = value; }

    /**
     * <p>The Amazon EBS volume ID.</p>
     */
    inline void SetEc2VolumeId(Aws::String&& value) { m_ec2VolumeIdHasBeenSet = true; m_ec2VolumeId = std::move(value); }

    /**
     * <p>The Amazon EBS volume ID.</p>
     */
    inline void SetEc2VolumeId(const char* value) { m_ec2VolumeIdHasBeenSet = true; m_ec2VolumeId.assign(value); }

    /**
     * <p>The Amazon EBS volume ID.</p>
     */
    inline RegisterVolumeRequest& WithEc2VolumeId(const Aws::String& value) { SetEc2VolumeId(value); return *this;}

    /**
     * <p>The Amazon EBS volume ID.</p>
     */
    inline RegisterVolumeRequest& WithEc2VolumeId(Aws::String&& value) { SetEc2VolumeId(std::move(value)); return *this;}

    /**
     * <p>The Amazon EBS volume ID.</p>
     */
    inline RegisterVolumeRequest& WithEc2VolumeId(const char* value) { SetEc2VolumeId(value); return *this;}


    /**
     * <p>The stack ID.</p>
     */
    inline const Aws::String& GetStackId() const{ return m_stackId; }

    /**
     * <p>The stack ID.</p>
     */
    inline bool StackIdHasBeenSet() const { return m_stackIdHasBeenSet; }

    /**
     * <p>The stack ID.</p>
     */
    inline void SetStackId(const Aws::String& value) { m_stackIdHasBeenSet = true; m_stackId = value; }

    /**
     * <p>The stack ID.</p>
     */
    inline void SetStackId(Aws::String&& value) { m_stackIdHasBeenSet = true; m_stackId = std::move(value); }

    /**
     * <p>The stack ID.</p>
     */
    inline void SetStackId(const char* value) { m_stackIdHasBeenSet = true; m_stackId.assign(value); }

    /**
     * <p>The stack ID.</p>
     */
    inline RegisterVolumeRequest& WithStackId(const Aws::String& value) { SetStackId(value); return *this;}

    /**
     * <p>The stack ID.</p>
     */
    inline RegisterVolumeRequest& WithStackId(Aws::String&& value) { SetStackId(std::move(value)); return *this;}

    /**
     * <p>The stack ID.</p>
     */
    inline RegisterVolumeRequest& WithStackId(const char* value) { SetStackId(value); return *this;}

  private:

    Aws::String m_ec2VolumeId;
    bool m_ec2VolumeIdHasBeenSet;

    Aws::String m_stackId;
    bool m_stackIdHasBeenSet;
  };

} // namespace Model
} // namespace OpsWorks
} // namespace Aws
