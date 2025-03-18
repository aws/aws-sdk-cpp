/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/grafana/ManagedGrafana_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace ManagedGrafana
{
namespace Model
{

  /**
   * <p>A structure containing information about how this workspace works with IAM
   * Identity Center. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/grafana-2020-08-18/AwsSsoAuthentication">AWS
   * API Reference</a></p>
   */
  class AwsSsoAuthentication
  {
  public:
    AWS_MANAGEDGRAFANA_API AwsSsoAuthentication() = default;
    AWS_MANAGEDGRAFANA_API AwsSsoAuthentication(Aws::Utils::Json::JsonView jsonValue);
    AWS_MANAGEDGRAFANA_API AwsSsoAuthentication& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MANAGEDGRAFANA_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The ID of the IAM Identity Center-managed application that is created by
     * Amazon Managed Grafana.</p>
     */
    inline const Aws::String& GetSsoClientId() const { return m_ssoClientId; }
    inline bool SsoClientIdHasBeenSet() const { return m_ssoClientIdHasBeenSet; }
    template<typename SsoClientIdT = Aws::String>
    void SetSsoClientId(SsoClientIdT&& value) { m_ssoClientIdHasBeenSet = true; m_ssoClientId = std::forward<SsoClientIdT>(value); }
    template<typename SsoClientIdT = Aws::String>
    AwsSsoAuthentication& WithSsoClientId(SsoClientIdT&& value) { SetSsoClientId(std::forward<SsoClientIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_ssoClientId;
    bool m_ssoClientIdHasBeenSet = false;
  };

} // namespace Model
} // namespace ManagedGrafana
} // namespace Aws
