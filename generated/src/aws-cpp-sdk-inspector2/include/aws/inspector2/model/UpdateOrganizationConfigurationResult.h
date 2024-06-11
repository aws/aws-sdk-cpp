﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/inspector2/Inspector2_EXPORTS.h>
#include <aws/inspector2/model/AutoEnable.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace Inspector2
{
namespace Model
{
  class UpdateOrganizationConfigurationResult
  {
  public:
    AWS_INSPECTOR2_API UpdateOrganizationConfigurationResult();
    AWS_INSPECTOR2_API UpdateOrganizationConfigurationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_INSPECTOR2_API UpdateOrganizationConfigurationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The updated status of scan types automatically enabled for new members of
     * your Amazon Inspector organization.</p>
     */
    inline const AutoEnable& GetAutoEnable() const{ return m_autoEnable; }
    inline void SetAutoEnable(const AutoEnable& value) { m_autoEnable = value; }
    inline void SetAutoEnable(AutoEnable&& value) { m_autoEnable = std::move(value); }
    inline UpdateOrganizationConfigurationResult& WithAutoEnable(const AutoEnable& value) { SetAutoEnable(value); return *this;}
    inline UpdateOrganizationConfigurationResult& WithAutoEnable(AutoEnable&& value) { SetAutoEnable(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline UpdateOrganizationConfigurationResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline UpdateOrganizationConfigurationResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline UpdateOrganizationConfigurationResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    AutoEnable m_autoEnable;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Inspector2
} // namespace Aws
