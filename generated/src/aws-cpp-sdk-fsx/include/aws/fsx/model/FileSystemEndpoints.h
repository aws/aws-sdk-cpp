/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/fsx/FSx_EXPORTS.h>
#include <aws/fsx/model/FileSystemEndpoint.h>
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
   * <p>An Amazon FSx for NetApp ONTAP file system has the following endpoints that
   * are used to access data or to manage the file system using the NetApp ONTAP CLI,
   * REST API, or NetApp SnapMirror.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/fsx-2018-03-01/FileSystemEndpoints">AWS
   * API Reference</a></p>
   */
  class FileSystemEndpoints
  {
  public:
    AWS_FSX_API FileSystemEndpoints() = default;
    AWS_FSX_API FileSystemEndpoints(Aws::Utils::Json::JsonView jsonValue);
    AWS_FSX_API FileSystemEndpoints& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_FSX_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>An endpoint for managing your file system by setting up NetApp SnapMirror
     * with other ONTAP systems.</p>
     */
    inline const FileSystemEndpoint& GetIntercluster() const { return m_intercluster; }
    inline bool InterclusterHasBeenSet() const { return m_interclusterHasBeenSet; }
    template<typename InterclusterT = FileSystemEndpoint>
    void SetIntercluster(InterclusterT&& value) { m_interclusterHasBeenSet = true; m_intercluster = std::forward<InterclusterT>(value); }
    template<typename InterclusterT = FileSystemEndpoint>
    FileSystemEndpoints& WithIntercluster(InterclusterT&& value) { SetIntercluster(std::forward<InterclusterT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An endpoint for managing your file system using the NetApp ONTAP CLI and
     * NetApp ONTAP API.</p>
     */
    inline const FileSystemEndpoint& GetManagement() const { return m_management; }
    inline bool ManagementHasBeenSet() const { return m_managementHasBeenSet; }
    template<typename ManagementT = FileSystemEndpoint>
    void SetManagement(ManagementT&& value) { m_managementHasBeenSet = true; m_management = std::forward<ManagementT>(value); }
    template<typename ManagementT = FileSystemEndpoint>
    FileSystemEndpoints& WithManagement(ManagementT&& value) { SetManagement(std::forward<ManagementT>(value)); return *this;}
    ///@}
  private:

    FileSystemEndpoint m_intercluster;
    bool m_interclusterHasBeenSet = false;

    FileSystemEndpoint m_management;
    bool m_managementHasBeenSet = false;
  };

} // namespace Model
} // namespace FSx
} // namespace Aws
