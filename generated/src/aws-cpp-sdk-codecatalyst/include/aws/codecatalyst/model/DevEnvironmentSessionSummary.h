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
    AWS_CODECATALYST_API DevEnvironmentSessionSummary() = default;
    AWS_CODECATALYST_API DevEnvironmentSessionSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODECATALYST_API DevEnvironmentSessionSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODECATALYST_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the space.</p>
     */
    inline const Aws::String& GetSpaceName() const { return m_spaceName; }
    inline bool SpaceNameHasBeenSet() const { return m_spaceNameHasBeenSet; }
    template<typename SpaceNameT = Aws::String>
    void SetSpaceName(SpaceNameT&& value) { m_spaceNameHasBeenSet = true; m_spaceName = std::forward<SpaceNameT>(value); }
    template<typename SpaceNameT = Aws::String>
    DevEnvironmentSessionSummary& WithSpaceName(SpaceNameT&& value) { SetSpaceName(std::forward<SpaceNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the project in the space.</p>
     */
    inline const Aws::String& GetProjectName() const { return m_projectName; }
    inline bool ProjectNameHasBeenSet() const { return m_projectNameHasBeenSet; }
    template<typename ProjectNameT = Aws::String>
    void SetProjectName(ProjectNameT&& value) { m_projectNameHasBeenSet = true; m_projectName = std::forward<ProjectNameT>(value); }
    template<typename ProjectNameT = Aws::String>
    DevEnvironmentSessionSummary& WithProjectName(ProjectNameT&& value) { SetProjectName(std::forward<ProjectNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The system-generated unique ID of the Dev Environment.</p>
     */
    inline const Aws::String& GetDevEnvironmentId() const { return m_devEnvironmentId; }
    inline bool DevEnvironmentIdHasBeenSet() const { return m_devEnvironmentIdHasBeenSet; }
    template<typename DevEnvironmentIdT = Aws::String>
    void SetDevEnvironmentId(DevEnvironmentIdT&& value) { m_devEnvironmentIdHasBeenSet = true; m_devEnvironmentId = std::forward<DevEnvironmentIdT>(value); }
    template<typename DevEnvironmentIdT = Aws::String>
    DevEnvironmentSessionSummary& WithDevEnvironmentId(DevEnvironmentIdT&& value) { SetDevEnvironmentId(std::forward<DevEnvironmentIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time the session started, in coordinated universal time (UTC)
     * timestamp format as specified in <a
     * href="https://www.rfc-editor.org/rfc/rfc3339#section-5.6">RFC 3339</a> </p>
     */
    inline const Aws::Utils::DateTime& GetStartedTime() const { return m_startedTime; }
    inline bool StartedTimeHasBeenSet() const { return m_startedTimeHasBeenSet; }
    template<typename StartedTimeT = Aws::Utils::DateTime>
    void SetStartedTime(StartedTimeT&& value) { m_startedTimeHasBeenSet = true; m_startedTime = std::forward<StartedTimeT>(value); }
    template<typename StartedTimeT = Aws::Utils::DateTime>
    DevEnvironmentSessionSummary& WithStartedTime(StartedTimeT&& value) { SetStartedTime(std::forward<StartedTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The system-generated unique ID of the Dev Environment session.</p>
     */
    inline const Aws::String& GetId() const { return m_id; }
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
    template<typename IdT = Aws::String>
    void SetId(IdT&& value) { m_idHasBeenSet = true; m_id = std::forward<IdT>(value); }
    template<typename IdT = Aws::String>
    DevEnvironmentSessionSummary& WithId(IdT&& value) { SetId(std::forward<IdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_spaceName;
    bool m_spaceNameHasBeenSet = false;

    Aws::String m_projectName;
    bool m_projectNameHasBeenSet = false;

    Aws::String m_devEnvironmentId;
    bool m_devEnvironmentIdHasBeenSet = false;

    Aws::Utils::DateTime m_startedTime{};
    bool m_startedTimeHasBeenSet = false;

    Aws::String m_id;
    bool m_idHasBeenSet = false;
  };

} // namespace Model
} // namespace CodeCatalyst
} // namespace Aws
