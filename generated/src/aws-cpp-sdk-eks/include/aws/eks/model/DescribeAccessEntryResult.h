﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/eks/EKS_EXPORTS.h>
#include <aws/eks/model/AccessEntry.h>
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
namespace EKS
{
namespace Model
{
  class DescribeAccessEntryResult
  {
  public:
    AWS_EKS_API DescribeAccessEntryResult();
    AWS_EKS_API DescribeAccessEntryResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_EKS_API DescribeAccessEntryResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Information about the access entry.</p>
     */
    inline const AccessEntry& GetAccessEntry() const{ return m_accessEntry; }
    inline void SetAccessEntry(const AccessEntry& value) { m_accessEntry = value; }
    inline void SetAccessEntry(AccessEntry&& value) { m_accessEntry = std::move(value); }
    inline DescribeAccessEntryResult& WithAccessEntry(const AccessEntry& value) { SetAccessEntry(value); return *this;}
    inline DescribeAccessEntryResult& WithAccessEntry(AccessEntry&& value) { SetAccessEntry(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline DescribeAccessEntryResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline DescribeAccessEntryResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline DescribeAccessEntryResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    AccessEntry m_accessEntry;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace EKS
} // namespace Aws
