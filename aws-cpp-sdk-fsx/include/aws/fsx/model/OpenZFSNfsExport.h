/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/fsx/FSx_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/fsx/model/OpenZFSClientConfiguration.h>
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
namespace FSx
{
namespace Model
{

  /**
   * <p>The Network File System (NFS) configurations for mounting an Amazon FSx for
   * OpenZFS file system. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/fsx-2018-03-01/OpenZFSNfsExport">AWS
   * API Reference</a></p>
   */
  class OpenZFSNfsExport
  {
  public:
    AWS_FSX_API OpenZFSNfsExport();
    AWS_FSX_API OpenZFSNfsExport(Aws::Utils::Json::JsonView jsonValue);
    AWS_FSX_API OpenZFSNfsExport& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_FSX_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>A list of configuration objects that contain the client and options for
     * mounting the OpenZFS file system. </p>
     */
    inline const Aws::Vector<OpenZFSClientConfiguration>& GetClientConfigurations() const{ return m_clientConfigurations; }

    /**
     * <p>A list of configuration objects that contain the client and options for
     * mounting the OpenZFS file system. </p>
     */
    inline bool ClientConfigurationsHasBeenSet() const { return m_clientConfigurationsHasBeenSet; }

    /**
     * <p>A list of configuration objects that contain the client and options for
     * mounting the OpenZFS file system. </p>
     */
    inline void SetClientConfigurations(const Aws::Vector<OpenZFSClientConfiguration>& value) { m_clientConfigurationsHasBeenSet = true; m_clientConfigurations = value; }

    /**
     * <p>A list of configuration objects that contain the client and options for
     * mounting the OpenZFS file system. </p>
     */
    inline void SetClientConfigurations(Aws::Vector<OpenZFSClientConfiguration>&& value) { m_clientConfigurationsHasBeenSet = true; m_clientConfigurations = std::move(value); }

    /**
     * <p>A list of configuration objects that contain the client and options for
     * mounting the OpenZFS file system. </p>
     */
    inline OpenZFSNfsExport& WithClientConfigurations(const Aws::Vector<OpenZFSClientConfiguration>& value) { SetClientConfigurations(value); return *this;}

    /**
     * <p>A list of configuration objects that contain the client and options for
     * mounting the OpenZFS file system. </p>
     */
    inline OpenZFSNfsExport& WithClientConfigurations(Aws::Vector<OpenZFSClientConfiguration>&& value) { SetClientConfigurations(std::move(value)); return *this;}

    /**
     * <p>A list of configuration objects that contain the client and options for
     * mounting the OpenZFS file system. </p>
     */
    inline OpenZFSNfsExport& AddClientConfigurations(const OpenZFSClientConfiguration& value) { m_clientConfigurationsHasBeenSet = true; m_clientConfigurations.push_back(value); return *this; }

    /**
     * <p>A list of configuration objects that contain the client and options for
     * mounting the OpenZFS file system. </p>
     */
    inline OpenZFSNfsExport& AddClientConfigurations(OpenZFSClientConfiguration&& value) { m_clientConfigurationsHasBeenSet = true; m_clientConfigurations.push_back(std::move(value)); return *this; }

  private:

    Aws::Vector<OpenZFSClientConfiguration> m_clientConfigurations;
    bool m_clientConfigurationsHasBeenSet = false;
  };

} // namespace Model
} // namespace FSx
} // namespace Aws
