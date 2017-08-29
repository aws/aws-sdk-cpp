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
  class AWS_MTURK_API GetFileUploadURLResult
  {
  public:
    GetFileUploadURLResult();
    GetFileUploadURLResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    GetFileUploadURLResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


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
