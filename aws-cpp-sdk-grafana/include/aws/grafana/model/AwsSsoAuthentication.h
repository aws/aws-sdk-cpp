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
   * <p>A structure containing information about how this workspace works with Amazon
   * Web Services SSO. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/grafana-2020-08-18/AwsSsoAuthentication">AWS
   * API Reference</a></p>
   */
  class AWS_MANAGEDGRAFANA_API AwsSsoAuthentication
  {
  public:
    AwsSsoAuthentication();
    AwsSsoAuthentication(Aws::Utils::Json::JsonView jsonValue);
    AwsSsoAuthentication& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The ID of the Amazon Web Services SSO-managed application that is created by
     * Amazon Managed Grafana.</p>
     */
    inline const Aws::String& GetSsoClientId() const{ return m_ssoClientId; }

    /**
     * <p>The ID of the Amazon Web Services SSO-managed application that is created by
     * Amazon Managed Grafana.</p>
     */
    inline bool SsoClientIdHasBeenSet() const { return m_ssoClientIdHasBeenSet; }

    /**
     * <p>The ID of the Amazon Web Services SSO-managed application that is created by
     * Amazon Managed Grafana.</p>
     */
    inline void SetSsoClientId(const Aws::String& value) { m_ssoClientIdHasBeenSet = true; m_ssoClientId = value; }

    /**
     * <p>The ID of the Amazon Web Services SSO-managed application that is created by
     * Amazon Managed Grafana.</p>
     */
    inline void SetSsoClientId(Aws::String&& value) { m_ssoClientIdHasBeenSet = true; m_ssoClientId = std::move(value); }

    /**
     * <p>The ID of the Amazon Web Services SSO-managed application that is created by
     * Amazon Managed Grafana.</p>
     */
    inline void SetSsoClientId(const char* value) { m_ssoClientIdHasBeenSet = true; m_ssoClientId.assign(value); }

    /**
     * <p>The ID of the Amazon Web Services SSO-managed application that is created by
     * Amazon Managed Grafana.</p>
     */
    inline AwsSsoAuthentication& WithSsoClientId(const Aws::String& value) { SetSsoClientId(value); return *this;}

    /**
     * <p>The ID of the Amazon Web Services SSO-managed application that is created by
     * Amazon Managed Grafana.</p>
     */
    inline AwsSsoAuthentication& WithSsoClientId(Aws::String&& value) { SetSsoClientId(std::move(value)); return *this;}

    /**
     * <p>The ID of the Amazon Web Services SSO-managed application that is created by
     * Amazon Managed Grafana.</p>
     */
    inline AwsSsoAuthentication& WithSsoClientId(const char* value) { SetSsoClientId(value); return *this;}

  private:

    Aws::String m_ssoClientId;
    bool m_ssoClientIdHasBeenSet;
  };

} // namespace Model
} // namespace ManagedGrafana
} // namespace Aws
