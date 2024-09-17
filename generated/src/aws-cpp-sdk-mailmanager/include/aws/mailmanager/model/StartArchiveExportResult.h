/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mailmanager/MailManager_EXPORTS.h>
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
namespace MailManager
{
namespace Model
{
  /**
   * <p>The response from initiating an archive export.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mailmanager-2023-10-17/StartArchiveExportResponse">AWS
   * API Reference</a></p>
   */
  class StartArchiveExportResult
  {
  public:
    AWS_MAILMANAGER_API StartArchiveExportResult();
    AWS_MAILMANAGER_API StartArchiveExportResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_MAILMANAGER_API StartArchiveExportResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The unique identifier for the initiated export job.</p>
     */
    inline const Aws::String& GetExportId() const{ return m_exportId; }
    inline void SetExportId(const Aws::String& value) { m_exportId = value; }
    inline void SetExportId(Aws::String&& value) { m_exportId = std::move(value); }
    inline void SetExportId(const char* value) { m_exportId.assign(value); }
    inline StartArchiveExportResult& WithExportId(const Aws::String& value) { SetExportId(value); return *this;}
    inline StartArchiveExportResult& WithExportId(Aws::String&& value) { SetExportId(std::move(value)); return *this;}
    inline StartArchiveExportResult& WithExportId(const char* value) { SetExportId(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline StartArchiveExportResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline StartArchiveExportResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline StartArchiveExportResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_exportId;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace MailManager
} // namespace Aws
