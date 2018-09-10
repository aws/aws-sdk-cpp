﻿/*
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
#include <aws/apigateway/APIGateway_EXPORTS.h>
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
namespace APIGateway
{
namespace Model
{

  /**
   * <p>Access log settings, including the access log format and access log
   * destination ARN.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/apigateway-2015-07-09/AccessLogSettings">AWS
   * API Reference</a></p>
   */
  class AWS_APIGATEWAY_API AccessLogSettings
  {
  public:
    AccessLogSettings();
    AccessLogSettings(Aws::Utils::Json::JsonView jsonValue);
    AccessLogSettings& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>A single line format of the access logs of data, as specified by selected <a
     * href="http://docs.aws.amazon.com/apigateway/latest/developerguide/api-gateway-mapping-template-reference.html#context-variable-reference">$context
     * variables</a>. The format must include at least
     * <code>$context.requestId</code>.</p>
     */
    inline const Aws::String& GetFormat() const{ return m_format; }

    /**
     * <p>A single line format of the access logs of data, as specified by selected <a
     * href="http://docs.aws.amazon.com/apigateway/latest/developerguide/api-gateway-mapping-template-reference.html#context-variable-reference">$context
     * variables</a>. The format must include at least
     * <code>$context.requestId</code>.</p>
     */
    inline void SetFormat(const Aws::String& value) { m_formatHasBeenSet = true; m_format = value; }

    /**
     * <p>A single line format of the access logs of data, as specified by selected <a
     * href="http://docs.aws.amazon.com/apigateway/latest/developerguide/api-gateway-mapping-template-reference.html#context-variable-reference">$context
     * variables</a>. The format must include at least
     * <code>$context.requestId</code>.</p>
     */
    inline void SetFormat(Aws::String&& value) { m_formatHasBeenSet = true; m_format = std::move(value); }

    /**
     * <p>A single line format of the access logs of data, as specified by selected <a
     * href="http://docs.aws.amazon.com/apigateway/latest/developerguide/api-gateway-mapping-template-reference.html#context-variable-reference">$context
     * variables</a>. The format must include at least
     * <code>$context.requestId</code>.</p>
     */
    inline void SetFormat(const char* value) { m_formatHasBeenSet = true; m_format.assign(value); }

    /**
     * <p>A single line format of the access logs of data, as specified by selected <a
     * href="http://docs.aws.amazon.com/apigateway/latest/developerguide/api-gateway-mapping-template-reference.html#context-variable-reference">$context
     * variables</a>. The format must include at least
     * <code>$context.requestId</code>.</p>
     */
    inline AccessLogSettings& WithFormat(const Aws::String& value) { SetFormat(value); return *this;}

    /**
     * <p>A single line format of the access logs of data, as specified by selected <a
     * href="http://docs.aws.amazon.com/apigateway/latest/developerguide/api-gateway-mapping-template-reference.html#context-variable-reference">$context
     * variables</a>. The format must include at least
     * <code>$context.requestId</code>.</p>
     */
    inline AccessLogSettings& WithFormat(Aws::String&& value) { SetFormat(std::move(value)); return *this;}

    /**
     * <p>A single line format of the access logs of data, as specified by selected <a
     * href="http://docs.aws.amazon.com/apigateway/latest/developerguide/api-gateway-mapping-template-reference.html#context-variable-reference">$context
     * variables</a>. The format must include at least
     * <code>$context.requestId</code>.</p>
     */
    inline AccessLogSettings& WithFormat(const char* value) { SetFormat(value); return *this;}


    /**
     * <p>The ARN of the CloudWatch Logs log group to receive access logs.</p>
     */
    inline const Aws::String& GetDestinationArn() const{ return m_destinationArn; }

    /**
     * <p>The ARN of the CloudWatch Logs log group to receive access logs.</p>
     */
    inline void SetDestinationArn(const Aws::String& value) { m_destinationArnHasBeenSet = true; m_destinationArn = value; }

    /**
     * <p>The ARN of the CloudWatch Logs log group to receive access logs.</p>
     */
    inline void SetDestinationArn(Aws::String&& value) { m_destinationArnHasBeenSet = true; m_destinationArn = std::move(value); }

    /**
     * <p>The ARN of the CloudWatch Logs log group to receive access logs.</p>
     */
    inline void SetDestinationArn(const char* value) { m_destinationArnHasBeenSet = true; m_destinationArn.assign(value); }

    /**
     * <p>The ARN of the CloudWatch Logs log group to receive access logs.</p>
     */
    inline AccessLogSettings& WithDestinationArn(const Aws::String& value) { SetDestinationArn(value); return *this;}

    /**
     * <p>The ARN of the CloudWatch Logs log group to receive access logs.</p>
     */
    inline AccessLogSettings& WithDestinationArn(Aws::String&& value) { SetDestinationArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the CloudWatch Logs log group to receive access logs.</p>
     */
    inline AccessLogSettings& WithDestinationArn(const char* value) { SetDestinationArn(value); return *this;}

  private:

    Aws::String m_format;
    bool m_formatHasBeenSet;

    Aws::String m_destinationArn;
    bool m_destinationArnHasBeenSet;
  };

} // namespace Model
} // namespace APIGateway
} // namespace Aws
