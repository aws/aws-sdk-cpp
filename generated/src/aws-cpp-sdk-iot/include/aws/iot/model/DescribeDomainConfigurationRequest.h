/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iot/IoT_EXPORTS.h>
#include <aws/iot/IoTRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace IoT
{
namespace Model
{

  /**
   */
  class DescribeDomainConfigurationRequest : public IoTRequest
  {
  public:
    AWS_IOT_API DescribeDomainConfigurationRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeDomainConfiguration"; }

    AWS_IOT_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The name of the domain configuration.</p>
     */
    inline const Aws::String& GetDomainConfigurationName() const { return m_domainConfigurationName; }
    inline bool DomainConfigurationNameHasBeenSet() const { return m_domainConfigurationNameHasBeenSet; }
    template<typename DomainConfigurationNameT = Aws::String>
    void SetDomainConfigurationName(DomainConfigurationNameT&& value) { m_domainConfigurationNameHasBeenSet = true; m_domainConfigurationName = std::forward<DomainConfigurationNameT>(value); }
    template<typename DomainConfigurationNameT = Aws::String>
    DescribeDomainConfigurationRequest& WithDomainConfigurationName(DomainConfigurationNameT&& value) { SetDomainConfigurationName(std::forward<DomainConfigurationNameT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_domainConfigurationName;
    bool m_domainConfigurationNameHasBeenSet = false;
  };

} // namespace Model
} // namespace IoT
} // namespace Aws
