/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotevents/IoTEvents_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
   * <p>The attributes from the JSON payload that are made available by the input.
   * Inputs are derived from messages sent to the AWS IoT Events system using
   * <code>BatchPutMessage</code>. Each such message contains a JSON payload. Those
   * attributes (and their paired values) specified here are available for use in the
   * <code>condition</code> expressions used by detectors. </p><p><h3>See Also:</h3> 
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iotevents-2018-07-27/Attribute">AWS
   * API Reference</a></p>
   */
  class Attribute
  {
  public:
    AWS_IOTEVENTS_API Attribute();
    AWS_IOTEVENTS_API Attribute(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTEVENTS_API Attribute& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTEVENTS_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>An expression that specifies an attribute-value pair in a JSON structure. Use
     * this to specify an attribute from the JSON payload that is made available by the
     * input. Inputs are derived from messages sent to AWS IoT Events
     * (<code>BatchPutMessage</code>). Each such message contains a JSON payload. The
     * attribute (and its paired value) specified here are available for use in the
     * <code>condition</code> expressions used by detectors. </p> <p>Syntax:
     * <code>&lt;field-name&gt;.&lt;field-name&gt;...</code> </p>
     */
    inline const Aws::String& GetJsonPath() const{ return m_jsonPath; }

    /**
     * <p>An expression that specifies an attribute-value pair in a JSON structure. Use
     * this to specify an attribute from the JSON payload that is made available by the
     * input. Inputs are derived from messages sent to AWS IoT Events
     * (<code>BatchPutMessage</code>). Each such message contains a JSON payload. The
     * attribute (and its paired value) specified here are available for use in the
     * <code>condition</code> expressions used by detectors. </p> <p>Syntax:
     * <code>&lt;field-name&gt;.&lt;field-name&gt;...</code> </p>
     */
    inline bool JsonPathHasBeenSet() const { return m_jsonPathHasBeenSet; }

    /**
     * <p>An expression that specifies an attribute-value pair in a JSON structure. Use
     * this to specify an attribute from the JSON payload that is made available by the
     * input. Inputs are derived from messages sent to AWS IoT Events
     * (<code>BatchPutMessage</code>). Each such message contains a JSON payload. The
     * attribute (and its paired value) specified here are available for use in the
     * <code>condition</code> expressions used by detectors. </p> <p>Syntax:
     * <code>&lt;field-name&gt;.&lt;field-name&gt;...</code> </p>
     */
    inline void SetJsonPath(const Aws::String& value) { m_jsonPathHasBeenSet = true; m_jsonPath = value; }

    /**
     * <p>An expression that specifies an attribute-value pair in a JSON structure. Use
     * this to specify an attribute from the JSON payload that is made available by the
     * input. Inputs are derived from messages sent to AWS IoT Events
     * (<code>BatchPutMessage</code>). Each such message contains a JSON payload. The
     * attribute (and its paired value) specified here are available for use in the
     * <code>condition</code> expressions used by detectors. </p> <p>Syntax:
     * <code>&lt;field-name&gt;.&lt;field-name&gt;...</code> </p>
     */
    inline void SetJsonPath(Aws::String&& value) { m_jsonPathHasBeenSet = true; m_jsonPath = std::move(value); }

    /**
     * <p>An expression that specifies an attribute-value pair in a JSON structure. Use
     * this to specify an attribute from the JSON payload that is made available by the
     * input. Inputs are derived from messages sent to AWS IoT Events
     * (<code>BatchPutMessage</code>). Each such message contains a JSON payload. The
     * attribute (and its paired value) specified here are available for use in the
     * <code>condition</code> expressions used by detectors. </p> <p>Syntax:
     * <code>&lt;field-name&gt;.&lt;field-name&gt;...</code> </p>
     */
    inline void SetJsonPath(const char* value) { m_jsonPathHasBeenSet = true; m_jsonPath.assign(value); }

    /**
     * <p>An expression that specifies an attribute-value pair in a JSON structure. Use
     * this to specify an attribute from the JSON payload that is made available by the
     * input. Inputs are derived from messages sent to AWS IoT Events
     * (<code>BatchPutMessage</code>). Each such message contains a JSON payload. The
     * attribute (and its paired value) specified here are available for use in the
     * <code>condition</code> expressions used by detectors. </p> <p>Syntax:
     * <code>&lt;field-name&gt;.&lt;field-name&gt;...</code> </p>
     */
    inline Attribute& WithJsonPath(const Aws::String& value) { SetJsonPath(value); return *this;}

    /**
     * <p>An expression that specifies an attribute-value pair in a JSON structure. Use
     * this to specify an attribute from the JSON payload that is made available by the
     * input. Inputs are derived from messages sent to AWS IoT Events
     * (<code>BatchPutMessage</code>). Each such message contains a JSON payload. The
     * attribute (and its paired value) specified here are available for use in the
     * <code>condition</code> expressions used by detectors. </p> <p>Syntax:
     * <code>&lt;field-name&gt;.&lt;field-name&gt;...</code> </p>
     */
    inline Attribute& WithJsonPath(Aws::String&& value) { SetJsonPath(std::move(value)); return *this;}

    /**
     * <p>An expression that specifies an attribute-value pair in a JSON structure. Use
     * this to specify an attribute from the JSON payload that is made available by the
     * input. Inputs are derived from messages sent to AWS IoT Events
     * (<code>BatchPutMessage</code>). Each such message contains a JSON payload. The
     * attribute (and its paired value) specified here are available for use in the
     * <code>condition</code> expressions used by detectors. </p> <p>Syntax:
     * <code>&lt;field-name&gt;.&lt;field-name&gt;...</code> </p>
     */
    inline Attribute& WithJsonPath(const char* value) { SetJsonPath(value); return *this;}

  private:

    Aws::String m_jsonPath;
    bool m_jsonPathHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTEvents
} // namespace Aws
