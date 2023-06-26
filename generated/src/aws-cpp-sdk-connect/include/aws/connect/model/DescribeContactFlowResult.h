﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/connect/model/ContactFlow.h>
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
namespace Connect
{
namespace Model
{
  class DescribeContactFlowResult
  {
  public:
    AWS_CONNECT_API DescribeContactFlowResult();
    AWS_CONNECT_API DescribeContactFlowResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CONNECT_API DescribeContactFlowResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Information about the flow.</p>
     */
    inline const ContactFlow& GetContactFlow() const{ return m_contactFlow; }

    /**
     * <p>Information about the flow.</p>
     */
    inline void SetContactFlow(const ContactFlow& value) { m_contactFlow = value; }

    /**
     * <p>Information about the flow.</p>
     */
    inline void SetContactFlow(ContactFlow&& value) { m_contactFlow = std::move(value); }

    /**
     * <p>Information about the flow.</p>
     */
    inline DescribeContactFlowResult& WithContactFlow(const ContactFlow& value) { SetContactFlow(value); return *this;}

    /**
     * <p>Information about the flow.</p>
     */
    inline DescribeContactFlowResult& WithContactFlow(ContactFlow&& value) { SetContactFlow(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline DescribeContactFlowResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline DescribeContactFlowResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline DescribeContactFlowResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    ContactFlow m_contactFlow;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Connect
} // namespace Aws
