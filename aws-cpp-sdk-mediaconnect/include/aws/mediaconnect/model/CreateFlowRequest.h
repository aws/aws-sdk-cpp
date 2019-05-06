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
#include <aws/mediaconnect/MediaConnect_EXPORTS.h>
#include <aws/mediaconnect/MediaConnectRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/mediaconnect/model/SetSourceRequest.h>
#include <aws/mediaconnect/model/GrantEntitlementRequest.h>
#include <aws/mediaconnect/model/AddOutputRequest.h>
#include <utility>

namespace Aws
{
namespace MediaConnect
{
namespace Model
{

  /**
   * Creates a new flow. The request must include one source. The request optionally
   * can include outputs (up to 20) and entitlements (up to 50).<p><h3>See Also:</h3>
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconnect-2018-11-14/CreateFlowRequest">AWS
   * API Reference</a></p>
   */
  class AWS_MEDIACONNECT_API CreateFlowRequest : public MediaConnectRequest
  {
  public:
    CreateFlowRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateFlow"; }

    Aws::String SerializePayload() const override;


    /**
     * The Availability Zone that you want to create the flow in. These options are
     * limited to the Availability Zones within the current AWS Region.
     */
    inline const Aws::String& GetAvailabilityZone() const{ return m_availabilityZone; }

    /**
     * The Availability Zone that you want to create the flow in. These options are
     * limited to the Availability Zones within the current AWS Region.
     */
    inline bool AvailabilityZoneHasBeenSet() const { return m_availabilityZoneHasBeenSet; }

    /**
     * The Availability Zone that you want to create the flow in. These options are
     * limited to the Availability Zones within the current AWS Region.
     */
    inline void SetAvailabilityZone(const Aws::String& value) { m_availabilityZoneHasBeenSet = true; m_availabilityZone = value; }

    /**
     * The Availability Zone that you want to create the flow in. These options are
     * limited to the Availability Zones within the current AWS Region.
     */
    inline void SetAvailabilityZone(Aws::String&& value) { m_availabilityZoneHasBeenSet = true; m_availabilityZone = std::move(value); }

    /**
     * The Availability Zone that you want to create the flow in. These options are
     * limited to the Availability Zones within the current AWS Region.
     */
    inline void SetAvailabilityZone(const char* value) { m_availabilityZoneHasBeenSet = true; m_availabilityZone.assign(value); }

    /**
     * The Availability Zone that you want to create the flow in. These options are
     * limited to the Availability Zones within the current AWS Region.
     */
    inline CreateFlowRequest& WithAvailabilityZone(const Aws::String& value) { SetAvailabilityZone(value); return *this;}

    /**
     * The Availability Zone that you want to create the flow in. These options are
     * limited to the Availability Zones within the current AWS Region.
     */
    inline CreateFlowRequest& WithAvailabilityZone(Aws::String&& value) { SetAvailabilityZone(std::move(value)); return *this;}

    /**
     * The Availability Zone that you want to create the flow in. These options are
     * limited to the Availability Zones within the current AWS Region.
     */
    inline CreateFlowRequest& WithAvailabilityZone(const char* value) { SetAvailabilityZone(value); return *this;}


    /**
     * The entitlements that you want to grant on a flow.
     */
    inline const Aws::Vector<GrantEntitlementRequest>& GetEntitlements() const{ return m_entitlements; }

    /**
     * The entitlements that you want to grant on a flow.
     */
    inline bool EntitlementsHasBeenSet() const { return m_entitlementsHasBeenSet; }

    /**
     * The entitlements that you want to grant on a flow.
     */
    inline void SetEntitlements(const Aws::Vector<GrantEntitlementRequest>& value) { m_entitlementsHasBeenSet = true; m_entitlements = value; }

    /**
     * The entitlements that you want to grant on a flow.
     */
    inline void SetEntitlements(Aws::Vector<GrantEntitlementRequest>&& value) { m_entitlementsHasBeenSet = true; m_entitlements = std::move(value); }

