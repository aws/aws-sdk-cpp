/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
  class GetUploadResult
  {
  public:
    AWS_DEVICEFARM_API GetUploadResult();
    AWS_DEVICEFARM_API GetUploadResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_DEVICEFARM_API GetUploadResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


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
