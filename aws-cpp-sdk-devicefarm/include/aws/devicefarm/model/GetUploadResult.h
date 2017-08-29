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
#include <aws/devicefarm/DeviceFarm_EXPORTS.h>
#include <aws/devicefarm/model/Upload.h>
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
namespace DeviceFarm
{
namespace Model
{
  /**
   * <p>Represents the result of a get upload request.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/devicefarm-2015-06-23/GetUploadResult">AWS
   * API Reference</a></p>
   */
  class AWS_DEVICEFARM_API GetUploadResult
  {
  public:
    GetUploadResult();
    GetUploadResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    GetUploadResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>An app or a set of one or more tests to upload or that have been
     * uploaded.</p>
     */
    inline const Upload& GetUpload() const{ return m_upload; }

    /**
     * <p>An app or a set of one or more tests to upload or that have been
     * uploaded.</p>
     */
    inline void SetUpload(const Upload& value) { m_upload = value; }

    /**
     * <p>An app or a set of one or more tests to upload or that have been
     * uploaded.</p>
     */
    inline void SetUpload(Upload&& value) { m_upload = std::move(value); }

    /**
     * <p>An app or a set of one or more tests to upload or that have been
     * uploaded.</p>
     */
    inline GetUploadResult& WithUpload(const Upload& value) { SetUpload(value); return *this;}

    /**
     * <p>An app or a set of one or more tests to upload or that have been
     * uploaded.</p>
     */
    inline GetUploadResult& WithUpload(Upload&& value) { SetUpload(std::move(value)); return *this;}

  private:

    Upload m_upload;
  };

} // namespace Model
} // namespace DeviceFarm
} // namespace Aws
