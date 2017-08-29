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
#include <aws/opsworks/model/ServiceError.h>
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
   * <p>Contains the response to a <code>DescribeServiceErrors</code>
   * request.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/opsworks-2013-02-18/DescribeServiceErrorsResult">AWS
   * API Reference</a></p>
   */
  class AWS_OPSWORKS_API DescribeServiceErrorsResult
  {
  public:
    DescribeServiceErrorsResult();
    DescribeServiceErrorsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    DescribeServiceErrorsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>An array of <code>ServiceError</code> objects that describe the specified
     * service errors.</p>
     */
    inline const Aws::Vector<ServiceError>& GetServiceErrors() const{ return m_serviceErrors; }

    /**
     * <p>An array of <code>ServiceError</code> objects that describe the specified
     * service errors.</p>
     */
    inline void SetServiceErrors(const Aws::Vector<ServiceError>& value) { m_serviceErrors = value; }

    /**
     * <p>An array of <code>ServiceError</code> objects that describe the specified
     * service errors.</p>
     */
    inline void SetServiceErrors(Aws::Vector<ServiceError>&& value) { m_serviceErrors = std::move(value); }

    /**
     * <p>An array of <code>ServiceError</code> objects that describe the specified
     * service errors.</p>
     */
    inline DescribeServiceErrorsResult& WithServiceErrors(const Aws::Vector<ServiceError>& value) { SetServiceErrors(value); return *this;}

    /**
     * <p>An array of <code>ServiceError</code> objects that describe the specified
     * service errors.</p>
     */
    inline DescribeServiceErrorsResult& WithServiceErrors(Aws::Vector<ServiceError>&& value) { SetServiceErrors(std::move(value)); return *this;}

    /**
     * <p>An array of <code>ServiceError</code> objects that describe the specified
     * service errors.</p>
     */
    inline DescribeServiceErrorsResult& AddServiceErrors(const ServiceError& value) { m_serviceErrors.push_back(value); return *this; }

    /**
     * <p>An array of <code>ServiceError</code> objects that describe the specified
     * service errors.</p>
     */
    inline DescribeServiceErrorsResult& AddServiceErrors(ServiceError&& value) { m_serviceErrors.push_back(std::move(value)); return *this; }

  private:

    Aws::Vector<ServiceError> m_serviceErrors;
  };

} // namespace Model
} // namespace OpsWorks
} // namespace Aws
