﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/backup-gateway/BackupGateway_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/backup-gateway/model/Hypervisor.h>
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
namespace BackupGateway
{
namespace Model
{
  class ListHypervisorsResult
  {
  public:
    AWS_BACKUPGATEWAY_API ListHypervisorsResult();
    AWS_BACKUPGATEWAY_API ListHypervisorsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_BACKUPGATEWAY_API ListHypervisorsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A list of your <code>Hypervisor</code> objects, ordered by their Amazon
     * Resource Names (ARNs).</p>
     */
    inline const Aws::Vector<Hypervisor>& GetHypervisors() const{ return m_hypervisors; }
    inline void SetHypervisors(const Aws::Vector<Hypervisor>& value) { m_hypervisors = value; }
    inline void SetHypervisors(Aws::Vector<Hypervisor>&& value) { m_hypervisors = std::move(value); }
    inline ListHypervisorsResult& WithHypervisors(const Aws::Vector<Hypervisor>& value) { SetHypervisors(value); return *this;}
    inline ListHypervisorsResult& WithHypervisors(Aws::Vector<Hypervisor>&& value) { SetHypervisors(std::move(value)); return *this;}
    inline ListHypervisorsResult& AddHypervisors(const Hypervisor& value) { m_hypervisors.push_back(value); return *this; }
    inline ListHypervisorsResult& AddHypervisors(Hypervisor&& value) { m_hypervisors.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The next item following a partial list of returned resources. For example, if
     * a request is made to return <code>maxResults</code> number of resources,
     * <code>NextToken</code> allows you to return more items in your list starting at
     * the location pointed to by the next token.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }
    inline ListHypervisorsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListHypervisorsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListHypervisorsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline ListHypervisorsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline ListHypervisorsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline ListHypervisorsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<Hypervisor> m_hypervisors;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace BackupGateway
} // namespace Aws
