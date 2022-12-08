/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/devops-guru/DevOpsGuru_EXPORTS.h>
#include <aws/devops-guru/model/ProactiveAnomaly.h>
#include <aws/devops-guru/model/ReactiveAnomaly.h>
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
  class DescribeAnomalyResult
  {
  public:
    AWS_DEVOPSGURU_API DescribeAnomalyResult();
    AWS_DEVOPSGURU_API DescribeAnomalyResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_DEVOPSGURU_API DescribeAnomalyResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p> A <code>ProactiveAnomaly</code> object that represents the requested
     * anomaly. </p>
     */
    inline const ProactiveAnomaly& GetProactiveAnomaly() const{ return m_proactiveAnomaly; }

    /**
     * <p> A <code>ProactiveAnomaly</code> object that represents the requested
     * anomaly. </p>
     */
    inline void SetProactiveAnomaly(const ProactiveAnomaly& value) { m_proactiveAnomaly = value; }

    /**
     * <p> A <code>ProactiveAnomaly</code> object that represents the requested
     * anomaly. </p>
     */
    inline void SetProactiveAnomaly(ProactiveAnomaly&& value) { m_proactiveAnomaly = std::move(value); }

    /**
     * <p> A <code>ProactiveAnomaly</code> object that represents the requested
     * anomaly. </p>
     */
    inline DescribeAnomalyResult& WithProactiveAnomaly(const ProactiveAnomaly& value) { SetProactiveAnomaly(value); return *this;}

    /**
     * <p> A <code>ProactiveAnomaly</code> object that represents the requested
     * anomaly. </p>
     */
    inline DescribeAnomalyResult& WithProactiveAnomaly(ProactiveAnomaly&& value) { SetProactiveAnomaly(std::move(value)); return *this;}


    /**
     * <p> A <code>ReactiveAnomaly</code> object that represents the requested anomaly.
     * </p>
     */
    inline const ReactiveAnomaly& GetReactiveAnomaly() const{ return m_reactiveAnomaly; }

    /**
     * <p> A <code>ReactiveAnomaly</code> object that represents the requested anomaly.
     * </p>
     */
    inline void SetReactiveAnomaly(const ReactiveAnomaly& value) { m_reactiveAnomaly = value; }

    /**
     * <p> A <code>ReactiveAnomaly</code> object that represents the requested anomaly.
     * </p>
     */
    inline void SetReactiveAnomaly(ReactiveAnomaly&& value) { m_reactiveAnomaly = std::move(value); }

    /**
     * <p> A <code>ReactiveAnomaly</code> object that represents the requested anomaly.
     * </p>
     */
    inline DescribeAnomalyResult& WithReactiveAnomaly(const ReactiveAnomaly& value) { SetReactiveAnomaly(value); return *this;}

    /**
     * <p> A <code>ReactiveAnomaly</code> object that represents the requested anomaly.
     * </p>
     */
    inline DescribeAnomalyResult& WithReactiveAnomaly(ReactiveAnomaly&& value) { SetReactiveAnomaly(std::move(value)); return *this;}

  private:

    ProactiveAnomaly m_proactiveAnomaly;

    ReactiveAnomaly m_reactiveAnomaly;
  };

} // namespace Model
} // namespace DevOpsGuru
} // namespace Aws
