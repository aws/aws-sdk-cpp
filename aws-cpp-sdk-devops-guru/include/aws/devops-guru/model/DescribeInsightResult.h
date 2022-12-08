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
  class DescribeInsightResult
  {
  public:
    AWS_DEVOPSGURU_API DescribeInsightResult();
    AWS_DEVOPSGURU_API DescribeInsightResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_DEVOPSGURU_API DescribeInsightResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p> A <code>ProactiveInsight</code> object that represents the requested
     * insight. </p>
     */
    inline const ProactiveInsight& GetProactiveInsight() const{ return m_proactiveInsight; }

    /**
     * <p> A <code>ProactiveInsight</code> object that represents the requested
     * insight. </p>
     */
    inline void SetProactiveInsight(const ProactiveInsight& value) { m_proactiveInsight = value; }

    /**
     * <p> A <code>ProactiveInsight</code> object that represents the requested
     * insight. </p>
     */
    inline void SetProactiveInsight(ProactiveInsight&& value) { m_proactiveInsight = std::move(value); }

    /**
     * <p> A <code>ProactiveInsight</code> object that represents the requested
     * insight. </p>
     */
    inline DescribeInsightResult& WithProactiveInsight(const ProactiveInsight& value) { SetProactiveInsight(value); return *this;}

    /**
     * <p> A <code>ProactiveInsight</code> object that represents the requested
     * insight. </p>
     */
    inline DescribeInsightResult& WithProactiveInsight(ProactiveInsight&& value) { SetProactiveInsight(std::move(value)); return *this;}


    /**
     * <p> A <code>ReactiveInsight</code> object that represents the requested insight.
     * </p>
     */
    inline const ReactiveInsight& GetReactiveInsight() const{ return m_reactiveInsight; }

    /**
     * <p> A <code>ReactiveInsight</code> object that represents the requested insight.
     * </p>
     */
    inline void SetReactiveInsight(const ReactiveInsight& value) { m_reactiveInsight = value; }

    /**
     * <p> A <code>ReactiveInsight</code> object that represents the requested insight.
     * </p>
     */
    inline void SetReactiveInsight(ReactiveInsight&& value) { m_reactiveInsight = std::move(value); }

    /**
     * <p> A <code>ReactiveInsight</code> object that represents the requested insight.
     * </p>
     */
    inline DescribeInsightResult& WithReactiveInsight(const ReactiveInsight& value) { SetReactiveInsight(value); return *this;}

    /**
     * <p> A <code>ReactiveInsight</code> object that represents the requested insight.
     * </p>
     */
    inline DescribeInsightResult& WithReactiveInsight(ReactiveInsight&& value) { SetReactiveInsight(std::move(value)); return *this;}

  private:

    ProactiveInsight m_proactiveInsight;

    ReactiveInsight m_reactiveInsight;
  };

} // namespace Model
} // namespace DevOpsGuru
} // namespace Aws
