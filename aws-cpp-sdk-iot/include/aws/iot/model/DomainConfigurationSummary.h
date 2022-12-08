/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iot/IoT_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/iot/model/ServiceType.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace IoT
{
namespace Model
{

  /**
   * <p>The summary of a domain configuration. A domain configuration specifies
   * custom IoT-specific information about a domain. A domain configuration can be
   * associated with an Amazon Web Services-managed domain (for example,
   * dbc123defghijk.iot.us-west-2.amazonaws.com), a customer managed domain, or a
   * default endpoint.</p> <ul> <li> <p>Data</p> </li> <li> <p>Jobs</p> </li> <li>
   * <p>CredentialProvider</p> </li> </ul><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/DomainConfigurationSummary">AWS
   * API Reference</a></p>
   */
  class DomainConfigurationSummary
  {
  public:
    AWS_IOT_API DomainConfigurationSummary();
    AWS_IOT_API DomainConfigurationSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOT_API DomainConfigurationSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name of the domain configuration. This value must be unique to a
     * region.</p>
     */
    inline const Aws::String& GetDomainConfigurationName() const{ return m_domainConfigurationName; }

    /**
     * <p>The name of the domain configuration. This value must be unique to a
     * region.</p>
     */
    inline bool DomainConfigurationNameHasBeenSet() const { return m_domainConfigurationNameHasBeenSet; }

    /**
     * <p>The name of the domain configuration. This value must be unique to a
     * region.</p>
     */
    inline void SetDomainConfigurationName(const Aws::String& value) { m_domainConfigurationNameHasBeenSet = true; m_domainConfigurationName = value; }

    /**
     * <p>The name of the domain configuration. This value must be unique to a
     * region.</p>
     */
    inline void SetDomainConfigurationName(Aws::String&& value) { m_domainConfigurationNameHasBeenSet = true; m_domainConfigurationName = std::move(value); }

    /**
     * <p>The name of the domain configuration. This value must be unique to a
     * region.</p>
     */
    inline void SetDomainConfigurationName(const char* value) { m_domainConfigurationNameHasBeenSet = true; m_domainConfigurationName.assign(value); }

    /**
     * <p>The name of the domain configuration. This value must be unique to a
     * region.</p>
     */
    inline DomainConfigurationSummary& WithDomainConfigurationName(const Aws::String& value) { SetDomainConfigurationName(value); return *this;}

    /**
     * <p>The name of the domain configuration. This value must be unique to a
     * region.</p>
     */
    inline DomainConfigurationSummary& WithDomainConfigurationName(Aws::String&& value) { SetDomainConfigurationName(std::move(value)); return *this;}

    /**
     * <p>The name of the domain configuration. This value must be unique to a
     * region.</p>
     */
    inline DomainConfigurationSummary& WithDomainConfigurationName(const char* value) { SetDomainConfigurationName(value); return *this;}


    /**
     * <p>The ARN of the domain configuration.</p>
     */
    inline const Aws::String& GetDomainConfigurationArn() const{ return m_domainConfigurationArn; }

    /**
     * <p>The ARN of the domain configuration.</p>
     */
    inline bool DomainConfigurationArnHasBeenSet() const { return m_domainConfigurationArnHasBeenSet; }

    /**
     * <p>The ARN of the domain configuration.</p>
     */
    inline void SetDomainConfigurationArn(const Aws::String& value) { m_domainConfigurationArnHasBeenSet = true; m_domainConfigurationArn = value; }

    /**
     * <p>The ARN of the domain configuration.</p>
     */
    inline void SetDomainConfigurationArn(Aws::String&& value) { m_domainConfigurationArnHasBeenSet = true; m_domainConfigurationArn = std::move(value); }

    /**
     * <p>The ARN of the domain configuration.</p>
     */
    inline void SetDomainConfigurationArn(const char* value) { m_domainConfigurationArnHasBeenSet = true; m_domainConfigurationArn.assign(value); }

    /**
     * <p>The ARN of the domain configuration.</p>
     */
    inline DomainConfigurationSummary& WithDomainConfigurationArn(const Aws::String& value) { SetDomainConfigurationArn(value); return *this;}

    /**
     * <p>The ARN of the domain configuration.</p>
     */
    inline DomainConfigurationSummary& WithDomainConfigurationArn(Aws::String&& value) { SetDomainConfigurationArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the domain configuration.</p>
     */
    inline DomainConfigurationSummary& WithDomainConfigurationArn(const char* value) { SetDomainConfigurationArn(value); return *this;}


    /**
     * <p>The type of service delivered by the endpoint.</p>
     */
    inline const ServiceType& GetServiceType() const{ return m_serviceType; }

    /**
     * <p>The type of service delivered by the endpoint.</p>
     */
    inline bool ServiceTypeHasBeenSet() const { return m_serviceTypeHasBeenSet; }

    /**
     * <p>The type of service delivered by the endpoint.</p>
     */
    inline void SetServiceType(const ServiceType& value) { m_serviceTypeHasBeenSet = true; m_serviceType = value; }

    /**
     * <p>The type of service delivered by the endpoint.</p>
     */
    inline void SetServiceType(ServiceType&& value) { m_serviceTypeHasBeenSet = true; m_serviceType = std::move(value); }

    /**
     * <p>The type of service delivered by the endpoint.</p>
     */
    inline DomainConfigurationSummary& WithServiceType(const ServiceType& value) { SetServiceType(value); return *this;}

    /**
     * <p>The type of service delivered by the endpoint.</p>
     */
    inline DomainConfigurationSummary& WithServiceType(ServiceType&& value) { SetServiceType(std::move(value)); return *this;}

  private:

    Aws::String m_domainConfigurationName;
    bool m_domainConfigurationNameHasBeenSet = false;

    Aws::String m_domainConfigurationArn;
    bool m_domainConfigurationArnHasBeenSet = false;

    ServiceType m_serviceType;
    bool m_serviceTypeHasBeenSet = false;
  };

} // namespace Model
} // namespace IoT
} // namespace Aws
