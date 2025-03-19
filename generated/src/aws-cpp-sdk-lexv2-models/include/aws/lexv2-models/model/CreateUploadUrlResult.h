/**
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
    AWS_LEXMODELSV2_API CreateUploadUrlResult() = default;
    AWS_LEXMODELSV2_API CreateUploadUrlResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_LEXMODELSV2_API CreateUploadUrlResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>An identifier for a unique import job. Use it when you call the <a
     * href="https://docs.aws.amazon.com/lexv2/latest/APIReference/API_StartImport.html">StartImport</a>
     * operation.</p>
     */
    inline const Aws::String& GetImportId() const { return m_importId; }
    template<typename ImportIdT = Aws::String>
    void SetImportId(ImportIdT&& value) { m_importIdHasBeenSet = true; m_importId = std::forward<ImportIdT>(value); }
    template<typename ImportIdT = Aws::String>
    CreateUploadUrlResult& WithImportId(ImportIdT&& value) { SetImportId(std::forward<ImportIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A pre-signed S3 write URL. Upload the zip archive file that contains the
     * definition of your bot or bot locale.</p>
     */
    inline const Aws::String& GetUploadUrl() const { return m_uploadUrl; }
    template<typename UploadUrlT = Aws::String>
    void SetUploadUrl(UploadUrlT&& value) { m_uploadUrlHasBeenSet = true; m_uploadUrl = std::forward<UploadUrlT>(value); }
    template<typename UploadUrlT = Aws::String>
    CreateUploadUrlResult& WithUploadUrl(UploadUrlT&& value) { SetUploadUrl(std::forward<UploadUrlT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    CreateUploadUrlResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_importId;
    bool m_importIdHasBeenSet = false;

    Aws::String m_uploadUrl;
    bool m_uploadUrlHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace LexModelsV2
} // namespace Aws
