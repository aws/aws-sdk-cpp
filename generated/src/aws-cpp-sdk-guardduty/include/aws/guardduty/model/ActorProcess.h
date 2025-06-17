/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/guardduty/GuardDuty_EXPORTS.h>
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
namespace GuardDuty
{
namespace Model
{

  /**
   * <p>Contains information about a process involved in a GuardDuty finding,
   * including process identification, execution details, and file
   * information.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/guardduty-2017-11-28/ActorProcess">AWS
   * API Reference</a></p>
   */
  class ActorProcess
  {
  public:
    AWS_GUARDDUTY_API ActorProcess() = default;
    AWS_GUARDDUTY_API ActorProcess(Aws::Utils::Json::JsonView jsonValue);
    AWS_GUARDDUTY_API ActorProcess& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GUARDDUTY_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the process as it appears in the system.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    ActorProcess& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The full file path to the process executable on the system.</p>
     */
    inline const Aws::String& GetPath() const { return m_path; }
    inline bool PathHasBeenSet() const { return m_pathHasBeenSet; }
    template<typename PathT = Aws::String>
    void SetPath(PathT&& value) { m_pathHasBeenSet = true; m_path = std::forward<PathT>(value); }
    template<typename PathT = Aws::String>
    ActorProcess& WithPath(PathT&& value) { SetPath(std::forward<PathT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The SHA256 hash of the process executable file, which can be used for
     * identification and verification purposes.</p>
     */
    inline const Aws::String& GetSha256() const { return m_sha256; }
    inline bool Sha256HasBeenSet() const { return m_sha256HasBeenSet; }
    template<typename Sha256T = Aws::String>
    void SetSha256(Sha256T&& value) { m_sha256HasBeenSet = true; m_sha256 = std::forward<Sha256T>(value); }
    template<typename Sha256T = Aws::String>
    ActorProcess& WithSha256(Sha256T&& value) { SetSha256(std::forward<Sha256T>(value)); return *this;}
    ///@}
  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_path;
    bool m_pathHasBeenSet = false;

    Aws::String m_sha256;
    bool m_sha256HasBeenSet = false;
  };

} // namespace Model
} // namespace GuardDuty
} // namespace Aws
