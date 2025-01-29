/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mailmanager/MailManager_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/mailmanager/model/ImportJob.h>
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
  class ListAddressListImportJobsResult
  {
  public:
    AWS_MAILMANAGER_API ListAddressListImportJobsResult();
    AWS_MAILMANAGER_API ListAddressListImportJobsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_MAILMANAGER_API ListAddressListImportJobsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The list of import jobs.</p>
     */
    inline const Aws::Vector<ImportJob>& GetImportJobs() const{ return m_importJobs; }
    inline void SetImportJobs(const Aws::Vector<ImportJob>& value) { m_importJobs = value; }
    inline void SetImportJobs(Aws::Vector<ImportJob>&& value) { m_importJobs = std::move(value); }
    inline ListAddressListImportJobsResult& WithImportJobs(const Aws::Vector<ImportJob>& value) { SetImportJobs(value); return *this;}
    inline ListAddressListImportJobsResult& WithImportJobs(Aws::Vector<ImportJob>&& value) { SetImportJobs(std::move(value)); return *this;}
    inline ListAddressListImportJobsResult& AddImportJobs(const ImportJob& value) { m_importJobs.push_back(value); return *this; }
    inline ListAddressListImportJobsResult& AddImportJobs(ImportJob&& value) { m_importJobs.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>If NextToken is returned, there are more results available. The value of
     * NextToken is a unique pagination token for each page. Make the call again using
     * the returned token to retrieve the next page.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }
    inline ListAddressListImportJobsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListAddressListImportJobsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListAddressListImportJobsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline ListAddressListImportJobsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline ListAddressListImportJobsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline ListAddressListImportJobsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<ImportJob> m_importJobs;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace MailManager
} // namespace Aws
