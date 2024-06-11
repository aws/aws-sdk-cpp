﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/license-manager/LicenseManager_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/license-manager/model/LicenseConversionTask.h>
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
namespace LicenseManager
{
namespace Model
{
  class ListLicenseConversionTasksResult
  {
  public:
    AWS_LICENSEMANAGER_API ListLicenseConversionTasksResult();
    AWS_LICENSEMANAGER_API ListLicenseConversionTasksResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_LICENSEMANAGER_API ListLicenseConversionTasksResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Information about the license configuration tasks for your account.</p>
     */
    inline const Aws::Vector<LicenseConversionTask>& GetLicenseConversionTasks() const{ return m_licenseConversionTasks; }
    inline void SetLicenseConversionTasks(const Aws::Vector<LicenseConversionTask>& value) { m_licenseConversionTasks = value; }
    inline void SetLicenseConversionTasks(Aws::Vector<LicenseConversionTask>&& value) { m_licenseConversionTasks = std::move(value); }
    inline ListLicenseConversionTasksResult& WithLicenseConversionTasks(const Aws::Vector<LicenseConversionTask>& value) { SetLicenseConversionTasks(value); return *this;}
    inline ListLicenseConversionTasksResult& WithLicenseConversionTasks(Aws::Vector<LicenseConversionTask>&& value) { SetLicenseConversionTasks(std::move(value)); return *this;}
    inline ListLicenseConversionTasksResult& AddLicenseConversionTasks(const LicenseConversionTask& value) { m_licenseConversionTasks.push_back(value); return *this; }
    inline ListLicenseConversionTasksResult& AddLicenseConversionTasks(LicenseConversionTask&& value) { m_licenseConversionTasks.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Token for the next set of results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }
    inline ListLicenseConversionTasksResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListLicenseConversionTasksResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListLicenseConversionTasksResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline ListLicenseConversionTasksResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline ListLicenseConversionTasksResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline ListLicenseConversionTasksResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<LicenseConversionTask> m_licenseConversionTasks;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace LicenseManager
} // namespace Aws
