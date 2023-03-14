/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/devicefarm/DeviceFarm_EXPORTS.h>
#include <aws/devicefarm/model/Upload.h>
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


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline UpdateUploadResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline UpdateUploadResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline UpdateUploadResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Upload m_upload;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace DeviceFarm
} // namespace Aws
