﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/backup/Backup_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/backup/model/Framework.h>
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
  class ListFrameworksResult
  {
  public:
    AWS_BACKUP_API ListFrameworksResult();
    AWS_BACKUP_API ListFrameworksResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_BACKUP_API ListFrameworksResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A list of frameworks with details for each framework, including the framework
     * name, Amazon Resource Name (ARN), description, number of controls, creation
     * time, and deployment status.</p>
     */
    inline const Aws::Vector<Framework>& GetFrameworks() const{ return m_frameworks; }
    inline void SetFrameworks(const Aws::Vector<Framework>& value) { m_frameworks = value; }
    inline void SetFrameworks(Aws::Vector<Framework>&& value) { m_frameworks = std::move(value); }
    inline ListFrameworksResult& WithFrameworks(const Aws::Vector<Framework>& value) { SetFrameworks(value); return *this;}
    inline ListFrameworksResult& WithFrameworks(Aws::Vector<Framework>&& value) { SetFrameworks(std::move(value)); return *this;}
    inline ListFrameworksResult& AddFrameworks(const Framework& value) { m_frameworks.push_back(value); return *this; }
    inline ListFrameworksResult& AddFrameworks(Framework&& value) { m_frameworks.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>An identifier that was returned from the previous call to this operation,
     * which can be used to return the next set of items in the list.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }
    inline ListFrameworksResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListFrameworksResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListFrameworksResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline ListFrameworksResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline ListFrameworksResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline ListFrameworksResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<Framework> m_frameworks;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Backup
} // namespace Aws
