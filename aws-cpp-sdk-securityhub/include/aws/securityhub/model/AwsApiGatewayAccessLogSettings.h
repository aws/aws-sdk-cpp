/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securityhub/SecurityHub_EXPORTS.h>
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
namespace SecurityHub
{
namespace Model
{

  /**
   * <p>Contains information about settings for logging access for the
   * stage.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/AwsApiGatewayAccessLogSettings">AWS
   * API Reference</a></p>
   */
  class AwsApiGatewayAccessLogSettings
  {
  public:
    AWS_SECURITYHUB_API AwsApiGatewayAccessLogSettings();
    AWS_SECURITYHUB_API AwsApiGatewayAccessLogSettings(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API AwsApiGatewayAccessLogSettings& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>A single-line format of the access logs of data, as specified by selected
     * <code>$context</code> variables. The format must include at least
     * <code>$context.requestId</code>.</p>
     */
    inline const Aws::String& GetFormat() const{ return m_format; }

    /**
     * <p>A single-line format of the access logs of data, as specified by selected
     * <code>$context</code> variables. The format must include at least
     * <code>$context.requestId</code>.</p>
     */
    inline bool FormatHasBeenSet() const { return m_formatHasBeenSet; }

    /**
     * <p>A single-line format of the access logs of data, as specified by selected
     * <code>$context</code> variables. The format must include at least
     * <code>$context.requestId</code>.</p>
     */
    inline void SetFormat(const Aws::String& value) { m_formatHasBeenSet = true; m_format = value; }

    /**
     * <p>A single-line format of the access logs of data, as specified by selected
     * <code>$context</code> variables. The format must include at least
     * <code>$context.requestId</code>.</p>
     */
    inline void SetFormat(Aws::String&& value) { m_formatHasBeenSet = true; m_format = std::move(value); }

    /**
     * <p>A single-line format of the access logs of data, as specified by selected
     * <code>$context</code> variables. The format must include at least
     * <code>$context.requestId</code>.</p>
     */
    inline void SetFormat(const char* value) { m_formatHasBeenSet = true; m_format.assign(value); }

    /**
     * <p>A single-line format of the access logs of data, as specified by selected
     * <code>$context</code> variables. The format must include at least
     * <code>$context.requestId</code>.</p>
     */
    inline AwsApiGatewayAccessLogSettings& WithFormat(const Aws::String& value) { SetFormat(value); return *this;}

    /**
     * <p>A single-line format of the access logs of data, as specified by selected
     * <code>$context</code> variables. The format must include at least
     * <code>$context.requestId</code>.</p>
     */
    inline AwsApiGatewayAccessLogSettings& WithFormat(Aws::String&& value) { SetFormat(std::move(value)); return *this;}

    /**
     * <p>A single-line format of the access logs of data, as specified by selected
     * <code>$context</code> variables. The format must include at least
     * <code>$context.requestId</code>.</p>
     */
    inline AwsApiGatewayAccessLogSettings& WithFormat(const char* value) { SetFormat(value); return *this;}


    /**
     * <p>The ARN of the CloudWatch Logs log group that receives the access logs.</p>
     */
    inline const Aws::String& GetDestinationArn() const{ return m_destinationArn; }

    /**
     * <p>The ARN of the CloudWatch Logs log group that receives the access logs.</p>
     */
    inline bool DestinationArnHasBeenSet() const { return m_destinationArnHasBeenSet; }

    /**
     * <p>The ARN of the CloudWatch Logs log group that receives the access logs.</p>
     */
    inline void SetDestinationArn(const Aws::String& value) { m_destinationArnHasBeenSet = true; m_destinationArn = value; }

    /**
     * <p>The ARN of the CloudWatch Logs log group that receives the access logs.</p>
     */
    inline void SetDestinationArn(Aws::String&& value) { m_destinationArnHasBeenSet = true; m_destinationArn = std::move(value); }

    /**
     * <p>The ARN of the CloudWatch Logs log group that receives the access logs.</p>
     */
    inline void SetDestinationArn(const char* value) { m_destinationArnHasBeenSet = true; m_destinationArn.assign(value); }

    /**
     * <p>The ARN of the CloudWatch Logs log group that receives the access logs.</p>
     */
    inline AwsApiGatewayAccessLogSettings& WithDestinationArn(const Aws::String& value) { SetDestinationArn(value); return *this;}

    /**
     * <p>The ARN of the CloudWatch Logs log group that receives the access logs.</p>
     */
    inline AwsApiGatewayAccessLogSettings& WithDestinationArn(Aws::String&& value) { SetDestinationArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the CloudWatch Logs log group that receives the access logs.</p>
     */
    inline AwsApiGatewayAccessLogSettings& WithDestinationArn(const char* value) { SetDestinationArn(value); return *this;}

  private:

    Aws::String m_format;
    bool m_formatHasBeenSet = false;

    Aws::String m_destinationArn;
    bool m_destinationArnHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
