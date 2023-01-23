/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codebuild/CodeBuild_EXPORTS.h>
#include <aws/codebuild/model/FileSystemType.h>
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
namespace CodeBuild
{
namespace Model
{

  /**
   * <p> Information about a file system created by Amazon Elastic File System (EFS).
   * For more information, see <a
   * href="https://docs.aws.amazon.com/efs/latest/ug/whatisefs.html">What Is Amazon
   * Elastic File System?</a> </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/codebuild-2016-10-06/ProjectFileSystemLocation">AWS
   * API Reference</a></p>
   */
  class ProjectFileSystemLocation
  {
  public:
    AWS_CODEBUILD_API ProjectFileSystemLocation();
    AWS_CODEBUILD_API ProjectFileSystemLocation(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODEBUILD_API ProjectFileSystemLocation& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODEBUILD_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p> The type of the file system. The one supported type is <code>EFS</code>.
     * </p>
     */
    inline const FileSystemType& GetType() const{ return m_type; }

    /**
     * <p> The type of the file system. The one supported type is <code>EFS</code>.
     * </p>
     */
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }

    /**
     * <p> The type of the file system. The one supported type is <code>EFS</code>.
     * </p>
     */
    inline void SetType(const FileSystemType& value) { m_typeHasBeenSet = true; m_type = value; }

    /**
     * <p> The type of the file system. The one supported type is <code>EFS</code>.
     * </p>
     */
    inline void SetType(FileSystemType&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }

    /**
     * <p> The type of the file system. The one supported type is <code>EFS</code>.
     * </p>
     */
    inline ProjectFileSystemLocation& WithType(const FileSystemType& value) { SetType(value); return *this;}

    /**
     * <p> The type of the file system. The one supported type is <code>EFS</code>.
     * </p>
     */
    inline ProjectFileSystemLocation& WithType(FileSystemType&& value) { SetType(std::move(value)); return *this;}


    /**
     * <p>A string that specifies the location of the file system created by Amazon
     * EFS. Its format is <code>efs-dns-name:/directory-path</code>. You can find the
     * DNS name of file system when you view it in the Amazon EFS console. The
     * directory path is a path to a directory in the file system that CodeBuild
     * mounts. For example, if the DNS name of a file system is
     * <code>fs-abcd1234.efs.us-west-2.amazonaws.com</code>, and its mount directory is
     * <code>my-efs-mount-directory</code>, then the <code>location</code> is
     * <code>fs-abcd1234.efs.us-west-2.amazonaws.com:/my-efs-mount-directory</code>.
     * </p> <p>The directory path in the format
     * <code>efs-dns-name:/directory-path</code> is optional. If you do not specify a
     * directory path, the location is only the DNS name and CodeBuild mounts the
     * entire file system. </p>
     */
    inline const Aws::String& GetLocation() const{ return m_location; }

    /**
     * <p>A string that specifies the location of the file system created by Amazon
     * EFS. Its format is <code>efs-dns-name:/directory-path</code>. You can find the
     * DNS name of file system when you view it in the Amazon EFS console. The
     * directory path is a path to a directory in the file system that CodeBuild
     * mounts. For example, if the DNS name of a file system is
     * <code>fs-abcd1234.efs.us-west-2.amazonaws.com</code>, and its mount directory is
     * <code>my-efs-mount-directory</code>, then the <code>location</code> is
     * <code>fs-abcd1234.efs.us-west-2.amazonaws.com:/my-efs-mount-directory</code>.
     * </p> <p>The directory path in the format
     * <code>efs-dns-name:/directory-path</code> is optional. If you do not specify a
     * directory path, the location is only the DNS name and CodeBuild mounts the
     * entire file system. </p>
     */
    inline bool LocationHasBeenSet() const { return m_locationHasBeenSet; }

