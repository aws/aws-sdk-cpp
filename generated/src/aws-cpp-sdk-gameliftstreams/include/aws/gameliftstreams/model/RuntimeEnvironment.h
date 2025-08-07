/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/gameliftstreams/GameLiftStreams_EXPORTS.h>
#include <aws/gameliftstreams/model/RuntimeEnvironmentType.h>
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
namespace GameLiftStreams
{
namespace Model
{

  /**
   * <p>Configuration settings that identify the operating system for an application
   * resource. This can also include a compatibility layer and other drivers.</p>
   * <p>A runtime environment can be one of the following:</p> <ul> <li> <p> For
   * Linux applications </p> <ul> <li> <p> Ubuntu 22.04 LTS (<code>Type=UBUNTU,
   * Version=22_04_LTS</code>) </p> </li> </ul> </li> <li> <p> For Windows
   * applications </p> <ul> <li> <p>Microsoft Windows Server 2022 Base
   * (<code>Type=WINDOWS, Version=2022</code>)</p> </li> <li> <p>Proton 9.0-2
   * (<code>Type=PROTON, Version=20250516</code>)</p> </li> <li> <p>Proton 8.0-5
   * (<code>Type=PROTON, Version=20241007</code>)</p> </li> <li> <p>Proton 8.0-2c
   * (<code>Type=PROTON, Version=20230704</code>)</p> </li> </ul> </li>
   * </ul><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/gameliftstreams-2018-05-10/RuntimeEnvironment">AWS
   * API Reference</a></p>
   */
  class RuntimeEnvironment
  {
  public:
    AWS_GAMELIFTSTREAMS_API RuntimeEnvironment() = default;
    AWS_GAMELIFTSTREAMS_API RuntimeEnvironment(Aws::Utils::Json::JsonView jsonValue);
    AWS_GAMELIFTSTREAMS_API RuntimeEnvironment& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GAMELIFTSTREAMS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The operating system and other drivers. For Proton, this also includes the
     * Proton compatibility layer.</p>
     */
    inline RuntimeEnvironmentType GetType() const { return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(RuntimeEnvironmentType value) { m_typeHasBeenSet = true; m_type = value; }
    inline RuntimeEnvironment& WithType(RuntimeEnvironmentType value) { SetType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Versioned container environment for the application operating system.</p>
     */
    inline const Aws::String& GetVersion() const { return m_version; }
    inline bool VersionHasBeenSet() const { return m_versionHasBeenSet; }
    template<typename VersionT = Aws::String>
    void SetVersion(VersionT&& value) { m_versionHasBeenSet = true; m_version = std::forward<VersionT>(value); }
    template<typename VersionT = Aws::String>
    RuntimeEnvironment& WithVersion(VersionT&& value) { SetVersion(std::forward<VersionT>(value)); return *this;}
    ///@}
  private:

    RuntimeEnvironmentType m_type{RuntimeEnvironmentType::NOT_SET};
    bool m_typeHasBeenSet = false;

    Aws::String m_version;
    bool m_versionHasBeenSet = false;
  };

} // namespace Model
} // namespace GameLiftStreams
} // namespace Aws
