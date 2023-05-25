/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/connect/model/ContactFlowModule.h>
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
  class DescribeContactFlowModuleResult
  {
  public:
    AWS_CONNECT_API DescribeContactFlowModuleResult();
    AWS_CONNECT_API DescribeContactFlowModuleResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CONNECT_API DescribeContactFlowModuleResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Information about the flow module.</p>
     */
    inline const ContactFlowModule& GetContactFlowModule() const{ return m_contactFlowModule; }

    /**
     * <p>Information about the flow module.</p>
     */
    inline void SetContactFlowModule(const ContactFlowModule& value) { m_contactFlowModule = value; }

    /**
     * <p>Information about the flow module.</p>
     */
    inline void SetContactFlowModule(ContactFlowModule&& value) { m_contactFlowModule = std::move(value); }

    /**
     * <p>Information about the flow module.</p>
     */
    inline DescribeContactFlowModuleResult& WithContactFlowModule(const ContactFlowModule& value) { SetContactFlowModule(value); return *this;}

    /**
     * <p>Information about the flow module.</p>
     */
    inline DescribeContactFlowModuleResult& WithContactFlowModule(ContactFlowModule&& value) { SetContactFlowModule(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline DescribeContactFlowModuleResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline DescribeContactFlowModuleResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline DescribeContactFlowModuleResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    ContactFlowModule m_contactFlowModule;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Connect
} // namespace Aws
