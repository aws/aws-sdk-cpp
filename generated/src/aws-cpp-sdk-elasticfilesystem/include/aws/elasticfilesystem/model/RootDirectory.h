/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/elasticfilesystem/EFS_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/elasticfilesystem/model/CreationInfo.h>
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
namespace EFS
{
namespace Model
{

  /**
   * <p>Specifies the directory on the Amazon EFS file system that the access point
   * provides access to. The access point exposes the specified file system path as
   * the root directory of your file system to applications using the access point.
   * NFS clients using the access point can only access data in the access point's
   * <code>RootDirectory</code> and it's subdirectories.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/elasticfilesystem-2015-02-01/RootDirectory">AWS
   * API Reference</a></p>
   */
  class RootDirectory
  {
  public:
    AWS_EFS_API RootDirectory();
    AWS_EFS_API RootDirectory(Aws::Utils::Json::JsonView jsonValue);
    AWS_EFS_API RootDirectory& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_EFS_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Specifies the path on the EFS file system to expose as the root directory to
     * NFS clients using the access point to access the EFS file system. A path can
     * have up to four subdirectories. If the specified path does not exist, you are
     * required to provide the <code>CreationInfo</code>.</p>
     */
    inline const Aws::String& GetPath() const{ return m_path; }

    /**
     * <p>Specifies the path on the EFS file system to expose as the root directory to
     * NFS clients using the access point to access the EFS file system. A path can
     * have up to four subdirectories. If the specified path does not exist, you are
     * required to provide the <code>CreationInfo</code>.</p>
     */
    inline bool PathHasBeenSet() const { return m_pathHasBeenSet; }

    /**
     * <p>Specifies the path on the EFS file system to expose as the root directory to
     * NFS clients using the access point to access the EFS file system. A path can
     * have up to four subdirectories. If the specified path does not exist, you are
     * required to provide the <code>CreationInfo</code>.</p>
     */
    inline void SetPath(const Aws::String& value) { m_pathHasBeenSet = true; m_path = value; }

    /**
     * <p>Specifies the path on the EFS file system to expose as the root directory to
     * NFS clients using the access point to access the EFS file system. A path can
     * have up to four subdirectories. If the specified path does not exist, you are
     * required to provide the <code>CreationInfo</code>.</p>
     */
    inline void SetPath(Aws::String&& value) { m_pathHasBeenSet = true; m_path = std::move(value); }

    /**
     * <p>Specifies the path on the EFS file system to expose as the root directory to
     * NFS clients using the access point to access the EFS file system. A path can
     * have up to four subdirectories. If the specified path does not exist, you are
     * required to provide the <code>CreationInfo</code>.</p>
     */
    inline void SetPath(const char* value) { m_pathHasBeenSet = true; m_path.assign(value); }

    /**
     * <p>Specifies the path on the EFS file system to expose as the root directory to
     * NFS clients using the access point to access the EFS file system. A path can
     * have up to four subdirectories. If the specified path does not exist, you are
     * required to provide the <code>CreationInfo</code>.</p>
     */
    inline RootDirectory& WithPath(const Aws::String& value) { SetPath(value); return *this;}

    /**
     * <p>Specifies the path on the EFS file system to expose as the root directory to
     * NFS clients using the access point to access the EFS file system. A path can
     * have up to four subdirectories. If the specified path does not exist, you are
     * required to provide the <code>CreationInfo</code>.</p>
     */
    inline RootDirectory& WithPath(Aws::String&& value) { SetPath(std::move(value)); return *this;}

    /**
     * <p>Specifies the path on the EFS file system to expose as the root directory to
     * NFS clients using the access point to access the EFS file system. A path can
     * have up to four subdirectories. If the specified path does not exist, you are
     * required to provide the <code>CreationInfo</code>.</p>
     */
    inline RootDirectory& WithPath(const char* value) { SetPath(value); return *this;}


    /**
     * <p>(Optional) Specifies the POSIX IDs and permissions to apply to the access
     * point's <code>RootDirectory</code>. If the <code>RootDirectory</code> &gt;
     * <code>Path</code> specified does not exist, EFS creates the root directory using
     * the <code>CreationInfo</code> settings when a client connects to an access
     * point. When specifying the <code>CreationInfo</code>, you must provide values
     * for all properties. </p>  <p>If you do not provide
     * <code>CreationInfo</code> and the specified <code>RootDirectory</code> &gt;
     * <code>Path</code> does not exist, attempts to mount the file system using the
     * access point will fail.</p> 
     */
    inline const CreationInfo& GetCreationInfo() const{ return m_creationInfo; }

