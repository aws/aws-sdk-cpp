/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/compute-optimizer/ComputeOptimizer_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/compute-optimizer/model/EstimatedMonthlySavings.h>
#include <aws/compute-optimizer/model/InferredWorkloadType.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace ComputeOptimizer
{
namespace Model
{

  /**
   * <p> The estimated monthly savings after you adjust the configurations of your
   * instances running on the inferred workload types to the recommended
   * configurations. If the <code>inferredWorkloadTypes</code> list contains multiple
   * entries, then the savings are the sum of the monthly savings from instances that
   * run the exact combination of the inferred workload types. </p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/compute-optimizer-2019-11-01/InferredWorkloadSaving">AWS
   * API Reference</a></p>
   */
  class InferredWorkloadSaving
  {
  public:
    AWS_COMPUTEOPTIMIZER_API InferredWorkloadSaving();
    AWS_COMPUTEOPTIMIZER_API InferredWorkloadSaving(Aws::Utils::Json::JsonView jsonValue);
    AWS_COMPUTEOPTIMIZER_API InferredWorkloadSaving& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_COMPUTEOPTIMIZER_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The applications that might be running on the instance as inferred by Compute
     * Optimizer.</p> <p>Compute Optimizer can infer if one of the following
     * applications might be running on the instance:</p> <ul> <li> <p>
     * <code>AmazonEmr</code> - Infers that Amazon EMR might be running on the
     * instance.</p> </li> <li> <p> <code>ApacheCassandra</code> - Infers that Apache
     * Cassandra might be running on the instance.</p> </li> <li> <p>
     * <code>ApacheHadoop</code> - Infers that Apache Hadoop might be running on the
     * instance.</p> </li> <li> <p> <code>Memcached</code> - Infers that Memcached
     * might be running on the instance.</p> </li> <li> <p> <code>NGINX</code> - Infers
     * that NGINX might be running on the instance.</p> </li> <li> <p>
     * <code>PostgreSql</code> - Infers that PostgreSQL might be running on the
     * instance.</p> </li> <li> <p> <code>Redis</code> - Infers that Redis might be
     * running on the instance.</p> </li> <li> <p> <code>Kafka</code> - Infers that
     * Kafka might be running on the instance.</p> </li> <li> <p>
     * <code>SQLServer</code> - Infers that SQLServer might be running on the
     * instance.</p> </li> </ul>
     */
    inline const Aws::Vector<InferredWorkloadType>& GetInferredWorkloadTypes() const{ return m_inferredWorkloadTypes; }

    /**
     * <p>The applications that might be running on the instance as inferred by Compute
     * Optimizer.</p> <p>Compute Optimizer can infer if one of the following
     * applications might be running on the instance:</p> <ul> <li> <p>
     * <code>AmazonEmr</code> - Infers that Amazon EMR might be running on the
     * instance.</p> </li> <li> <p> <code>ApacheCassandra</code> - Infers that Apache
     * Cassandra might be running on the instance.</p> </li> <li> <p>
     * <code>ApacheHadoop</code> - Infers that Apache Hadoop might be running on the
     * instance.</p> </li> <li> <p> <code>Memcached</code> - Infers that Memcached
     * might be running on the instance.</p> </li> <li> <p> <code>NGINX</code> - Infers
     * that NGINX might be running on the instance.</p> </li> <li> <p>
     * <code>PostgreSql</code> - Infers that PostgreSQL might be running on the
     * instance.</p> </li> <li> <p> <code>Redis</code> - Infers that Redis might be
     * running on the instance.</p> </li> <li> <p> <code>Kafka</code> - Infers that
     * Kafka might be running on the instance.</p> </li> <li> <p>
     * <code>SQLServer</code> - Infers that SQLServer might be running on the
     * instance.</p> </li> </ul>
     */
    inline bool InferredWorkloadTypesHasBeenSet() const { return m_inferredWorkloadTypesHasBeenSet; }

    /**
     * <p>The applications that might be running on the instance as inferred by Compute
     * Optimizer.</p> <p>Compute Optimizer can infer if one of the following
     * applications might be running on the instance:</p> <ul> <li> <p>
     * <code>AmazonEmr</code> - Infers that Amazon EMR might be running on the
     * instance.</p> </li> <li> <p> <code>ApacheCassandra</code> - Infers that Apache
     * Cassandra might be running on the instance.</p> </li> <li> <p>
     * <code>ApacheHadoop</code> - Infers that Apache Hadoop might be running on the
     * instance.</p> </li> <li> <p> <code>Memcached</code> - Infers that Memcached
     * might be running on the instance.</p> </li> <li> <p> <code>NGINX</code> - Infers
     * that NGINX might be running on the instance.</p> </li> <li> <p>
     * <code>PostgreSql</code> - Infers that PostgreSQL might be running on the
     * instance.</p> </li> <li> <p> <code>Redis</code> - Infers that Redis might be
     * running on the instance.</p> </li> <li> <p> <code>Kafka</code> - Infers that
     * Kafka might be running on the instance.</p> </li> <li> <p>
     * <code>SQLServer</code> - Infers that SQLServer might be running on the
     * instance.</p> </li> </ul>
     */
    inline void SetInferredWorkloadTypes(const Aws::Vector<InferredWorkloadType>& value) { m_inferredWorkloadTypesHasBeenSet = true; m_inferredWorkloadTypes = value; }

    /**
     * <p>The applications that might be running on the instance as inferred by Compute
     * Optimizer.</p> <p>Compute Optimizer can infer if one of the following
     * applications might be running on the instance:</p> <ul> <li> <p>
     * <code>AmazonEmr</code> - Infers that Amazon EMR might be running on the
     * instance.</p> </li> <li> <p> <code>ApacheCassandra</code> - Infers that Apache
     * Cassandra might be running on the instance.</p> </li> <li> <p>
     * <code>ApacheHadoop</code> - Infers that Apache Hadoop might be running on the
     * instance.</p> </li> <li> <p> <code>Memcached</code> - Infers that Memcached
     * might be running on the instance.</p> </li> <li> <p> <code>NGINX</code> - Infers
     * that NGINX might be running on the instance.</p> </li> <li> <p>
     * <code>PostgreSql</code> - Infers that PostgreSQL might be running on the
     * instance.</p> </li> <li> <p> <code>Redis</code> - Infers that Redis might be
     * running on the instance.</p> </li> <li> <p> <code>Kafka</code> - Infers that
     * Kafka might be running on the instance.</p> </li> <li> <p>
     * <code>SQLServer</code> - Infers that SQLServer might be running on the
     * instance.</p> </li> </ul>
     */
    inline void SetInferredWorkloadTypes(Aws::Vector<InferredWorkloadType>&& value) { m_inferredWorkloadTypesHasBeenSet = true; m_inferredWorkloadTypes = std::move(value); }

    /**
     * <p>The applications that might be running on the instance as inferred by Compute
     * Optimizer.</p> <p>Compute Optimizer can infer if one of the following
     * applications might be running on the instance:</p> <ul> <li> <p>
     * <code>AmazonEmr</code> - Infers that Amazon EMR might be running on the
     * instance.</p> </li> <li> <p> <code>ApacheCassandra</code> - Infers that Apache
     * Cassandra might be running on the instance.</p> </li> <li> <p>
     * <code>ApacheHadoop</code> - Infers that Apache Hadoop might be running on the
     * instance.</p> </li> <li> <p> <code>Memcached</code> - Infers that Memcached
     * might be running on the instance.</p> </li> <li> <p> <code>NGINX</code> - Infers
     * that NGINX might be running on the instance.</p> </li> <li> <p>
     * <code>PostgreSql</code> - Infers that PostgreSQL might be running on the
     * instance.</p> </li> <li> <p> <code>Redis</code> - Infers that Redis might be
     * running on the instance.</p> </li> <li> <p> <code>Kafka</code> - Infers that
     * Kafka might be running on the instance.</p> </li> <li> <p>
     * <code>SQLServer</code> - Infers that SQLServer might be running on the
     * instance.</p> </li> </ul>
     */
    inline InferredWorkloadSaving& WithInferredWorkloadTypes(const Aws::Vector<InferredWorkloadType>& value) { SetInferredWorkloadTypes(value); return *this;}

    /**
     * <p>The applications that might be running on the instance as inferred by Compute
     * Optimizer.</p> <p>Compute Optimizer can infer if one of the following
     * applications might be running on the instance:</p> <ul> <li> <p>
     * <code>AmazonEmr</code> - Infers that Amazon EMR might be running on the
     * instance.</p> </li> <li> <p> <code>ApacheCassandra</code> - Infers that Apache
     * Cassandra might be running on the instance.</p> </li> <li> <p>
     * <code>ApacheHadoop</code> - Infers that Apache Hadoop might be running on the
     * instance.</p> </li> <li> <p> <code>Memcached</code> - Infers that Memcached
     * might be running on the instance.</p> </li> <li> <p> <code>NGINX</code> - Infers
     * that NGINX might be running on the instance.</p> </li> <li> <p>
     * <code>PostgreSql</code> - Infers that PostgreSQL might be running on the
     * instance.</p> </li> <li> <p> <code>Redis</code> - Infers that Redis might be
     * running on the instance.</p> </li> <li> <p> <code>Kafka</code> - Infers that
     * Kafka might be running on the instance.</p> </li> <li> <p>
     * <code>SQLServer</code> - Infers that SQLServer might be running on the
     * instance.</p> </li> </ul>
     */
    inline InferredWorkloadSaving& WithInferredWorkloadTypes(Aws::Vector<InferredWorkloadType>&& value) { SetInferredWorkloadTypes(std::move(value)); return *this;}

    /**
     * <p>The applications that might be running on the instance as inferred by Compute
     * Optimizer.</p> <p>Compute Optimizer can infer if one of the following
     * applications might be running on the instance:</p> <ul> <li> <p>
     * <code>AmazonEmr</code> - Infers that Amazon EMR might be running on the
     * instance.</p> </li> <li> <p> <code>ApacheCassandra</code> - Infers that Apache
     * Cassandra might be running on the instance.</p> </li> <li> <p>
     * <code>ApacheHadoop</code> - Infers that Apache Hadoop might be running on the
     * instance.</p> </li> <li> <p> <code>Memcached</code> - Infers that Memcached
     * might be running on the instance.</p> </li> <li> <p> <code>NGINX</code> - Infers
     * that NGINX might be running on the instance.</p> </li> <li> <p>
     * <code>PostgreSql</code> - Infers that PostgreSQL might be running on the
     * instance.</p> </li> <li> <p> <code>Redis</code> - Infers that Redis might be
     * running on the instance.</p> </li> <li> <p> <code>Kafka</code> - Infers that
     * Kafka might be running on the instance.</p> </li> <li> <p>
     * <code>SQLServer</code> - Infers that SQLServer might be running on the
     * instance.</p> </li> </ul>
     */
    inline InferredWorkloadSaving& AddInferredWorkloadTypes(const InferredWorkloadType& value) { m_inferredWorkloadTypesHasBeenSet = true; m_inferredWorkloadTypes.push_back(value); return *this; }

    /**
     * <p>The applications that might be running on the instance as inferred by Compute
     * Optimizer.</p> <p>Compute Optimizer can infer if one of the following
     * applications might be running on the instance:</p> <ul> <li> <p>
     * <code>AmazonEmr</code> - Infers that Amazon EMR might be running on the
     * instance.</p> </li> <li> <p> <code>ApacheCassandra</code> - Infers that Apache
     * Cassandra might be running on the instance.</p> </li> <li> <p>
     * <code>ApacheHadoop</code> - Infers that Apache Hadoop might be running on the
     * instance.</p> </li> <li> <p> <code>Memcached</code> - Infers that Memcached
     * might be running on the instance.</p> </li> <li> <p> <code>NGINX</code> - Infers
     * that NGINX might be running on the instance.</p> </li> <li> <p>
     * <code>PostgreSql</code> - Infers that PostgreSQL might be running on the
     * instance.</p> </li> <li> <p> <code>Redis</code> - Infers that Redis might be
     * running on the instance.</p> </li> <li> <p> <code>Kafka</code> - Infers that
     * Kafka might be running on the instance.</p> </li> <li> <p>
     * <code>SQLServer</code> - Infers that SQLServer might be running on the
     * instance.</p> </li> </ul>
     */
    inline InferredWorkloadSaving& AddInferredWorkloadTypes(InferredWorkloadType&& value) { m_inferredWorkloadTypesHasBeenSet = true; m_inferredWorkloadTypes.push_back(std::move(value)); return *this; }


    /**
     * <p>An object that describes the estimated monthly savings amount possible by
     * adopting Compute Optimizer recommendations for a given resource. This is based
     * on the On-Demand instance pricing.</p>
     */
    inline const EstimatedMonthlySavings& GetEstimatedMonthlySavings() const{ return m_estimatedMonthlySavings; }

    /**
     * <p>An object that describes the estimated monthly savings amount possible by
     * adopting Compute Optimizer recommendations for a given resource. This is based
     * on the On-Demand instance pricing.</p>
     */
    inline bool EstimatedMonthlySavingsHasBeenSet() const { return m_estimatedMonthlySavingsHasBeenSet; }

    /**
     * <p>An object that describes the estimated monthly savings amount possible by
     * adopting Compute Optimizer recommendations for a given resource. This is based
     * on the On-Demand instance pricing.</p>
     */
    inline void SetEstimatedMonthlySavings(const EstimatedMonthlySavings& value) { m_estimatedMonthlySavingsHasBeenSet = true; m_estimatedMonthlySavings = value; }

    /**
     * <p>An object that describes the estimated monthly savings amount possible by
     * adopting Compute Optimizer recommendations for a given resource. This is based
     * on the On-Demand instance pricing.</p>
     */
    inline void SetEstimatedMonthlySavings(EstimatedMonthlySavings&& value) { m_estimatedMonthlySavingsHasBeenSet = true; m_estimatedMonthlySavings = std::move(value); }

    /**
     * <p>An object that describes the estimated monthly savings amount possible by
     * adopting Compute Optimizer recommendations for a given resource. This is based
     * on the On-Demand instance pricing.</p>
     */
    inline InferredWorkloadSaving& WithEstimatedMonthlySavings(const EstimatedMonthlySavings& value) { SetEstimatedMonthlySavings(value); return *this;}

    /**
     * <p>An object that describes the estimated monthly savings amount possible by
     * adopting Compute Optimizer recommendations for a given resource. This is based
     * on the On-Demand instance pricing.</p>
     */
    inline InferredWorkloadSaving& WithEstimatedMonthlySavings(EstimatedMonthlySavings&& value) { SetEstimatedMonthlySavings(std::move(value)); return *this;}

  private:

    Aws::Vector<InferredWorkloadType> m_inferredWorkloadTypes;
    bool m_inferredWorkloadTypesHasBeenSet = false;

    EstimatedMonthlySavings m_estimatedMonthlySavings;
    bool m_estimatedMonthlySavingsHasBeenSet = false;
  };

} // namespace Model
} // namespace ComputeOptimizer
} // namespace Aws
