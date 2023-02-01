/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/emr-serverless/EMRServerless_EXPORTS.h>

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
namespace EMRServerless
{
namespace Model
{

  /**
   * <p>The configuration for an application to automatically start on job
   * submission.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/emr-serverless-2021-07-13/AutoStartConfig">AWS
   * API Reference</a></p>
   */
  class AutoStartConfig
  {
  public:
    AWS_EMRSERVERLESS_API AutoStartConfig();
    AWS_EMRSERVERLESS_API AutoStartConfig(Aws::Utils::Json::JsonView jsonValue);
    AWS_EMRSERVERLESS_API AutoStartConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_EMRSERVERLESS_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Enables the application to automatically start on job submission. Defaults to
     * true.</p>
     */
    inline bool GetEnabled() const{ return m_enabled; }

    /**
     * <p>Enables the application to automatically start on job submission. Defaults to
     * true.</p>
     */
    inline bool EnabledHasBeenSet() const { return m_enabledHasBeenSet; }

    /**
     * <p>Enables the application to automatically start on job submission. Defaults to
     * true.</p>
     */
    inline void SetEnabled(bool value) { m_enabledHasBeenSet = true; m_enabled = value; }

    /**
     * <p>Enables the application to automatically start on job submission. Defaults to
     * true.</p>
     */
    inline AutoStartConfig& WithEnabled(bool value) { SetEnabled(value); return *this;}

  private:

    bool m_enabled;
    bool m_enabledHasBeenSet = false;
  };

} // namespace Model
} // namespace EMRServerless
} // namespace Aws
