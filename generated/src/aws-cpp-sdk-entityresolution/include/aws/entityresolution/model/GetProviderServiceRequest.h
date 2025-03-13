/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/entityresolution/EntityResolution_EXPORTS.h>
#include <aws/entityresolution/EntityResolutionRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace EntityResolution
{
namespace Model
{

  /**
   */
  class GetProviderServiceRequest : public EntityResolutionRequest
  {
  public:
    AWS_ENTITYRESOLUTION_API GetProviderServiceRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetProviderService"; }

    AWS_ENTITYRESOLUTION_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The name of the provider. This name is typically the company name.</p>
     */
    inline const Aws::String& GetProviderName() const { return m_providerName; }
    inline bool ProviderNameHasBeenSet() const { return m_providerNameHasBeenSet; }
    template<typename ProviderNameT = Aws::String>
    void SetProviderName(ProviderNameT&& value) { m_providerNameHasBeenSet = true; m_providerName = std::forward<ProviderNameT>(value); }
    template<typename ProviderNameT = Aws::String>
    GetProviderServiceRequest& WithProviderName(ProviderNameT&& value) { SetProviderName(std::forward<ProviderNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN (Amazon Resource Name) of the product that the provider service
     * provides.</p>
     */
    inline const Aws::String& GetProviderServiceName() const { return m_providerServiceName; }
    inline bool ProviderServiceNameHasBeenSet() const { return m_providerServiceNameHasBeenSet; }
    template<typename ProviderServiceNameT = Aws::String>
    void SetProviderServiceName(ProviderServiceNameT&& value) { m_providerServiceNameHasBeenSet = true; m_providerServiceName = std::forward<ProviderServiceNameT>(value); }
    template<typename ProviderServiceNameT = Aws::String>
    GetProviderServiceRequest& WithProviderServiceName(ProviderServiceNameT&& value) { SetProviderServiceName(std::forward<ProviderServiceNameT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_providerName;
    bool m_providerNameHasBeenSet = false;

    Aws::String m_providerServiceName;
    bool m_providerServiceNameHasBeenSet = false;
  };

} // namespace Model
} // namespace EntityResolution
} // namespace Aws
