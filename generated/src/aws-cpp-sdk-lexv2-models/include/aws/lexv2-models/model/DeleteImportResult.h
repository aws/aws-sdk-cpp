﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lexv2-models/LexModelsV2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/lexv2-models/model/ImportStatus.h>
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
  class DeleteImportResult
  {
  public:
    AWS_LEXMODELSV2_API DeleteImportResult();
    AWS_LEXMODELSV2_API DeleteImportResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_LEXMODELSV2_API DeleteImportResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The unique identifier of the deleted import.</p>
     */
    inline const Aws::String& GetImportId() const{ return m_importId; }
    inline void SetImportId(const Aws::String& value) { m_importId = value; }
    inline void SetImportId(Aws::String&& value) { m_importId = std::move(value); }
    inline void SetImportId(const char* value) { m_importId.assign(value); }
    inline DeleteImportResult& WithImportId(const Aws::String& value) { SetImportId(value); return *this;}
    inline DeleteImportResult& WithImportId(Aws::String&& value) { SetImportId(std::move(value)); return *this;}
    inline DeleteImportResult& WithImportId(const char* value) { SetImportId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The current status of the deletion. When the deletion is complete, the import
     * will no longer be returned by the <a
     * href="https://docs.aws.amazon.com/lexv2/latest/APIReference/API_ListImports.html">ListImports</a>
     * operation and calls to the <a
     * href="https://docs.aws.amazon.com/lexv2/latest/APIReference/API_DescribeImport.html">DescribeImport</a>
     * operation with the import identifier will fail.</p>
     */
    inline const ImportStatus& GetImportStatus() const{ return m_importStatus; }
    inline void SetImportStatus(const ImportStatus& value) { m_importStatus = value; }
    inline void SetImportStatus(ImportStatus&& value) { m_importStatus = std::move(value); }
    inline DeleteImportResult& WithImportStatus(const ImportStatus& value) { SetImportStatus(value); return *this;}
    inline DeleteImportResult& WithImportStatus(ImportStatus&& value) { SetImportStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline DeleteImportResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline DeleteImportResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline DeleteImportResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_importId;

    ImportStatus m_importStatus;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace LexModelsV2
} // namespace Aws
