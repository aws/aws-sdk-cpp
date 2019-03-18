/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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
   * locations when the <a>ListLocations</a> operation is called.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/datasync-2018-11-09/LocationListEntry">AWS
   * API Reference</a></p>
   */
  class AWS_DATASYNC_API LocationListEntry
  {
  public:
    LocationListEntry();
    LocationListEntry(Aws::Utils::Json::JsonView jsonValue);
    LocationListEntry& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


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
     * <p>Represents a list of URLs of a location. <code>LocationUri</code> returns an
     * array that contains a list of locations when the <a>ListLocations</a> operation
     * is called.</p> <p>Format: <code>TYPE://GLOBAL_ID/SUBDIR</code>.</p> <p>TYPE
     * designates the type of location. Valid values: NFS | EFS | S3.</p> <p>GLOBAL_ID
     * is the globally unique identifier of the resource that backs the location. An
     * example for EFS is <code>us-east-2.fs-abcd1234</code>. An example for Amazon S3
     * is the bucket name, such as <code>myBucket</code>. An example for NFS is a valid
     * IPv4 address or a host name compliant with Domain Name Service (DNS).</p>
     * <p>SUBDIR is a valid file system path, delimited by forward slashes as is the
     * *nix convention. For NFS and Amazon EFS, it's the export path to mount the
     * location. For Amazon S3, it's the prefix path that you mount to and treat as the
     * root of the location.</p> <p/>
     */
    inline const Aws::String& GetLocationUri() const{ return m_locationUri; }

    /**
     * <p>Represents a list of URLs of a location. <code>LocationUri</code> returns an
     * array that contains a list of locations when the <a>ListLocations</a> operation
     * is called.</p> <p>Format: <code>TYPE://GLOBAL_ID/SUBDIR</code>.</p> <p>TYPE
     * designates the type of location. Valid values: NFS | EFS | S3.</p> <p>GLOBAL_ID
     * is the globally unique identifier of the resource that backs the location. An
     * example for EFS is <code>us-east-2.fs-abcd1234</code>. An example for Amazon S3
     * is the bucket name, such as <code>myBucket</code>. An example for NFS is a valid
     * IPv4 address or a host name compliant with Domain Name Service (DNS).</p>
     * <p>SUBDIR is a valid file system path, delimited by forward slashes as is the
     * *nix convention. For NFS and Amazon EFS, it's the export path to mount the
     * location. For Amazon S3, it's the prefix path that you mount to and treat as the
     * root of the location.</p> <p/>
     */
    inline bool LocationUriHasBeenSet() const { return m_locationUriHasBeenSet; }

    /**
     * <p>Represents a list of URLs of a location. <code>LocationUri</code> returns an
     * array that contains a list of locations when the <a>ListLocations</a> operation
     * is called.</p> <p>Format: <code>TYPE://GLOBAL_ID/SUBDIR</code>.</p> <p>TYPE
     * designates the type of location. Valid values: NFS | EFS | S3.</p> <p>GLOBAL_ID
     * is the globally unique identifier of the resource that backs the location. An
     * example for EFS is <code>us-east-2.fs-abcd1234</code>. An example for Amazon S3
     * is the bucket name, such as <code>myBucket</code>. An example for NFS is a valid
     * IPv4 address or a host name compliant with Domain Name Service (DNS).</p>
     * <p>SUBDIR is a valid file system path, delimited by forward slashes as is the
     * *nix convention. For NFS and Amazon EFS, it's the export path to mount the
     * location. For Amazon S3, it's the prefix path that you mount to and treat as the
     * root of the location.</p> <p/>
     */
    inline void SetLocationUri(const Aws::String& value) { m_locationUriHasBeenSet = true; m_locationUri = value; }

    /**
     * <p>Represents a list of URLs of a location. <code>LocationUri</code> returns an
     * array that contains a list of locations when the <a>ListLocations</a> operation
     * is called.</p> <p>Format: <code>TYPE://GLOBAL_ID/SUBDIR</code>.</p> <p>TYPE
     * designates the type of location. Valid values: NFS | EFS | S3.</p> <p>GLOBAL_ID
     * is the globally unique identifier of the resource that backs the location. An
     * example for EFS is <code>us-east-2.fs-abcd1234</code>. An example for Amazon S3
     * is the bucket name, such as <code>myBucket</code>. An example for NFS is a valid
     * IPv4 address or a host name compliant with Domain Name Service (DNS).</p>
     * <p>SUBDIR is a valid file system path, delimited by forward slashes as is the
     * *nix convention. For NFS and Amazon EFS, it's the export path to mount the
     * location. For Amazon S3, it's the prefix path that you mount to and treat as the
     * root of the location.</p> <p/>
     */
    inline void SetLocationUri(Aws::String&& value) { m_locationUriHasBeenSet = true; m_locationUri = std::move(value); }

    /**
     * <p>Represents a list of URLs of a location. <code>LocationUri</code> returns an
     * array that contains a list of locations when the <a>ListLocations</a> operation
     * is called.</p> <p>Format: <code>TYPE://GLOBAL_ID/SUBDIR</code>.</p> <p>TYPE
     * designates the type of location. Valid values: NFS | EFS | S3.</p> <p>GLOBAL_ID
     * is the globally unique identifier of the resource that backs the location. An
     * example for EFS is <code>us-east-2.fs-abcd1234</code>. An example for Amazon S3
     * is the bucket name, such as <code>myBucket</code>. An example for NFS is a valid
     * IPv4 address or a host name compliant with Domain Name Service (DNS).</p>
     * <p>SUBDIR is a valid file system path, delimited by forward slashes as is the
     * *nix convention. For NFS and Amazon EFS, it's the export path to mount the
     * location. For Amazon S3, it's the prefix path that you mount to and treat as the
     * root of the location.</p> <p/>
     */
    inline void SetLocationUri(const char* value) { m_locationUriHasBeenSet = true; m_locationUri.assign(value); }

    /**
     * <p>Represents a list of URLs of a location. <code>LocationUri</code> returns an
     * array that contains a list of locations when the <a>ListLocations</a> operation
     * is called.</p> <p>Format: <code>TYPE://GLOBAL_ID/SUBDIR</code>.</p> <p>TYPE
     * designates the type of location. Valid values: NFS | EFS | S3.</p> <p>GLOBAL_ID
     * is the globally unique identifier of the resource that backs the location. An
     * example for EFS is <code>us-east-2.fs-abcd1234</code>. An example for Amazon S3
     * is the bucket name, such as <code>myBucket</code>. An example for NFS is a valid
     * IPv4 address or a host name compliant with Domain Name Service (DNS).</p>
     * <p>SUBDIR is a valid file system path, delimited by forward slashes as is the
     * *nix convention. For NFS and Amazon EFS, it's the export path to mount the
     * location. For Amazon S3, it's the prefix path that you mount to and treat as the
     * root of the location.</p> <p/>
     */
    inline LocationListEntry& WithLocationUri(const Aws::String& value) { SetLocationUri(value); return *this;}

    /**
     * <p>Represents a list of URLs of a location. <code>LocationUri</code> returns an
     * array that contains a list of locations when the <a>ListLocations</a> operation
     * is called.</p> <p>Format: <code>TYPE://GLOBAL_ID/SUBDIR</code>.</p> <p>TYPE
     * designates the type of location. Valid values: NFS | EFS | S3.</p> <p>GLOBAL_ID
     * is the globally unique identifier of the resource that backs the location. An
     * example for EFS is <code>us-east-2.fs-abcd1234</code>. An example for Amazon S3
     * is the bucket name, such as <code>myBucket</code>. An example for NFS is a valid
     * IPv4 address or a host name compliant with Domain Name Service (DNS).</p>
     * <p>SUBDIR is a valid file system path, delimited by forward slashes as is the
     * *nix convention. For NFS and Amazon EFS, it's the export path to mount the
     * location. For Amazon S3, it's the prefix path that you mount to and treat as the
     * root of the location.</p> <p/>
     */
    inline LocationListEntry& WithLocationUri(Aws::String&& value) { SetLocationUri(std::move(value)); return *this;}

    /**
     * <p>Represents a list of URLs of a location. <code>LocationUri</code> returns an
     * array that contains a list of locations when the <a>ListLocations</a> operation
     * is called.</p> <p>Format: <code>TYPE://GLOBAL_ID/SUBDIR</code>.</p> <p>TYPE
     * designates the type of location. Valid values: NFS | EFS | S3.</p> <p>GLOBAL_ID
     * is the globally unique identifier of the resource that backs the location. An
     * example for EFS is <code>us-east-2.fs-abcd1234</code>. An example for Amazon S3
     * is the bucket name, such as <code>myBucket</code>. An example for NFS is a valid
     * IPv4 address or a host name compliant with Domain Name Service (DNS).</p>
     * <p>SUBDIR is a valid file system path, delimited by forward slashes as is the
     * *nix convention. For NFS and Amazon EFS, it's the export path to mount the
     * location. For Amazon S3, it's the prefix path that you mount to and treat as the
     * root of the location.</p> <p/>
     */
    inline LocationListEntry& WithLocationUri(const char* value) { SetLocationUri(value); return *this;}

  private:

    Aws::String m_locationArn;
    bool m_locationArnHasBeenSet;

    Aws::String m_locationUri;
    bool m_locationUriHasBeenSet;
  };

} // namespace Model
} // namespace DataSync
} // namespace Aws
