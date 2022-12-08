/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ssm/SSM_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/Array.h>
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
namespace SSM
{
namespace Model
{

  /**
   * <p>The parameters for a <code>LAMBDA</code> task type.</p> <p>For information
   * about specifying and updating task parameters, see
   * <a>RegisterTaskWithMaintenanceWindow</a> and
   * <a>UpdateMaintenanceWindowTask</a>.</p>  <p> <code>LoggingInfo</code> has
   * been deprecated. To specify an Amazon Simple Storage Service (Amazon S3) bucket
   * to contain logs, instead use the <code>OutputS3BucketName</code> and
   * <code>OutputS3KeyPrefix</code> options in the
   * <code>TaskInvocationParameters</code> structure. For information about how
   * Amazon Web Services Systems Manager handles these options for the supported
   * maintenance window task types, see
   * <a>MaintenanceWindowTaskInvocationParameters</a>.</p> <p>
   * <code>TaskParameters</code> has been deprecated. To specify parameters to pass
   * to a task when it runs, instead use the <code>Parameters</code> option in the
   * <code>TaskInvocationParameters</code> structure. For information about how
   * Systems Manager handles these options for the supported maintenance window task
   * types, see <a>MaintenanceWindowTaskInvocationParameters</a>.</p> <p>For Lambda
   * tasks, Systems Manager ignores any values specified for TaskParameters and
   * LoggingInfo.</p> <p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/MaintenanceWindowLambdaParameters">AWS
   * API Reference</a></p>
   */
  class MaintenanceWindowLambdaParameters
  {
  public:
    AWS_SSM_API MaintenanceWindowLambdaParameters();
    AWS_SSM_API MaintenanceWindowLambdaParameters(Aws::Utils::Json::JsonView jsonValue);
    AWS_SSM_API MaintenanceWindowLambdaParameters& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SSM_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Pass client-specific information to the Lambda function that you are
     * invoking. You can then process the client information in your Lambda function as
     * you choose through the context variable.</p>
     */
    inline const Aws::String& GetClientContext() const{ return m_clientContext; }

    /**
     * <p>Pass client-specific information to the Lambda function that you are
     * invoking. You can then process the client information in your Lambda function as
     * you choose through the context variable.</p>
     */
    inline bool ClientContextHasBeenSet() const { return m_clientContextHasBeenSet; }

    /**
     * <p>Pass client-specific information to the Lambda function that you are
     * invoking. You can then process the client information in your Lambda function as
     * you choose through the context variable.</p>
     */
    inline void SetClientContext(const Aws::String& value) { m_clientContextHasBeenSet = true; m_clientContext = value; }

    /**
     * <p>Pass client-specific information to the Lambda function that you are
     * invoking. You can then process the client information in your Lambda function as
     * you choose through the context variable.</p>
     */
    inline void SetClientContext(Aws::String&& value) { m_clientContextHasBeenSet = true; m_clientContext = std::move(value); }

    /**
     * <p>Pass client-specific information to the Lambda function that you are
     * invoking. You can then process the client information in your Lambda function as
     * you choose through the context variable.</p>
     */
    inline void SetClientContext(const char* value) { m_clientContextHasBeenSet = true; m_clientContext.assign(value); }

    /**
     * <p>Pass client-specific information to the Lambda function that you are
     * invoking. You can then process the client information in your Lambda function as
     * you choose through the context variable.</p>
     */
    inline MaintenanceWindowLambdaParameters& WithClientContext(const Aws::String& value) { SetClientContext(value); return *this;}

    /**
     * <p>Pass client-specific information to the Lambda function that you are
     * invoking. You can then process the client information in your Lambda function as
     * you choose through the context variable.</p>
     */
    inline MaintenanceWindowLambdaParameters& WithClientContext(Aws::String&& value) { SetClientContext(std::move(value)); return *this;}

    /**
     * <p>Pass client-specific information to the Lambda function that you are
     * invoking. You can then process the client information in your Lambda function as
     * you choose through the context variable.</p>
     */
    inline MaintenanceWindowLambdaParameters& WithClientContext(const char* value) { SetClientContext(value); return *this;}


    /**
     * <p>(Optional) Specify an Lambda function version or alias name. If you specify a
     * function version, the operation uses the qualified function Amazon Resource Name
     * (ARN) to invoke a specific Lambda function. If you specify an alias name, the
     * operation uses the alias ARN to invoke the Lambda function version to which the
     * alias points.</p>
     */
    inline const Aws::String& GetQualifier() const{ return m_qualifier; }

