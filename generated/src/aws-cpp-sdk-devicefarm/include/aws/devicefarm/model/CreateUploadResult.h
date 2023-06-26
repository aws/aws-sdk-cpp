﻿/**
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
  /**
   * <p>Represents the result of a create upload request.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/devicefarm-2015-06-23/CreateUploadResult">AWS
   * API Reference</a></p>
   */
  class CreateUploadResult
  {
  public:
    AWS_DEVICEFARM_API CreateUploadResult();
    AWS_DEVICEFARM_API CreateUploadResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_DEVICEFARM_API CreateUploadResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The newly created upload.</p>
     */
    inline const Upload& GetUpload() const{ return m_upload; }

    /**
     * <p>The newly created upload.</p>
     */
    inline void SetUpload(const Upload& value) { m_upload = value; }

    /**
     * <p>The newly created upload.</p>
     */
    inline void SetUpload(Upload&& value) { m_upload = std::move(value); }

    /**
     * <p>The newly created upload.</p>
     */
    inline CreateUploadResult& WithUpload(const Upload& value) { SetUpload(value); return *this;}

    /**
     * <p>The newly created upload.</p>
     */
    inline CreateUploadResult& WithUpload(Upload&& value) { SetUpload(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline CreateUploadResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline CreateUploadResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline CreateUploadResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Upload m_upload;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace DeviceFarm
} // namespace Aws
