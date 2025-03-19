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
   * <p>Container volume mount.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/guardduty-2017-11-28/VolumeMount">AWS
   * API Reference</a></p>
   */
  class VolumeMount
  {
  public:
    AWS_GUARDDUTY_API VolumeMount() = default;
    AWS_GUARDDUTY_API VolumeMount(Aws::Utils::Json::JsonView jsonValue);
    AWS_GUARDDUTY_API VolumeMount& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GUARDDUTY_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Volume mount name.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    VolumeMount& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Volume mount path.</p>
     */
    inline const Aws::String& GetMountPath() const { return m_mountPath; }
    inline bool MountPathHasBeenSet() const { return m_mountPathHasBeenSet; }
    template<typename MountPathT = Aws::String>
    void SetMountPath(MountPathT&& value) { m_mountPathHasBeenSet = true; m_mountPath = std::forward<MountPathT>(value); }
    template<typename MountPathT = Aws::String>
    VolumeMount& WithMountPath(MountPathT&& value) { SetMountPath(std::forward<MountPathT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_mountPath;
    bool m_mountPathHasBeenSet = false;
  };

} // namespace Model
} // namespace GuardDuty
} // namespace Aws
