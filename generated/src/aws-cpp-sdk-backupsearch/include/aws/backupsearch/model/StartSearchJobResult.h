/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/backupsearch/BackupSearch_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
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
  class StartSearchJobResult
  {
  public:
    AWS_BACKUPSEARCH_API StartSearchJobResult();
    AWS_BACKUPSEARCH_API StartSearchJobResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_BACKUPSEARCH_API StartSearchJobResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The unique string that identifies the Amazon Resource Name (ARN) of the
     * specified search job.</p>
     */
    inline const Aws::String& GetSearchJobArn() const{ return m_searchJobArn; }
    inline void SetSearchJobArn(const Aws::String& value) { m_searchJobArn = value; }
    inline void SetSearchJobArn(Aws::String&& value) { m_searchJobArn = std::move(value); }
    inline void SetSearchJobArn(const char* value) { m_searchJobArn.assign(value); }
    inline StartSearchJobResult& WithSearchJobArn(const Aws::String& value) { SetSearchJobArn(value); return *this;}
    inline StartSearchJobResult& WithSearchJobArn(Aws::String&& value) { SetSearchJobArn(std::move(value)); return *this;}
    inline StartSearchJobResult& WithSearchJobArn(const char* value) { SetSearchJobArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time that a job was created, in Unix format and Coordinated
     * Universal Time (UTC). The value of <code>CompletionTime</code> is accurate to
     * milliseconds. For example, the value 1516925490.087 represents Friday, January
     * 26, 2018 12:11:30.087 AM.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const{ return m_creationTime; }
    inline void SetCreationTime(const Aws::Utils::DateTime& value) { m_creationTime = value; }
    inline void SetCreationTime(Aws::Utils::DateTime&& value) { m_creationTime = std::move(value); }
    inline StartSearchJobResult& WithCreationTime(const Aws::Utils::DateTime& value) { SetCreationTime(value); return *this;}
    inline StartSearchJobResult& WithCreationTime(Aws::Utils::DateTime&& value) { SetCreationTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique string that specifies the search job.</p>
     */
    inline const Aws::String& GetSearchJobIdentifier() const{ return m_searchJobIdentifier; }
    inline void SetSearchJobIdentifier(const Aws::String& value) { m_searchJobIdentifier = value; }
    inline void SetSearchJobIdentifier(Aws::String&& value) { m_searchJobIdentifier = std::move(value); }
    inline void SetSearchJobIdentifier(const char* value) { m_searchJobIdentifier.assign(value); }
    inline StartSearchJobResult& WithSearchJobIdentifier(const Aws::String& value) { SetSearchJobIdentifier(value); return *this;}
    inline StartSearchJobResult& WithSearchJobIdentifier(Aws::String&& value) { SetSearchJobIdentifier(std::move(value)); return *this;}
    inline StartSearchJobResult& WithSearchJobIdentifier(const char* value) { SetSearchJobIdentifier(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline StartSearchJobResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline StartSearchJobResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline StartSearchJobResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_searchJobArn;

    Aws::Utils::DateTime m_creationTime;

    Aws::String m_searchJobIdentifier;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace BackupSearch
} // namespace Aws
