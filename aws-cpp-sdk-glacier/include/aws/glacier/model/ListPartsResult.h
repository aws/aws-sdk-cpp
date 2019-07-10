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
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/glacier/model/PartListElement.h>
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
   * <p>Contains the Amazon S3 Glacier response to your request.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/glacier-2012-06-01/ListPartsOutput">AWS
   * API Reference</a></p>
   */
  class AWS_GLACIER_API ListPartsResult
  {
  public:
    ListPartsResult();
    ListPartsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    ListPartsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The ID of the upload to which the parts are associated.</p>
     */
    inline const Aws::String& GetMultipartUploadId() const{ return m_multipartUploadId; }

    /**
     * <p>The ID of the upload to which the parts are associated.</p>
     */
    inline void SetMultipartUploadId(const Aws::String& value) { m_multipartUploadId = value; }

    /**
     * <p>The ID of the upload to which the parts are associated.</p>
     */
    inline void SetMultipartUploadId(Aws::String&& value) { m_multipartUploadId = std::move(value); }

    /**
     * <p>The ID of the upload to which the parts are associated.</p>
     */
    inline void SetMultipartUploadId(const char* value) { m_multipartUploadId.assign(value); }

    /**
     * <p>The ID of the upload to which the parts are associated.</p>
     */
    inline ListPartsResult& WithMultipartUploadId(const Aws::String& value) { SetMultipartUploadId(value); return *this;}

    /**
     * <p>The ID of the upload to which the parts are associated.</p>
     */
    inline ListPartsResult& WithMultipartUploadId(Aws::String&& value) { SetMultipartUploadId(std::move(value)); return *this;}

    /**
     * <p>The ID of the upload to which the parts are associated.</p>
     */
    inline ListPartsResult& WithMultipartUploadId(const char* value) { SetMultipartUploadId(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the vault to which the multipart upload was
     * initiated.</p>
     */
    inline const Aws::String& GetVaultARN() const{ return m_vaultARN; }

    /**
     * <p>The Amazon Resource Name (ARN) of the vault to which the multipart upload was
     * initiated.</p>
     */
    inline void SetVaultARN(const Aws::String& value) { m_vaultARN = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the vault to which the multipart upload was
     * initiated.</p>
     */
    inline void SetVaultARN(Aws::String&& value) { m_vaultARN = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the vault to which the multipart upload was
     * initiated.</p>
     */
    inline void SetVaultARN(const char* value) { m_vaultARN.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the vault to which the multipart upload was
     * initiated.</p>
     */
    inline ListPartsResult& WithVaultARN(const Aws::String& value) { SetVaultARN(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the vault to which the multipart upload was
     * initiated.</p>
     */
    inline ListPartsResult& WithVaultARN(Aws::String&& value) { SetVaultARN(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the vault to which the multipart upload was
     * initiated.</p>
     */
    inline ListPartsResult& WithVaultARN(const char* value) { SetVaultARN(value); return *this;}


    /**
     * <p>The description of the archive that was specified in the Initiate Multipart
     * Upload request.</p>
     */
    inline const Aws::String& GetArchiveDescription() const{ return m_archiveDescription; }

    /**
     * <p>The description of the archive that was specified in the Initiate Multipart
     * Upload request.</p>
     */
    inline void SetArchiveDescription(const Aws::String& value) { m_archiveDescription = value; }

    /**
     * <p>The description of the archive that was specified in the Initiate Multipart
     * Upload request.</p>
     */
    inline void SetArchiveDescription(Aws::String&& value) { m_archiveDescription = std::move(value); }

    /**
     * <p>The description of the archive that was specified in the Initiate Multipart
     * Upload request.</p>
     */
    inline void SetArchiveDescription(const char* value) { m_archiveDescription.assign(value); }

    /**
     * <p>The description of the archive that was specified in the Initiate Multipart
     * Upload request.</p>
     */
    inline ListPartsResult& WithArchiveDescription(const Aws::String& value) { SetArchiveDescription(value); return *this;}

    /**
     * <p>The description of the archive that was specified in the Initiate Multipart
     * Upload request.</p>
     */
    inline ListPartsResult& WithArchiveDescription(Aws::String&& value) { SetArchiveDescription(std::move(value)); return *this;}

    /**
     * <p>The description of the archive that was specified in the Initiate Multipart
     * Upload request.</p>
     */
    inline ListPartsResult& WithArchiveDescription(const char* value) { SetArchiveDescription(value); return *this;}


    /**
     * <p>The part size in bytes. This is the same value that you specified in the
     * Initiate Multipart Upload request.</p>
     */
    inline long long GetPartSizeInBytes() const{ return m_partSizeInBytes; }

    /**
     * <p>The part size in bytes. This is the same value that you specified in the
     * Initiate Multipart Upload request.</p>
     */
    inline void SetPartSizeInBytes(long long value) { m_partSizeInBytes = value; }

    /**
     * <p>The part size in bytes. This is the same value that you specified in the
     * Initiate Multipart Upload request.</p>
     */
    inline ListPartsResult& WithPartSizeInBytes(long long value) { SetPartSizeInBytes(value); return *this;}


    /**
     * <p>The UTC time at which the multipart upload was initiated.</p>
     */
    inline const Aws::String& GetCreationDate() const{ return m_creationDate; }

    /**
     * <p>The UTC time at which the multipart upload was initiated.</p>
     */
    inline void SetCreationDate(const Aws::String& value) { m_creationDate = value; }

    /**
     * <p>The UTC time at which the multipart upload was initiated.</p>
     */
    inline void SetCreationDate(Aws::String&& value) { m_creationDate = std::move(value); }

    /**
     * <p>The UTC time at which the multipart upload was initiated.</p>
     */
    inline void SetCreationDate(const char* value) { m_creationDate.assign(value); }

    /**
     * <p>The UTC time at which the multipart upload was initiated.</p>
     */
    inline ListPartsResult& WithCreationDate(const Aws::String& value) { SetCreationDate(value); return *this;}

    /**
     * <p>The UTC time at which the multipart upload was initiated.</p>
     */
    inline ListPartsResult& WithCreationDate(Aws::String&& value) { SetCreationDate(std::move(value)); return *this;}

    /**
     * <p>The UTC time at which the multipart upload was initiated.</p>
     */
    inline ListPartsResult& WithCreationDate(const char* value) { SetCreationDate(value); return *this;}


    /**
     * <p>A list of the part sizes of the multipart upload. Each object in the array
     * contains a <code>RangeBytes</code> and <code>sha256-tree-hash</code> name/value
     * pair.</p>
     */
    inline const Aws::Vector<PartListElement>& GetParts() const{ return m_parts; }

    /**
     * <p>A list of the part sizes of the multipart upload. Each object in the array
     * contains a <code>RangeBytes</code> and <code>sha256-tree-hash</code> name/value
     * pair.</p>
     */
    inline void SetParts(const Aws::Vector<PartListElement>& value) { m_parts = value; }

    /**
     * <p>A list of the part sizes of the multipart upload. Each object in the array
     * contains a <code>RangeBytes</code> and <code>sha256-tree-hash</code> name/value
     * pair.</p>
     */
    inline void SetParts(Aws::Vector<PartListElement>&& value) { m_parts = std::move(value); }

    /**
     * <p>A list of the part sizes of the multipart upload. Each object in the array
     * contains a <code>RangeBytes</code> and <code>sha256-tree-hash</code> name/value
     * pair.</p>
     */
    inline ListPartsResult& WithParts(const Aws::Vector<PartListElement>& value) { SetParts(value); return *this;}

    /**
     * <p>A list of the part sizes of the multipart upload. Each object in the array
     * contains a <code>RangeBytes</code> and <code>sha256-tree-hash</code> name/value
     * pair.</p>
     */
    inline ListPartsResult& WithParts(Aws::Vector<PartListElement>&& value) { SetParts(std::move(value)); return *this;}

    /**
     * <p>A list of the part sizes of the multipart upload. Each object in the array
     * contains a <code>RangeBytes</code> and <code>sha256-tree-hash</code> name/value
     * pair.</p>
     */
    inline ListPartsResult& AddParts(const PartListElement& value) { m_parts.push_back(value); return *this; }

    /**
     * <p>A list of the part sizes of the multipart upload. Each object in the array
     * contains a <code>RangeBytes</code> and <code>sha256-tree-hash</code> name/value
     * pair.</p>
     */
    inline ListPartsResult& AddParts(PartListElement&& value) { m_parts.push_back(std::move(value)); return *this; }


    /**
     * <p>An opaque string that represents where to continue pagination of the results.
     * You use the marker in a new List Parts request to obtain more jobs in the list.
     * If there are no more parts, this value is <code>null</code>.</p>
     */
    inline const Aws::String& GetMarker() const{ return m_marker; }

    /**
     * <p>An opaque string that represents where to continue pagination of the results.
     * You use the marker in a new List Parts request to obtain more jobs in the list.
     * If there are no more parts, this value is <code>null</code>.</p>
     */
    inline void SetMarker(const Aws::String& value) { m_marker = value; }

    /**
     * <p>An opaque string that represents where to continue pagination of the results.
     * You use the marker in a new List Parts request to obtain more jobs in the list.
     * If there are no more parts, this value is <code>null</code>.</p>
     */
    inline void SetMarker(Aws::String&& value) { m_marker = std::move(value); }

    /**
     * <p>An opaque string that represents where to continue pagination of the results.
     * You use the marker in a new List Parts request to obtain more jobs in the list.
     * If there are no more parts, this value is <code>null</code>.</p>
     */
    inline void SetMarker(const char* value) { m_marker.assign(value); }

    /**
     * <p>An opaque string that represents where to continue pagination of the results.
     * You use the marker in a new List Parts request to obtain more jobs in the list.
     * If there are no more parts, this value is <code>null</code>.</p>
     */
    inline ListPartsResult& WithMarker(const Aws::String& value) { SetMarker(value); return *this;}

    /**
     * <p>An opaque string that represents where to continue pagination of the results.
     * You use the marker in a new List Parts request to obtain more jobs in the list.
     * If there are no more parts, this value is <code>null</code>.</p>
     */
    inline ListPartsResult& WithMarker(Aws::String&& value) { SetMarker(std::move(value)); return *this;}

    /**
     * <p>An opaque string that represents where to continue pagination of the results.
     * You use the marker in a new List Parts request to obtain more jobs in the list.
     * If there are no more parts, this value is <code>null</code>.</p>
     */
    inline ListPartsResult& WithMarker(const char* value) { SetMarker(value); return *this;}

  private:

    Aws::String m_multipartUploadId;

    Aws::String m_vaultARN;

    Aws::String m_archiveDescription;

    long long m_partSizeInBytes;

    Aws::String m_creationDate;

    Aws::Vector<PartListElement> m_parts;

    Aws::String m_marker;
  };

} // namespace Model
} // namespace Glacier
} // namespace Aws
