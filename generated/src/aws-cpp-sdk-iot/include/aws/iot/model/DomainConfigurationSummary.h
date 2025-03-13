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
    AWS_IOT_API DomainConfigurationSummary() = default;
    AWS_IOT_API DomainConfigurationSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOT_API DomainConfigurationSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the domain configuration. This value must be unique to a
     * region.</p>
     */
    inline const Aws::String& GetDomainConfigurationName() const { return m_domainConfigurationName; }
    inline bool DomainConfigurationNameHasBeenSet() const { return m_domainConfigurationNameHasBeenSet; }
    template<typename DomainConfigurationNameT = Aws::String>
    void SetDomainConfigurationName(DomainConfigurationNameT&& value) { m_domainConfigurationNameHasBeenSet = true; m_domainConfigurationName = std::forward<DomainConfigurationNameT>(value); }
    template<typename DomainConfigurationNameT = Aws::String>
    DomainConfigurationSummary& WithDomainConfigurationName(DomainConfigurationNameT&& value) { SetDomainConfigurationName(std::forward<DomainConfigurationNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the domain configuration.</p>
     */
    inline const Aws::String& GetDomainConfigurationArn() const { return m_domainConfigurationArn; }
    inline bool DomainConfigurationArnHasBeenSet() const { return m_domainConfigurationArnHasBeenSet; }
    template<typename DomainConfigurationArnT = Aws::String>
    void SetDomainConfigurationArn(DomainConfigurationArnT&& value) { m_domainConfigurationArnHasBeenSet = true; m_domainConfigurationArn = std::forward<DomainConfigurationArnT>(value); }
    template<typename DomainConfigurationArnT = Aws::String>
    DomainConfigurationSummary& WithDomainConfigurationArn(DomainConfigurationArnT&& value) { SetDomainConfigurationArn(std::forward<DomainConfigurationArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of service delivered by the endpoint.</p>
     */
    inline ServiceType GetServiceType() const { return m_serviceType; }
    inline bool ServiceTypeHasBeenSet() const { return m_serviceTypeHasBeenSet; }
    inline void SetServiceType(ServiceType value) { m_serviceTypeHasBeenSet = true; m_serviceType = value; }
    inline DomainConfigurationSummary& WithServiceType(ServiceType value) { SetServiceType(value); return *this;}
    ///@}
  private:

    Aws::String m_domainConfigurationName;
    bool m_domainConfigurationNameHasBeenSet = false;

    Aws::String m_domainConfigurationArn;
    bool m_domainConfigurationArnHasBeenSet = false;

    ServiceType m_serviceType{ServiceType::NOT_SET};
    bool m_serviceTypeHasBeenSet = false;
  };

} // namespace Model
} // namespace IoT
} // namespace Aws
