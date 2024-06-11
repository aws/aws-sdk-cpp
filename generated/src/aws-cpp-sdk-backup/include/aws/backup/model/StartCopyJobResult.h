﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/backup/Backup_EXPORTS.h>
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
namespace Backup
{
namespace Model
{
  class StartCopyJobResult
  {
  public:
    AWS_BACKUP_API StartCopyJobResult();
    AWS_BACKUP_API StartCopyJobResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_BACKUP_API StartCopyJobResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Uniquely identifies a copy job.</p>
     */
    inline const Aws::String& GetCopyJobId() const{ return m_copyJobId; }
    inline void SetCopyJobId(const Aws::String& value) { m_copyJobId = value; }
    inline void SetCopyJobId(Aws::String&& value) { m_copyJobId = std::move(value); }
    inline void SetCopyJobId(const char* value) { m_copyJobId.assign(value); }
    inline StartCopyJobResult& WithCopyJobId(const Aws::String& value) { SetCopyJobId(value); return *this;}
    inline StartCopyJobResult& WithCopyJobId(Aws::String&& value) { SetCopyJobId(std::move(value)); return *this;}
    inline StartCopyJobResult& WithCopyJobId(const char* value) { SetCopyJobId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time that a copy job is created, in Unix format and Coordinated
     * Universal Time (UTC). The value of <code>CreationDate</code> is accurate to
     * milliseconds. For example, the value 1516925490.087 represents Friday, January
     * 26, 2018 12:11:30.087 AM.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationDate() const{ return m_creationDate; }
    inline void SetCreationDate(const Aws::Utils::DateTime& value) { m_creationDate = value; }
    inline void SetCreationDate(Aws::Utils::DateTime&& value) { m_creationDate = std::move(value); }
    inline StartCopyJobResult& WithCreationDate(const Aws::Utils::DateTime& value) { SetCreationDate(value); return *this;}
    inline StartCopyJobResult& WithCreationDate(Aws::Utils::DateTime&& value) { SetCreationDate(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>This is a returned boolean value indicating this is a parent (composite) copy
     * job.</p>
     */
    inline bool GetIsParent() const{ return m_isParent; }
    inline void SetIsParent(bool value) { m_isParent = value; }
    inline StartCopyJobResult& WithIsParent(bool value) { SetIsParent(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline StartCopyJobResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline StartCopyJobResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline StartCopyJobResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_copyJobId;

    Aws::Utils::DateTime m_creationDate;

    bool m_isParent;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Backup
} // namespace Aws