    /**
     * <p>A string that specifies the location of the file system created by Amazon
     * EFS. Its format is <code>efs-dns-name:/directory-path</code>. You can find the
     * DNS name of file system when you view it in the Amazon EFS console. The
     * directory path is a path to a directory in the file system that CodeBuild
     * mounts. For example, if the DNS name of a file system is
     * <code>fs-abcd1234.efs.us-west-2.amazonaws.com</code>, and its mount directory is
     * <code>my-efs-mount-directory</code>, then the <code>location</code> is
     * <code>fs-abcd1234.efs.us-west-2.amazonaws.com:/my-efs-mount-directory</code>.
     * </p> <p>The directory path in the format
     * <code>efs-dns-name:/directory-path</code> is optional. If you do not specify a
     * directory path, the location is only the DNS name and CodeBuild mounts the
     * entire file system. </p>
     */
    inline void SetLocation(const Aws::String& value) { m_locationHasBeenSet = true; m_location = value; }

    /**
     * <p>A string that specifies the location of the file system created by Amazon
     * EFS. Its format is <code>efs-dns-name:/directory-path</code>. You can find the
     * DNS name of file system when you view it in the Amazon EFS console. The
     * directory path is a path to a directory in the file system that CodeBuild
     * mounts. For example, if the DNS name of a file system is
     * <code>fs-abcd1234.efs.us-west-2.amazonaws.com</code>, and its mount directory is
     * <code>my-efs-mount-directory</code>, then the <code>location</code> is
     * <code>fs-abcd1234.efs.us-west-2.amazonaws.com:/my-efs-mount-directory</code>.
     * </p> <p>The directory path in the format
     * <code>efs-dns-name:/directory-path</code> is optional. If you do not specify a
     * directory path, the location is only the DNS name and CodeBuild mounts the
     * entire file system. </p>
     */
    inline void SetLocation(Aws::String&& value) { m_locationHasBeenSet = true; m_location = std::move(value); }

    /**
     * <p>A string that specifies the location of the file system created by Amazon
     * EFS. Its format is <code>efs-dns-name:/directory-path</code>. You can find the
     * DNS name of file system when you view it in the Amazon EFS console. The
     * directory path is a path to a directory in the file system that CodeBuild
     * mounts. For example, if the DNS name of a file system is
     * <code>fs-abcd1234.efs.us-west-2.amazonaws.com</code>, and its mount directory is
     * <code>my-efs-mount-directory</code>, then the <code>location</code> is
     * <code>fs-abcd1234.efs.us-west-2.amazonaws.com:/my-efs-mount-directory</code>.
     * </p> <p>The directory path in the format
     * <code>efs-dns-name:/directory-path</code> is optional. If you do not specify a
     * directory path, the location is only the DNS name and CodeBuild mounts the
     * entire file system. </p>
     */
    inline void SetLocation(const char* value) { m_locationHasBeenSet = true; m_location.assign(value); }

    /**
     * <p>A string that specifies the location of the file system created by Amazon
     * EFS. Its format is <code>efs-dns-name:/directory-path</code>. You can find the
     * DNS name of file system when you view it in the Amazon EFS console. The
     * directory path is a path to a directory in the file system that CodeBuild
     * mounts. For example, if the DNS name of a file system is
     * <code>fs-abcd1234.efs.us-west-2.amazonaws.com</code>, and its mount directory is
     * <code>my-efs-mount-directory</code>, then the <code>location</code> is
     * <code>fs-abcd1234.efs.us-west-2.amazonaws.com:/my-efs-mount-directory</code>.
     * </p> <p>The directory path in the format
     * <code>efs-dns-name:/directory-path</code> is optional. If you do not specify a
     * directory path, the location is only the DNS name and CodeBuild mounts the
     * entire file system. </p>
     */
    inline ProjectFileSystemLocation& WithLocation(const Aws::String& value) { SetLocation(value); return *this;}

    /**
     * <p>A string that specifies the location of the file system created by Amazon
     * EFS. Its format is <code>efs-dns-name:/directory-path</code>. You can find the
     * DNS name of file system when you view it in the Amazon EFS console. The
     * directory path is a path to a directory in the file system that CodeBuild
     * mounts. For example, if the DNS name of a file system is
     * <code>fs-abcd1234.efs.us-west-2.amazonaws.com</code>, and its mount directory is
     * <code>my-efs-mount-directory</code>, then the <code>location</code> is
     * <code>fs-abcd1234.efs.us-west-2.amazonaws.com:/my-efs-mount-directory</code>.
     * </p> <p>The directory path in the format
     * <code>efs-dns-name:/directory-path</code> is optional. If you do not specify a
     * directory path, the location is only the DNS name and CodeBuild mounts the
     * entire file system. </p>
     */
    inline ProjectFileSystemLocation& WithLocation(Aws::String&& value) { SetLocation(std::move(value)); return *this;}