    /**
     * The entitlements that you want to grant on a flow.
     */
    inline CreateFlowRequest& WithEntitlements(const Aws::Vector<GrantEntitlementRequest>& value) { SetEntitlements(value); return *this;}

    /**
     * The entitlements that you want to grant on a flow.
     */
    inline CreateFlowRequest& WithEntitlements(Aws::Vector<GrantEntitlementRequest>&& value) { SetEntitlements(std::move(value)); return *this;}

    /**
     * The entitlements that you want to grant on a flow.
     */
    inline CreateFlowRequest& AddEntitlements(const GrantEntitlementRequest& value) { m_entitlementsHasBeenSet = true; m_entitlements.push_back(value); return *this; }

    /**
     * The entitlements that you want to grant on a flow.
     */
    inline CreateFlowRequest& AddEntitlements(GrantEntitlementRequest&& value) { m_entitlementsHasBeenSet = true; m_entitlements.push_back(std::move(value)); return *this; }


    /**
     * The name of the flow.
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * The name of the flow.
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * The name of the flow.
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * The name of the flow.
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * The name of the flow.
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * The name of the flow.
     */
    inline CreateFlowRequest& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * The name of the flow.
     */
    inline CreateFlowRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * The name of the flow.
     */
    inline CreateFlowRequest& WithName(const char* value) { SetName(value); return *this;}


    /**
     * The outputs that you want to add to this flow.
     */
    inline const Aws::Vector<AddOutputRequest>& GetOutputs() const{ return m_outputs; }

    /**
     * The outputs that you want to add to this flow.
     */
    inline bool OutputsHasBeenSet() const { return m_outputsHasBeenSet; }

    /**
     * The outputs that you want to add to this flow.
     */
    inline void SetOutputs(const Aws::Vector<AddOutputRequest>& value) { m_outputsHasBeenSet = true; m_outputs = value; }

    /**
     * The outputs that you want to add to this flow.
     */
    inline void SetOutputs(Aws::Vector<AddOutputRequest>&& value) { m_outputsHasBeenSet = true; m_outputs = std::move(value); }

    /**
     * The outputs that you want to add to this flow.
     */
    inline CreateFlowRequest& WithOutputs(const Aws::Vector<AddOutputRequest>& value) { SetOutputs(value); return *this;}

    /**
     * The outputs that you want to add to this flow.
     */
    inline CreateFlowRequest& WithOutputs(Aws::Vector<AddOutputRequest>&& value) { SetOutputs(std::move(value)); return *this;}

    /**
     * The outputs that you want to add to this flow.
     */
    inline CreateFlowRequest& AddOutputs(const AddOutputRequest& value) { m_outputsHasBeenSet = true; m_outputs.push_back(value); return *this; }

    /**
     * The outputs that you want to add to this flow.
     */
    inline CreateFlowRequest& AddOutputs(AddOutputRequest&& value) { m_outputsHasBeenSet = true; m_outputs.push_back(std::move(value)); return *this; }


    
    inline const SetSourceRequest& GetSource() const{ return m_source; }

    
    inline bool SourceHasBeenSet() const { return m_sourceHasBeenSet; }

    
    inline void SetSource(const SetSourceRequest& value) { m_sourceHasBeenSet = true; m_source = value; }

    
    inline void SetSource(SetSourceRequest&& value) { m_sourceHasBeenSet = true; m_source = std::move(value); }

    
    inline CreateFlowRequest& WithSource(const SetSourceRequest& value) { SetSource(value); return *this;}

    
    inline CreateFlowRequest& WithSource(SetSourceRequest&& value) { SetSource(std::move(value)); return *this;}

  private:

    Aws::String m_availabilityZone;
    bool m_availabilityZoneHasBeenSet;

    Aws::Vector<GrantEntitlementRequest> m_entitlements;
    bool m_entitlementsHasBeenSet;

    Aws::String m_name;
    bool m_nameHasBeenSet;

    Aws::Vector<AddOutputRequest> m_outputs;
    bool m_outputsHasBeenSet;

    SetSourceRequest m_source;
    bool m_sourceHasBeenSet;
  };

} // namespace Model
} // namespace MediaConnect
} // namespace Aws
