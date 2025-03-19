/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iot/IoT_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace IoT
{
namespace Model
{
  /**
   * <p>The output from the DescribeThing operation.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/DescribeThingResponse">AWS
   * API Reference</a></p>
   */
  class DescribeThingResult
  {
  public:
    AWS_IOT_API DescribeThingResult() = default;
    AWS_IOT_API DescribeThingResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_IOT_API DescribeThingResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The default MQTT client ID. For a typical device, the thing name is also used
     * as the default MQTT client ID. Although we don’t require a mapping between a
     * thing's registry name and its use of MQTT client IDs, certificates, or shadow
     * state, we recommend that you choose a thing name and use it as the MQTT client
     * ID for the registry and the Device Shadow service.</p> <p>This lets you better
     * organize your IoT fleet without removing the flexibility of the underlying
     * device certificate model or shadows.</p>
     */
    inline const Aws::String& GetDefaultClientId() const { return m_defaultClientId; }
    template<typename DefaultClientIdT = Aws::String>
    void SetDefaultClientId(DefaultClientIdT&& value) { m_defaultClientIdHasBeenSet = true; m_defaultClientId = std::forward<DefaultClientIdT>(value); }
    template<typename DefaultClientIdT = Aws::String>
    DescribeThingResult& WithDefaultClientId(DefaultClientIdT&& value) { SetDefaultClientId(std::forward<DefaultClientIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the thing.</p>
     */
    inline const Aws::String& GetThingName() const { return m_thingName; }
    template<typename ThingNameT = Aws::String>
    void SetThingName(ThingNameT&& value) { m_thingNameHasBeenSet = true; m_thingName = std::forward<ThingNameT>(value); }
    template<typename ThingNameT = Aws::String>
    DescribeThingResult& WithThingName(ThingNameT&& value) { SetThingName(std::forward<ThingNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the thing to describe.</p>
     */
    inline const Aws::String& GetThingId() const { return m_thingId; }
    template<typename ThingIdT = Aws::String>
    void SetThingId(ThingIdT&& value) { m_thingIdHasBeenSet = true; m_thingId = std::forward<ThingIdT>(value); }
    template<typename ThingIdT = Aws::String>
    DescribeThingResult& WithThingId(ThingIdT&& value) { SetThingId(std::forward<ThingIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the thing to describe.</p>
     */
    inline const Aws::String& GetThingArn() const { return m_thingArn; }
    template<typename ThingArnT = Aws::String>
    void SetThingArn(ThingArnT&& value) { m_thingArnHasBeenSet = true; m_thingArn = std::forward<ThingArnT>(value); }
    template<typename ThingArnT = Aws::String>
    DescribeThingResult& WithThingArn(ThingArnT&& value) { SetThingArn(std::forward<ThingArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The thing type name.</p>
     */
    inline const Aws::String& GetThingTypeName() const { return m_thingTypeName; }
    template<typename ThingTypeNameT = Aws::String>
    void SetThingTypeName(ThingTypeNameT&& value) { m_thingTypeNameHasBeenSet = true; m_thingTypeName = std::forward<ThingTypeNameT>(value); }
    template<typename ThingTypeNameT = Aws::String>
    DescribeThingResult& WithThingTypeName(ThingTypeNameT&& value) { SetThingTypeName(std::forward<ThingTypeNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The thing attributes.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetAttributes() const { return m_attributes; }
    template<typename AttributesT = Aws::Map<Aws::String, Aws::String>>
    void SetAttributes(AttributesT&& value) { m_attributesHasBeenSet = true; m_attributes = std::forward<AttributesT>(value); }
    template<typename AttributesT = Aws::Map<Aws::String, Aws::String>>
    DescribeThingResult& WithAttributes(AttributesT&& value) { SetAttributes(std::forward<AttributesT>(value)); return *this;}
    template<typename AttributesKeyT = Aws::String, typename AttributesValueT = Aws::String>
    DescribeThingResult& AddAttributes(AttributesKeyT&& key, AttributesValueT&& value) {
      m_attributesHasBeenSet = true; m_attributes.emplace(std::forward<AttributesKeyT>(key), std::forward<AttributesValueT>(value)); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>The current version of the thing record in the registry.</p>  <p>To
     * avoid unintentional changes to the information in the registry, you can pass the
     * version information in the <code>expectedVersion</code> parameter of the
     * <code>UpdateThing</code> and <code>DeleteThing</code> calls.</p> 
     */
    inline long long GetVersion() const { return m_version; }
    inline void SetVersion(long long value) { m_versionHasBeenSet = true; m_version = value; }
    inline DescribeThingResult& WithVersion(long long value) { SetVersion(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the billing group the thing belongs to.</p>
     */
    inline const Aws::String& GetBillingGroupName() const { return m_billingGroupName; }
    template<typename BillingGroupNameT = Aws::String>
    void SetBillingGroupName(BillingGroupNameT&& value) { m_billingGroupNameHasBeenSet = true; m_billingGroupName = std::forward<BillingGroupNameT>(value); }
    template<typename BillingGroupNameT = Aws::String>
    DescribeThingResult& WithBillingGroupName(BillingGroupNameT&& value) { SetBillingGroupName(std::forward<BillingGroupNameT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    DescribeThingResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_defaultClientId;
    bool m_defaultClientIdHasBeenSet = false;

    Aws::String m_thingName;
    bool m_thingNameHasBeenSet = false;

    Aws::String m_thingId;
    bool m_thingIdHasBeenSet = false;

    Aws::String m_thingArn;
    bool m_thingArnHasBeenSet = false;

    Aws::String m_thingTypeName;
    bool m_thingTypeNameHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_attributes;
    bool m_attributesHasBeenSet = false;

    long long m_version{0};
    bool m_versionHasBeenSet = false;

    Aws::String m_billingGroupName;
    bool m_billingGroupNameHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace IoT
} // namespace Aws