    /**
     * <p>A string that specifies the location of the file system created by Amazon
     * EFS. Its format is <code>efs-dns-name:/directory-path</code>. You can find the
     * DNS name of file system when you view it in the Amazon EFS console. The
     * directory path is a path to a directory in the file system that CodeBuild
     * mounts. For example, if the DNS name of a file system is
     * <code>fs-abcd1234.efs.us-west-2.amazonaws.com</code>, and its mount directory is
     * <code>my-efs-mount-directory</code>, then the <code>location</code> is
     * <code>fs-abcd1234.efs.us-west-2.amazonaws.com:/my-efs-mount-directory</code>.
     * </p> <p>The directory path in the format
     * <code>efs-dns-name:/directory-path</code> is optional. If you do not specify a
     * directory path, the location is only the DNS name and CodeBuild mounts the
     * entire file system. </p>
     */
    inline ProjectFileSystemLocation& WithLocation(const char* value) { SetLocation(value); return *this;}


    /**
     * <p>The location in the container where you mount the file system. </p>
     */
    inline const Aws::String& GetMountPoint() const{ return m_mountPoint; }

    /**
     * <p>The location in the container where you mount the file system. </p>
     */
    inline bool MountPointHasBeenSet() const { return m_mountPointHasBeenSet; }

    /**
     * <p>The location in the container where you mount the file system. </p>
     */
    inline void SetMountPoint(const Aws::String& value) { m_mountPointHasBeenSet = true; m_mountPoint = value; }

    /**
     * <p>The location in the container where you mount the file system. </p>
     */
    inline void SetMountPoint(Aws::String&& value) { m_mountPointHasBeenSet = true; m_mountPoint = std::move(value); }

    /**
     * <p>The location in the container where you mount the file system. </p>
     */
    inline void SetMountPoint(const char* value) { m_mountPointHasBeenSet = true; m_mountPoint.assign(value); }

    /**
     * <p>The location in the container where you mount the file system. </p>
     */
    inline ProjectFileSystemLocation& WithMountPoint(const Aws::String& value) { SetMountPoint(value); return *this;}

    /**
     * <p>The location in the container where you mount the file system. </p>
     */
    inline ProjectFileSystemLocation& WithMountPoint(Aws::String&& value) { SetMountPoint(std::move(value)); return *this;}

    /**
     * <p>The location in the container where you mount the file system. </p>
     */
    inline ProjectFileSystemLocation& WithMountPoint(const char* value) { SetMountPoint(value); return *this;}


    /**
     * <p>The name used to access a file system created by Amazon EFS. CodeBuild
     * creates an environment variable by appending the <code>identifier</code> in all
     * capital letters to <code>CODEBUILD_</code>. For example, if you specify
     * <code>my_efs</code> for <code>identifier</code>, a new environment variable is
     * create named <code>CODEBUILD_MY_EFS</code>. </p> <p> The <code>identifier</code>
     * is used to mount your file system. </p>
     */
    inline const Aws::String& GetIdentifier() const{ return m_identifier; }

    /**
     * <p>The name used to access a file system created by Amazon EFS. CodeBuild
     * creates an environment variable by appending the <code>identifier</code> in all
     * capital letters to <code>CODEBUILD_</code>. For example, if you specify
     * <code>my_efs</code> for <code>identifier</code>, a new environment variable is
     * create named <code>CODEBUILD_MY_EFS</code>. </p> <p> The <code>identifier</code>
     * is used to mount your file system. </p>
     */
    inline bool IdentifierHasBeenSet() const { return m_identifierHasBeenSet; }

