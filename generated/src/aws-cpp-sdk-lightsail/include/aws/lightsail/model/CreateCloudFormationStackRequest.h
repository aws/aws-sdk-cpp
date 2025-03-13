/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
  class CreateCloudFormationStackRequest : public LightsailRequest
  {
  public:
    AWS_LIGHTSAIL_API CreateCloudFormationStackRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateCloudFormationStack"; }

    AWS_LIGHTSAIL_API Aws::String SerializePayload() const override;

    AWS_LIGHTSAIL_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>An array of parameters that will be used to create the new Amazon EC2
     * instance. You can only pass one instance entry at a time in this array. You will
     * get an invalid parameter error if you pass more than one instance entry in this
     * array.</p>
     */
    inline const Aws::Vector<InstanceEntry>& GetInstances() const { return m_instances; }
    inline bool InstancesHasBeenSet() const { return m_instancesHasBeenSet; }
    template<typename InstancesT = Aws::Vector<InstanceEntry>>
    void SetInstances(InstancesT&& value) { m_instancesHasBeenSet = true; m_instances = std::forward<InstancesT>(value); }
    template<typename InstancesT = Aws::Vector<InstanceEntry>>
    CreateCloudFormationStackRequest& WithInstances(InstancesT&& value) { SetInstances(std::forward<InstancesT>(value)); return *this;}
    template<typename InstancesT = InstanceEntry>
    CreateCloudFormationStackRequest& AddInstances(InstancesT&& value) { m_instancesHasBeenSet = true; m_instances.emplace_back(std::forward<InstancesT>(value)); return *this; }
    ///@}
  private:

    Aws::Vector<InstanceEntry> m_instances;
    bool m_instancesHasBeenSet = false;
  };

} // namespace Model
} // namespace Lightsail
} // namespace Aws
