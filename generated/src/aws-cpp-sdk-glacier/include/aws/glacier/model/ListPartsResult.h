/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
  class ListPartsResult
  {
  public:
    AWS_GLACIER_API ListPartsResult();
    AWS_GLACIER_API ListPartsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_GLACIER_API ListPartsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The ID of the upload to which the parts are associated.</p>
     */
    inline const Aws::String& GetMultipartUploadId() const{ return m_multipartUploadId; }
    inline void SetMultipartUploadId(const Aws::String& value) { m_multipartUploadId = value; }
    inline void SetMultipartUploadId(Aws::String&& value) { m_multipartUploadId = std::move(value); }
    inline void SetMultipartUploadId(const char* value) { m_multipartUploadId.assign(value); }
    inline ListPartsResult& WithMultipartUploadId(const Aws::String& value) { SetMultipartUploadId(value); return *this;}
    inline ListPartsResult& WithMultipartUploadId(Aws::String&& value) { SetMultipartUploadId(std::move(value)); return *this;}
    inline ListPartsResult& WithMultipartUploadId(const char* value) { SetMultipartUploadId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the vault to which the multipart upload was
     * initiated.</p>
     */
    inline const Aws::String& GetVaultARN() const{ return m_vaultARN; }
    inline void SetVaultARN(const Aws::String& value) { m_vaultARN = value; }
    inline void SetVaultARN(Aws::String&& value) { m_vaultARN = std::move(value); }
    inline void SetVaultARN(const char* value) { m_vaultARN.assign(value); }
    inline ListPartsResult& WithVaultARN(const Aws::String& value) { SetVaultARN(value); return *this;}
    inline ListPartsResult& WithVaultARN(Aws::String&& value) { SetVaultARN(std::move(value)); return *this;}
    inline ListPartsResult& WithVaultARN(const char* value) { SetVaultARN(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The description of the archive that was specified in the Initiate Multipart
     * Upload request.</p>
     */
    inline const Aws::String& GetArchiveDescription() const{ return m_archiveDescription; }
    inline void SetArchiveDescription(const Aws::String& value) { m_archiveDescription = value; }
    inline void SetArchiveDescription(Aws::String&& value) { m_archiveDescription = std::move(value); }
    inline void SetArchiveDescription(const char* value) { m_archiveDescription.assign(value); }
    inline ListPartsResult& WithArchiveDescription(const Aws::String& value) { SetArchiveDescription(value); return *this;}
    inline ListPartsResult& WithArchiveDescription(Aws::String&& value) { SetArchiveDescription(std::move(value)); return *this;}
    inline ListPartsResult& WithArchiveDescription(const char* value) { SetArchiveDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The part size in bytes. This is the same value that you specified in the
     * Initiate Multipart Upload request.</p>
     */
    inline long long GetPartSizeInBytes() const{ return m_partSizeInBytes; }
    inline void SetPartSizeInBytes(long long value) { m_partSizeInBytes = value; }
    inline ListPartsResult& WithPartSizeInBytes(long long value) { SetPartSizeInBytes(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The UTC time at which the multipart upload was initiated.</p>
     */
    inline const Aws::String& GetCreationDate() const{ return m_creationDate; }
    inline void SetCreationDate(const Aws::String& value) { m_creationDate = value; }
    inline void SetCreationDate(Aws::String&& value) { m_creationDate = std::move(value); }
    inline void SetCreationDate(const char* value) { m_creationDate.assign(value); }
    inline ListPartsResult& WithCreationDate(const Aws::String& value) { SetCreationDate(value); return *this;}
    inline ListPartsResult& WithCreationDate(Aws::String&& value) { SetCreationDate(std::move(value)); return *this;}
    inline ListPartsResult& WithCreationDate(const char* value) { SetCreationDate(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of the part sizes of the multipart upload. Each object in the array
     * contains a <code>RangeBytes</code> and <code>sha256-tree-hash</code> name/value
     * pair.</p>
     */
    inline const Aws::Vector<PartListElement>& GetParts() const{ return m_parts; }
    inline void SetParts(const Aws::Vector<PartListElement>& value) { m_parts = value; }
    inline void SetParts(Aws::Vector<PartListElement>&& value) { m_parts = std::move(value); }
    inline ListPartsResult& WithParts(const Aws::Vector<PartListElement>& value) { SetParts(value); return *this;}
    inline ListPartsResult& WithParts(Aws::Vector<PartListElement>&& value) { SetParts(std::move(value)); return *this;}
    inline ListPartsResult& AddParts(const PartListElement& value) { m_parts.push_back(value); return *this; }
    inline ListPartsResult& AddParts(PartListElement&& value) { m_parts.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>An opaque string that represents where to continue pagination of the results.
     * You use the marker in a new List Parts request to obtain more jobs in the list.
     * If there are no more parts, this value is <code>null</code>.</p>
     */
    inline const Aws::String& GetMarker() const{ return m_marker; }
    inline void SetMarker(const Aws::String& value) { m_marker = value; }
    inline void SetMarker(Aws::String&& value) { m_marker = std::move(value); }
    inline void SetMarker(const char* value) { m_marker.assign(value); }
    inline ListPartsResult& WithMarker(const Aws::String& value) { SetMarker(value); return *this;}
    inline ListPartsResult& WithMarker(Aws::String&& value) { SetMarker(std::move(value)); return *this;}
    inline ListPartsResult& WithMarker(const char* value) { SetMarker(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline ListPartsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline ListPartsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline ListPartsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_multipartUploadId;

    Aws::String m_vaultARN;

    Aws::String m_archiveDescription;

    long long m_partSizeInBytes;

    Aws::String m_creationDate;

    Aws::Vector<PartListElement> m_parts;

    Aws::String m_marker;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Glacier
} // namespace Aws
