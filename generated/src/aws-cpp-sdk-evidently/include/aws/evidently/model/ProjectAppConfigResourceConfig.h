/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/evidently/CloudWatchEvidently_EXPORTS.h>
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
namespace CloudWatchEvidently
{
namespace Model
{

  /**
   * <p>Use this parameter to configure client-side evaluation for your project.
   * Client-side evaluation allows your application to assign variations to user
   * sessions locally instead of by calling the <a
   * href="https://docs.aws.amazon.com/cloudwatchevidently/latest/APIReference/API_EvaluateFeature.html">EvaluateFeature</a>
   * operation to assign the variations. This mitigates the latency and availability
   * risks that come with an API call.</p> <p> <code>ProjectAppConfigResource</code>
   * is a structure that defines the configuration of how your application integrates
   * with AppConfig to run client-side evaluation.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/evidently-2021-02-01/ProjectAppConfigResourceConfig">AWS
   * API Reference</a></p>
   */
  class ProjectAppConfigResourceConfig
  {
  public:
    AWS_CLOUDWATCHEVIDENTLY_API ProjectAppConfigResourceConfig();
    AWS_CLOUDWATCHEVIDENTLY_API ProjectAppConfigResourceConfig(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLOUDWATCHEVIDENTLY_API ProjectAppConfigResourceConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLOUDWATCHEVIDENTLY_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The ID of the AppConfig application to use for client-side evaluation. </p>
     */
    inline const Aws::String& GetApplicationId() const{ return m_applicationId; }

    /**
     * <p>The ID of the AppConfig application to use for client-side evaluation. </p>
     */
    inline bool ApplicationIdHasBeenSet() const { return m_applicationIdHasBeenSet; }

    /**
     * <p>The ID of the AppConfig application to use for client-side evaluation. </p>
     */
    inline void SetApplicationId(const Aws::String& value) { m_applicationIdHasBeenSet = true; m_applicationId = value; }

    /**
     * <p>The ID of the AppConfig application to use for client-side evaluation. </p>
     */
    inline void SetApplicationId(Aws::String&& value) { m_applicationIdHasBeenSet = true; m_applicationId = std::move(value); }

    /**
     * <p>The ID of the AppConfig application to use for client-side evaluation. </p>
     */
    inline void SetApplicationId(const char* value) { m_applicationIdHasBeenSet = true; m_applicationId.assign(value); }

    /**
     * <p>The ID of the AppConfig application to use for client-side evaluation. </p>
     */
    inline ProjectAppConfigResourceConfig& WithApplicationId(const Aws::String& value) { SetApplicationId(value); return *this;}

    /**
     * <p>The ID of the AppConfig application to use for client-side evaluation. </p>
     */
    inline ProjectAppConfigResourceConfig& WithApplicationId(Aws::String&& value) { SetApplicationId(std::move(value)); return *this;}

    /**
     * <p>The ID of the AppConfig application to use for client-side evaluation. </p>
     */
    inline ProjectAppConfigResourceConfig& WithApplicationId(const char* value) { SetApplicationId(value); return *this;}


    /**
     * <p>The ID of the AppConfig environment to use for client-side evaluation. This
     * must be an environment that is within the application that you specify for
     * <code>applicationId</code>.</p>
     */
    inline const Aws::String& GetEnvironmentId() const{ return m_environmentId; }

    /**
     * <p>The ID of the AppConfig environment to use for client-side evaluation. This
     * must be an environment that is within the application that you specify for
     * <code>applicationId</code>.</p>
     */
    inline bool EnvironmentIdHasBeenSet() const { return m_environmentIdHasBeenSet; }

    /**
     * <p>The ID of the AppConfig environment to use for client-side evaluation. This
     * must be an environment that is within the application that you specify for
     * <code>applicationId</code>.</p>
     */
    inline void SetEnvironmentId(const Aws::String& value) { m_environmentIdHasBeenSet = true; m_environmentId = value; }

    /**
     * <p>The ID of the AppConfig environment to use for client-side evaluation. This
     * must be an environment that is within the application that you specify for
     * <code>applicationId</code>.</p>
     */
    inline void SetEnvironmentId(Aws::String&& value) { m_environmentIdHasBeenSet = true; m_environmentId = std::move(value); }

    /**
     * <p>The ID of the AppConfig environment to use for client-side evaluation. This
     * must be an environment that is within the application that you specify for
     * <code>applicationId</code>.</p>
     */
    inline void SetEnvironmentId(const char* value) { m_environmentIdHasBeenSet = true; m_environmentId.assign(value); }

    /**
     * <p>The ID of the AppConfig environment to use for client-side evaluation. This
     * must be an environment that is within the application that you specify for
     * <code>applicationId</code>.</p>
     */
    inline ProjectAppConfigResourceConfig& WithEnvironmentId(const Aws::String& value) { SetEnvironmentId(value); return *this;}

    /**
     * <p>The ID of the AppConfig environment to use for client-side evaluation. This
     * must be an environment that is within the application that you specify for
     * <code>applicationId</code>.</p>
     */
    inline ProjectAppConfigResourceConfig& WithEnvironmentId(Aws::String&& value) { SetEnvironmentId(std::move(value)); return *this;}

    /**
     * <p>The ID of the AppConfig environment to use for client-side evaluation. This
     * must be an environment that is within the application that you specify for
     * <code>applicationId</code>.</p>
     */
    inline ProjectAppConfigResourceConfig& WithEnvironmentId(const char* value) { SetEnvironmentId(value); return *this;}

  private:

    Aws::String m_applicationId;
    bool m_applicationIdHasBeenSet = false;

    Aws::String m_environmentId;
    bool m_environmentIdHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudWatchEvidently
} // namespace Aws
