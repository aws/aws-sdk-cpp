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
#include <aws/iotevents/IoTEvents_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/iotevents/model/Attribute.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace IoTEvents
{
namespace Model
{

  /**
   * <p>The definition of the input.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iotevents-2018-07-27/InputDefinition">AWS
   * API Reference</a></p>
   */
  class AWS_IOTEVENTS_API InputDefinition
  {
  public:
    InputDefinition();
    InputDefinition(Aws::Utils::Json::JsonView jsonValue);
    InputDefinition& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The attributes from the JSON payload that are made available by the input.
     * Inputs are derived from messages sent to the AWS IoT Events system using
     * <code>BatchPutMessage</code>. Each such message contains a JSON payload, and
     * those attributes (and their paired values) specified here is available for use
     * in the <code>condition</code> expressions used by detectors that monitor this
     * input. </p>
     */
    inline const Aws::Vector<Attribute>& GetAttributes() const{ return m_attributes; }

    /**
     * <p>The attributes from the JSON payload that are made available by the input.
     * Inputs are derived from messages sent to the AWS IoT Events system using
     * <code>BatchPutMessage</code>. Each such message contains a JSON payload, and
     * those attributes (and their paired values) specified here is available for use
     * in the <code>condition</code> expressions used by detectors that monitor this
     * input. </p>
     */
    inline bool AttributesHasBeenSet() const { return m_attributesHasBeenSet; }

    /**
     * <p>The attributes from the JSON payload that are made available by the input.
     * Inputs are derived from messages sent to the AWS IoT Events system using
     * <code>BatchPutMessage</code>. Each such message contains a JSON payload, and
     * those attributes (and their paired values) specified here is available for use
     * in the <code>condition</code> expressions used by detectors that monitor this
     * input. </p>
     */
    inline void SetAttributes(const Aws::Vector<Attribute>& value) { m_attributesHasBeenSet = true; m_attributes = value; }

    /**
     * <p>The attributes from the JSON payload that are made available by the input.
     * Inputs are derived from messages sent to the AWS IoT Events system using
     * <code>BatchPutMessage</code>. Each such message contains a JSON payload, and
     * those attributes (and their paired values) specified here is available for use
     * in the <code>condition</code> expressions used by detectors that monitor this
     * input. </p>
     */
    inline void SetAttributes(Aws::Vector<Attribute>&& value) { m_attributesHasBeenSet = true; m_attributes = std::move(value); }

    /**
     * <p>The attributes from the JSON payload that are made available by the input.
     * Inputs are derived from messages sent to the AWS IoT Events system using
     * <code>BatchPutMessage</code>. Each such message contains a JSON payload, and
     * those attributes (and their paired values) specified here is available for use
     * in the <code>condition</code> expressions used by detectors that monitor this
     * input. </p>
     */
    inline InputDefinition& WithAttributes(const Aws::Vector<Attribute>& value) { SetAttributes(value); return *this;}

    /**
     * <p>The attributes from the JSON payload that are made available by the input.
     * Inputs are derived from messages sent to the AWS IoT Events system using
     * <code>BatchPutMessage</code>. Each such message contains a JSON payload, and
     * those attributes (and their paired values) specified here is available for use
     * in the <code>condition</code> expressions used by detectors that monitor this
     * input. </p>
     */
    inline InputDefinition& WithAttributes(Aws::Vector<Attribute>&& value) { SetAttributes(std::move(value)); return *this;}

    /**
     * <p>The attributes from the JSON payload that are made available by the input.
     * Inputs are derived from messages sent to the AWS IoT Events system using
     * <code>BatchPutMessage</code>. Each such message contains a JSON payload, and
     * those attributes (and their paired values) specified here is available for use
     * in the <code>condition</code> expressions used by detectors that monitor this
     * input. </p>
     */
    inline InputDefinition& AddAttributes(const Attribute& value) { m_attributesHasBeenSet = true; m_attributes.push_back(value); return *this; }

    /**
     * <p>The attributes from the JSON payload that are made available by the input.
     * Inputs are derived from messages sent to the AWS IoT Events system using
     * <code>BatchPutMessage</code>. Each such message contains a JSON payload, and
     * those attributes (and their paired values) specified here is available for use
     * in the <code>condition</code> expressions used by detectors that monitor this
     * input. </p>
     */
    inline InputDefinition& AddAttributes(Attribute&& value) { m_attributesHasBeenSet = true; m_attributes.push_back(std::move(value)); return *this; }

  private:

    Aws::Vector<Attribute> m_attributes;
    bool m_attributesHasBeenSet;
  };

} // namespace Model
} // namespace IoTEvents
} // namespace Aws
