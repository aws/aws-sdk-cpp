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
  class UpdateFrameworkResult
  {
  public:
    AWS_BACKUP_API UpdateFrameworkResult();
    AWS_BACKUP_API UpdateFrameworkResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_BACKUP_API UpdateFrameworkResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The unique name of a framework. This name is between 1 and 256 characters,
     * starting with a letter, and consisting of letters (a-z, A-Z), numbers (0-9), and
     * underscores (_).</p>
     */
    inline const Aws::String& GetFrameworkName() const{ return m_frameworkName; }
    inline void SetFrameworkName(const Aws::String& value) { m_frameworkName = value; }
    inline void SetFrameworkName(Aws::String&& value) { m_frameworkName = std::move(value); }
    inline void SetFrameworkName(const char* value) { m_frameworkName.assign(value); }
    inline UpdateFrameworkResult& WithFrameworkName(const Aws::String& value) { SetFrameworkName(value); return *this;}
    inline UpdateFrameworkResult& WithFrameworkName(Aws::String&& value) { SetFrameworkName(std::move(value)); return *this;}
    inline UpdateFrameworkResult& WithFrameworkName(const char* value) { SetFrameworkName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>An Amazon Resource Name (ARN) that uniquely identifies a resource. The format
     * of the ARN depends on the resource type.</p>
     */
    inline const Aws::String& GetFrameworkArn() const{ return m_frameworkArn; }
    inline void SetFrameworkArn(const Aws::String& value) { m_frameworkArn = value; }
    inline void SetFrameworkArn(Aws::String&& value) { m_frameworkArn = std::move(value); }
    inline void SetFrameworkArn(const char* value) { m_frameworkArn.assign(value); }
    inline UpdateFrameworkResult& WithFrameworkArn(const Aws::String& value) { SetFrameworkArn(value); return *this;}
    inline UpdateFrameworkResult& WithFrameworkArn(Aws::String&& value) { SetFrameworkArn(std::move(value)); return *this;}
    inline UpdateFrameworkResult& WithFrameworkArn(const char* value) { SetFrameworkArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time that a framework is created, in ISO 8601 representation.
     * The value of <code>CreationTime</code> is accurate to milliseconds. For example,
     * 2020-07-10T15:00:00.000-08:00 represents the 10th of July 2020 at 3:00 PM 8
     * hours behind UTC.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const{ return m_creationTime; }
    inline void SetCreationTime(const Aws::Utils::DateTime& value) { m_creationTime = value; }
    inline void SetCreationTime(Aws::Utils::DateTime&& value) { m_creationTime = std::move(value); }
    inline UpdateFrameworkResult& WithCreationTime(const Aws::Utils::DateTime& value) { SetCreationTime(value); return *this;}
    inline UpdateFrameworkResult& WithCreationTime(Aws::Utils::DateTime&& value) { SetCreationTime(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline UpdateFrameworkResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline UpdateFrameworkResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline UpdateFrameworkResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_frameworkName;

    Aws::String m_frameworkArn;

    Aws::Utils::DateTime m_creationTime;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Backup
} // namespace Aws
