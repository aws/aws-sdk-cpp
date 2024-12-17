/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/backupsearch/BackupSearch_EXPORTS.h>
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
namespace BackupSearch
{
namespace Model
{
  class StartSearchResultExportJobResult
  {
  public:
    AWS_BACKUPSEARCH_API StartSearchResultExportJobResult();
    AWS_BACKUPSEARCH_API StartSearchResultExportJobResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_BACKUPSEARCH_API StartSearchResultExportJobResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>This is the unique ARN (Amazon Resource Name) that belongs to the new export
     * job.</p>
     */
    inline const Aws::String& GetExportJobArn() const{ return m_exportJobArn; }
    inline void SetExportJobArn(const Aws::String& value) { m_exportJobArn = value; }
    inline void SetExportJobArn(Aws::String&& value) { m_exportJobArn = std::move(value); }
    inline void SetExportJobArn(const char* value) { m_exportJobArn.assign(value); }
    inline StartSearchResultExportJobResult& WithExportJobArn(const Aws::String& value) { SetExportJobArn(value); return *this;}
    inline StartSearchResultExportJobResult& WithExportJobArn(Aws::String&& value) { SetExportJobArn(std::move(value)); return *this;}
    inline StartSearchResultExportJobResult& WithExportJobArn(const char* value) { SetExportJobArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>This is the unique identifier that specifies the new export job.</p>
     */
    inline const Aws::String& GetExportJobIdentifier() const{ return m_exportJobIdentifier; }
    inline void SetExportJobIdentifier(const Aws::String& value) { m_exportJobIdentifier = value; }
    inline void SetExportJobIdentifier(Aws::String&& value) { m_exportJobIdentifier = std::move(value); }
    inline void SetExportJobIdentifier(const char* value) { m_exportJobIdentifier.assign(value); }
    inline StartSearchResultExportJobResult& WithExportJobIdentifier(const Aws::String& value) { SetExportJobIdentifier(value); return *this;}
    inline StartSearchResultExportJobResult& WithExportJobIdentifier(Aws::String&& value) { SetExportJobIdentifier(std::move(value)); return *this;}
    inline StartSearchResultExportJobResult& WithExportJobIdentifier(const char* value) { SetExportJobIdentifier(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline StartSearchResultExportJobResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline StartSearchResultExportJobResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline StartSearchResultExportJobResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_exportJobArn;

    Aws::String m_exportJobIdentifier;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace BackupSearch
} // namespace Aws
