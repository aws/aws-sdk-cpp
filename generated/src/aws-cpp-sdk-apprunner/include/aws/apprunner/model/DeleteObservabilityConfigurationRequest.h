﻿/**
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
  class DeleteObservabilityConfigurationRequest : public AppRunnerRequest
  {
  public:
    AWS_APPRUNNER_API DeleteObservabilityConfigurationRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DeleteObservabilityConfiguration"; }

    AWS_APPRUNNER_API Aws::String SerializePayload() const override;

    AWS_APPRUNNER_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the App Runner observability configuration
     * that you want to delete.</p> <p>The ARN can be a full observability
     * configuration ARN, or a partial ARN ending with either <code>.../<i>name</i>
     * </code> or <code>.../<i>name</i>/<i>revision</i> </code>. If a revision isn't
     * specified, the latest active revision is deleted.</p>
     */
    inline const Aws::String& GetObservabilityConfigurationArn() const{ return m_observabilityConfigurationArn; }
    inline bool ObservabilityConfigurationArnHasBeenSet() const { return m_observabilityConfigurationArnHasBeenSet; }
    inline void SetObservabilityConfigurationArn(const Aws::String& value) { m_observabilityConfigurationArnHasBeenSet = true; m_observabilityConfigurationArn = value; }
    inline void SetObservabilityConfigurationArn(Aws::String&& value) { m_observabilityConfigurationArnHasBeenSet = true; m_observabilityConfigurationArn = std::move(value); }
    inline void SetObservabilityConfigurationArn(const char* value) { m_observabilityConfigurationArnHasBeenSet = true; m_observabilityConfigurationArn.assign(value); }
    inline DeleteObservabilityConfigurationRequest& WithObservabilityConfigurationArn(const Aws::String& value) { SetObservabilityConfigurationArn(value); return *this;}
    inline DeleteObservabilityConfigurationRequest& WithObservabilityConfigurationArn(Aws::String&& value) { SetObservabilityConfigurationArn(std::move(value)); return *this;}
    inline DeleteObservabilityConfigurationRequest& WithObservabilityConfigurationArn(const char* value) { SetObservabilityConfigurationArn(value); return *this;}
    ///@}
  private:

    Aws::String m_observabilityConfigurationArn;
    bool m_observabilityConfigurationArnHasBeenSet = false;
  };

} // namespace Model
} // namespace AppRunner
} // namespace Aws
