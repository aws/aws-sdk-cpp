/**
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
  class DescribeOrganizationConfigurationResult
  {
  public:
    AWS_INSPECTOR2_API DescribeOrganizationConfigurationResult();
    AWS_INSPECTOR2_API DescribeOrganizationConfigurationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_INSPECTOR2_API DescribeOrganizationConfigurationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The scan types are automatically enabled for new members of your
     * organization.</p>
     */
    inline const AutoEnable& GetAutoEnable() const{ return m_autoEnable; }

    /**
     * <p>The scan types are automatically enabled for new members of your
     * organization.</p>
     */
    inline void SetAutoEnable(const AutoEnable& value) { m_autoEnable = value; }

    /**
     * <p>The scan types are automatically enabled for new members of your
     * organization.</p>
     */
    inline void SetAutoEnable(AutoEnable&& value) { m_autoEnable = std::move(value); }

    /**
     * <p>The scan types are automatically enabled for new members of your
     * organization.</p>
     */
    inline DescribeOrganizationConfigurationResult& WithAutoEnable(const AutoEnable& value) { SetAutoEnable(value); return *this;}

    /**
     * <p>The scan types are automatically enabled for new members of your
     * organization.</p>
     */
    inline DescribeOrganizationConfigurationResult& WithAutoEnable(AutoEnable&& value) { SetAutoEnable(std::move(value)); return *this;}


    /**
     * <p>Represents whether your organization has reached the maximum Amazon Web
     * Services account limit for Amazon Inspector.</p>
     */
    inline bool GetMaxAccountLimitReached() const{ return m_maxAccountLimitReached; }

    /**
     * <p>Represents whether your organization has reached the maximum Amazon Web
     * Services account limit for Amazon Inspector.</p>
     */
    inline void SetMaxAccountLimitReached(bool value) { m_maxAccountLimitReached = value; }

    /**
     * <p>Represents whether your organization has reached the maximum Amazon Web
     * Services account limit for Amazon Inspector.</p>
     */
    inline DescribeOrganizationConfigurationResult& WithMaxAccountLimitReached(bool value) { SetMaxAccountLimitReached(value); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline DescribeOrganizationConfigurationResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline DescribeOrganizationConfigurationResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline DescribeOrganizationConfigurationResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    AutoEnable m_autoEnable;

    bool m_maxAccountLimitReached;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Inspector2
} // namespace Aws
