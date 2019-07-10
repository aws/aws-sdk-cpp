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
#include <aws/glacier/Glacier_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace Glacier
{
namespace Model
{
  /**
   * <p>Contains the Amazon S3 Glacier response to your request.</p> <p>For
   * information about the underlying REST API, see <a
   * href="https://docs.aws.amazon.com/amazonglacier/latest/dev/api-archive-post.html">Upload
   * Archive</a>. For conceptual information, see <a
   * href="https://docs.aws.amazon.com/amazonglacier/latest/dev/working-with-archives.html">Working
   * with Archives in Amazon S3 Glacier</a>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/glacier-2012-06-01/ArchiveCreationOutput">AWS
   * API Reference</a></p>
   */
  class AWS_GLACIER_API CompleteMultipartUploadResult
  {
  public:
    CompleteMultipartUploadResult();
    CompleteMultipartUploadResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    CompleteMultipartUploadResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The relative URI path of the newly added archive resource.</p>
     */
    inline const Aws::String& GetLocation() const{ return m_location; }

    /**
     * <p>The relative URI path of the newly added archive resource.</p>
     */
    inline void SetLocation(const Aws::String& value) { m_location = value; }

    /**
     * <p>The relative URI path of the newly added archive resource.</p>
     */
    inline void SetLocation(Aws::String&& value) { m_location = std::move(value); }

    /**
     * <p>The relative URI path of the newly added archive resource.</p>
     */
    inline void SetLocation(const char* value) { m_location.assign(value); }

    /**
     * <p>The relative URI path of the newly added archive resource.</p>
     */
    inline CompleteMultipartUploadResult& WithLocation(const Aws::String& value) { SetLocation(value); return *this;}

    /**
     * <p>The relative URI path of the newly added archive resource.</p>
     */
    inline CompleteMultipartUploadResult& WithLocation(Aws::String&& value) { SetLocation(std::move(value)); return *this;}

    /**
     * <p>The relative URI path of the newly added archive resource.</p>
     */
    inline CompleteMultipartUploadResult& WithLocation(const char* value) { SetLocation(value); return *this;}


    /**
     * <p>The checksum of the archive computed by Amazon S3 Glacier.</p>
     */
    inline const Aws::String& GetChecksum() const{ return m_checksum; }

    /**
     * <p>The checksum of the archive computed by Amazon S3 Glacier.</p>
     */
    inline void SetChecksum(const Aws::String& value) { m_checksum = value; }

    /**
     * <p>The checksum of the archive computed by Amazon S3 Glacier.</p>
     */
    inline void SetChecksum(Aws::String&& value) { m_checksum = std::move(value); }

    /**
     * <p>The checksum of the archive computed by Amazon S3 Glacier.</p>
     */
    inline void SetChecksum(const char* value) { m_checksum.assign(value); }

    /**
     * <p>The checksum of the archive computed by Amazon S3 Glacier.</p>
     */
    inline CompleteMultipartUploadResult& WithChecksum(const Aws::String& value) { SetChecksum(value); return *this;}

    /**
     * <p>The checksum of the archive computed by Amazon S3 Glacier.</p>
     */
    inline CompleteMultipartUploadResult& WithChecksum(Aws::String&& value) { SetChecksum(std::move(value)); return *this;}

    /**
     * <p>The checksum of the archive computed by Amazon S3 Glacier.</p>
     */
    inline CompleteMultipartUploadResult& WithChecksum(const char* value) { SetChecksum(value); return *this;}


    /**
     * <p>The ID of the archive. This value is also included as part of the
     * location.</p>
     */
    inline const Aws::String& GetArchiveId() const{ return m_archiveId; }

    /**
     * <p>The ID of the archive. This value is also included as part of the
     * location.</p>
     */
    inline void SetArchiveId(const Aws::String& value) { m_archiveId = value; }

    /**
     * <p>The ID of the archive. This value is also included as part of the
     * location.</p>
     */
    inline void SetArchiveId(Aws::String&& value) { m_archiveId = std::move(value); }

    /**
     * <p>The ID of the archive. This value is also included as part of the
     * location.</p>
     */
    inline void SetArchiveId(const char* value) { m_archiveId.assign(value); }

    /**
     * <p>The ID of the archive. This value is also included as part of the
     * location.</p>
     */
    inline CompleteMultipartUploadResult& WithArchiveId(const Aws::String& value) { SetArchiveId(value); return *this;}

    /**
     * <p>The ID of the archive. This value is also included as part of the
     * location.</p>
     */
    inline CompleteMultipartUploadResult& WithArchiveId(Aws::String&& value) { SetArchiveId(std::move(value)); return *this;}

    /**
     * <p>The ID of the archive. This value is also included as part of the
     * location.</p>
     */
    inline CompleteMultipartUploadResult& WithArchiveId(const char* value) { SetArchiveId(value); return *this;}

  private:

    Aws::String m_location;

    Aws::String m_checksum;

    Aws::String m_archiveId;
  };

} // namespace Model
} // namespace Glacier
} // namespace Aws
