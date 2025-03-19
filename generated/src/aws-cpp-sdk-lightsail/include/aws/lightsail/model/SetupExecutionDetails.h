/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lightsail/Lightsail_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/lightsail/model/SetupStatus.h>
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
namespace Lightsail
{
namespace Model
{

  /**
   * <p>Returns details about the commands that were run.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/lightsail-2016-11-28/SetupExecutionDetails">AWS
   * API Reference</a></p>
   */
  class SetupExecutionDetails
  {
  public:
    AWS_LIGHTSAIL_API SetupExecutionDetails() = default;
    AWS_LIGHTSAIL_API SetupExecutionDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_LIGHTSAIL_API SetupExecutionDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LIGHTSAIL_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The command that was executed.</p>
     */
    inline const Aws::String& GetCommand() const { return m_command; }
    inline bool CommandHasBeenSet() const { return m_commandHasBeenSet; }
    template<typename CommandT = Aws::String>
    void SetCommand(CommandT&& value) { m_commandHasBeenSet = true; m_command = std::forward<CommandT>(value); }
    template<typename CommandT = Aws::String>
    SetupExecutionDetails& WithCommand(CommandT&& value) { SetCommand(std::forward<CommandT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp for when the request was run.</p>
     */
    inline const Aws::Utils::DateTime& GetDateTime() const { return m_dateTime; }
    inline bool DateTimeHasBeenSet() const { return m_dateTimeHasBeenSet; }
    template<typename DateTimeT = Aws::Utils::DateTime>
    void SetDateTime(DateTimeT&& value) { m_dateTimeHasBeenSet = true; m_dateTime = std::forward<DateTimeT>(value); }
    template<typename DateTimeT = Aws::Utils::DateTime>
    SetupExecutionDetails& WithDateTime(DateTimeT&& value) { SetDateTime(std::forward<DateTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the target resource.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    SetupExecutionDetails& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the <code>SetupInstanceHttps</code> request.</p>
     */
    inline SetupStatus GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(SetupStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline SetupExecutionDetails& WithStatus(SetupStatus value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The text written by the command to stderr.</p>
     */
    inline const Aws::String& GetStandardError() const { return m_standardError; }
    inline bool StandardErrorHasBeenSet() const { return m_standardErrorHasBeenSet; }
    template<typename StandardErrorT = Aws::String>
    void SetStandardError(StandardErrorT&& value) { m_standardErrorHasBeenSet = true; m_standardError = std::forward<StandardErrorT>(value); }
    template<typename StandardErrorT = Aws::String>
    SetupExecutionDetails& WithStandardError(StandardErrorT&& value) { SetStandardError(std::forward<StandardErrorT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The text written by the command to stdout.</p>
     */
    inline const Aws::String& GetStandardOutput() const { return m_standardOutput; }
    inline bool StandardOutputHasBeenSet() const { return m_standardOutputHasBeenSet; }
    template<typename StandardOutputT = Aws::String>
    void SetStandardOutput(StandardOutputT&& value) { m_standardOutputHasBeenSet = true; m_standardOutput = std::forward<StandardOutputT>(value); }
    template<typename StandardOutputT = Aws::String>
    SetupExecutionDetails& WithStandardOutput(StandardOutputT&& value) { SetStandardOutput(std::forward<StandardOutputT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The current version of the script..</p>
     */
    inline const Aws::String& GetVersion() const { return m_version; }
    inline bool VersionHasBeenSet() const { return m_versionHasBeenSet; }
    template<typename VersionT = Aws::String>
    void SetVersion(VersionT&& value) { m_versionHasBeenSet = true; m_version = std::forward<VersionT>(value); }
    template<typename VersionT = Aws::String>
    SetupExecutionDetails& WithVersion(VersionT&& value) { SetVersion(std::forward<VersionT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_command;
    bool m_commandHasBeenSet = false;

    Aws::Utils::DateTime m_dateTime{};
    bool m_dateTimeHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    SetupStatus m_status{SetupStatus::NOT_SET};
    bool m_statusHasBeenSet = false;

    Aws::String m_standardError;
    bool m_standardErrorHasBeenSet = false;

    Aws::String m_standardOutput;
    bool m_standardOutputHasBeenSet = false;

    Aws::String m_version;
    bool m_versionHasBeenSet = false;
  };

} // namespace Model
} // namespace Lightsail
} // namespace Aws
