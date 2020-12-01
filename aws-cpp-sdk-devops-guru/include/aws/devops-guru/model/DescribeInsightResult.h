/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/devops-guru/DevOpsGuru_EXPORTS.h>
#include <aws/devops-guru/model/ProactiveInsight.h>
#include <aws/devops-guru/model/ReactiveInsight.h>
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
namespace DevOpsGuru
{
namespace Model
{
  class AWS_DEVOPSGURU_API DescribeInsightResult
  {
  public:
    DescribeInsightResult();
    DescribeInsightResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    DescribeInsightResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    
    inline const ProactiveInsight& GetProactiveInsight() const{ return m_proactiveInsight; }

    
    inline void SetProactiveInsight(const ProactiveInsight& value) { m_proactiveInsight = value; }

    
    inline void SetProactiveInsight(ProactiveInsight&& value) { m_proactiveInsight = std::move(value); }

    
    inline DescribeInsightResult& WithProactiveInsight(const ProactiveInsight& value) { SetProactiveInsight(value); return *this;}

    
    inline DescribeInsightResult& WithProactiveInsight(ProactiveInsight&& value) { SetProactiveInsight(std::move(value)); return *this;}


    
    inline const ReactiveInsight& GetReactiveInsight() const{ return m_reactiveInsight; }

    
    inline void SetReactiveInsight(const ReactiveInsight& value) { m_reactiveInsight = value; }

    
    inline void SetReactiveInsight(ReactiveInsight&& value) { m_reactiveInsight = std::move(value); }

    
    inline DescribeInsightResult& WithReactiveInsight(const ReactiveInsight& value) { SetReactiveInsight(value); return *this;}

    
    inline DescribeInsightResult& WithReactiveInsight(ReactiveInsight&& value) { SetReactiveInsight(std::move(value)); return *this;}

  private:

    ProactiveInsight m_proactiveInsight;

    ReactiveInsight m_reactiveInsight;
  };

} // namespace Model
} // namespace DevOpsGuru
} // namespace Aws
