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
#include <aws/s3control/S3Control_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Xml
{
  class XmlNode;
} // namespace Xml
} // namespace Utils
namespace S3Control
{
namespace Model
{

  /**
   * <p>Contains the information required to locate a manifest object.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/s3control-2018-08-20/JobManifestLocation">AWS
   * API Reference</a></p>
   */
  class AWS_S3CONTROL_API JobManifestLocation
  {
  public:
    JobManifestLocation();
    JobManifestLocation(const Aws::Utils::Xml::XmlNode& xmlNode);
    JobManifestLocation& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    void AddToNode(Aws::Utils::Xml::XmlNode& parentNode) const;


    /**
     * <p>The Amazon Resource Name (ARN) for a manifest object.</p>
     */
    inline const Aws::String& GetObjectArn() const{ return m_objectArn; }

    /**
     * <p>The Amazon Resource Name (ARN) for a manifest object.</p>
     */
    inline bool ObjectArnHasBeenSet() const { return m_objectArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) for a manifest object.</p>
     */
    inline void SetObjectArn(const Aws::String& value) { m_objectArnHasBeenSet = true; m_objectArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) for a manifest object.</p>
     */
    inline void SetObjectArn(Aws::String&& value) { m_objectArnHasBeenSet = true; m_objectArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) for a manifest object.</p>
     */
    inline void SetObjectArn(const char* value) { m_objectArnHasBeenSet = true; m_objectArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) for a manifest object.</p>
     */
    inline JobManifestLocation& WithObjectArn(const Aws::String& value) { SetObjectArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) for a manifest object.</p>
     */
    inline JobManifestLocation& WithObjectArn(Aws::String&& value) { SetObjectArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) for a manifest object.</p>
     */
    inline JobManifestLocation& WithObjectArn(const char* value) { SetObjectArn(value); return *this;}


    /**
     * <p>The optional version ID to identify a specific version of the manifest
     * object.</p>
     */
    inline const Aws::String& GetObjectVersionId() const{ return m_objectVersionId; }

    /**
     * <p>The optional version ID to identify a specific version of the manifest
     * object.</p>
     */
    inline bool ObjectVersionIdHasBeenSet() const { return m_objectVersionIdHasBeenSet; }

    /**
     * <p>The optional version ID to identify a specific version of the manifest
     * object.</p>
     */
    inline void SetObjectVersionId(const Aws::String& value) { m_objectVersionIdHasBeenSet = true; m_objectVersionId = value; }

    /**
     * <p>The optional version ID to identify a specific version of the manifest
     * object.</p>
     */
    inline void SetObjectVersionId(Aws::String&& value) { m_objectVersionIdHasBeenSet = true; m_objectVersionId = std::move(value); }

    /**
     * <p>The optional version ID to identify a specific version of the manifest
     * object.</p>
     */
    inline void SetObjectVersionId(const char* value) { m_objectVersionIdHasBeenSet = true; m_objectVersionId.assign(value); }

    /**
     * <p>The optional version ID to identify a specific version of the manifest
     * object.</p>
     */
    inline JobManifestLocation& WithObjectVersionId(const Aws::String& value) { SetObjectVersionId(value); return *this;}

    /**
     * <p>The optional version ID to identify a specific version of the manifest
     * object.</p>
     */
    inline JobManifestLocation& WithObjectVersionId(Aws::String&& value) { SetObjectVersionId(std::move(value)); return *this;}

    /**
     * <p>The optional version ID to identify a specific version of the manifest
     * object.</p>
     */
    inline JobManifestLocation& WithObjectVersionId(const char* value) { SetObjectVersionId(value); return *this;}


    /**
     * <p>The ETag for the specified manifest object.</p>
     */
    inline const Aws::String& GetETag() const{ return m_eTag; }

    /**
     * <p>The ETag for the specified manifest object.</p>
     */
    inline bool ETagHasBeenSet() const { return m_eTagHasBeenSet; }

    /**
     * <p>The ETag for the specified manifest object.</p>
     */
    inline void SetETag(const Aws::String& value) { m_eTagHasBeenSet = true; m_eTag = value; }

    /**
     * <p>The ETag for the specified manifest object.</p>
     */
    inline void SetETag(Aws::String&& value) { m_eTagHasBeenSet = true; m_eTag = std::move(value); }

    /**
     * <p>The ETag for the specified manifest object.</p>
     */
    inline void SetETag(const char* value) { m_eTagHasBeenSet = true; m_eTag.assign(value); }

    /**
     * <p>The ETag for the specified manifest object.</p>
     */
    inline JobManifestLocation& WithETag(const Aws::String& value) { SetETag(value); return *this;}

    /**
     * <p>The ETag for the specified manifest object.</p>
     */
    inline JobManifestLocation& WithETag(Aws::String&& value) { SetETag(std::move(value)); return *this;}

    /**
     * <p>The ETag for the specified manifest object.</p>
     */
    inline JobManifestLocation& WithETag(const char* value) { SetETag(value); return *this;}

  private:

    Aws::String m_objectArn;
    bool m_objectArnHasBeenSet;

    Aws::String m_objectVersionId;
    bool m_objectVersionIdHasBeenSet;

    Aws::String m_eTag;
    bool m_eTagHasBeenSet;
  };

} // namespace Model
} // namespace S3Control
} // namespace Aws
