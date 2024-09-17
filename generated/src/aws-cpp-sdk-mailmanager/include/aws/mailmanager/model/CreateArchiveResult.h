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
   * <p>The response from creating a new email archive.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mailmanager-2023-10-17/CreateArchiveResponse">AWS
   * API Reference</a></p>
   */
  class CreateArchiveResult
  {
  public:
    AWS_MAILMANAGER_API CreateArchiveResult();
    AWS_MAILMANAGER_API CreateArchiveResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_MAILMANAGER_API CreateArchiveResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The unique identifier for the newly created archive.</p>
     */
    inline const Aws::String& GetArchiveId() const{ return m_archiveId; }
    inline void SetArchiveId(const Aws::String& value) { m_archiveId = value; }
    inline void SetArchiveId(Aws::String&& value) { m_archiveId = std::move(value); }
    inline void SetArchiveId(const char* value) { m_archiveId.assign(value); }
    inline CreateArchiveResult& WithArchiveId(const Aws::String& value) { SetArchiveId(value); return *this;}
    inline CreateArchiveResult& WithArchiveId(Aws::String&& value) { SetArchiveId(std::move(value)); return *this;}
    inline CreateArchiveResult& WithArchiveId(const char* value) { SetArchiveId(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline CreateArchiveResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline CreateArchiveResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline CreateArchiveResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_archiveId;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace MailManager
} // namespace Aws
