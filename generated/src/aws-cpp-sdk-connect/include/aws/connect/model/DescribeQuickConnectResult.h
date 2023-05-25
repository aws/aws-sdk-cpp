/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/connect/model/QuickConnect.h>
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
  class DescribeQuickConnectResult
  {
  public:
    AWS_CONNECT_API DescribeQuickConnectResult();
    AWS_CONNECT_API DescribeQuickConnectResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CONNECT_API DescribeQuickConnectResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Information about the quick connect.</p>
     */
    inline const QuickConnect& GetQuickConnect() const{ return m_quickConnect; }

    /**
     * <p>Information about the quick connect.</p>
     */
    inline void SetQuickConnect(const QuickConnect& value) { m_quickConnect = value; }

    /**
     * <p>Information about the quick connect.</p>
     */
    inline void SetQuickConnect(QuickConnect&& value) { m_quickConnect = std::move(value); }

    /**
     * <p>Information about the quick connect.</p>
     */
    inline DescribeQuickConnectResult& WithQuickConnect(const QuickConnect& value) { SetQuickConnect(value); return *this;}

    /**
     * <p>Information about the quick connect.</p>
     */
    inline DescribeQuickConnectResult& WithQuickConnect(QuickConnect&& value) { SetQuickConnect(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline DescribeQuickConnectResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline DescribeQuickConnectResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline DescribeQuickConnectResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    QuickConnect m_quickConnect;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Connect
} // namespace Aws
