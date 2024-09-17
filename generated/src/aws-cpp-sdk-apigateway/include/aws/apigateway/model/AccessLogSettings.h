/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
  class AccessLogSettings
  {
  public:
    AWS_APIGATEWAY_API AccessLogSettings();
    AWS_APIGATEWAY_API AccessLogSettings(Aws::Utils::Json::JsonView jsonValue);
    AWS_APIGATEWAY_API AccessLogSettings& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_APIGATEWAY_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>A single line format of the access logs of data, as specified by selected
     * $context variables. The format must include at least
     * <code>$context.requestId</code>.</p>
     */
    inline const Aws::String& GetFormat() const{ return m_format; }
    inline bool FormatHasBeenSet() const { return m_formatHasBeenSet; }
    inline void SetFormat(const Aws::String& value) { m_formatHasBeenSet = true; m_format = value; }
    inline void SetFormat(Aws::String&& value) { m_formatHasBeenSet = true; m_format = std::move(value); }
    inline void SetFormat(const char* value) { m_formatHasBeenSet = true; m_format.assign(value); }
    inline AccessLogSettings& WithFormat(const Aws::String& value) { SetFormat(value); return *this;}
    inline AccessLogSettings& WithFormat(Aws::String&& value) { SetFormat(std::move(value)); return *this;}
    inline AccessLogSettings& WithFormat(const char* value) { SetFormat(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the CloudWatch Logs log group or Kinesis
     * Data Firehose delivery stream to receive access logs. If you specify a Kinesis
     * Data Firehose delivery stream, the stream name must begin with
     * <code>amazon-apigateway-</code>.</p>
     */
    inline const Aws::String& GetDestinationArn() const{ return m_destinationArn; }
    inline bool DestinationArnHasBeenSet() const { return m_destinationArnHasBeenSet; }
    inline void SetDestinationArn(const Aws::String& value) { m_destinationArnHasBeenSet = true; m_destinationArn = value; }
    inline void SetDestinationArn(Aws::String&& value) { m_destinationArnHasBeenSet = true; m_destinationArn = std::move(value); }
    inline void SetDestinationArn(const char* value) { m_destinationArnHasBeenSet = true; m_destinationArn.assign(value); }
    inline AccessLogSettings& WithDestinationArn(const Aws::String& value) { SetDestinationArn(value); return *this;}
    inline AccessLogSettings& WithDestinationArn(Aws::String&& value) { SetDestinationArn(std::move(value)); return *this;}
    inline AccessLogSettings& WithDestinationArn(const char* value) { SetDestinationArn(value); return *this;}
    ///@}
  private:

    Aws::String m_format;
    bool m_formatHasBeenSet = false;

    Aws::String m_destinationArn;
    bool m_destinationArnHasBeenSet = false;
  };

} // namespace Model
} // namespace APIGateway
} // namespace Aws
