/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iot/IoT_EXPORTS.h>
#include <aws/iot/IoTRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <utility>

namespace Aws
{
namespace IoT
{
namespace Model
{

  /**
   */
  class UpdateDimensionRequest : public IoTRequest
  {
  public:
    AWS_IOT_API UpdateDimensionRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateDimension"; }

    AWS_IOT_API Aws::String SerializePayload() const override;


    /**
     * <p>A unique identifier for the dimension. Choose something that describes the
     * type and value to make it easy to remember what it does.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>A unique identifier for the dimension. Choose something that describes the
     * type and value to make it easy to remember what it does.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>A unique identifier for the dimension. Choose something that describes the
     * type and value to make it easy to remember what it does.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>A unique identifier for the dimension. Choose something that describes the
     * type and value to make it easy to remember what it does.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>A unique identifier for the dimension. Choose something that describes the
     * type and value to make it easy to remember what it does.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>A unique identifier for the dimension. Choose something that describes the
     * type and value to make it easy to remember what it does.</p>
     */
    inline UpdateDimensionRequest& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>A unique identifier for the dimension. Choose something that describes the
     * type and value to make it easy to remember what it does.</p>
     */
    inline UpdateDimensionRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>A unique identifier for the dimension. Choose something that describes the
     * type and value to make it easy to remember what it does.</p>
     */
    inline UpdateDimensionRequest& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>Specifies the value or list of values for the dimension. For
     * <code>TOPIC_FILTER</code> dimensions, this is a pattern used to match the MQTT
     * topic (for example, "admin/#").</p>
     */
    inline const Aws::Vector<Aws::String>& GetStringValues() const{ return m_stringValues; }

    /**
     * <p>Specifies the value or list of values for the dimension. For
     * <code>TOPIC_FILTER</code> dimensions, this is a pattern used to match the MQTT
     * topic (for example, "admin/#").</p>
     */
    inline bool StringValuesHasBeenSet() const { return m_stringValuesHasBeenSet; }

    /**
     * <p>Specifies the value or list of values for the dimension. For
     * <code>TOPIC_FILTER</code> dimensions, this is a pattern used to match the MQTT
     * topic (for example, "admin/#").</p>
     */
    inline void SetStringValues(const Aws::Vector<Aws::String>& value) { m_stringValuesHasBeenSet = true; m_stringValues = value; }

    /**
     * <p>Specifies the value or list of values for the dimension. For
     * <code>TOPIC_FILTER</code> dimensions, this is a pattern used to match the MQTT
     * topic (for example, "admin/#").</p>
     */
    inline void SetStringValues(Aws::Vector<Aws::String>&& value) { m_stringValuesHasBeenSet = true; m_stringValues = std::move(value); }

    /**
     * <p>Specifies the value or list of values for the dimension. For
     * <code>TOPIC_FILTER</code> dimensions, this is a pattern used to match the MQTT
     * topic (for example, "admin/#").</p>
     */
    inline UpdateDimensionRequest& WithStringValues(const Aws::Vector<Aws::String>& value) { SetStringValues(value); return *this;}

    /**
     * <p>Specifies the value or list of values for the dimension. For
     * <code>TOPIC_FILTER</code> dimensions, this is a pattern used to match the MQTT
     * topic (for example, "admin/#").</p>
     */
    inline UpdateDimensionRequest& WithStringValues(Aws::Vector<Aws::String>&& value) { SetStringValues(std::move(value)); return *this;}

    /**
     * <p>Specifies the value or list of values for the dimension. For
     * <code>TOPIC_FILTER</code> dimensions, this is a pattern used to match the MQTT
     * topic (for example, "admin/#").</p>
     */
    inline UpdateDimensionRequest& AddStringValues(const Aws::String& value) { m_stringValuesHasBeenSet = true; m_stringValues.push_back(value); return *this; }

    /**
     * <p>Specifies the value or list of values for the dimension. For
     * <code>TOPIC_FILTER</code> dimensions, this is a pattern used to match the MQTT
     * topic (for example, "admin/#").</p>
     */
    inline UpdateDimensionRequest& AddStringValues(Aws::String&& value) { m_stringValuesHasBeenSet = true; m_stringValues.push_back(std::move(value)); return *this; }

    /**
     * <p>Specifies the value or list of values for the dimension. For
     * <code>TOPIC_FILTER</code> dimensions, this is a pattern used to match the MQTT
     * topic (for example, "admin/#").</p>
     */
    inline UpdateDimensionRequest& AddStringValues(const char* value) { m_stringValuesHasBeenSet = true; m_stringValues.push_back(value); return *this; }

  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::Vector<Aws::String> m_stringValues;
    bool m_stringValuesHasBeenSet = false;
  };

} // namespace Model
} // namespace IoT
} // namespace Aws
