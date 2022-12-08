/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotevents/IoTEvents_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/iotevents/model/PayloadType.h>
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
   * <p>Information needed to configure the payload.</p> <p>By default, AWS IoT
   * Events generates a standard payload in JSON for any action. This action payload
   * contains all attribute-value pairs that have the information about the detector
   * model instance and the event triggered the action. To configure the action
   * payload, you can use <code>contentExpression</code>.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iotevents-2018-07-27/Payload">AWS
   * API Reference</a></p>
   */
  class Payload
  {
  public:
    AWS_IOTEVENTS_API Payload();
    AWS_IOTEVENTS_API Payload(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTEVENTS_API Payload& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTEVENTS_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The content of the payload. You can use a string expression that includes
     * quoted strings (<code>'&lt;string&gt;'</code>), variables
     * (<code>$variable.&lt;variable-name&gt;</code>), input values
     * (<code>$input.&lt;input-name&gt;.&lt;path-to-datum&gt;</code>), string
     * concatenations, and quoted strings that contain <code>${}</code> as the content.
     * The recommended maximum size of a content expression is 1 KB.</p>
     */
    inline const Aws::String& GetContentExpression() const{ return m_contentExpression; }

    /**
     * <p>The content of the payload. You can use a string expression that includes
     * quoted strings (<code>'&lt;string&gt;'</code>), variables
     * (<code>$variable.&lt;variable-name&gt;</code>), input values
     * (<code>$input.&lt;input-name&gt;.&lt;path-to-datum&gt;</code>), string
     * concatenations, and quoted strings that contain <code>${}</code> as the content.
     * The recommended maximum size of a content expression is 1 KB.</p>
     */
    inline bool ContentExpressionHasBeenSet() const { return m_contentExpressionHasBeenSet; }

    /**
     * <p>The content of the payload. You can use a string expression that includes
     * quoted strings (<code>'&lt;string&gt;'</code>), variables
     * (<code>$variable.&lt;variable-name&gt;</code>), input values
     * (<code>$input.&lt;input-name&gt;.&lt;path-to-datum&gt;</code>), string
     * concatenations, and quoted strings that contain <code>${}</code> as the content.
     * The recommended maximum size of a content expression is 1 KB.</p>
     */
    inline void SetContentExpression(const Aws::String& value) { m_contentExpressionHasBeenSet = true; m_contentExpression = value; }

    /**
     * <p>The content of the payload. You can use a string expression that includes
     * quoted strings (<code>'&lt;string&gt;'</code>), variables
     * (<code>$variable.&lt;variable-name&gt;</code>), input values
     * (<code>$input.&lt;input-name&gt;.&lt;path-to-datum&gt;</code>), string
     * concatenations, and quoted strings that contain <code>${}</code> as the content.
     * The recommended maximum size of a content expression is 1 KB.</p>
     */
    inline void SetContentExpression(Aws::String&& value) { m_contentExpressionHasBeenSet = true; m_contentExpression = std::move(value); }

    /**
     * <p>The content of the payload. You can use a string expression that includes
     * quoted strings (<code>'&lt;string&gt;'</code>), variables
     * (<code>$variable.&lt;variable-name&gt;</code>), input values
     * (<code>$input.&lt;input-name&gt;.&lt;path-to-datum&gt;</code>), string
     * concatenations, and quoted strings that contain <code>${}</code> as the content.
     * The recommended maximum size of a content expression is 1 KB.</p>
     */
    inline void SetContentExpression(const char* value) { m_contentExpressionHasBeenSet = true; m_contentExpression.assign(value); }

    /**
     * <p>The content of the payload. You can use a string expression that includes
     * quoted strings (<code>'&lt;string&gt;'</code>), variables
     * (<code>$variable.&lt;variable-name&gt;</code>), input values
     * (<code>$input.&lt;input-name&gt;.&lt;path-to-datum&gt;</code>), string
     * concatenations, and quoted strings that contain <code>${}</code> as the content.
     * The recommended maximum size of a content expression is 1 KB.</p>
     */
    inline Payload& WithContentExpression(const Aws::String& value) { SetContentExpression(value); return *this;}

    /**
     * <p>The content of the payload. You can use a string expression that includes
     * quoted strings (<code>'&lt;string&gt;'</code>), variables
     * (<code>$variable.&lt;variable-name&gt;</code>), input values
     * (<code>$input.&lt;input-name&gt;.&lt;path-to-datum&gt;</code>), string
     * concatenations, and quoted strings that contain <code>${}</code> as the content.
     * The recommended maximum size of a content expression is 1 KB.</p>
     */
    inline Payload& WithContentExpression(Aws::String&& value) { SetContentExpression(std::move(value)); return *this;}

    /**
     * <p>The content of the payload. You can use a string expression that includes
     * quoted strings (<code>'&lt;string&gt;'</code>), variables
     * (<code>$variable.&lt;variable-name&gt;</code>), input values
     * (<code>$input.&lt;input-name&gt;.&lt;path-to-datum&gt;</code>), string
     * concatenations, and quoted strings that contain <code>${}</code> as the content.
     * The recommended maximum size of a content expression is 1 KB.</p>
     */
    inline Payload& WithContentExpression(const char* value) { SetContentExpression(value); return *this;}


    /**
     * <p>The value of the payload type can be either <code>STRING</code> or
     * <code>JSON</code>.</p>
     */
    inline const PayloadType& GetType() const{ return m_type; }

    /**
     * <p>The value of the payload type can be either <code>STRING</code> or
     * <code>JSON</code>.</p>
     */
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }

    /**
     * <p>The value of the payload type can be either <code>STRING</code> or
     * <code>JSON</code>.</p>
     */
    inline void SetType(const PayloadType& value) { m_typeHasBeenSet = true; m_type = value; }

    /**
     * <p>The value of the payload type can be either <code>STRING</code> or
     * <code>JSON</code>.</p>
     */
    inline void SetType(PayloadType&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }

    /**
     * <p>The value of the payload type can be either <code>STRING</code> or
     * <code>JSON</code>.</p>
     */
    inline Payload& WithType(const PayloadType& value) { SetType(value); return *this;}

    /**
     * <p>The value of the payload type can be either <code>STRING</code> or
     * <code>JSON</code>.</p>
     */
    inline Payload& WithType(PayloadType&& value) { SetType(std::move(value)); return *this;}

  private:

    Aws::String m_contentExpression;
    bool m_contentExpressionHasBeenSet = false;

    PayloadType m_type;
    bool m_typeHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTEvents
} // namespace Aws
