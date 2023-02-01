/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/finspace-data/FinSpaceData_EXPORTS.h>
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
namespace FinSpaceData
{
namespace Model
{
  class GetWorkingLocationResult
  {
  public:
    AWS_FINSPACEDATA_API GetWorkingLocationResult();
    AWS_FINSPACEDATA_API GetWorkingLocationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_FINSPACEDATA_API GetWorkingLocationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Returns the Amazon S3 URI for the working location.</p>
     */
    inline const Aws::String& GetS3Uri() const{ return m_s3Uri; }

    /**
     * <p>Returns the Amazon S3 URI for the working location.</p>
     */
    inline void SetS3Uri(const Aws::String& value) { m_s3Uri = value; }

    /**
     * <p>Returns the Amazon S3 URI for the working location.</p>
     */
    inline void SetS3Uri(Aws::String&& value) { m_s3Uri = std::move(value); }

    /**
     * <p>Returns the Amazon S3 URI for the working location.</p>
     */
    inline void SetS3Uri(const char* value) { m_s3Uri.assign(value); }

    /**
     * <p>Returns the Amazon S3 URI for the working location.</p>
     */
    inline GetWorkingLocationResult& WithS3Uri(const Aws::String& value) { SetS3Uri(value); return *this;}

    /**
     * <p>Returns the Amazon S3 URI for the working location.</p>
     */
    inline GetWorkingLocationResult& WithS3Uri(Aws::String&& value) { SetS3Uri(std::move(value)); return *this;}

    /**
     * <p>Returns the Amazon S3 URI for the working location.</p>
     */
    inline GetWorkingLocationResult& WithS3Uri(const char* value) { SetS3Uri(value); return *this;}


    /**
     * <p>Returns the Amazon S3 Path for the working location.</p>
     */
    inline const Aws::String& GetS3Path() const{ return m_s3Path; }

    /**
     * <p>Returns the Amazon S3 Path for the working location.</p>
     */
    inline void SetS3Path(const Aws::String& value) { m_s3Path = value; }

    /**
     * <p>Returns the Amazon S3 Path for the working location.</p>
     */
    inline void SetS3Path(Aws::String&& value) { m_s3Path = std::move(value); }

    /**
     * <p>Returns the Amazon S3 Path for the working location.</p>
     */
    inline void SetS3Path(const char* value) { m_s3Path.assign(value); }

    /**
     * <p>Returns the Amazon S3 Path for the working location.</p>
     */
    inline GetWorkingLocationResult& WithS3Path(const Aws::String& value) { SetS3Path(value); return *this;}

    /**
     * <p>Returns the Amazon S3 Path for the working location.</p>
     */
    inline GetWorkingLocationResult& WithS3Path(Aws::String&& value) { SetS3Path(std::move(value)); return *this;}

    /**
     * <p>Returns the Amazon S3 Path for the working location.</p>
     */
    inline GetWorkingLocationResult& WithS3Path(const char* value) { SetS3Path(value); return *this;}


    /**
     * <p>Returns the Amazon S3 bucket name for the working location.</p>
     */
    inline const Aws::String& GetS3Bucket() const{ return m_s3Bucket; }

    /**
     * <p>Returns the Amazon S3 bucket name for the working location.</p>
     */
    inline void SetS3Bucket(const Aws::String& value) { m_s3Bucket = value; }

    /**
     * <p>Returns the Amazon S3 bucket name for the working location.</p>
     */
    inline void SetS3Bucket(Aws::String&& value) { m_s3Bucket = std::move(value); }

    /**
     * <p>Returns the Amazon S3 bucket name for the working location.</p>
     */
    inline void SetS3Bucket(const char* value) { m_s3Bucket.assign(value); }

    /**
     * <p>Returns the Amazon S3 bucket name for the working location.</p>
     */
    inline GetWorkingLocationResult& WithS3Bucket(const Aws::String& value) { SetS3Bucket(value); return *this;}

    /**
     * <p>Returns the Amazon S3 bucket name for the working location.</p>
     */
    inline GetWorkingLocationResult& WithS3Bucket(Aws::String&& value) { SetS3Bucket(std::move(value)); return *this;}

    /**
     * <p>Returns the Amazon S3 bucket name for the working location.</p>
     */
    inline GetWorkingLocationResult& WithS3Bucket(const char* value) { SetS3Bucket(value); return *this;}

  private:

    Aws::String m_s3Uri;

    Aws::String m_s3Path;

    Aws::String m_s3Bucket;
  };

} // namespace Model
} // namespace FinSpaceData
} // namespace Aws
