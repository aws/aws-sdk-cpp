/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Xml
{
  class XmlNode;
} // namespace Xml
} // namespace Utils
namespace EC2
{
namespace Model
{

  /**
   * <p>The options for managing connection authorization for new client
   * connections.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/ClientConnectOptions">AWS
   * API Reference</a></p>
   */
  class ClientConnectOptions
  {
  public:
    AWS_EC2_API ClientConnectOptions();
    AWS_EC2_API ClientConnectOptions(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_EC2_API ClientConnectOptions& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_EC2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_EC2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p>Indicates whether client connect options are enabled. The default is
     * <code>false</code> (not enabled).</p>
     */
    inline bool GetEnabled() const{ return m_enabled; }

    /**
     * <p>Indicates whether client connect options are enabled. The default is
     * <code>false</code> (not enabled).</p>
     */
    inline bool EnabledHasBeenSet() const { return m_enabledHasBeenSet; }

    /**
     * <p>Indicates whether client connect options are enabled. The default is
     * <code>false</code> (not enabled).</p>
     */
    inline void SetEnabled(bool value) { m_enabledHasBeenSet = true; m_enabled = value; }

    /**
     * <p>Indicates whether client connect options are enabled. The default is
     * <code>false</code> (not enabled).</p>
     */
    inline ClientConnectOptions& WithEnabled(bool value) { SetEnabled(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the Lambda function used for connection
     * authorization.</p>
     */
    inline const Aws::String& GetLambdaFunctionArn() const{ return m_lambdaFunctionArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the Lambda function used for connection
     * authorization.</p>
     */
    inline bool LambdaFunctionArnHasBeenSet() const { return m_lambdaFunctionArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the Lambda function used for connection
     * authorization.</p>
     */
    inline void SetLambdaFunctionArn(const Aws::String& value) { m_lambdaFunctionArnHasBeenSet = true; m_lambdaFunctionArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the Lambda function used for connection
     * authorization.</p>
     */
    inline void SetLambdaFunctionArn(Aws::String&& value) { m_lambdaFunctionArnHasBeenSet = true; m_lambdaFunctionArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the Lambda function used for connection
     * authorization.</p>
     */
    inline void SetLambdaFunctionArn(const char* value) { m_lambdaFunctionArnHasBeenSet = true; m_lambdaFunctionArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the Lambda function used for connection
     * authorization.</p>
     */
    inline ClientConnectOptions& WithLambdaFunctionArn(const Aws::String& value) { SetLambdaFunctionArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the Lambda function used for connection
     * authorization.</p>
     */
    inline ClientConnectOptions& WithLambdaFunctionArn(Aws::String&& value) { SetLambdaFunctionArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the Lambda function used for connection
     * authorization.</p>
     */
    inline ClientConnectOptions& WithLambdaFunctionArn(const char* value) { SetLambdaFunctionArn(value); return *this;}

  private:

    bool m_enabled;
    bool m_enabledHasBeenSet = false;

    Aws::String m_lambdaFunctionArn;
    bool m_lambdaFunctionArnHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