    /**
     * <p>The name used to access a file system created by Amazon EFS. CodeBuild
     * creates an environment variable by appending the <code>identifier</code> in all
     * capital letters to <code>CODEBUILD_</code>. For example, if you specify
     * <code>my_efs</code> for <code>identifier</code>, a new environment variable is
     * create named <code>CODEBUILD_MY_EFS</code>. </p> <p> The <code>identifier</code>
     * is used to mount your file system. </p>
     */
    inline void SetIdentifier(const Aws::String& value) { m_identifierHasBeenSet = true; m_identifier = value; }

    /**
     * <p>The name used to access a file system created by Amazon EFS. CodeBuild
     * creates an environment variable by appending the <code>identifier</code> in all
     * capital letters to <code>CODEBUILD_</code>. For example, if you specify
     * <code>my_efs</code> for <code>identifier</code>, a new environment variable is
     * create named <code>CODEBUILD_MY_EFS</code>. </p> <p> The <code>identifier</code>
     * is used to mount your file system. </p>
     */
    inline void SetIdentifier(Aws::String&& value) { m_identifierHasBeenSet = true; m_identifier = std::move(value); }

    /**
     * <p>The name used to access a file system created by Amazon EFS. CodeBuild
     * creates an environment variable by appending the <code>identifier</code> in all
     * capital letters to <code>CODEBUILD_</code>. For example, if you specify
     * <code>my_efs</code> for <code>identifier</code>, a new environment variable is
     * create named <code>CODEBUILD_MY_EFS</code>. </p> <p> The <code>identifier</code>
     * is used to mount your file system. </p>
     */
    inline void SetIdentifier(const char* value) { m_identifierHasBeenSet = true; m_identifier.assign(value); }

    /**
     * <p>The name used to access a file system created by Amazon EFS. CodeBuild
     * creates an environment variable by appending the <code>identifier</code> in all
     * capital letters to <code>CODEBUILD_</code>. For example, if you specify
     * <code>my_efs</code> for <code>identifier</code>, a new environment variable is
     * create named <code>CODEBUILD_MY_EFS</code>. </p> <p> The <code>identifier</code>
     * is used to mount your file system. </p>
     */
    inline ProjectFileSystemLocation& WithIdentifier(const Aws::String& value) { SetIdentifier(value); return *this;}

    /**
     * <p>The name used to access a file system created by Amazon EFS. CodeBuild
     * creates an environment variable by appending the <code>identifier</code> in all
     * capital letters to <code>CODEBUILD_</code>. For example, if you specify
     * <code>my_efs</code> for <code>identifier</code>, a new environment variable is
     * create named <code>CODEBUILD_MY_EFS</code>. </p> <p> The <code>identifier</code>
     * is used to mount your file system. </p>
     */
    inline ProjectFileSystemLocation& WithIdentifier(Aws::String&& value) { SetIdentifier(std::move(value)); return *this;}

    /**
     * <p>The name used to access a file system created by Amazon EFS. CodeBuild
     * creates an environment variable by appending the <code>identifier</code> in all
     * capital letters to <code>CODEBUILD_</code>. For example, if you specify
     * <code>my_efs</code> for <code>identifier</code>, a new environment variable is
     * create named <code>CODEBUILD_MY_EFS</code>. </p> <p> The <code>identifier</code>
     * is used to mount your file system. </p>
     */
    inline ProjectFileSystemLocation& WithIdentifier(const char* value) { SetIdentifier(value); return *this;}


    /**
     * <p> The mount options for a file system created by Amazon EFS. The default mount
     * options used by CodeBuild are
     * <code>nfsvers=4.1,rsize=1048576,wsize=1048576,hard,timeo=600,retrans=2</code>.
     * For more information, see <a
     * href="https://docs.aws.amazon.com/efs/latest/ug/mounting-fs-nfs-mount-settings.html">Recommended
     * NFS Mount Options</a>. </p>
     */
    inline const Aws::String& GetMountOptions() const{ return m_mountOptions; }

    /**
     * <p> The mount options for a file system created by Amazon EFS. The default mount
     * options used by CodeBuild are
     * <code>nfsvers=4.1,rsize=1048576,wsize=1048576,hard,timeo=600,retrans=2</code>.
     * For more information, see <a
     * href="https://docs.aws.amazon.com/efs/latest/ug/mounting-fs-nfs-mount-settings.html">Recommended
     * NFS Mount Options</a>. </p>
     */
    inline bool MountOptionsHasBeenSet() const { return m_mountOptionsHasBeenSet; }

