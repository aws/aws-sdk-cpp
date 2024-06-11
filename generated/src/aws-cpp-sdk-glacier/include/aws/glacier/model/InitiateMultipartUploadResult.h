﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
   * <p>The Amazon S3 Glacier response to your request.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/glacier-2012-06-01/InitiateMultipartUploadOutput">AWS
   * API Reference</a></p>
   */
  class InitiateMultipartUploadResult
  {
  public:
    AWS_GLACIER_API InitiateMultipartUploadResult();
    AWS_GLACIER_API InitiateMultipartUploadResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_GLACIER_API InitiateMultipartUploadResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The relative URI path of the multipart upload ID Amazon S3 Glacier
     * created.</p>
     */
    inline const Aws::String& GetLocation() const{ return m_location; }
    inline void SetLocation(const Aws::String& value) { m_location = value; }
    inline void SetLocation(Aws::String&& value) { m_location = std::move(value); }
    inline void SetLocation(const char* value) { m_location.assign(value); }
    inline InitiateMultipartUploadResult& WithLocation(const Aws::String& value) { SetLocation(value); return *this;}
    inline InitiateMultipartUploadResult& WithLocation(Aws::String&& value) { SetLocation(std::move(value)); return *this;}
    inline InitiateMultipartUploadResult& WithLocation(const char* value) { SetLocation(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the multipart upload. This value is also included as part of the
     * location.</p>
     */
    inline const Aws::String& GetUploadId() const{ return m_uploadId; }
    inline void SetUploadId(const Aws::String& value) { m_uploadId = value; }
    inline void SetUploadId(Aws::String&& value) { m_uploadId = std::move(value); }
    inline void SetUploadId(const char* value) { m_uploadId.assign(value); }
    inline InitiateMultipartUploadResult& WithUploadId(const Aws::String& value) { SetUploadId(value); return *this;}
    inline InitiateMultipartUploadResult& WithUploadId(Aws::String&& value) { SetUploadId(std::move(value)); return *this;}
    inline InitiateMultipartUploadResult& WithUploadId(const char* value) { SetUploadId(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline InitiateMultipartUploadResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline InitiateMultipartUploadResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline InitiateMultipartUploadResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_location;

    Aws::String m_uploadId;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Glacier
} // namespace Aws
