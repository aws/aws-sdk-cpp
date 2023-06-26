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
    AWS_EMRCONTAINERS_API ContainerLogRotationConfiguration();
    AWS_EMRCONTAINERS_API ContainerLogRotationConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_EMRCONTAINERS_API ContainerLogRotationConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_EMRCONTAINERS_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The file size at which to rotate logs. Minimum of 2KB, Maximum of 2GB.</p>
     */
    inline const Aws::String& GetRotationSize() const{ return m_rotationSize; }

    /**
     * <p>The file size at which to rotate logs. Minimum of 2KB, Maximum of 2GB.</p>
     */
    inline bool RotationSizeHasBeenSet() const { return m_rotationSizeHasBeenSet; }

    /**
     * <p>The file size at which to rotate logs. Minimum of 2KB, Maximum of 2GB.</p>
     */
    inline void SetRotationSize(const Aws::String& value) { m_rotationSizeHasBeenSet = true; m_rotationSize = value; }

    /**
     * <p>The file size at which to rotate logs. Minimum of 2KB, Maximum of 2GB.</p>
     */
    inline void SetRotationSize(Aws::String&& value) { m_rotationSizeHasBeenSet = true; m_rotationSize = std::move(value); }

    /**
     * <p>The file size at which to rotate logs. Minimum of 2KB, Maximum of 2GB.</p>
     */
    inline void SetRotationSize(const char* value) { m_rotationSizeHasBeenSet = true; m_rotationSize.assign(value); }

    /**
     * <p>The file size at which to rotate logs. Minimum of 2KB, Maximum of 2GB.</p>
     */
    inline ContainerLogRotationConfiguration& WithRotationSize(const Aws::String& value) { SetRotationSize(value); return *this;}

    /**
     * <p>The file size at which to rotate logs. Minimum of 2KB, Maximum of 2GB.</p>
     */
    inline ContainerLogRotationConfiguration& WithRotationSize(Aws::String&& value) { SetRotationSize(std::move(value)); return *this;}

    /**
     * <p>The file size at which to rotate logs. Minimum of 2KB, Maximum of 2GB.</p>
     */
    inline ContainerLogRotationConfiguration& WithRotationSize(const char* value) { SetRotationSize(value); return *this;}


    /**
     * <p>The number of files to keep in container after rotation.</p>
     */
    inline int GetMaxFilesToKeep() const{ return m_maxFilesToKeep; }

    /**
     * <p>The number of files to keep in container after rotation.</p>
     */
    inline bool MaxFilesToKeepHasBeenSet() const { return m_maxFilesToKeepHasBeenSet; }

    /**
     * <p>The number of files to keep in container after rotation.</p>
     */
    inline void SetMaxFilesToKeep(int value) { m_maxFilesToKeepHasBeenSet = true; m_maxFilesToKeep = value; }

    /**
     * <p>The number of files to keep in container after rotation.</p>
     */
    inline ContainerLogRotationConfiguration& WithMaxFilesToKeep(int value) { SetMaxFilesToKeep(value); return *this;}

  private:

    Aws::String m_rotationSize;
    bool m_rotationSizeHasBeenSet = false;

    int m_maxFilesToKeep;
    bool m_maxFilesToKeepHasBeenSet = false;
  };

} // namespace Model
} // namespace EMRContainers
} // namespace Aws
