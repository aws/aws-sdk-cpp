/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/entityresolution/EntityResolution_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/entityresolution/model/ServiceType.h>
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
namespace EntityResolution
{
namespace Model
{

  /**
   * <p>A list of <code>ProviderService</code> objects, each of which contain the
   * fields <code>providerName</code>, <code>providerServiceArn</code>,
   * <code>providerServiceName</code>, and
   * <code>providerServiceType</code>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/entityresolution-2018-05-10/ProviderServiceSummary">AWS
   * API Reference</a></p>
   */
  class ProviderServiceSummary
  {
  public:
    AWS_ENTITYRESOLUTION_API ProviderServiceSummary() = default;
    AWS_ENTITYRESOLUTION_API ProviderServiceSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_ENTITYRESOLUTION_API ProviderServiceSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_ENTITYRESOLUTION_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The ARN (Amazon Resource Name) that Entity Resolution generated for the
     * <code>providerService</code>.</p>
     */
    inline const Aws::String& GetProviderServiceArn() const { return m_providerServiceArn; }
    inline bool ProviderServiceArnHasBeenSet() const { return m_providerServiceArnHasBeenSet; }
    template<typename ProviderServiceArnT = Aws::String>
    void SetProviderServiceArn(ProviderServiceArnT&& value) { m_providerServiceArnHasBeenSet = true; m_providerServiceArn = std::forward<ProviderServiceArnT>(value); }
    template<typename ProviderServiceArnT = Aws::String>
    ProviderServiceSummary& WithProviderServiceArn(ProviderServiceArnT&& value) { SetProviderServiceArn(std::forward<ProviderServiceArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the provider. This name is typically the company name.</p>
     */
    inline const Aws::String& GetProviderName() const { return m_providerName; }
    inline bool ProviderNameHasBeenSet() const { return m_providerNameHasBeenSet; }
    template<typename ProviderNameT = Aws::String>
    void SetProviderName(ProviderNameT&& value) { m_providerNameHasBeenSet = true; m_providerName = std::forward<ProviderNameT>(value); }
    template<typename ProviderNameT = Aws::String>
    ProviderServiceSummary& WithProviderName(ProviderNameT&& value) { SetProviderName(std::forward<ProviderNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The display name of the provider service.</p>
     */
    inline const Aws::String& GetProviderServiceDisplayName() const { return m_providerServiceDisplayName; }
    inline bool ProviderServiceDisplayNameHasBeenSet() const { return m_providerServiceDisplayNameHasBeenSet; }
    template<typename ProviderServiceDisplayNameT = Aws::String>
    void SetProviderServiceDisplayName(ProviderServiceDisplayNameT&& value) { m_providerServiceDisplayNameHasBeenSet = true; m_providerServiceDisplayName = std::forward<ProviderServiceDisplayNameT>(value); }
    template<typename ProviderServiceDisplayNameT = Aws::String>
    ProviderServiceSummary& WithProviderServiceDisplayName(ProviderServiceDisplayNameT&& value) { SetProviderServiceDisplayName(std::forward<ProviderServiceDisplayNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the product that the provider service provides.</p>
     */
    inline const Aws::String& GetProviderServiceName() const { return m_providerServiceName; }
    inline bool ProviderServiceNameHasBeenSet() const { return m_providerServiceNameHasBeenSet; }
    template<typename ProviderServiceNameT = Aws::String>
    void SetProviderServiceName(ProviderServiceNameT&& value) { m_providerServiceNameHasBeenSet = true; m_providerServiceName = std::forward<ProviderServiceNameT>(value); }
    template<typename ProviderServiceNameT = Aws::String>
    ProviderServiceSummary& WithProviderServiceName(ProviderServiceNameT&& value) { SetProviderServiceName(std::forward<ProviderServiceNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of provider service.</p>
     */
    inline ServiceType GetProviderServiceType() const { return m_providerServiceType; }
    inline bool ProviderServiceTypeHasBeenSet() const { return m_providerServiceTypeHasBeenSet; }
    inline void SetProviderServiceType(ServiceType value) { m_providerServiceTypeHasBeenSet = true; m_providerServiceType = value; }
    inline ProviderServiceSummary& WithProviderServiceType(ServiceType value) { SetProviderServiceType(value); return *this;}
    ///@}
  private:

    Aws::String m_providerServiceArn;
    bool m_providerServiceArnHasBeenSet = false;

    Aws::String m_providerName;
    bool m_providerNameHasBeenSet = false;

    Aws::String m_providerServiceDisplayName;
    bool m_providerServiceDisplayNameHasBeenSet = false;

    Aws::String m_providerServiceName;
    bool m_providerServiceNameHasBeenSet = false;

    ServiceType m_providerServiceType{ServiceType::NOT_SET};
    bool m_providerServiceTypeHasBeenSet = false;
  };

} // namespace Model
} // namespace EntityResolution
} // namespace Aws
