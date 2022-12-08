/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iot/IoT_EXPORTS.h>
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
namespace IoT
{
namespace Model
{
  class UpdateDomainConfigurationResult
  {
  public:
    AWS_IOT_API UpdateDomainConfigurationResult();
    AWS_IOT_API UpdateDomainConfigurationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_IOT_API UpdateDomainConfigurationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The name of the domain configuration that was updated.</p>
     */
    inline const Aws::String& GetDomainConfigurationName() const{ return m_domainConfigurationName; }

    /**
     * <p>The name of the domain configuration that was updated.</p>
     */
    inline void SetDomainConfigurationName(const Aws::String& value) { m_domainConfigurationName = value; }

    /**
     * <p>The name of the domain configuration that was updated.</p>
     */
    inline void SetDomainConfigurationName(Aws::String&& value) { m_domainConfigurationName = std::move(value); }

    /**
     * <p>The name of the domain configuration that was updated.</p>
     */
    inline void SetDomainConfigurationName(const char* value) { m_domainConfigurationName.assign(value); }

    /**
     * <p>The name of the domain configuration that was updated.</p>
     */
    inline UpdateDomainConfigurationResult& WithDomainConfigurationName(const Aws::String& value) { SetDomainConfigurationName(value); return *this;}

    /**
     * <p>The name of the domain configuration that was updated.</p>
     */
    inline UpdateDomainConfigurationResult& WithDomainConfigurationName(Aws::String&& value) { SetDomainConfigurationName(std::move(value)); return *this;}

    /**
     * <p>The name of the domain configuration that was updated.</p>
     */
    inline UpdateDomainConfigurationResult& WithDomainConfigurationName(const char* value) { SetDomainConfigurationName(value); return *this;}


    /**
     * <p>The ARN of the domain configuration that was updated.</p>
     */
    inline const Aws::String& GetDomainConfigurationArn() const{ return m_domainConfigurationArn; }

    /**
     * <p>The ARN of the domain configuration that was updated.</p>
     */
    inline void SetDomainConfigurationArn(const Aws::String& value) { m_domainConfigurationArn = value; }

    /**
     * <p>The ARN of the domain configuration that was updated.</p>
     */
    inline void SetDomainConfigurationArn(Aws::String&& value) { m_domainConfigurationArn = std::move(value); }

    /**
     * <p>The ARN of the domain configuration that was updated.</p>
     */
    inline void SetDomainConfigurationArn(const char* value) { m_domainConfigurationArn.assign(value); }

    /**
     * <p>The ARN of the domain configuration that was updated.</p>
     */
    inline UpdateDomainConfigurationResult& WithDomainConfigurationArn(const Aws::String& value) { SetDomainConfigurationArn(value); return *this;}

    /**
     * <p>The ARN of the domain configuration that was updated.</p>
     */
    inline UpdateDomainConfigurationResult& WithDomainConfigurationArn(Aws::String&& value) { SetDomainConfigurationArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the domain configuration that was updated.</p>
     */
    inline UpdateDomainConfigurationResult& WithDomainConfigurationArn(const char* value) { SetDomainConfigurationArn(value); return *this;}

  private:

    Aws::String m_domainConfigurationName;

    Aws::String m_domainConfigurationArn;
  };

} // namespace Model
} // namespace IoT
} // namespace Aws
