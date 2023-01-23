/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/backupstorage/BackupStorage_EXPORTS.h>
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
namespace BackupStorage
{
namespace Model
{
  class StartObjectResult
  {
  public:
    AWS_BACKUPSTORAGE_API StartObjectResult();
    AWS_BACKUPSTORAGE_API StartObjectResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_BACKUPSTORAGE_API StartObjectResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * Upload Id for a given upload.
     */
    inline const Aws::String& GetUploadId() const{ return m_uploadId; }

    /**
     * Upload Id for a given upload.
     */
    inline void SetUploadId(const Aws::String& value) { m_uploadId = value; }

    /**
     * Upload Id for a given upload.
     */
    inline void SetUploadId(Aws::String&& value) { m_uploadId = std::move(value); }

    /**
     * Upload Id for a given upload.
     */
    inline void SetUploadId(const char* value) { m_uploadId.assign(value); }

    /**
     * Upload Id for a given upload.
     */
    inline StartObjectResult& WithUploadId(const Aws::String& value) { SetUploadId(value); return *this;}

    /**
     * Upload Id for a given upload.
     */
    inline StartObjectResult& WithUploadId(Aws::String&& value) { SetUploadId(std::move(value)); return *this;}

    /**
     * Upload Id for a given upload.
     */
    inline StartObjectResult& WithUploadId(const char* value) { SetUploadId(value); return *this;}

  private:

    Aws::String m_uploadId;
  };

} // namespace Model
} // namespace BackupStorage
} // namespace Aws
