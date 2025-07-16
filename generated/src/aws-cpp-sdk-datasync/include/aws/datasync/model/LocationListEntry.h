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
    AWS_DATASYNC_API LocationListEntry() = default;
    AWS_DATASYNC_API LocationListEntry(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATASYNC_API LocationListEntry& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATASYNC_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the location. For Network File System (NFS)
     * or Amazon EFS, the location is the export path. For Amazon S3, the location is
     * the prefix path that you want to mount and use as the root of the location.</p>
     */
    inline const Aws::String& GetLocationArn() const { return m_locationArn; }
    inline bool LocationArnHasBeenSet() const { return m_locationArnHasBeenSet; }
    template<typename LocationArnT = Aws::String>
    void SetLocationArn(LocationArnT&& value) { m_locationArnHasBeenSet = true; m_locationArn = std::forward<LocationArnT>(value); }
    template<typename LocationArnT = Aws::String>
    LocationListEntry& WithLocationArn(LocationArnT&& value) { SetLocationArn(std::forward<LocationArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Represents a list of URIs of a location. <code>LocationUri</code> returns an
     * array that contains a list of locations when the <a
     * href="https://docs.aws.amazon.com/datasync/latest/userguide/API_ListLocations.html">ListLocations</a>
     * operation is called.</p> <p>Format: <code>TYPE://GLOBAL_ID/SUBDIR</code>.</p>
     * <p>TYPE designates the type of location (for example, <code>nfs</code> or
     * <code>s3</code>).</p> <p>GLOBAL_ID is the globally unique identifier of the
     * resource that backs the location. An example for EFS is
     * <code>us-east-2.fs-abcd1234</code>. An example for Amazon S3 is the bucket name,
     * such as <code>myBucket</code>. An example for NFS is a valid IPv4 or IPv6
     * address or a hostname that is compliant with DNS.</p> <p>SUBDIR is a valid file
     * system path, delimited by forward slashes as is the *nix convention. For NFS and
     * Amazon EFS, it's the export path to mount the location. For Amazon S3, it's the
     * prefix path that you mount to and treat as the root of the location.</p> <p/>
     */
    inline const Aws::String& GetLocationUri() const { return m_locationUri; }
    inline bool LocationUriHasBeenSet() const { return m_locationUriHasBeenSet; }
    template<typename LocationUriT = Aws::String>
    void SetLocationUri(LocationUriT&& value) { m_locationUriHasBeenSet = true; m_locationUri = std::forward<LocationUriT>(value); }
    template<typename LocationUriT = Aws::String>
    LocationListEntry& WithLocationUri(LocationUriT&& value) { SetLocationUri(std::forward<LocationUriT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_locationArn;
    bool m_locationArnHasBeenSet = false;

    Aws::String m_locationUri;
    bool m_locationUriHasBeenSet = false;
  };

} // namespace Model
} // namespace DataSync
} // namespace Aws
