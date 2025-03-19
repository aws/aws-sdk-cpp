/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/appintegrations/AppIntegrationsService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
namespace AppIntegrationsService
{
namespace Model
{

  /**
   * <p>The external URL source for the application.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/appintegrations-2020-07-29/ExternalUrlConfig">AWS
   * API Reference</a></p>
   */
  class ExternalUrlConfig
  {
  public:
    AWS_APPINTEGRATIONSSERVICE_API ExternalUrlConfig() = default;
    AWS_APPINTEGRATIONSSERVICE_API ExternalUrlConfig(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPINTEGRATIONSSERVICE_API ExternalUrlConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPINTEGRATIONSSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The URL to access the application.</p>
     */
    inline const Aws::String& GetAccessUrl() const { return m_accessUrl; }
    inline bool AccessUrlHasBeenSet() const { return m_accessUrlHasBeenSet; }
    template<typename AccessUrlT = Aws::String>
    void SetAccessUrl(AccessUrlT&& value) { m_accessUrlHasBeenSet = true; m_accessUrl = std::forward<AccessUrlT>(value); }
    template<typename AccessUrlT = Aws::String>
    ExternalUrlConfig& WithAccessUrl(AccessUrlT&& value) { SetAccessUrl(std::forward<AccessUrlT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Additional URLs to allow list if different than the access URL.</p>
     */
    inline const Aws::Vector<Aws::String>& GetApprovedOrigins() const { return m_approvedOrigins; }
    inline bool ApprovedOriginsHasBeenSet() const { return m_approvedOriginsHasBeenSet; }
    template<typename ApprovedOriginsT = Aws::Vector<Aws::String>>
    void SetApprovedOrigins(ApprovedOriginsT&& value) { m_approvedOriginsHasBeenSet = true; m_approvedOrigins = std::forward<ApprovedOriginsT>(value); }
    template<typename ApprovedOriginsT = Aws::Vector<Aws::String>>
    ExternalUrlConfig& WithApprovedOrigins(ApprovedOriginsT&& value) { SetApprovedOrigins(std::forward<ApprovedOriginsT>(value)); return *this;}
    template<typename ApprovedOriginsT = Aws::String>
    ExternalUrlConfig& AddApprovedOrigins(ApprovedOriginsT&& value) { m_approvedOriginsHasBeenSet = true; m_approvedOrigins.emplace_back(std::forward<ApprovedOriginsT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_accessUrl;
    bool m_accessUrlHasBeenSet = false;

    Aws::Vector<Aws::String> m_approvedOrigins;
    bool m_approvedOriginsHasBeenSet = false;
  };

} // namespace Model
} // namespace AppIntegrationsService
} // namespace Aws
