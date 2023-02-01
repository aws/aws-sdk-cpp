/**
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


    /**
     * <p>Uniquely identifies a copy job.</p>
     */
    inline const Aws::String& GetCopyJobId() const{ return m_copyJobId; }

    /**
     * <p>Uniquely identifies a copy job.</p>
     */
    inline void SetCopyJobId(const Aws::String& value) { m_copyJobId = value; }

    /**
     * <p>Uniquely identifies a copy job.</p>
     */
    inline void SetCopyJobId(Aws::String&& value) { m_copyJobId = std::move(value); }

    /**
     * <p>Uniquely identifies a copy job.</p>
     */
    inline void SetCopyJobId(const char* value) { m_copyJobId.assign(value); }

    /**
     * <p>Uniquely identifies a copy job.</p>
     */
    inline StartCopyJobResult& WithCopyJobId(const Aws::String& value) { SetCopyJobId(value); return *this;}

    /**
     * <p>Uniquely identifies a copy job.</p>
     */
    inline StartCopyJobResult& WithCopyJobId(Aws::String&& value) { SetCopyJobId(std::move(value)); return *this;}

    /**
     * <p>Uniquely identifies a copy job.</p>
     */
    inline StartCopyJobResult& WithCopyJobId(const char* value) { SetCopyJobId(value); return *this;}


    /**
     * <p>The date and time that a copy job is created, in Unix format and Coordinated
     * Universal Time (UTC). The value of <code>CreationDate</code> is accurate to
     * milliseconds. For example, the value 1516925490.087 represents Friday, January
     * 26, 2018 12:11:30.087 AM.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationDate() const{ return m_creationDate; }

    /**
     * <p>The date and time that a copy job is created, in Unix format and Coordinated
     * Universal Time (UTC). The value of <code>CreationDate</code> is accurate to
     * milliseconds. For example, the value 1516925490.087 represents Friday, January
     * 26, 2018 12:11:30.087 AM.</p>
     */
    inline void SetCreationDate(const Aws::Utils::DateTime& value) { m_creationDate = value; }

    /**
     * <p>The date and time that a copy job is created, in Unix format and Coordinated
     * Universal Time (UTC). The value of <code>CreationDate</code> is accurate to
     * milliseconds. For example, the value 1516925490.087 represents Friday, January
     * 26, 2018 12:11:30.087 AM.</p>
     */
    inline void SetCreationDate(Aws::Utils::DateTime&& value) { m_creationDate = std::move(value); }

    /**
     * <p>The date and time that a copy job is created, in Unix format and Coordinated
     * Universal Time (UTC). The value of <code>CreationDate</code> is accurate to
     * milliseconds. For example, the value 1516925490.087 represents Friday, January
     * 26, 2018 12:11:30.087 AM.</p>
     */
    inline StartCopyJobResult& WithCreationDate(const Aws::Utils::DateTime& value) { SetCreationDate(value); return *this;}

    /**
     * <p>The date and time that a copy job is created, in Unix format and Coordinated
     * Universal Time (UTC). The value of <code>CreationDate</code> is accurate to
     * milliseconds. For example, the value 1516925490.087 represents Friday, January
     * 26, 2018 12:11:30.087 AM.</p>
     */
    inline StartCopyJobResult& WithCreationDate(Aws::Utils::DateTime&& value) { SetCreationDate(std::move(value)); return *this;}


    /**
     * <p>This is a returned boolean value indicating this is a parent (composite) copy
     * job.</p>
     */
    inline bool GetIsParent() const{ return m_isParent; }

    /**
     * <p>This is a returned boolean value indicating this is a parent (composite) copy
     * job.</p>
     */
    inline void SetIsParent(bool value) { m_isParent = value; }

    /**
     * <p>This is a returned boolean value indicating this is a parent (composite) copy
     * job.</p>
     */
    inline StartCopyJobResult& WithIsParent(bool value) { SetIsParent(value); return *this;}

  private:

    Aws::String m_copyJobId;

    Aws::Utils::DateTime m_creationDate;

    bool m_isParent;
  };

} // namespace Model
} // namespace Backup
} // namespace Aws
