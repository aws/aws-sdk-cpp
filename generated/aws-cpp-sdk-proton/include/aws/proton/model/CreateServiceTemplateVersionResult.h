﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/proton/Proton_EXPORTS.h>
#include <aws/proton/model/ServiceTemplateVersion.h>
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
  class AWS_PROTON_API CreateServiceTemplateVersionResult
  {
  public:
    CreateServiceTemplateVersionResult();
    CreateServiceTemplateVersionResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    CreateServiceTemplateVersionResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The service template version summary of detail data that's returned by
     * Proton.</p>
     */
    inline const ServiceTemplateVersion& GetServiceTemplateVersion() const{ return m_serviceTemplateVersion; }

    /**
     * <p>The service template version summary of detail data that's returned by
     * Proton.</p>
     */
    inline void SetServiceTemplateVersion(const ServiceTemplateVersion& value) { m_serviceTemplateVersion = value; }

    /**
     * <p>The service template version summary of detail data that's returned by
     * Proton.</p>
     */
    inline void SetServiceTemplateVersion(ServiceTemplateVersion&& value) { m_serviceTemplateVersion = std::move(value); }

    /**
     * <p>The service template version summary of detail data that's returned by
     * Proton.</p>
     */
    inline CreateServiceTemplateVersionResult& WithServiceTemplateVersion(const ServiceTemplateVersion& value) { SetServiceTemplateVersion(value); return *this;}

    /**
     * <p>The service template version summary of detail data that's returned by
     * Proton.</p>
     */
    inline CreateServiceTemplateVersionResult& WithServiceTemplateVersion(ServiceTemplateVersion&& value) { SetServiceTemplateVersion(std::move(value)); return *this;}

  private:

    ServiceTemplateVersion m_serviceTemplateVersion;
  };

} // namespace Model
} // namespace Proton
} // namespace Aws
