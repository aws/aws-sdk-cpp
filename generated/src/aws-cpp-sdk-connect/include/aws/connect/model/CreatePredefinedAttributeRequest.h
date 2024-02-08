/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/connect/ConnectRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/connect/model/PredefinedAttributeValues.h>
#include <utility>

namespace Aws
{
namespace Connect
{
namespace Model
{

  /**
   */
  class CreatePredefinedAttributeRequest : public ConnectRequest
  {
  public:
    AWS_CONNECT_API CreatePredefinedAttributeRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreatePredefinedAttribute"; }

    AWS_CONNECT_API Aws::String SerializePayload() const override;


    /**
     * <p>The identifier of the Amazon Connect instance. You can find the instance ID
     * in the Amazon Resource Name (ARN) of the instance.</p>
     */
    inline const Aws::String& GetInstanceId() const{ return m_instanceId; }

    /**
     * <p>The identifier of the Amazon Connect instance. You can find the instance ID
     * in the Amazon Resource Name (ARN) of the instance.</p>
     */
    inline bool InstanceIdHasBeenSet() const { return m_instanceIdHasBeenSet; }

    /**
     * <p>The identifier of the Amazon Connect instance. You can find the instance ID
     * in the Amazon Resource Name (ARN) of the instance.</p>
     */
    inline void SetInstanceId(const Aws::String& value) { m_instanceIdHasBeenSet = true; m_instanceId = value; }

    /**
     * <p>The identifier of the Amazon Connect instance. You can find the instance ID
     * in the Amazon Resource Name (ARN) of the instance.</p>
     */
    inline void SetInstanceId(Aws::String&& value) { m_instanceIdHasBeenSet = true; m_instanceId = std::move(value); }

    /**
     * <p>The identifier of the Amazon Connect instance. You can find the instance ID
     * in the Amazon Resource Name (ARN) of the instance.</p>
     */
    inline void SetInstanceId(const char* value) { m_instanceIdHasBeenSet = true; m_instanceId.assign(value); }

    /**
     * <p>The identifier of the Amazon Connect instance. You can find the instance ID
     * in the Amazon Resource Name (ARN) of the instance.</p>
     */
    inline CreatePredefinedAttributeRequest& WithInstanceId(const Aws::String& value) { SetInstanceId(value); return *this;}

    /**
     * <p>The identifier of the Amazon Connect instance. You can find the instance ID
     * in the Amazon Resource Name (ARN) of the instance.</p>
     */
    inline CreatePredefinedAttributeRequest& WithInstanceId(Aws::String&& value) { SetInstanceId(std::move(value)); return *this;}

    /**
     * <p>The identifier of the Amazon Connect instance. You can find the instance ID
     * in the Amazon Resource Name (ARN) of the instance.</p>
     */
    inline CreatePredefinedAttributeRequest& WithInstanceId(const char* value) { SetInstanceId(value); return *this;}


    /**
     * <p> The name of the predefined attribute. </p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p> The name of the predefined attribute. </p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p> The name of the predefined attribute. </p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p> The name of the predefined attribute. </p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p> The name of the predefined attribute. </p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p> The name of the predefined attribute. </p>
     */
    inline CreatePredefinedAttributeRequest& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p> The name of the predefined attribute. </p>
     */
    inline CreatePredefinedAttributeRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p> The name of the predefined attribute. </p>
     */
    inline CreatePredefinedAttributeRequest& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p> The values of the predefined attribute. </p>
     */
    inline const PredefinedAttributeValues& GetValues() const{ return m_values; }

    /**
     * <p> The values of the predefined attribute. </p>
     */
    inline bool ValuesHasBeenSet() const { return m_valuesHasBeenSet; }

    /**
     * <p> The values of the predefined attribute. </p>
     */
    inline void SetValues(const PredefinedAttributeValues& value) { m_valuesHasBeenSet = true; m_values = value; }

    /**
     * <p> The values of the predefined attribute. </p>
     */
    inline void SetValues(PredefinedAttributeValues&& value) { m_valuesHasBeenSet = true; m_values = std::move(value); }

    /**
     * <p> The values of the predefined attribute. </p>
     */
    inline CreatePredefinedAttributeRequest& WithValues(const PredefinedAttributeValues& value) { SetValues(value); return *this;}

    /**
     * <p> The values of the predefined attribute. </p>
     */
    inline CreatePredefinedAttributeRequest& WithValues(PredefinedAttributeValues&& value) { SetValues(std::move(value)); return *this;}

  private:

    Aws::String m_instanceId;
    bool m_instanceIdHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    PredefinedAttributeValues m_values;
    bool m_valuesHasBeenSet = false;
  };

} // namespace Model
} // namespace Connect
} // namespace Aws
