/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codecatalyst/CodeCatalyst_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
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
namespace CodeCatalyst
{
namespace Model
{

  /**
   * <p>Information about active sessions for a Dev Environment.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/codecatalyst-2022-09-28/DevEnvironmentSessionSummary">AWS
   * API Reference</a></p>
   */
  class DevEnvironmentSessionSummary
  {
  public:
    AWS_CODECATALYST_API DevEnvironmentSessionSummary();
    AWS_CODECATALYST_API DevEnvironmentSessionSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODECATALYST_API DevEnvironmentSessionSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODECATALYST_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the space.</p>
     */
    inline const Aws::String& GetSpaceName() const{ return m_spaceName; }
    inline bool SpaceNameHasBeenSet() const { return m_spaceNameHasBeenSet; }
    inline void SetSpaceName(const Aws::String& value) { m_spaceNameHasBeenSet = true; m_spaceName = value; }
    inline void SetSpaceName(Aws::String&& value) { m_spaceNameHasBeenSet = true; m_spaceName = std::move(value); }
    inline void SetSpaceName(const char* value) { m_spaceNameHasBeenSet = true; m_spaceName.assign(value); }
    inline DevEnvironmentSessionSummary& WithSpaceName(const Aws::String& value) { SetSpaceName(value); return *this;}
    inline DevEnvironmentSessionSummary& WithSpaceName(Aws::String&& value) { SetSpaceName(std::move(value)); return *this;}
    inline DevEnvironmentSessionSummary& WithSpaceName(const char* value) { SetSpaceName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the project in the space.</p>
     */
    inline const Aws::String& GetProjectName() const{ return m_projectName; }
    inline bool ProjectNameHasBeenSet() const { return m_projectNameHasBeenSet; }
    inline void SetProjectName(const Aws::String& value) { m_projectNameHasBeenSet = true; m_projectName = value; }
    inline void SetProjectName(Aws::String&& value) { m_projectNameHasBeenSet = true; m_projectName = std::move(value); }
    inline void SetProjectName(const char* value) { m_projectNameHasBeenSet = true; m_projectName.assign(value); }
    inline DevEnvironmentSessionSummary& WithProjectName(const Aws::String& value) { SetProjectName(value); return *this;}
    inline DevEnvironmentSessionSummary& WithProjectName(Aws::String&& value) { SetProjectName(std::move(value)); return *this;}
    inline DevEnvironmentSessionSummary& WithProjectName(const char* value) { SetProjectName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The system-generated unique ID of the Dev Environment.</p>
     */
    inline const Aws::String& GetDevEnvironmentId() const{ return m_devEnvironmentId; }
    inline bool DevEnvironmentIdHasBeenSet() const { return m_devEnvironmentIdHasBeenSet; }
    inline void SetDevEnvironmentId(const Aws::String& value) { m_devEnvironmentIdHasBeenSet = true; m_devEnvironmentId = value; }
    inline void SetDevEnvironmentId(Aws::String&& value) { m_devEnvironmentIdHasBeenSet = true; m_devEnvironmentId = std::move(value); }
    inline void SetDevEnvironmentId(const char* value) { m_devEnvironmentIdHasBeenSet = true; m_devEnvironmentId.assign(value); }
    inline DevEnvironmentSessionSummary& WithDevEnvironmentId(const Aws::String& value) { SetDevEnvironmentId(value); return *this;}
    inline DevEnvironmentSessionSummary& WithDevEnvironmentId(Aws::String&& value) { SetDevEnvironmentId(std::move(value)); return *this;}
    inline DevEnvironmentSessionSummary& WithDevEnvironmentId(const char* value) { SetDevEnvironmentId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time the session started, in coordinated universal time (UTC)
     * timestamp format as specified in <a
     * href="https://www.rfc-editor.org/rfc/rfc3339#section-5.6">RFC 3339</a> </p>
     */
    inline const Aws::Utils::DateTime& GetStartedTime() const{ return m_startedTime; }
    inline bool StartedTimeHasBeenSet() const { return m_startedTimeHasBeenSet; }
    inline void SetStartedTime(const Aws::Utils::DateTime& value) { m_startedTimeHasBeenSet = true; m_startedTime = value; }
    inline void SetStartedTime(Aws::Utils::DateTime&& value) { m_startedTimeHasBeenSet = true; m_startedTime = std::move(value); }
    inline DevEnvironmentSessionSummary& WithStartedTime(const Aws::Utils::DateTime& value) { SetStartedTime(value); return *this;}
    inline DevEnvironmentSessionSummary& WithStartedTime(Aws::Utils::DateTime&& value) { SetStartedTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The system-generated unique ID of the Dev Environment session.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }
    inline DevEnvironmentSessionSummary& WithId(const Aws::String& value) { SetId(value); return *this;}
    inline DevEnvironmentSessionSummary& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}
    inline DevEnvironmentSessionSummary& WithId(const char* value) { SetId(value); return *this;}
    ///@}
  private:

    Aws::String m_spaceName;
    bool m_spaceNameHasBeenSet = false;

    Aws::String m_projectName;
    bool m_projectNameHasBeenSet = false;

    Aws::String m_devEnvironmentId;
    bool m_devEnvironmentIdHasBeenSet = false;

    Aws::Utils::DateTime m_startedTime;
    bool m_startedTimeHasBeenSet = false;

    Aws::String m_id;
    bool m_idHasBeenSet = false;
  };

} // namespace Model
} // namespace CodeCatalyst
} // namespace Aws