    /**
     * <p>(Optional) Specify an Lambda function version or alias name. If you specify a
     * function version, the operation uses the qualified function Amazon Resource Name
     * (ARN) to invoke a specific Lambda function. If you specify an alias name, the
     * operation uses the alias ARN to invoke the Lambda function version to which the
     * alias points.</p>
     */
    inline bool QualifierHasBeenSet() const { return m_qualifierHasBeenSet; }

    /**
     * <p>(Optional) Specify an Lambda function version or alias name. If you specify a
     * function version, the operation uses the qualified function Amazon Resource Name
     * (ARN) to invoke a specific Lambda function. If you specify an alias name, the
     * operation uses the alias ARN to invoke the Lambda function version to which the
     * alias points.</p>
     */
    inline void SetQualifier(const Aws::String& value) { m_qualifierHasBeenSet = true; m_qualifier = value; }

    /**
     * <p>(Optional) Specify an Lambda function version or alias name. If you specify a
     * function version, the operation uses the qualified function Amazon Resource Name
     * (ARN) to invoke a specific Lambda function. If you specify an alias name, the
     * operation uses the alias ARN to invoke the Lambda function version to which the
     * alias points.</p>
     */
    inline void SetQualifier(Aws::String&& value) { m_qualifierHasBeenSet = true; m_qualifier = std::move(value); }

    /**
     * <p>(Optional) Specify an Lambda function version or alias name. If you specify a
     * function version, the operation uses the qualified function Amazon Resource Name
     * (ARN) to invoke a specific Lambda function. If you specify an alias name, the
     * operation uses the alias ARN to invoke the Lambda function version to which the
     * alias points.</p>
     */
    inline void SetQualifier(const char* value) { m_qualifierHasBeenSet = true; m_qualifier.assign(value); }

    /**
     * <p>(Optional) Specify an Lambda function version or alias name. If you specify a
     * function version, the operation uses the qualified function Amazon Resource Name
     * (ARN) to invoke a specific Lambda function. If you specify an alias name, the
     * operation uses the alias ARN to invoke the Lambda function version to which the
     * alias points.</p>
     */
    inline MaintenanceWindowLambdaParameters& WithQualifier(const Aws::String& value) { SetQualifier(value); return *this;}

    /**
     * <p>(Optional) Specify an Lambda function version or alias name. If you specify a
     * function version, the operation uses the qualified function Amazon Resource Name
     * (ARN) to invoke a specific Lambda function. If you specify an alias name, the
     * operation uses the alias ARN to invoke the Lambda function version to which the
     * alias points.</p>
     */
    inline MaintenanceWindowLambdaParameters& WithQualifier(Aws::String&& value) { SetQualifier(std::move(value)); return *this;}

    /**
     * <p>(Optional) Specify an Lambda function version or alias name. If you specify a
     * function version, the operation uses the qualified function Amazon Resource Name
     * (ARN) to invoke a specific Lambda function. If you specify an alias name, the
     * operation uses the alias ARN to invoke the Lambda function version to which the
     * alias points.</p>
     */
    inline MaintenanceWindowLambdaParameters& WithQualifier(const char* value) { SetQualifier(value); return *this;}


    /**
     * <p>JSON to provide to your Lambda function as input.</p>
     */
    inline const Aws::Utils::CryptoBuffer& GetPayload() const{ return m_payload; }

    /**
     * <p>JSON to provide to your Lambda function as input.</p>
     */
    inline bool PayloadHasBeenSet() const { return m_payloadHasBeenSet; }

    /**
     * <p>JSON to provide to your Lambda function as input.</p>
     */
    inline void SetPayload(const Aws::Utils::CryptoBuffer& value) { m_payloadHasBeenSet = true; m_payload = value; }

    /**
     * <p>JSON to provide to your Lambda function as input.</p>
     */
    inline void SetPayload(Aws::Utils::CryptoBuffer&& value) { m_payloadHasBeenSet = true; m_payload = std::move(value); }

    /**
     * <p>JSON to provide to your Lambda function as input.</p>
     */
    inline MaintenanceWindowLambdaParameters& WithPayload(const Aws::Utils::CryptoBuffer& value) { SetPayload(value); return *this;}

    /**
     * <p>JSON to provide to your Lambda function as input.</p>
     */
    inline MaintenanceWindowLambdaParameters& WithPayload(Aws::Utils::CryptoBuffer&& value) { SetPayload(std::move(value)); return *this;}

  private:

    Aws::String m_clientContext;
    bool m_clientContextHasBeenSet = false;

    Aws::String m_qualifier;
    bool m_qualifierHasBeenSet = false;

    Aws::Utils::CryptoBuffer m_payload;
    bool m_payloadHasBeenSet = false;
  };

} // namespace Model
} // namespace SSM
} // namespace Aws
