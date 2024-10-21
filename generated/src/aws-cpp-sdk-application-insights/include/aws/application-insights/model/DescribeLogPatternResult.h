/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/application-insights/ApplicationInsights_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/application-insights/model/LogPattern.h>
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
namespace ApplicationInsights
{
namespace Model
{
  class DescribeLogPatternResult
  {
  public:
    AWS_APPLICATIONINSIGHTS_API DescribeLogPatternResult();
    AWS_APPLICATIONINSIGHTS_API DescribeLogPatternResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_APPLICATIONINSIGHTS_API DescribeLogPatternResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The name of the resource group.</p>
     */
    inline const Aws::String& GetResourceGroupName() const{ return m_resourceGroupName; }
    inline void SetResourceGroupName(const Aws::String& value) { m_resourceGroupName = value; }
    inline void SetResourceGroupName(Aws::String&& value) { m_resourceGroupName = std::move(value); }
    inline void SetResourceGroupName(const char* value) { m_resourceGroupName.assign(value); }
    inline DescribeLogPatternResult& WithResourceGroupName(const Aws::String& value) { SetResourceGroupName(value); return *this;}
    inline DescribeLogPatternResult& WithResourceGroupName(Aws::String&& value) { SetResourceGroupName(std::move(value)); return *this;}
    inline DescribeLogPatternResult& WithResourceGroupName(const char* value) { SetResourceGroupName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Web Services account ID for the resource group owner.</p>
     */
    inline const Aws::String& GetAccountId() const{ return m_accountId; }
    inline void SetAccountId(const Aws::String& value) { m_accountId = value; }
    inline void SetAccountId(Aws::String&& value) { m_accountId = std::move(value); }
    inline void SetAccountId(const char* value) { m_accountId.assign(value); }
    inline DescribeLogPatternResult& WithAccountId(const Aws::String& value) { SetAccountId(value); return *this;}
    inline DescribeLogPatternResult& WithAccountId(Aws::String&& value) { SetAccountId(std::move(value)); return *this;}
    inline DescribeLogPatternResult& WithAccountId(const char* value) { SetAccountId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The successfully created log pattern.</p>
     */
    inline const LogPattern& GetLogPattern() const{ return m_logPattern; }
    inline void SetLogPattern(const LogPattern& value) { m_logPattern = value; }
    inline void SetLogPattern(LogPattern&& value) { m_logPattern = std::move(value); }
    inline DescribeLogPatternResult& WithLogPattern(const LogPattern& value) { SetLogPattern(value); return *this;}
    inline DescribeLogPatternResult& WithLogPattern(LogPattern&& value) { SetLogPattern(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline DescribeLogPatternResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline DescribeLogPatternResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline DescribeLogPatternResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_resourceGroupName;

    Aws::String m_accountId;

    LogPattern m_logPattern;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace ApplicationInsights
} // namespace Aws
