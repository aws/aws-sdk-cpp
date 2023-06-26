/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/datasync/DataSync_EXPORTS.h>
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
namespace DataSync
{
namespace Model
{

  /**
   * <p>Represents a single entry in a list of locations.
   * <code>LocationListEntry</code> returns an array that contains a list of
   * locations when the <a
   * href="https://docs.aws.amazon.com/datasync/latest/userguide/API_ListLocations.html">ListLocations</a>
   * operation is called.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/datasync-2018-11-09/LocationListEntry">AWS
   * API Reference</a></p>
   */
  class LocationListEntry
  {
  public:
    AWS_DATASYNC_API LocationListEntry();
    AWS_DATASYNC_API LocationListEntry(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATASYNC_API LocationListEntry& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATASYNC_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The Amazon Resource Name (ARN) of the location. For Network File System (NFS)
     * or Amazon EFS, the location is the export path. For Amazon S3, the location is
     * the prefix path that you want to mount and use as the root of the location.</p>
     */
    inline const Aws::String& GetLocationArn() const{ return m_locationArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the location. For Network File System (NFS)
     * or Amazon EFS, the location is the export path. For Amazon S3, the location is
     * the prefix path that you want to mount and use as the root of the location.</p>
     */
    inline bool LocationArnHasBeenSet() const { return m_locationArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the location. For Network File System (NFS)
     * or Amazon EFS, the location is the export path. For Amazon S3, the location is
     * the prefix path that you want to mount and use as the root of the location.</p>
     */
    inline void SetLocationArn(const Aws::String& value) { m_locationArnHasBeenSet = true; m_locationArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the location. For Network File System (NFS)
     * or Amazon EFS, the location is the export path. For Amazon S3, the location is
     * the prefix path that you want to mount and use as the root of the location.</p>
     */
    inline void SetLocationArn(Aws::String&& value) { m_locationArnHasBeenSet = true; m_locationArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the location. For Network File System (NFS)
     * or Amazon EFS, the location is the export path. For Amazon S3, the location is
     * the prefix path that you want to mount and use as the root of the location.</p>
     */
    inline void SetLocationArn(const char* value) { m_locationArnHasBeenSet = true; m_locationArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the location. For Network File System (NFS)
     * or Amazon EFS, the location is the export path. For Amazon S3, the location is
     * the prefix path that you want to mount and use as the root of the location.</p>
     */
    inline LocationListEntry& WithLocationArn(const Aws::String& value) { SetLocationArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the location. For Network File System (NFS)
     * or Amazon EFS, the location is the export path. For Amazon S3, the location is
     * the prefix path that you want to mount and use as the root of the location.</p>
     */
    inline LocationListEntry& WithLocationArn(Aws::String&& value) { SetLocationArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the location. For Network File System (NFS)
     * or Amazon EFS, the location is the export path. For Amazon S3, the location is
     * the prefix path that you want to mount and use as the root of the location.</p>
     */
    inline LocationListEntry& WithLocationArn(const char* value) { SetLocationArn(value); return *this;}


    /**
     * <p>Represents a list of URIs of a location. <code>LocationUri</code> returns an
     * array that contains a list of locations when the <a
     * href="https://docs.aws.amazon.com/datasync/latest/userguide/API_ListLocations.html">ListLocations</a>
     * operation is called.</p> <p>Format: <code>TYPE://GLOBAL_ID/SUBDIR</code>.</p>
     * <p>TYPE designates the type of location (for example, <code>nfs</code> or
     * <code>s3</code>).</p> <p>GLOBAL_ID is the globally unique identifier of the
     * resource that backs the location. An example for EFS is
     * <code>us-east-2.fs-abcd1234</code>. An example for Amazon S3 is the bucket name,
     * such as <code>myBucket</code>. An example for NFS is a valid IPv4 address or a
     * hostname that is compliant with Domain Name Service (DNS).</p> <p>SUBDIR is a
     * valid file system path, delimited by forward slashes as is the *nix convention.
     * For NFS and Amazon EFS, it's the export path to mount the location. For Amazon
     * S3, it's the prefix path that you mount to and treat as the root of the
     * location.</p> <p/>
     */
    inline const Aws::String& GetLocationUri() const{ return m_locationUri; }

    /**
     * <p>Represents a list of URIs of a location. <code>LocationUri</code> returns an
     * array that contains a list of locations when the <a
     * href="https://docs.aws.amazon.com/datasync/latest/userguide/API_ListLocations.html">ListLocations</a>
     * operation is called.</p> <p>Format: <code>TYPE://GLOBAL_ID/SUBDIR</code>.</p>
     * <p>TYPE designates the type of location (for example, <code>nfs</code> or
     * <code>s3</code>).</p> <p>GLOBAL_ID is the globally unique identifier of the
     * resource that backs the location. An example for EFS is
     * <code>us-east-2.fs-abcd1234</code>. An example for Amazon S3 is the bucket name,
     * such as <code>myBucket</code>. An example for NFS is a valid IPv4 address or a
     * hostname that is compliant with Domain Name Service (DNS).</p> <p>SUBDIR is a
     * valid file system path, delimited by forward slashes as is the *nix convention.
     * For NFS and Amazon EFS, it's the export path to mount the location. For Amazon
     * S3, it's the prefix path that you mount to and treat as the root of the
     * location.</p> <p/>
     */
    inline bool LocationUriHasBeenSet() const { return m_locationUriHasBeenSet; }

    /**
     * <p>Represents a list of URIs of a location. <code>LocationUri</code> returns an
     * array that contains a list of locations when the <a
     * href="https://docs.aws.amazon.com/datasync/latest/userguide/API_ListLocations.html">ListLocations</a>
     * operation is called.</p> <p>Format: <code>TYPE://GLOBAL_ID/SUBDIR</code>.</p>
     * <p>TYPE designates the type of location (for example, <code>nfs</code> or
     * <code>s3</code>).</p> <p>GLOBAL_ID is the globally unique identifier of the
     * resource that backs the location. An example for EFS is
     * <code>us-east-2.fs-abcd1234</code>. An example for Amazon S3 is the bucket name,
     * such as <code>myBucket</code>. An example for NFS is a valid IPv4 address or a
     * hostname that is compliant with Domain Name Service (DNS).</p> <p>SUBDIR is a
     * valid file system path, delimited by forward slashes as is the *nix convention.
     * For NFS and Amazon EFS, it's the export path to mount the location. For Amazon
     * S3, it's the prefix path that you mount to and treat as the root of the
     * location.</p> <p/>
     */
    inline void SetLocationUri(const Aws::String& value) { m_locationUriHasBeenSet = true; m_locationUri = value; }

    /**
     * <p>Represents a list of URIs of a location. <code>LocationUri</code> returns an
     * array that contains a list of locations when the <a
     * href="https://docs.aws.amazon.com/datasync/latest/userguide/API_ListLocations.html">ListLocations</a>
     * operation is called.</p> <p>Format: <code>TYPE://GLOBAL_ID/SUBDIR</code>.</p>
     * <p>TYPE designates the type of location (for example, <code>nfs</code> or
     * <code>s3</code>).</p> <p>GLOBAL_ID is the globally unique identifier of the
     * resource that backs the location. An example for EFS is
     * <code>us-east-2.fs-abcd1234</code>. An example for Amazon S3 is the bucket name,
     * such as <code>myBucket</code>. An example for NFS is a valid IPv4 address or a
     * hostname that is compliant with Domain Name Service (DNS).</p> <p>SUBDIR is a
     * valid file system path, delimited by forward slashes as is the *nix convention.
     * For NFS and Amazon EFS, it's the export path to mount the location. For Amazon
     * S3, it's the prefix path that you mount to and treat as the root of the
     * location.</p> <p/>
     */
    inline void SetLocationUri(Aws::String&& value) { m_locationUriHasBeenSet = true; m_locationUri = std::move(value); }

    /**
     * <p>Represents a list of URIs of a location. <code>LocationUri</code> returns an
     * array that contains a list of locations when the <a
     * href="https://docs.aws.amazon.com/datasync/latest/userguide/API_ListLocations.html">ListLocations</a>
     * operation is called.</p> <p>Format: <code>TYPE://GLOBAL_ID/SUBDIR</code>.</p>
     * <p>TYPE designates the type of location (for example, <code>nfs</code> or
     * <code>s3</code>).</p> <p>GLOBAL_ID is the globally unique identifier of the
     * resource that backs the location. An example for EFS is
     * <code>us-east-2.fs-abcd1234</code>. An example for Amazon S3 is the bucket name,
     * such as <code>myBucket</code>. An example for NFS is a valid IPv4 address or a
     * hostname that is compliant with Domain Name Service (DNS).</p> <p>SUBDIR is a
     * valid file system path, delimited by forward slashes as is the *nix convention.
     * For NFS and Amazon EFS, it's the export path to mount the location. For Amazon
     * S3, it's the prefix path that you mount to and treat as the root of the
     * location.</p> <p/>
     */
    inline void SetLocationUri(const char* value) { m_locationUriHasBeenSet = true; m_locationUri.assign(value); }

    /**
     * <p>Represents a list of URIs of a location. <code>LocationUri</code> returns an
     * array that contains a list of locations when the <a
     * href="https://docs.aws.amazon.com/datasync/latest/userguide/API_ListLocations.html">ListLocations</a>
     * operation is called.</p> <p>Format: <code>TYPE://GLOBAL_ID/SUBDIR</code>.</p>
     * <p>TYPE designates the type of location (for example, <code>nfs</code> or
     * <code>s3</code>).</p> <p>GLOBAL_ID is the globally unique identifier of the
     * resource that backs the location. An example for EFS is
     * <code>us-east-2.fs-abcd1234</code>. An example for Amazon S3 is the bucket name,
     * such as <code>myBucket</code>. An example for NFS is a valid IPv4 address or a
     * hostname that is compliant with Domain Name Service (DNS).</p> <p>SUBDIR is a
     * valid file system path, delimited by forward slashes as is the *nix convention.
     * For NFS and Amazon EFS, it's the export path to mount the location. For Amazon
     * S3, it's the prefix path that you mount to and treat as the root of the
     * location.</p> <p/>
     */
    inline LocationListEntry& WithLocationUri(const Aws::String& value) { SetLocationUri(value); return *this;}

    /**
     * <p>Represents a list of URIs of a location. <code>LocationUri</code> returns an
     * array that contains a list of locations when the <a
     * href="https://docs.aws.amazon.com/datasync/latest/userguide/API_ListLocations.html">ListLocations</a>
     * operation is called.</p> <p>Format: <code>TYPE://GLOBAL_ID/SUBDIR</code>.</p>
     * <p>TYPE designates the type of location (for example, <code>nfs</code> or
     * <code>s3</code>).</p> <p>GLOBAL_ID is the globally unique identifier of the
     * resource that backs the location. An example for EFS is
     * <code>us-east-2.fs-abcd1234</code>. An example for Amazon S3 is the bucket name,
     * such as <code>myBucket</code>. An example for NFS is a valid IPv4 address or a
     * hostname that is compliant with Domain Name Service (DNS).</p> <p>SUBDIR is a
     * valid file system path, delimited by forward slashes as is the *nix convention.
     * For NFS and Amazon EFS, it's the export path to mount the location. For Amazon
     * S3, it's the prefix path that you mount to and treat as the root of the
     * location.</p> <p/>
     */
    inline LocationListEntry& WithLocationUri(Aws::String&& value) { SetLocationUri(std::move(value)); return *this;}

    /**
     * <p>Represents a list of URIs of a location. <code>LocationUri</code> returns an
     * array that contains a list of locations when the <a
     * href="https://docs.aws.amazon.com/datasync/latest/userguide/API_ListLocations.html">ListLocations</a>
     * operation is called.</p> <p>Format: <code>TYPE://GLOBAL_ID/SUBDIR</code>.</p>
     * <p>TYPE designates the type of location (for example, <code>nfs</code> or
     * <code>s3</code>).</p> <p>GLOBAL_ID is the globally unique identifier of the
     * resource that backs the location. An example for EFS is
     * <code>us-east-2.fs-abcd1234</code>. An example for Amazon S3 is the bucket name,
     * such as <code>myBucket</code>. An example for NFS is a valid IPv4 address or a
     * hostname that is compliant with Domain Name Service (DNS).</p> <p>SUBDIR is a
     * valid file system path, delimited by forward slashes as is the *nix convention.
     * For NFS and Amazon EFS, it's the export path to mount the location. For Amazon
     * S3, it's the prefix path that you mount to and treat as the root of the
     * location.</p> <p/>
     */
    inline LocationListEntry& WithLocationUri(const char* value) { SetLocationUri(value); return *this;}

  private:

    Aws::String m_locationArn;
    bool m_locationArnHasBeenSet = false;

    Aws::String m_locationUri;
    bool m_locationUriHasBeenSet = false;
  };

} // namespace Model
} // namespace DataSync
} // namespace Aws
