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
#include <aws/support/Support_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/support/model/Service.h>
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
namespace Support
{
namespace Model
{
  /**
   * <p>The list of AWS services returned by the <a>DescribeServices</a>
   * operation.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/support-2013-04-15/DescribeServicesResponse">AWS
   * API Reference</a></p>
   */
  class AWS_SUPPORT_API DescribeServicesResult
  {
  public:
    DescribeServicesResult();
    DescribeServicesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    DescribeServicesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>A JSON-formatted list of AWS services.</p>
     */
    inline const Aws::Vector<Service>& GetServices() const{ return m_services; }

    /**
     * <p>A JSON-formatted list of AWS services.</p>
     */
    inline void SetServices(const Aws::Vector<Service>& value) { m_services = value; }

    /**
     * <p>A JSON-formatted list of AWS services.</p>
     */
    inline void SetServices(Aws::Vector<Service>&& value) { m_services = std::move(value); }

    /**
     * <p>A JSON-formatted list of AWS services.</p>
     */
    inline DescribeServicesResult& WithServices(const Aws::Vector<Service>& value) { SetServices(value); return *this;}

    /**
     * <p>A JSON-formatted list of AWS services.</p>
     */
    inline DescribeServicesResult& WithServices(Aws::Vector<Service>&& value) { SetServices(std::move(value)); return *this;}

    /**
     * <p>A JSON-formatted list of AWS services.</p>
     */
    inline DescribeServicesResult& AddServices(const Service& value) { m_services.push_back(value); return *this; }

    /**
     * <p>A JSON-formatted list of AWS services.</p>
     */
    inline DescribeServicesResult& AddServices(Service&& value) { m_services.push_back(std::move(value)); return *this; }

  private:

    Aws::Vector<Service> m_services;
  };

} // namespace Model
} // namespace Support
} // namespace Aws
