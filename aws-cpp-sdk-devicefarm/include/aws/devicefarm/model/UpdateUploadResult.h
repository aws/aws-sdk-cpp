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
  class UpdateUploadResult
  {
  public:
    AWS_DEVICEFARM_API UpdateUploadResult();
    AWS_DEVICEFARM_API UpdateUploadResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_DEVICEFARM_API UpdateUploadResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>A test spec uploaded to Device Farm.</p>
     */
    inline const Upload& GetUpload() const{ return m_upload; }

    /**
     * <p>A test spec uploaded to Device Farm.</p>
     */
    inline void SetUpload(const Upload& value) { m_upload = value; }

    /**
     * <p>A test spec uploaded to Device Farm.</p>
     */
    inline void SetUpload(Upload&& value) { m_upload = std::move(value); }

    /**
     * <p>A test spec uploaded to Device Farm.</p>
     */
    inline UpdateUploadResult& WithUpload(const Upload& value) { SetUpload(value); return *this;}

    /**
     * <p>A test spec uploaded to Device Farm.</p>
     */
    inline UpdateUploadResult& WithUpload(Upload&& value) { SetUpload(std::move(value)); return *this;}

  private:

    Upload m_upload;
  };

} // namespace Model
} // namespace DeviceFarm
} // namespace Aws
