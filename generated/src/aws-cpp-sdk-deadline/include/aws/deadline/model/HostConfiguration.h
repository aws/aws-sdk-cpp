/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/deadline/Deadline_EXPORTS.h>
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
namespace deadline
{
namespace Model
{

  /**
   * <p>Provides a script that runs as a worker is starting up that you can use to
   * provide additional configuration for workers in your fleet. </p> <p>To remove a
   * script from a fleet, use the <a
   * href="https://docs.aws.amazon.com/deadline-cloud/latest/APIReference/API_UpdateFleet.html">UpdateFleet</a>
   * operation with the <code>hostConfiguration</code> <code>scriptBody</code>
   * parameter set to an empty string ("").</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/deadline-2023-10-12/HostConfiguration">AWS
   * API Reference</a></p>
   */
  class HostConfiguration
  {
  public:
    AWS_DEADLINE_API HostConfiguration() = default;
    AWS_DEADLINE_API HostConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_DEADLINE_API HostConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DEADLINE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The text of the script that runs as a worker is starting up that you can use
     * to provide additional configuration for workers in your fleet. The script runs
     * after a worker enters the <code>STARTING</code> state and before the worker
     * processes tasks.</p> <p>For more information about using the script, see <a
     * href="https://docs.aws.amazon.com/deadline-cloud/latest/developerguide/smf-admin.html">Run
     * scripts as an administrator to configure workers</a> in the <i>Deadline Cloud
     * Developer Guide</i>. </p>  <p>The script runs as an administrative
     * user (<code>sudo root</code> on Linux, as an Administrator on Windows). </p>
     * 
     */
    inline const Aws::String& GetScriptBody() const { return m_scriptBody; }
    inline bool ScriptBodyHasBeenSet() const { return m_scriptBodyHasBeenSet; }
    template<typename ScriptBodyT = Aws::String>
    void SetScriptBody(ScriptBodyT&& value) { m_scriptBodyHasBeenSet = true; m_scriptBody = std::forward<ScriptBodyT>(value); }
    template<typename ScriptBodyT = Aws::String>
    HostConfiguration& WithScriptBody(ScriptBodyT&& value) { SetScriptBody(std::forward<ScriptBodyT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum time that the host configuration can run. If the timeout expires,
     * the worker enters the <code>NOT RESPONDING</code> state and shuts down. You are
     * charged for the time that the worker is running the host configuration
     * script.</p>  <p>You should configure your fleet for a maximum of one
     * worker while testing your host configuration script to avoid starting additional
     * workers.</p>  <p>The default is 300 seconds (5 minutes).</p>
     */
    inline int GetScriptTimeoutSeconds() const { return m_scriptTimeoutSeconds; }
    inline bool ScriptTimeoutSecondsHasBeenSet() const { return m_scriptTimeoutSecondsHasBeenSet; }
    inline void SetScriptTimeoutSeconds(int value) { m_scriptTimeoutSecondsHasBeenSet = true; m_scriptTimeoutSeconds = value; }
    inline HostConfiguration& WithScriptTimeoutSeconds(int value) { SetScriptTimeoutSeconds(value); return *this;}
    ///@}
  private:

    Aws::String m_scriptBody;
    bool m_scriptBodyHasBeenSet = false;

    int m_scriptTimeoutSeconds{0};
    bool m_scriptTimeoutSecondsHasBeenSet = false;
  };

} // namespace Model
} // namespace deadline
} // namespace Aws
