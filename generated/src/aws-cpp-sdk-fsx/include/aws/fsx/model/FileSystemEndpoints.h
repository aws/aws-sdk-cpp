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
    AWS_FSX_API FileSystemEndpoints();
    AWS_FSX_API FileSystemEndpoints(Aws::Utils::Json::JsonView jsonValue);
    AWS_FSX_API FileSystemEndpoints& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_FSX_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>An endpoint for managing your file system by setting up NetApp SnapMirror
     * with other ONTAP systems.</p>
     */
    inline const FileSystemEndpoint& GetIntercluster() const{ return m_intercluster; }

    /**
     * <p>An endpoint for managing your file system by setting up NetApp SnapMirror
     * with other ONTAP systems.</p>
     */
    inline bool InterclusterHasBeenSet() const { return m_interclusterHasBeenSet; }

    /**
     * <p>An endpoint for managing your file system by setting up NetApp SnapMirror
     * with other ONTAP systems.</p>
     */
    inline void SetIntercluster(const FileSystemEndpoint& value) { m_interclusterHasBeenSet = true; m_intercluster = value; }

    /**
     * <p>An endpoint for managing your file system by setting up NetApp SnapMirror
     * with other ONTAP systems.</p>
     */
    inline void SetIntercluster(FileSystemEndpoint&& value) { m_interclusterHasBeenSet = true; m_intercluster = std::move(value); }

    /**
     * <p>An endpoint for managing your file system by setting up NetApp SnapMirror
     * with other ONTAP systems.</p>
     */
    inline FileSystemEndpoints& WithIntercluster(const FileSystemEndpoint& value) { SetIntercluster(value); return *this;}

    /**
     * <p>An endpoint for managing your file system by setting up NetApp SnapMirror
     * with other ONTAP systems.</p>
     */
    inline FileSystemEndpoints& WithIntercluster(FileSystemEndpoint&& value) { SetIntercluster(std::move(value)); return *this;}


    /**
     * <p>An endpoint for managing your file system using the NetApp ONTAP CLI and
     * NetApp ONTAP API.</p>
     */
    inline const FileSystemEndpoint& GetManagement() const{ return m_management; }

    /**
     * <p>An endpoint for managing your file system using the NetApp ONTAP CLI and
     * NetApp ONTAP API.</p>
     */
    inline bool ManagementHasBeenSet() const { return m_managementHasBeenSet; }

    /**
     * <p>An endpoint for managing your file system using the NetApp ONTAP CLI and
     * NetApp ONTAP API.</p>
     */
    inline void SetManagement(const FileSystemEndpoint& value) { m_managementHasBeenSet = true; m_management = value; }

    /**
     * <p>An endpoint for managing your file system using the NetApp ONTAP CLI and
     * NetApp ONTAP API.</p>
     */
    inline void SetManagement(FileSystemEndpoint&& value) { m_managementHasBeenSet = true; m_management = std::move(value); }

    /**
     * <p>An endpoint for managing your file system using the NetApp ONTAP CLI and
     * NetApp ONTAP API.</p>
     */
    inline FileSystemEndpoints& WithManagement(const FileSystemEndpoint& value) { SetManagement(value); return *this;}

    /**
     * <p>An endpoint for managing your file system using the NetApp ONTAP CLI and
     * NetApp ONTAP API.</p>
     */
    inline FileSystemEndpoints& WithManagement(FileSystemEndpoint&& value) { SetManagement(std::move(value)); return *this;}

  private:

    FileSystemEndpoint m_intercluster;
    bool m_interclusterHasBeenSet = false;

    FileSystemEndpoint m_management;
    bool m_managementHasBeenSet = false;
  };

} // namespace Model
} // namespace FSx
} // namespace Aws
