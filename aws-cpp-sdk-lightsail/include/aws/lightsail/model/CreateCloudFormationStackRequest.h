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
#include <aws/lightsail/Lightsail_EXPORTS.h>
#include <aws/lightsail/LightsailRequest.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/lightsail/model/InstanceEntry.h>
#include <utility>

namespace Aws
{
namespace Lightsail
{
namespace Model
{

  /**
   */
  class AWS_LIGHTSAIL_API CreateCloudFormationStackRequest : public LightsailRequest
  {
  public:
    CreateCloudFormationStackRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateCloudFormationStack"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>An array of parameters that will be used to create the new Amazon EC2
     * instance. You can only pass one instance entry at a time in this array. You will
     * get an invalid parameter error if you pass more than one instance entry in this
     * array.</p>
     */
    inline const Aws::Vector<InstanceEntry>& GetInstances() const{ return m_instances; }

    /**
     * <p>An array of parameters that will be used to create the new Amazon EC2
     * instance. You can only pass one instance entry at a time in this array. You will
     * get an invalid parameter error if you pass more than one instance entry in this
     * array.</p>
     */
    inline bool InstancesHasBeenSet() const { return m_instancesHasBeenSet; }

    /**
     * <p>An array of parameters that will be used to create the new Amazon EC2
     * instance. You can only pass one instance entry at a time in this array. You will
     * get an invalid parameter error if you pass more than one instance entry in this
     * array.</p>
     */
    inline void SetInstances(const Aws::Vector<InstanceEntry>& value) { m_instancesHasBeenSet = true; m_instances = value; }

    /**
     * <p>An array of parameters that will be used to create the new Amazon EC2
     * instance. You can only pass one instance entry at a time in this array. You will
     * get an invalid parameter error if you pass more than one instance entry in this
     * array.</p>
     */
    inline void SetInstances(Aws::Vector<InstanceEntry>&& value) { m_instancesHasBeenSet = true; m_instances = std::move(value); }

    /**
     * <p>An array of parameters that will be used to create the new Amazon EC2
     * instance. You can only pass one instance entry at a time in this array. You will
     * get an invalid parameter error if you pass more than one instance entry in this
     * array.</p>
     */
    inline CreateCloudFormationStackRequest& WithInstances(const Aws::Vector<InstanceEntry>& value) { SetInstances(value); return *this;}

    /**
     * <p>An array of parameters that will be used to create the new Amazon EC2
     * instance. You can only pass one instance entry at a time in this array. You will
     * get an invalid parameter error if you pass more than one instance entry in this
     * array.</p>
     */
    inline CreateCloudFormationStackRequest& WithInstances(Aws::Vector<InstanceEntry>&& value) { SetInstances(std::move(value)); return *this;}

    /**
     * <p>An array of parameters that will be used to create the new Amazon EC2
     * instance. You can only pass one instance entry at a time in this array. You will
     * get an invalid parameter error if you pass more than one instance entry in this
     * array.</p>
     */
    inline CreateCloudFormationStackRequest& AddInstances(const InstanceEntry& value) { m_instancesHasBeenSet = true; m_instances.push_back(value); return *this; }

    /**
     * <p>An array of parameters that will be used to create the new Amazon EC2
     * instance. You can only pass one instance entry at a time in this array. You will
     * get an invalid parameter error if you pass more than one instance entry in this
     * array.</p>
     */
    inline CreateCloudFormationStackRequest& AddInstances(InstanceEntry&& value) { m_instancesHasBeenSet = true; m_instances.push_back(std::move(value)); return *this; }

  private:

    Aws::Vector<InstanceEntry> m_instances;
    bool m_instancesHasBeenSet;
  };

} // namespace Model
} // namespace Lightsail
} // namespace Aws
