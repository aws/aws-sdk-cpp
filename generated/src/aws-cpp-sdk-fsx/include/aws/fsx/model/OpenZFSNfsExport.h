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
    AWS_FSX_API OpenZFSNfsExport() = default;
    AWS_FSX_API OpenZFSNfsExport(Aws::Utils::Json::JsonView jsonValue);
    AWS_FSX_API OpenZFSNfsExport& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_FSX_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>A list of configuration objects that contain the client and options for
     * mounting the OpenZFS file system. </p>
     */
    inline const Aws::Vector<OpenZFSClientConfiguration>& GetClientConfigurations() const { return m_clientConfigurations; }
    inline bool ClientConfigurationsHasBeenSet() const { return m_clientConfigurationsHasBeenSet; }
    template<typename ClientConfigurationsT = Aws::Vector<OpenZFSClientConfiguration>>
    void SetClientConfigurations(ClientConfigurationsT&& value) { m_clientConfigurationsHasBeenSet = true; m_clientConfigurations = std::forward<ClientConfigurationsT>(value); }
    template<typename ClientConfigurationsT = Aws::Vector<OpenZFSClientConfiguration>>
    OpenZFSNfsExport& WithClientConfigurations(ClientConfigurationsT&& value) { SetClientConfigurations(std::forward<ClientConfigurationsT>(value)); return *this;}
    template<typename ClientConfigurationsT = OpenZFSClientConfiguration>
    OpenZFSNfsExport& AddClientConfigurations(ClientConfigurationsT&& value) { m_clientConfigurationsHasBeenSet = true; m_clientConfigurations.emplace_back(std::forward<ClientConfigurationsT>(value)); return *this; }
    ///@}
  private:

    Aws::Vector<OpenZFSClientConfiguration> m_clientConfigurations;
    bool m_clientConfigurationsHasBeenSet = false;
  };

} // namespace Model
} // namespace FSx
} // namespace Aws
