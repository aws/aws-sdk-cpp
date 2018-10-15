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
#include <aws/servicecatalog/ServiceCatalog_EXPORTS.h>
#include <aws/servicecatalog/model/ServiceActionDetail.h>
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
namespace ServiceCatalog
{
namespace Model
{
  class AWS_SERVICECATALOG_API UpdateServiceActionResult
  {
  public:
    UpdateServiceActionResult();
    UpdateServiceActionResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    UpdateServiceActionResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Detailed information about the self-service action.</p>
     */
    inline const ServiceActionDetail& GetServiceActionDetail() const{ return m_serviceActionDetail; }

    /**
     * <p>Detailed information about the self-service action.</p>
     */
    inline void SetServiceActionDetail(const ServiceActionDetail& value) { m_serviceActionDetail = value; }

    /**
     * <p>Detailed information about the self-service action.</p>
     */
    inline void SetServiceActionDetail(ServiceActionDetail&& value) { m_serviceActionDetail = std::move(value); }

    /**
     * <p>Detailed information about the self-service action.</p>
     */
    inline UpdateServiceActionResult& WithServiceActionDetail(const ServiceActionDetail& value) { SetServiceActionDetail(value); return *this;}

    /**
     * <p>Detailed information about the self-service action.</p>
     */
    inline UpdateServiceActionResult& WithServiceActionDetail(ServiceActionDetail&& value) { SetServiceActionDetail(std::move(value)); return *this;}

  private:

    ServiceActionDetail m_serviceActionDetail;
  };

} // namespace Model
} // namespace ServiceCatalog
} // namespace Aws
