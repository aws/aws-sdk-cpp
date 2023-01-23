/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/apprunner/AppRunner_EXPORTS.h>
#include <aws/apprunner/AppRunnerRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace AppRunner
{
namespace Model
{

  /**
   */
  class DescribeObservabilityConfigurationRequest : public AppRunnerRequest
  {
  public:
    AWS_APPRUNNER_API DescribeObservabilityConfigurationRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeObservabilityConfiguration"; }

    AWS_APPRUNNER_API Aws::String SerializePayload() const override;

    AWS_APPRUNNER_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The Amazon Resource Name (ARN) of the App Runner observability configuration
     * that you want a description for.</p> <p>The ARN can be a full observability
     * configuration ARN, or a partial ARN ending with either <code>.../<i>name</i>
     * </code> or <code>.../<i>name</i>/<i>revision</i> </code>. If a revision isn't
     * specified, the latest active revision is described.</p>
     */
    inline const Aws::String& GetObservabilityConfigurationArn() const{ return m_observabilityConfigurationArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the App Runner observability configuration
     * that you want a description for.</p> <p>The ARN can be a full observability
     * configuration ARN, or a partial ARN ending with either <code>.../<i>name</i>
     * </code> or <code>.../<i>name</i>/<i>revision</i> </code>. If a revision isn't
     * specified, the latest active revision is described.</p>
     */
    inline bool ObservabilityConfigurationArnHasBeenSet() const { return m_observabilityConfigurationArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the App Runner observability configuration
     * that you want a description for.</p> <p>The ARN can be a full observability
     * configuration ARN, or a partial ARN ending with either <code>.../<i>name</i>
     * </code> or <code>.../<i>name</i>/<i>revision</i> </code>. If a revision isn't
     * specified, the latest active revision is described.</p>
     */
    inline void SetObservabilityConfigurationArn(const Aws::String& value) { m_observabilityConfigurationArnHasBeenSet = true; m_observabilityConfigurationArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the App Runner observability configuration
     * that you want a description for.</p> <p>The ARN can be a full observability
     * configuration ARN, or a partial ARN ending with either <code>.../<i>name</i>
     * </code> or <code>.../<i>name</i>/<i>revision</i> </code>. If a revision isn't
     * specified, the latest active revision is described.</p>
     */
    inline void SetObservabilityConfigurationArn(Aws::String&& value) { m_observabilityConfigurationArnHasBeenSet = true; m_observabilityConfigurationArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the App Runner observability configuration
     * that you want a description for.</p> <p>The ARN can be a full observability
     * configuration ARN, or a partial ARN ending with either <code>.../<i>name</i>
     * </code> or <code>.../<i>name</i>/<i>revision</i> </code>. If a revision isn't
     * specified, the latest active revision is described.</p>
     */
    inline void SetObservabilityConfigurationArn(const char* value) { m_observabilityConfigurationArnHasBeenSet = true; m_observabilityConfigurationArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the App Runner observability configuration
     * that you want a description for.</p> <p>The ARN can be a full observability
     * configuration ARN, or a partial ARN ending with either <code>.../<i>name</i>
     * </code> or <code>.../<i>name</i>/<i>revision</i> </code>. If a revision isn't
     * specified, the latest active revision is described.</p>
     */
    inline DescribeObservabilityConfigurationRequest& WithObservabilityConfigurationArn(const Aws::String& value) { SetObservabilityConfigurationArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the App Runner observability configuration
     * that you want a description for.</p> <p>The ARN can be a full observability
     * configuration ARN, or a partial ARN ending with either <code>.../<i>name</i>
     * </code> or <code>.../<i>name</i>/<i>revision</i> </code>. If a revision isn't
     * specified, the latest active revision is described.</p>
     */
    inline DescribeObservabilityConfigurationRequest& WithObservabilityConfigurationArn(Aws::String&& value) { SetObservabilityConfigurationArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the App Runner observability configuration
     * that you want a description for.</p> <p>The ARN can be a full observability
     * configuration ARN, or a partial ARN ending with either <code>.../<i>name</i>
     * </code> or <code>.../<i>name</i>/<i>revision</i> </code>. If a revision isn't
     * specified, the latest active revision is described.</p>
     */
    inline DescribeObservabilityConfigurationRequest& WithObservabilityConfigurationArn(const char* value) { SetObservabilityConfigurationArn(value); return *this;}

  private:

    Aws::String m_observabilityConfigurationArn;
    bool m_observabilityConfigurationArnHasBeenSet = false;
  };

} // namespace Model
} // namespace AppRunner
} // namespace Aws
