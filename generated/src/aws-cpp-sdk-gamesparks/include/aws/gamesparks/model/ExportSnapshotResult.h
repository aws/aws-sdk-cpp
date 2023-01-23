/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/gamesparks/GameSparks_EXPORTS.h>
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
namespace GameSparks
{
namespace Model
{
  class ExportSnapshotResult
  {
  public:
    AWS_GAMESPARKS_API ExportSnapshotResult();
    AWS_GAMESPARKS_API ExportSnapshotResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_GAMESPARKS_API ExportSnapshotResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The presigned URL for the snapshot data.</p> <p> This URL will be available
     * for 10 minutes, and can be used to download the snapshot content. If the URL
     * expires, a new one can be requested using the same operation. </p>
     */
    inline const Aws::String& GetS3Url() const{ return m_s3Url; }

    /**
     * <p>The presigned URL for the snapshot data.</p> <p> This URL will be available
     * for 10 minutes, and can be used to download the snapshot content. If the URL
     * expires, a new one can be requested using the same operation. </p>
     */
    inline void SetS3Url(const Aws::String& value) { m_s3Url = value; }

    /**
     * <p>The presigned URL for the snapshot data.</p> <p> This URL will be available
     * for 10 minutes, and can be used to download the snapshot content. If the URL
     * expires, a new one can be requested using the same operation. </p>
     */
    inline void SetS3Url(Aws::String&& value) { m_s3Url = std::move(value); }

    /**
     * <p>The presigned URL for the snapshot data.</p> <p> This URL will be available
     * for 10 minutes, and can be used to download the snapshot content. If the URL
     * expires, a new one can be requested using the same operation. </p>
     */
    inline void SetS3Url(const char* value) { m_s3Url.assign(value); }

    /**
     * <p>The presigned URL for the snapshot data.</p> <p> This URL will be available
     * for 10 minutes, and can be used to download the snapshot content. If the URL
     * expires, a new one can be requested using the same operation. </p>
     */
    inline ExportSnapshotResult& WithS3Url(const Aws::String& value) { SetS3Url(value); return *this;}

    /**
     * <p>The presigned URL for the snapshot data.</p> <p> This URL will be available
     * for 10 minutes, and can be used to download the snapshot content. If the URL
     * expires, a new one can be requested using the same operation. </p>
     */
    inline ExportSnapshotResult& WithS3Url(Aws::String&& value) { SetS3Url(std::move(value)); return *this;}

    /**
     * <p>The presigned URL for the snapshot data.</p> <p> This URL will be available
     * for 10 minutes, and can be used to download the snapshot content. If the URL
     * expires, a new one can be requested using the same operation. </p>
     */
    inline ExportSnapshotResult& WithS3Url(const char* value) { SetS3Url(value); return *this;}

  private:

    Aws::String m_s3Url;
  };

} // namespace Model
} // namespace GameSparks
} // namespace Aws