    /**
     * <p>(Optional) Specifies the POSIX IDs and permissions to apply to the access
     * point's <code>RootDirectory</code>. If the <code>RootDirectory</code> &gt;
     * <code>Path</code> specified does not exist, EFS creates the root directory using
     * the <code>CreationInfo</code> settings when a client connects to an access
     * point. When specifying the <code>CreationInfo</code>, you must provide values
     * for all properties. </p>  <p>If you do not provide
     * <code>CreationInfo</code> and the specified <code>RootDirectory</code> &gt;
     * <code>Path</code> does not exist, attempts to mount the file system using the
     * access point will fail.</p> 
     */
    inline bool CreationInfoHasBeenSet() const { return m_creationInfoHasBeenSet; }

    /**
     * <p>(Optional) Specifies the POSIX IDs and permissions to apply to the access
     * point's <code>RootDirectory</code>. If the <code>RootDirectory</code> &gt;
     * <code>Path</code> specified does not exist, EFS creates the root directory using
     * the <code>CreationInfo</code> settings when a client connects to an access
     * point. When specifying the <code>CreationInfo</code>, you must provide values
     * for all properties. </p>  <p>If you do not provide
     * <code>CreationInfo</code> and the specified <code>RootDirectory</code> &gt;
     * <code>Path</code> does not exist, attempts to mount the file system using the
     * access point will fail.</p> 
     */
    inline void SetCreationInfo(const CreationInfo& value) { m_creationInfoHasBeenSet = true; m_creationInfo = value; }

    /**
     * <p>(Optional) Specifies the POSIX IDs and permissions to apply to the access
     * point's <code>RootDirectory</code>. If the <code>RootDirectory</code> &gt;
     * <code>Path</code> specified does not exist, EFS creates the root directory using
     * the <code>CreationInfo</code> settings when a client connects to an access
     * point. When specifying the <code>CreationInfo</code>, you must provide values
     * for all properties. </p>  <p>If you do not provide
     * <code>CreationInfo</code> and the specified <code>RootDirectory</code> &gt;
     * <code>Path</code> does not exist, attempts to mount the file system using the
     * access point will fail.</p> 
     */
    inline void SetCreationInfo(CreationInfo&& value) { m_creationInfoHasBeenSet = true; m_creationInfo = std::move(value); }

    /**
     * <p>(Optional) Specifies the POSIX IDs and permissions to apply to the access
     * point's <code>RootDirectory</code>. If the <code>RootDirectory</code> &gt;
     * <code>Path</code> specified does not exist, EFS creates the root directory using
     * the <code>CreationInfo</code> settings when a client connects to an access
     * point. When specifying the <code>CreationInfo</code>, you must provide values
     * for all properties. </p>  <p>If you do not provide
     * <code>CreationInfo</code> and the specified <code>RootDirectory</code> &gt;
     * <code>Path</code> does not exist, attempts to mount the file system using the
     * access point will fail.</p> 
     */
    inline RootDirectory& WithCreationInfo(const CreationInfo& value) { SetCreationInfo(value); return *this;}

    /**
     * <p>(Optional) Specifies the POSIX IDs and permissions to apply to the access
     * point's <code>RootDirectory</code>. If the <code>RootDirectory</code> &gt;
     * <code>Path</code> specified does not exist, EFS creates the root directory using
     * the <code>CreationInfo</code> settings when a client connects to an access
     * point. When specifying the <code>CreationInfo</code>, you must provide values
     * for all properties. </p>  <p>If you do not provide
     * <code>CreationInfo</code> and the specified <code>RootDirectory</code> &gt;
     * <code>Path</code> does not exist, attempts to mount the file system using the
     * access point will fail.</p> 
     */
    inline RootDirectory& WithCreationInfo(CreationInfo&& value) { SetCreationInfo(std::move(value)); return *this;}

  private:

    Aws::String m_path;
    bool m_pathHasBeenSet = false;

    CreationInfo m_creationInfo;
    bool m_creationInfoHasBeenSet = false;
  };

} // namespace Model
} // namespace EFS
} // namespace Aws
