/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/connect/ConnectRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/connect/model/InstanceAttributeType.h>
#include <utility>

namespace Aws
{
namespace Connect
{
namespace Model
{

  /**
   */
  class UpdateInstanceAttributeRequest : public ConnectRequest
  {
  public:
    AWS_CONNECT_API UpdateInstanceAttributeRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateInstanceAttribute"; }

    AWS_CONNECT_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The identifier of the Amazon Connect instance. You can <a
     * href="https://docs.aws.amazon.com/connect/latest/adminguide/find-instance-arn.html">find
     * the instance ID</a> in the Amazon Resource Name (ARN) of the instance.</p>
     */
    inline const Aws::String& GetInstanceId() const{ return m_instanceId; }
    inline bool InstanceIdHasBeenSet() const { return m_instanceIdHasBeenSet; }
    inline void SetInstanceId(const Aws::String& value) { m_instanceIdHasBeenSet = true; m_instanceId = value; }
    inline void SetInstanceId(Aws::String&& value) { m_instanceIdHasBeenSet = true; m_instanceId = std::move(value); }
    inline void SetInstanceId(const char* value) { m_instanceIdHasBeenSet = true; m_instanceId.assign(value); }
    inline UpdateInstanceAttributeRequest& WithInstanceId(const Aws::String& value) { SetInstanceId(value); return *this;}
    inline UpdateInstanceAttributeRequest& WithInstanceId(Aws::String&& value) { SetInstanceId(std::move(value)); return *this;}
    inline UpdateInstanceAttributeRequest& WithInstanceId(const char* value) { SetInstanceId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of attribute.</p>  <p>Only allowlisted customers can consume
     * USE_CUSTOM_TTS_VOICES. To access this feature, contact Amazon Web Services
     * Support for allowlisting.</p> 
     */
    inline const InstanceAttributeType& GetAttributeType() const{ return m_attributeType; }
    inline bool AttributeTypeHasBeenSet() const { return m_attributeTypeHasBeenSet; }
    inline void SetAttributeType(const InstanceAttributeType& value) { m_attributeTypeHasBeenSet = true; m_attributeType = value; }
    inline void SetAttributeType(InstanceAttributeType&& value) { m_attributeTypeHasBeenSet = true; m_attributeType = std::move(value); }
    inline UpdateInstanceAttributeRequest& WithAttributeType(const InstanceAttributeType& value) { SetAttributeType(value); return *this;}
    inline UpdateInstanceAttributeRequest& WithAttributeType(InstanceAttributeType&& value) { SetAttributeType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The value for the attribute. Maximum character limit is 100. </p>
     */
    inline const Aws::String& GetValue() const{ return m_value; }
    inline bool ValueHasBeenSet() const { return m_valueHasBeenSet; }
    inline void SetValue(const Aws::String& value) { m_valueHasBeenSet = true; m_value = value; }
    inline void SetValue(Aws::String&& value) { m_valueHasBeenSet = true; m_value = std::move(value); }
    inline void SetValue(const char* value) { m_valueHasBeenSet = true; m_value.assign(value); }
    inline UpdateInstanceAttributeRequest& WithValue(const Aws::String& value) { SetValue(value); return *this;}
    inline UpdateInstanceAttributeRequest& WithValue(Aws::String&& value) { SetValue(std::move(value)); return *this;}
    inline UpdateInstanceAttributeRequest& WithValue(const char* value) { SetValue(value); return *this;}
    ///@}
  private:

    Aws::String m_instanceId;
    bool m_instanceIdHasBeenSet = false;

    InstanceAttributeType m_attributeType;
    bool m_attributeTypeHasBeenSet = false;

    Aws::String m_value;
    bool m_valueHasBeenSet = false;
  };

} // namespace Model
} // namespace Connect
} // namespace Aws
