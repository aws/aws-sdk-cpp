﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/proton/Proton_EXPORTS.h>
#include <aws/proton/model/EnvironmentTemplate.h>
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
  class AWS_PROTON_API GetEnvironmentTemplateResult
  {
  public:
    GetEnvironmentTemplateResult();
    GetEnvironmentTemplateResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    GetEnvironmentTemplateResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The environment template detail data that's returned by Proton.</p>
     */
    inline const EnvironmentTemplate& GetEnvironmentTemplate() const{ return m_environmentTemplate; }

    /**
     * <p>The environment template detail data that's returned by Proton.</p>
     */
    inline void SetEnvironmentTemplate(const EnvironmentTemplate& value) { m_environmentTemplate = value; }

    /**
     * <p>The environment template detail data that's returned by Proton.</p>
     */
    inline void SetEnvironmentTemplate(EnvironmentTemplate&& value) { m_environmentTemplate = std::move(value); }

    /**
     * <p>The environment template detail data that's returned by Proton.</p>
     */
    inline GetEnvironmentTemplateResult& WithEnvironmentTemplate(const EnvironmentTemplate& value) { SetEnvironmentTemplate(value); return *this;}

    /**
     * <p>The environment template detail data that's returned by Proton.</p>
     */
    inline GetEnvironmentTemplateResult& WithEnvironmentTemplate(EnvironmentTemplate&& value) { SetEnvironmentTemplate(std::move(value)); return *this;}

  private:

    EnvironmentTemplate m_environmentTemplate;
  };

} // namespace Model
} // namespace Proton
} // namespace Aws
