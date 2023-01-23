/**
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
   * <p>Contains the Amazon S3 Glacier response to your request.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/glacier-2012-06-01/UploadMultipartPartOutput">AWS
   * API Reference</a></p>
   */
  class UploadMultipartPartResult
  {
  public:
    AWS_GLACIER_API UploadMultipartPartResult();
    AWS_GLACIER_API UploadMultipartPartResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_GLACIER_API UploadMultipartPartResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The SHA256 tree hash that Amazon S3 Glacier computed for the uploaded
     * part.</p>
     */
    inline const Aws::String& GetChecksum() const{ return m_checksum; }

    /**
     * <p>The SHA256 tree hash that Amazon S3 Glacier computed for the uploaded
     * part.</p>
     */
    inline void SetChecksum(const Aws::String& value) { m_checksum = value; }

    /**
     * <p>The SHA256 tree hash that Amazon S3 Glacier computed for the uploaded
     * part.</p>
     */
    inline void SetChecksum(Aws::String&& value) { m_checksum = std::move(value); }

    /**
     * <p>The SHA256 tree hash that Amazon S3 Glacier computed for the uploaded
     * part.</p>
     */
    inline void SetChecksum(const char* value) { m_checksum.assign(value); }

    /**
     * <p>The SHA256 tree hash that Amazon S3 Glacier computed for the uploaded
     * part.</p>
     */
    inline UploadMultipartPartResult& WithChecksum(const Aws::String& value) { SetChecksum(value); return *this;}

    /**
     * <p>The SHA256 tree hash that Amazon S3 Glacier computed for the uploaded
     * part.</p>
     */
    inline UploadMultipartPartResult& WithChecksum(Aws::String&& value) { SetChecksum(std::move(value)); return *this;}

    /**
     * <p>The SHA256 tree hash that Amazon S3 Glacier computed for the uploaded
     * part.</p>
     */
    inline UploadMultipartPartResult& WithChecksum(const char* value) { SetChecksum(value); return *this;}

  private:

    Aws::String m_checksum;
  };

} // namespace Model
} // namespace Glacier
} // namespace Aws
