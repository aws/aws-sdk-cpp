/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/connect/model/ContactFlowModule.h>
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

  private:

    ContactFlowModule m_contactFlowModule;
  };

} // namespace Model
} // namespace Connect
} // namespace Aws
