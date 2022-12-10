/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
  class CreateServiceActionResult
  {
  public:
    AWS_SERVICECATALOG_API CreateServiceActionResult();
    AWS_SERVICECATALOG_API CreateServiceActionResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SERVICECATALOG_API CreateServiceActionResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>An object containing information about the self-service action.</p>
     */
    inline const ServiceActionDetail& GetServiceActionDetail() const{ return m_serviceActionDetail; }

    /**
     * <p>An object containing information about the self-service action.</p>
     */
    inline void SetServiceActionDetail(const ServiceActionDetail& value) { m_serviceActionDetail = value; }

    /**
     * <p>An object containing information about the self-service action.</p>
     */
    inline void SetServiceActionDetail(ServiceActionDetail&& value) { m_serviceActionDetail = std::move(value); }

    /**
     * <p>An object containing information about the self-service action.</p>
     */
    inline CreateServiceActionResult& WithServiceActionDetail(const ServiceActionDetail& value) { SetServiceActionDetail(value); return *this;}

    /**
     * <p>An object containing information about the self-service action.</p>
     */
    inline CreateServiceActionResult& WithServiceActionDetail(ServiceActionDetail&& value) { SetServiceActionDetail(std::move(value)); return *this;}

  private:

    ServiceActionDetail m_serviceActionDetail;
  };

} // namespace Model
} // namespace ServiceCatalog
} // namespace Aws
