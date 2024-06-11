﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lexv2-models/LexModelsV2_EXPORTS.h>
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
namespace LexModelsV2
{
namespace Model
{
  class CreateUploadUrlResult
  {
  public:
    AWS_LEXMODELSV2_API CreateUploadUrlResult();
    AWS_LEXMODELSV2_API CreateUploadUrlResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_LEXMODELSV2_API CreateUploadUrlResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>An identifier for a unique import job. Use it when you call the <a
     * href="https://docs.aws.amazon.com/lexv2/latest/APIReference/API_StartImport.html">StartImport</a>
     * operation.</p>
     */
    inline const Aws::String& GetImportId() const{ return m_importId; }
    inline void SetImportId(const Aws::String& value) { m_importId = value; }
    inline void SetImportId(Aws::String&& value) { m_importId = std::move(value); }
    inline void SetImportId(const char* value) { m_importId.assign(value); }
    inline CreateUploadUrlResult& WithImportId(const Aws::String& value) { SetImportId(value); return *this;}
    inline CreateUploadUrlResult& WithImportId(Aws::String&& value) { SetImportId(std::move(value)); return *this;}
    inline CreateUploadUrlResult& WithImportId(const char* value) { SetImportId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A pre-signed S3 write URL. Upload the zip archive file that contains the
     * definition of your bot or bot locale.</p>
     */
    inline const Aws::String& GetUploadUrl() const{ return m_uploadUrl; }
    inline void SetUploadUrl(const Aws::String& value) { m_uploadUrl = value; }
    inline void SetUploadUrl(Aws::String&& value) { m_uploadUrl = std::move(value); }
    inline void SetUploadUrl(const char* value) { m_uploadUrl.assign(value); }
    inline CreateUploadUrlResult& WithUploadUrl(const Aws::String& value) { SetUploadUrl(value); return *this;}
    inline CreateUploadUrlResult& WithUploadUrl(Aws::String&& value) { SetUploadUrl(std::move(value)); return *this;}
    inline CreateUploadUrlResult& WithUploadUrl(const char* value) { SetUploadUrl(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline CreateUploadUrlResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline CreateUploadUrlResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline CreateUploadUrlResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_importId;

    Aws::String m_uploadUrl;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace LexModelsV2
} // namespace Aws
