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
   * <p>The parameters for a LAMBDA task type.</p> <p>For information about
   * specifying and updating task parameters, see
   * <a>RegisterTaskWithMaintenanceWindow</a> and
   * <a>UpdateMaintenanceWindowTask</a>.</p> <note> <p> <code>LoggingInfo</code> has
   * been deprecated. To specify an S3 bucket to contain logs, instead use the
   * <code>OutputS3BucketName</code> and <code>OutputS3KeyPrefix</code> options in
   * the <code>TaskInvocationParameters</code> structure. For information about how
   * Systems Manager handles these options for the supported maintenance window task
   * types, see <a>MaintenanceWindowTaskInvocationParameters</a>.</p> <p>
   * <code>TaskParameters</code> has been deprecated. To specify parameters to pass
   * to a task when it runs, instead use the <code>Parameters</code> option in the
   * <code>TaskInvocationParameters</code> structure. For information about how
   * Systems Manager handles these options for the supported maintenance window task
   * types, see <a>MaintenanceWindowTaskInvocationParameters</a>.</p> <p>For Lambda
   * tasks, Systems Manager ignores any values specified for TaskParameters and
   * LoggingInfo.</p> </note><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/MaintenanceWindowLambdaParameters">AWS
   * API Reference</a></p>
   */
  class AWS_SSM_API MaintenanceWindowLambdaParameters
  {
  public:
    MaintenanceWindowLambdaParameters();
    MaintenanceWindowLambdaParameters(Aws::Utils::Json::JsonView jsonValue);
    MaintenanceWindowLambdaParameters& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


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
     * <p>(Optional) Specify a Lambda function version or alias name. If you specify a
     * function version, the action uses the qualified function ARN to invoke a
     * specific Lambda function. If you specify an alias name, the action uses the
     * alias ARN to invoke the Lambda function version to which the alias points.</p>
     */
    inline const Aws::String& GetQualifier() const{ return m_qualifier; }

    /**
     * <p>(Optional) Specify a Lambda function version or alias name. If you specify a
     * function version, the action uses the qualified function ARN to invoke a
     * specific Lambda function. If you specify an alias name, the action uses the
     * alias ARN to invoke the Lambda function version to which the alias points.</p>
     */
    inline bool QualifierHasBeenSet() const { return m_qualifierHasBeenSet; }

    /**
     * <p>(Optional) Specify a Lambda function version or alias name. If you specify a
     * function version, the action uses the qualified function ARN to invoke a
     * specific Lambda function. If you specify an alias name, the action uses the
     * alias ARN to invoke the Lambda function version to which the alias points.</p>
     */
    inline void SetQualifier(const Aws::String& value) { m_qualifierHasBeenSet = true; m_qualifier = value; }

    /**
     * <p>(Optional) Specify a Lambda function version or alias name. If you specify a
     * function version, the action uses the qualified function ARN to invoke a
     * specific Lambda function. If you specify an alias name, the action uses the
     * alias ARN to invoke the Lambda function version to which the alias points.</p>
     */
    inline void SetQualifier(Aws::String&& value) { m_qualifierHasBeenSet = true; m_qualifier = std::move(value); }

    /**
     * <p>(Optional) Specify a Lambda function version or alias name. If you specify a
     * function version, the action uses the qualified function ARN to invoke a
     * specific Lambda function. If you specify an alias name, the action uses the
     * alias ARN to invoke the Lambda function version to which the alias points.</p>
     */
    inline void SetQualifier(const char* value) { m_qualifierHasBeenSet = true; m_qualifier.assign(value); }

    /**
     * <p>(Optional) Specify a Lambda function version or alias name. If you specify a
     * function version, the action uses the qualified function ARN to invoke a
     * specific Lambda function. If you specify an alias name, the action uses the
     * alias ARN to invoke the Lambda function version to which the alias points.</p>
     */
    inline MaintenanceWindowLambdaParameters& WithQualifier(const Aws::String& value) { SetQualifier(value); return *this;}

    /**
     * <p>(Optional) Specify a Lambda function version or alias name. If you specify a
     * function version, the action uses the qualified function ARN to invoke a
     * specific Lambda function. If you specify an alias name, the action uses the
     * alias ARN to invoke the Lambda function version to which the alias points.</p>
     */
    inline MaintenanceWindowLambdaParameters& WithQualifier(Aws::String&& value) { SetQualifier(std::move(value)); return *this;}

    /**
     * <p>(Optional) Specify a Lambda function version or alias name. If you specify a
     * function version, the action uses the qualified function ARN to invoke a
     * specific Lambda function. If you specify an alias name, the action uses the
     * alias ARN to invoke the Lambda function version to which the alias points.</p>
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
    bool m_clientContextHasBeenSet;

    Aws::String m_qualifier;
    bool m_qualifierHasBeenSet;

    Aws::Utils::CryptoBuffer m_payload;
    bool m_payloadHasBeenSet;
  };

} // namespace Model
} // namespace SSM
} // namespace Aws
