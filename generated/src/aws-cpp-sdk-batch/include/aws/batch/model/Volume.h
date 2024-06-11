﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/batch/Batch_EXPORTS.h>
#include <aws/batch/model/Host.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/batch/model/EFSVolumeConfiguration.h>
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
namespace Batch
{
namespace Model
{

  /**
   * <p>A data volume that's used in a job's container properties.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/batch-2016-08-10/Volume">AWS API
   * Reference</a></p>
   */
  class Volume
  {
  public:
    AWS_BATCH_API Volume();
    AWS_BATCH_API Volume(Aws::Utils::Json::JsonView jsonValue);
    AWS_BATCH_API Volume& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BATCH_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The contents of the <code>host</code> parameter determine whether your data
     * volume persists on the host container instance and where it's stored. If the
     * host parameter is empty, then the Docker daemon assigns a host path for your
     * data volume. However, the data isn't guaranteed to persist after the containers
     * that are associated with it stop running.</p>  <p>This parameter isn't
     * applicable to jobs that are running on Fargate resources and shouldn't be
     * provided.</p> 
     */
    inline const Host& GetHost() const{ return m_host; }
    inline bool HostHasBeenSet() const { return m_hostHasBeenSet; }
    inline void SetHost(const Host& value) { m_hostHasBeenSet = true; m_host = value; }
    inline void SetHost(Host&& value) { m_hostHasBeenSet = true; m_host = std::move(value); }
    inline Volume& WithHost(const Host& value) { SetHost(value); return *this;}
    inline Volume& WithHost(Host&& value) { SetHost(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the volume. It can be up to 255 characters long. It can contain
     * uppercase and lowercase letters, numbers, hyphens (-), and underscores (_). This
     * name is referenced in the <code>sourceVolume</code> parameter of container
     * definition <code>mountPoints</code>.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline Volume& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline Volume& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline Volume& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>This parameter is specified when you're using an Amazon Elastic File System
     * file system for job storage. Jobs that are running on Fargate resources must
     * specify a <code>platformVersion</code> of at least <code>1.4.0</code>.</p>
     */
    inline const EFSVolumeConfiguration& GetEfsVolumeConfiguration() const{ return m_efsVolumeConfiguration; }
    inline bool EfsVolumeConfigurationHasBeenSet() const { return m_efsVolumeConfigurationHasBeenSet; }
    inline void SetEfsVolumeConfiguration(const EFSVolumeConfiguration& value) { m_efsVolumeConfigurationHasBeenSet = true; m_efsVolumeConfiguration = value; }
    inline void SetEfsVolumeConfiguration(EFSVolumeConfiguration&& value) { m_efsVolumeConfigurationHasBeenSet = true; m_efsVolumeConfiguration = std::move(value); }
    inline Volume& WithEfsVolumeConfiguration(const EFSVolumeConfiguration& value) { SetEfsVolumeConfiguration(value); return *this;}
    inline Volume& WithEfsVolumeConfiguration(EFSVolumeConfiguration&& value) { SetEfsVolumeConfiguration(std::move(value)); return *this;}
    ///@}
  private:

    Host m_host;
    bool m_hostHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    EFSVolumeConfiguration m_efsVolumeConfiguration;
    bool m_efsVolumeConfigurationHasBeenSet = false;
  };

} // namespace Model
} // namespace Batch
} // namespace Aws
