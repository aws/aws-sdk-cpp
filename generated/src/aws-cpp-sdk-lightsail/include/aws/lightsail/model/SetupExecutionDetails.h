﻿/**
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
    AWS_LIGHTSAIL_API SetupExecutionDetails();
    AWS_LIGHTSAIL_API SetupExecutionDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_LIGHTSAIL_API SetupExecutionDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LIGHTSAIL_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The command that was executed.</p>
     */
    inline const Aws::String& GetCommand() const{ return m_command; }
    inline bool CommandHasBeenSet() const { return m_commandHasBeenSet; }
    inline void SetCommand(const Aws::String& value) { m_commandHasBeenSet = true; m_command = value; }
    inline void SetCommand(Aws::String&& value) { m_commandHasBeenSet = true; m_command = std::move(value); }
    inline void SetCommand(const char* value) { m_commandHasBeenSet = true; m_command.assign(value); }
    inline SetupExecutionDetails& WithCommand(const Aws::String& value) { SetCommand(value); return *this;}
    inline SetupExecutionDetails& WithCommand(Aws::String&& value) { SetCommand(std::move(value)); return *this;}
    inline SetupExecutionDetails& WithCommand(const char* value) { SetCommand(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp for when the request was run.</p>
     */
    inline const Aws::Utils::DateTime& GetDateTime() const{ return m_dateTime; }
    inline bool DateTimeHasBeenSet() const { return m_dateTimeHasBeenSet; }
    inline void SetDateTime(const Aws::Utils::DateTime& value) { m_dateTimeHasBeenSet = true; m_dateTime = value; }
    inline void SetDateTime(Aws::Utils::DateTime&& value) { m_dateTimeHasBeenSet = true; m_dateTime = std::move(value); }
    inline SetupExecutionDetails& WithDateTime(const Aws::Utils::DateTime& value) { SetDateTime(value); return *this;}
    inline SetupExecutionDetails& WithDateTime(Aws::Utils::DateTime&& value) { SetDateTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the target resource.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline SetupExecutionDetails& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline SetupExecutionDetails& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline SetupExecutionDetails& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the <code>SetupInstanceHttps</code> request.</p>
     */
    inline const SetupStatus& GetStatus() const{ return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(const SetupStatus& value) { m_statusHasBeenSet = true; m_status = value; }
    inline void SetStatus(SetupStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }
    inline SetupExecutionDetails& WithStatus(const SetupStatus& value) { SetStatus(value); return *this;}
    inline SetupExecutionDetails& WithStatus(SetupStatus&& value) { SetStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The text written by the command to stderr.</p>
     */
    inline const Aws::String& GetStandardError() const{ return m_standardError; }
    inline bool StandardErrorHasBeenSet() const { return m_standardErrorHasBeenSet; }
    inline void SetStandardError(const Aws::String& value) { m_standardErrorHasBeenSet = true; m_standardError = value; }
    inline void SetStandardError(Aws::String&& value) { m_standardErrorHasBeenSet = true; m_standardError = std::move(value); }
    inline void SetStandardError(const char* value) { m_standardErrorHasBeenSet = true; m_standardError.assign(value); }
    inline SetupExecutionDetails& WithStandardError(const Aws::String& value) { SetStandardError(value); return *this;}
    inline SetupExecutionDetails& WithStandardError(Aws::String&& value) { SetStandardError(std::move(value)); return *this;}
    inline SetupExecutionDetails& WithStandardError(const char* value) { SetStandardError(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The text written by the command to stdout.</p>
     */
    inline const Aws::String& GetStandardOutput() const{ return m_standardOutput; }
    inline bool StandardOutputHasBeenSet() const { return m_standardOutputHasBeenSet; }
    inline void SetStandardOutput(const Aws::String& value) { m_standardOutputHasBeenSet = true; m_standardOutput = value; }
    inline void SetStandardOutput(Aws::String&& value) { m_standardOutputHasBeenSet = true; m_standardOutput = std::move(value); }
    inline void SetStandardOutput(const char* value) { m_standardOutputHasBeenSet = true; m_standardOutput.assign(value); }
    inline SetupExecutionDetails& WithStandardOutput(const Aws::String& value) { SetStandardOutput(value); return *this;}
    inline SetupExecutionDetails& WithStandardOutput(Aws::String&& value) { SetStandardOutput(std::move(value)); return *this;}
    inline SetupExecutionDetails& WithStandardOutput(const char* value) { SetStandardOutput(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The current version of the script..</p>
     */
    inline const Aws::String& GetVersion() const{ return m_version; }
    inline bool VersionHasBeenSet() const { return m_versionHasBeenSet; }
    inline void SetVersion(const Aws::String& value) { m_versionHasBeenSet = true; m_version = value; }
    inline void SetVersion(Aws::String&& value) { m_versionHasBeenSet = true; m_version = std::move(value); }
    inline void SetVersion(const char* value) { m_versionHasBeenSet = true; m_version.assign(value); }
    inline SetupExecutionDetails& WithVersion(const Aws::String& value) { SetVersion(value); return *this;}
    inline SetupExecutionDetails& WithVersion(Aws::String&& value) { SetVersion(std::move(value)); return *this;}
    inline SetupExecutionDetails& WithVersion(const char* value) { SetVersion(value); return *this;}
    ///@}
  private:

    Aws::String m_command;
    bool m_commandHasBeenSet = false;

    Aws::Utils::DateTime m_dateTime;
    bool m_dateTimeHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    SetupStatus m_status;
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
