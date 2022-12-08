/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mturk-requester/MTurk_EXPORTS.h>
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
namespace MTurk
{
namespace Model
{
  class GetFileUploadURLResult
  {
  public:
    AWS_MTURK_API GetFileUploadURLResult();
    AWS_MTURK_API GetFileUploadURLResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_MTURK_API GetFileUploadURLResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p> A temporary URL for the file that the Worker uploaded for the answer. </p>
     */
    inline const Aws::String& GetFileUploadURL() const{ return m_fileUploadURL; }

    /**
     * <p> A temporary URL for the file that the Worker uploaded for the answer. </p>
     */
    inline void SetFileUploadURL(const Aws::String& value) { m_fileUploadURL = value; }

    /**
     * <p> A temporary URL for the file that the Worker uploaded for the answer. </p>
     */
    inline void SetFileUploadURL(Aws::String&& value) { m_fileUploadURL = std::move(value); }

    /**
     * <p> A temporary URL for the file that the Worker uploaded for the answer. </p>
     */
    inline void SetFileUploadURL(const char* value) { m_fileUploadURL.assign(value); }

    /**
     * <p> A temporary URL for the file that the Worker uploaded for the answer. </p>
     */
    inline GetFileUploadURLResult& WithFileUploadURL(const Aws::String& value) { SetFileUploadURL(value); return *this;}

    /**
     * <p> A temporary URL for the file that the Worker uploaded for the answer. </p>
     */
    inline GetFileUploadURLResult& WithFileUploadURL(Aws::String&& value) { SetFileUploadURL(std::move(value)); return *this;}

    /**
     * <p> A temporary URL for the file that the Worker uploaded for the answer. </p>
     */
    inline GetFileUploadURLResult& WithFileUploadURL(const char* value) { SetFileUploadURL(value); return *this;}

  private:

    Aws::String m_fileUploadURL;
  };

} // namespace Model
} // namespace MTurk
} // namespace Aws
