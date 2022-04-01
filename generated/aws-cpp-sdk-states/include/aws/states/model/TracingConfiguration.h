/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/states/SFN_EXPORTS.h>

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
namespace SFN
{
namespace Model
{

  /**
   * <p>Selects whether or not the state machine's AWS X-Ray tracing is enabled.
   * Default is <code>false</code> </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/states-2016-11-23/TracingConfiguration">AWS
   * API Reference</a></p>
   */
  class AWS_SFN_API TracingConfiguration
  {
  public:
    TracingConfiguration();
    TracingConfiguration(Aws::Utils::Json::JsonView jsonValue);
    TracingConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>When set to <code>true</code>, AWS X-Ray tracing is enabled.</p>
     */
    inline bool GetEnabled() const{ return m_enabled; }

    /**
     * <p>When set to <code>true</code>, AWS X-Ray tracing is enabled.</p>
     */
    inline bool EnabledHasBeenSet() const { return m_enabledHasBeenSet; }

    /**
     * <p>When set to <code>true</code>, AWS X-Ray tracing is enabled.</p>
     */
    inline void SetEnabled(bool value) { m_enabledHasBeenSet = true; m_enabled = value; }

    /**
     * <p>When set to <code>true</code>, AWS X-Ray tracing is enabled.</p>
     */
    inline TracingConfiguration& WithEnabled(bool value) { SetEnabled(value); return *this;}

  private:

    bool m_enabled;
    bool m_enabledHasBeenSet;
  };

} // namespace Model
} // namespace SFN
} // namespace Aws
