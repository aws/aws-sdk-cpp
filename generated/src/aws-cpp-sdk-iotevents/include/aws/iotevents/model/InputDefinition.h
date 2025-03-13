/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
  class InputDefinition
  {
  public:
    AWS_IOTEVENTS_API InputDefinition() = default;
    AWS_IOTEVENTS_API InputDefinition(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTEVENTS_API InputDefinition& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTEVENTS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The attributes from the JSON payload that are made available by the input.
     * Inputs are derived from messages sent to the AWS IoT Events system using
     * <code>BatchPutMessage</code>. Each such message contains a JSON payload, and
     * those attributes (and their paired values) specified here are available for use
     * in the <code>condition</code> expressions used by detectors that monitor this
     * input. </p>
     */
    inline const Aws::Vector<Attribute>& GetAttributes() const { return m_attributes; }
    inline bool AttributesHasBeenSet() const { return m_attributesHasBeenSet; }
    template<typename AttributesT = Aws::Vector<Attribute>>
    void SetAttributes(AttributesT&& value) { m_attributesHasBeenSet = true; m_attributes = std::forward<AttributesT>(value); }
    template<typename AttributesT = Aws::Vector<Attribute>>
    InputDefinition& WithAttributes(AttributesT&& value) { SetAttributes(std::forward<AttributesT>(value)); return *this;}
    template<typename AttributesT = Attribute>
    InputDefinition& AddAttributes(AttributesT&& value) { m_attributesHasBeenSet = true; m_attributes.emplace_back(std::forward<AttributesT>(value)); return *this; }
    ///@}
  private:

    Aws::Vector<Attribute> m_attributes;
    bool m_attributesHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTEvents
} // namespace Aws
