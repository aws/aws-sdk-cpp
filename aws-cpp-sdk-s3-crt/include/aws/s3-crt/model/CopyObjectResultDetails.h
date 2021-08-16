﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/s3-crt/S3Crt_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
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
namespace S3Crt
{
namespace Model
{

  /**
   * <p>Container for all response elements.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/s3-2006-03-01/CopyObjectResult">AWS
   * API Reference</a></p>
   */
  class AWS_S3CRT_API CopyObjectResultDetails
  {
  public:
    CopyObjectResultDetails();
    CopyObjectResultDetails(const Aws::Utils::Xml::XmlNode& xmlNode);
    CopyObjectResultDetails& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    void AddToNode(Aws::Utils::Xml::XmlNode& parentNode) const;


    /**
     * <p>Returns the ETag of the new object. The ETag reflects only changes to the
     * contents of an object, not its metadata.</p>
     */
    inline const Aws::String& GetETag() const{ return m_eTag; }

    /**
     * <p>Returns the ETag of the new object. The ETag reflects only changes to the
     * contents of an object, not its metadata.</p>
     */
    inline bool ETagHasBeenSet() const { return m_eTagHasBeenSet; }

    /**
     * <p>Returns the ETag of the new object. The ETag reflects only changes to the
     * contents of an object, not its metadata.</p>
     */
    inline void SetETag(const Aws::String& value) { m_eTagHasBeenSet = true; m_eTag = value; }

    /**
     * <p>Returns the ETag of the new object. The ETag reflects only changes to the
     * contents of an object, not its metadata.</p>
     */
    inline void SetETag(Aws::String&& value) { m_eTagHasBeenSet = true; m_eTag = std::move(value); }

    /**
     * <p>Returns the ETag of the new object. The ETag reflects only changes to the
     * contents of an object, not its metadata.</p>
     */
    inline void SetETag(const char* value) { m_eTagHasBeenSet = true; m_eTag.assign(value); }

    /**
     * <p>Returns the ETag of the new object. The ETag reflects only changes to the
     * contents of an object, not its metadata.</p>
     */
    inline CopyObjectResultDetails& WithETag(const Aws::String& value) { SetETag(value); return *this;}

    /**
     * <p>Returns the ETag of the new object. The ETag reflects only changes to the
     * contents of an object, not its metadata.</p>
     */
    inline CopyObjectResultDetails& WithETag(Aws::String&& value) { SetETag(std::move(value)); return *this;}

    /**
     * <p>Returns the ETag of the new object. The ETag reflects only changes to the
     * contents of an object, not its metadata.</p>
     */
    inline CopyObjectResultDetails& WithETag(const char* value) { SetETag(value); return *this;}


    /**
     * <p>Creation date of the object.</p>
     */
    inline const Aws::Utils::DateTime& GetLastModified() const{ return m_lastModified; }

    /**
     * <p>Creation date of the object.</p>
     */
    inline bool LastModifiedHasBeenSet() const { return m_lastModifiedHasBeenSet; }

    /**
     * <p>Creation date of the object.</p>
     */
    inline void SetLastModified(const Aws::Utils::DateTime& value) { m_lastModifiedHasBeenSet = true; m_lastModified = value; }

    /**
     * <p>Creation date of the object.</p>
     */
    inline void SetLastModified(Aws::Utils::DateTime&& value) { m_lastModifiedHasBeenSet = true; m_lastModified = std::move(value); }

    /**
     * <p>Creation date of the object.</p>
     */
    inline CopyObjectResultDetails& WithLastModified(const Aws::Utils::DateTime& value) { SetLastModified(value); return *this;}

    /**
     * <p>Creation date of the object.</p>
     */
    inline CopyObjectResultDetails& WithLastModified(Aws::Utils::DateTime&& value) { SetLastModified(std::move(value)); return *this;}

  private:

    Aws::String m_eTag;
    bool m_eTagHasBeenSet;

    Aws::Utils::DateTime m_lastModified;
    bool m_lastModifiedHasBeenSet;
  };

} // namespace Model
} // namespace S3Crt
} // namespace Aws
