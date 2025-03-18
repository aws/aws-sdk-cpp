/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/emr-containers/EMRContainers_EXPORTS.h>
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
namespace EMRContainers
{
namespace Model
{

  /**
   * <p>The settings for container log rotation.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/emr-containers-2020-10-01/ContainerLogRotationConfiguration">AWS
   * API Reference</a></p>
   */
  class ContainerLogRotationConfiguration
  {
  public:
    AWS_EMRCONTAINERS_API ContainerLogRotationConfiguration() = default;
    AWS_EMRCONTAINERS_API ContainerLogRotationConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_EMRCONTAINERS_API ContainerLogRotationConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_EMRCONTAINERS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The file size at which to rotate logs. Minimum of 2KB, Maximum of 2GB.</p>
     */
    inline const Aws::String& GetRotationSize() const { return m_rotationSize; }
    inline bool RotationSizeHasBeenSet() const { return m_rotationSizeHasBeenSet; }
    template<typename RotationSizeT = Aws::String>
    void SetRotationSize(RotationSizeT&& value) { m_rotationSizeHasBeenSet = true; m_rotationSize = std::forward<RotationSizeT>(value); }
    template<typename RotationSizeT = Aws::String>
    ContainerLogRotationConfiguration& WithRotationSize(RotationSizeT&& value) { SetRotationSize(std::forward<RotationSizeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of files to keep in container after rotation.</p>
     */
    inline int GetMaxFilesToKeep() const { return m_maxFilesToKeep; }
    inline bool MaxFilesToKeepHasBeenSet() const { return m_maxFilesToKeepHasBeenSet; }
    inline void SetMaxFilesToKeep(int value) { m_maxFilesToKeepHasBeenSet = true; m_maxFilesToKeep = value; }
    inline ContainerLogRotationConfiguration& WithMaxFilesToKeep(int value) { SetMaxFilesToKeep(value); return *this;}
    ///@}
  private:

    Aws::String m_rotationSize;
    bool m_rotationSizeHasBeenSet = false;

    int m_maxFilesToKeep{0};
    bool m_maxFilesToKeepHasBeenSet = false;
  };

} // namespace Model
} // namespace EMRContainers
} // namespace Aws