    /**
     * <p> The mount options for a file system created by Amazon EFS. The default mount
     * options used by CodeBuild are
     * <code>nfsvers=4.1,rsize=1048576,wsize=1048576,hard,timeo=600,retrans=2</code>.
     * For more information, see <a
     * href="https://docs.aws.amazon.com/efs/latest/ug/mounting-fs-nfs-mount-settings.html">Recommended
     * NFS Mount Options</a>. </p>
     */
    inline void SetMountOptions(const Aws::String& value) { m_mountOptionsHasBeenSet = true; m_mountOptions = value; }

    /**
     * <p> The mount options for a file system created by Amazon EFS. The default mount
     * options used by CodeBuild are
     * <code>nfsvers=4.1,rsize=1048576,wsize=1048576,hard,timeo=600,retrans=2</code>.
     * For more information, see <a
     * href="https://docs.aws.amazon.com/efs/latest/ug/mounting-fs-nfs-mount-settings.html">Recommended
     * NFS Mount Options</a>. </p>
     */
    inline void SetMountOptions(Aws::String&& value) { m_mountOptionsHasBeenSet = true; m_mountOptions = std::move(value); }

    /**
     * <p> The mount options for a file system created by Amazon EFS. The default mount
     * options used by CodeBuild are
     * <code>nfsvers=4.1,rsize=1048576,wsize=1048576,hard,timeo=600,retrans=2</code>.
     * For more information, see <a
     * href="https://docs.aws.amazon.com/efs/latest/ug/mounting-fs-nfs-mount-settings.html">Recommended
     * NFS Mount Options</a>. </p>
     */
    inline void SetMountOptions(const char* value) { m_mountOptionsHasBeenSet = true; m_mountOptions.assign(value); }

    /**
     * <p> The mount options for a file system created by Amazon EFS. The default mount
     * options used by CodeBuild are
     * <code>nfsvers=4.1,rsize=1048576,wsize=1048576,hard,timeo=600,retrans=2</code>.
     * For more information, see <a
     * href="https://docs.aws.amazon.com/efs/latest/ug/mounting-fs-nfs-mount-settings.html">Recommended
     * NFS Mount Options</a>. </p>
     */
    inline ProjectFileSystemLocation& WithMountOptions(const Aws::String& value) { SetMountOptions(value); return *this;}

    /**
     * <p> The mount options for a file system created by Amazon EFS. The default mount
     * options used by CodeBuild are
     * <code>nfsvers=4.1,rsize=1048576,wsize=1048576,hard,timeo=600,retrans=2</code>.
     * For more information, see <a
     * href="https://docs.aws.amazon.com/efs/latest/ug/mounting-fs-nfs-mount-settings.html">Recommended
     * NFS Mount Options</a>. </p>
     */
    inline ProjectFileSystemLocation& WithMountOptions(Aws::String&& value) { SetMountOptions(std::move(value)); return *this;}

    /**
     * <p> The mount options for a file system created by Amazon EFS. The default mount
     * options used by CodeBuild are
     * <code>nfsvers=4.1,rsize=1048576,wsize=1048576,hard,timeo=600,retrans=2</code>.
     * For more information, see <a
     * href="https://docs.aws.amazon.com/efs/latest/ug/mounting-fs-nfs-mount-settings.html">Recommended
     * NFS Mount Options</a>. </p>
     */
    inline ProjectFileSystemLocation& WithMountOptions(const char* value) { SetMountOptions(value); return *this;}

  private:

    FileSystemType m_type;
    bool m_typeHasBeenSet = false;

    Aws::String m_location;
    bool m_locationHasBeenSet = false;

    Aws::String m_mountPoint;
    bool m_mountPointHasBeenSet = false;

    Aws::String m_identifier;
    bool m_identifierHasBeenSet = false;

    Aws::String m_mountOptions;
    bool m_mountOptionsHasBeenSet = false;
  };

} // namespace Model
} // namespace CodeBuild
} // namespace Aws
