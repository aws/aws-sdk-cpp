/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ecs/ECS_EXPORTS.h>
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
namespace ECS
{
namespace Model
{

  /**
   * <p>Details on a data volume from another container in the same task
   * definition.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ecs-2014-11-13/VolumeFrom">AWS API
   * Reference</a></p>
   */
  class VolumeFrom
  {
  public:
    AWS_ECS_API VolumeFrom();
    AWS_ECS_API VolumeFrom(Aws::Utils::Json::JsonView jsonValue);
    AWS_ECS_API VolumeFrom& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_ECS_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name of another container within the same task definition to mount
     * volumes from.</p>
     */
    inline const Aws::String& GetSourceContainer() const{ return m_sourceContainer; }

    /**
     * <p>The name of another container within the same task definition to mount
     * volumes from.</p>
     */
    inline bool SourceContainerHasBeenSet() const { return m_sourceContainerHasBeenSet; }

    /**
     * <p>The name of another container within the same task definition to mount
     * volumes from.</p>
     */
    inline void SetSourceContainer(const Aws::String& value) { m_sourceContainerHasBeenSet = true; m_sourceContainer = value; }

    /**
     * <p>The name of another container within the same task definition to mount
     * volumes from.</p>
     */
    inline void SetSourceContainer(Aws::String&& value) { m_sourceContainerHasBeenSet = true; m_sourceContainer = std::move(value); }

    /**
     * <p>The name of another container within the same task definition to mount
     * volumes from.</p>
     */
    inline void SetSourceContainer(const char* value) { m_sourceContainerHasBeenSet = true; m_sourceContainer.assign(value); }

    /**
     * <p>The name of another container within the same task definition to mount
     * volumes from.</p>
     */
    inline VolumeFrom& WithSourceContainer(const Aws::String& value) { SetSourceContainer(value); return *this;}

    /**
     * <p>The name of another container within the same task definition to mount
     * volumes from.</p>
     */
    inline VolumeFrom& WithSourceContainer(Aws::String&& value) { SetSourceContainer(std::move(value)); return *this;}

    /**
     * <p>The name of another container within the same task definition to mount
     * volumes from.</p>
     */
    inline VolumeFrom& WithSourceContainer(const char* value) { SetSourceContainer(value); return *this;}


    /**
     * <p>If this value is <code>true</code>, the container has read-only access to the
     * volume. If this value is <code>false</code>, then the container can write to the
     * volume. The default value is <code>false</code>.</p>
     */
    inline bool GetReadOnly() const{ return m_readOnly; }

    /**
     * <p>If this value is <code>true</code>, the container has read-only access to the
     * volume. If this value is <code>false</code>, then the container can write to the
     * volume. The default value is <code>false</code>.</p>
     */
    inline bool ReadOnlyHasBeenSet() const { return m_readOnlyHasBeenSet; }

    /**
     * <p>If this value is <code>true</code>, the container has read-only access to the
     * volume. If this value is <code>false</code>, then the container can write to the
     * volume. The default value is <code>false</code>.</p>
     */
    inline void SetReadOnly(bool value) { m_readOnlyHasBeenSet = true; m_readOnly = value; }

    /**
     * <p>If this value is <code>true</code>, the container has read-only access to the
     * volume. If this value is <code>false</code>, then the container can write to the
     * volume. The default value is <code>false</code>.</p>
     */
    inline VolumeFrom& WithReadOnly(bool value) { SetReadOnly(value); return *this;}

  private:

    Aws::String m_sourceContainer;
    bool m_sourceContainerHasBeenSet = false;

    bool m_readOnly;
    bool m_readOnlyHasBeenSet = false;
  };

} // namespace Model
} // namespace ECS
} // namespace Aws
