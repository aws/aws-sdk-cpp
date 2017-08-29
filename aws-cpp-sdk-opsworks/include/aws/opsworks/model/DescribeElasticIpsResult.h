/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#pragma once
#include <aws/opsworks/OpsWorks_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/opsworks/model/ElasticIp.h>
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
namespace OpsWorks
{
namespace Model
{
  /**
   * <p>Contains the response to a <code>DescribeElasticIps</code>
   * request.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/opsworks-2013-02-18/DescribeElasticIpsResult">AWS
   * API Reference</a></p>
   */
  class AWS_OPSWORKS_API DescribeElasticIpsResult
  {
  public:
    DescribeElasticIpsResult();
    DescribeElasticIpsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    DescribeElasticIpsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>An <code>ElasticIps</code> object that describes the specified Elastic IP
     * addresses.</p>
     */
    inline const Aws::Vector<ElasticIp>& GetElasticIps() const{ return m_elasticIps; }

    /**
     * <p>An <code>ElasticIps</code> object that describes the specified Elastic IP
     * addresses.</p>
     */
    inline void SetElasticIps(const Aws::Vector<ElasticIp>& value) { m_elasticIps = value; }

    /**
     * <p>An <code>ElasticIps</code> object that describes the specified Elastic IP
     * addresses.</p>
     */
    inline void SetElasticIps(Aws::Vector<ElasticIp>&& value) { m_elasticIps = std::move(value); }

    /**
     * <p>An <code>ElasticIps</code> object that describes the specified Elastic IP
     * addresses.</p>
     */
    inline DescribeElasticIpsResult& WithElasticIps(const Aws::Vector<ElasticIp>& value) { SetElasticIps(value); return *this;}

    /**
     * <p>An <code>ElasticIps</code> object that describes the specified Elastic IP
     * addresses.</p>
     */
    inline DescribeElasticIpsResult& WithElasticIps(Aws::Vector<ElasticIp>&& value) { SetElasticIps(std::move(value)); return *this;}

    /**
     * <p>An <code>ElasticIps</code> object that describes the specified Elastic IP
     * addresses.</p>
     */
    inline DescribeElasticIpsResult& AddElasticIps(const ElasticIp& value) { m_elasticIps.push_back(value); return *this; }

    /**
     * <p>An <code>ElasticIps</code> object that describes the specified Elastic IP
     * addresses.</p>
     */
    inline DescribeElasticIpsResult& AddElasticIps(ElasticIp&& value) { m_elasticIps.push_back(std::move(value)); return *this; }

  private:

    Aws::Vector<ElasticIp> m_elasticIps;
  };

} // namespace Model
} // namespace OpsWorks
} // namespace Aws
