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
   * <p>Contains the Amazon S3 Glacier response to your request.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/glacier-2012-06-01/UploadMultipartPartOutput">AWS
   * API Reference</a></p>
   */
  class AWS_GLACIER_API UploadMultipartPartResult
  {
  public:
    UploadMultipartPartResult();
    UploadMultipartPartResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    UploadMultipartPartResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


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
