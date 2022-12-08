/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/proton/Proton_EXPORTS.h>
#include <aws/proton/model/ServiceTemplate.h>
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
namespace Proton
{
namespace Model
{
  class UpdateServiceTemplateResult
  {
  public:
    AWS_PROTON_API UpdateServiceTemplateResult();
    AWS_PROTON_API UpdateServiceTemplateResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_PROTON_API UpdateServiceTemplateResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The service template detail data that's returned by Proton.</p>
     */
    inline const ServiceTemplate& GetServiceTemplate() const{ return m_serviceTemplate; }

    /**
     * <p>The service template detail data that's returned by Proton.</p>
     */
    inline void SetServiceTemplate(const ServiceTemplate& value) { m_serviceTemplate = value; }

    /**
     * <p>The service template detail data that's returned by Proton.</p>
     */
    inline void SetServiceTemplate(ServiceTemplate&& value) { m_serviceTemplate = std::move(value); }

    /**
     * <p>The service template detail data that's returned by Proton.</p>
     */
    inline UpdateServiceTemplateResult& WithServiceTemplate(const ServiceTemplate& value) { SetServiceTemplate(value); return *this;}

    /**
     * <p>The service template detail data that's returned by Proton.</p>
     */
    inline UpdateServiceTemplateResult& WithServiceTemplate(ServiceTemplate&& value) { SetServiceTemplate(std::move(value)); return *this;}

  private:

    ServiceTemplate m_serviceTemplate;
  };

} // namespace Model
} // namespace Proton
} // namespace Aws
