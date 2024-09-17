/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/grafana/ManagedGrafana_EXPORTS.h>
#include <aws/grafana/model/Role.h>
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
   * <p>A structure that contains the information about one service
   * account.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/grafana-2020-08-18/ServiceAccountSummary">AWS
   * API Reference</a></p>
   */
  class ServiceAccountSummary
  {
  public:
    AWS_MANAGEDGRAFANA_API ServiceAccountSummary();
    AWS_MANAGEDGRAFANA_API ServiceAccountSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_MANAGEDGRAFANA_API ServiceAccountSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MANAGEDGRAFANA_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The role of the service account, which sets the permission level used when
     * calling Grafana APIs.</p>
     */
    inline const Role& GetGrafanaRole() const{ return m_grafanaRole; }
    inline bool GrafanaRoleHasBeenSet() const { return m_grafanaRoleHasBeenSet; }
    inline void SetGrafanaRole(const Role& value) { m_grafanaRoleHasBeenSet = true; m_grafanaRole = value; }
    inline void SetGrafanaRole(Role&& value) { m_grafanaRoleHasBeenSet = true; m_grafanaRole = std::move(value); }
    inline ServiceAccountSummary& WithGrafanaRole(const Role& value) { SetGrafanaRole(value); return *this;}
    inline ServiceAccountSummary& WithGrafanaRole(Role&& value) { SetGrafanaRole(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique ID of the service account.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }
    inline ServiceAccountSummary& WithId(const Aws::String& value) { SetId(value); return *this;}
    inline ServiceAccountSummary& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}
    inline ServiceAccountSummary& WithId(const char* value) { SetId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Returns true if the service account is disabled. Service accounts can be
     * disabled and enabled in the Amazon Managed Grafana console.</p>
     */
    inline const Aws::String& GetIsDisabled() const{ return m_isDisabled; }
    inline bool IsDisabledHasBeenSet() const { return m_isDisabledHasBeenSet; }
    inline void SetIsDisabled(const Aws::String& value) { m_isDisabledHasBeenSet = true; m_isDisabled = value; }
    inline void SetIsDisabled(Aws::String&& value) { m_isDisabledHasBeenSet = true; m_isDisabled = std::move(value); }
    inline void SetIsDisabled(const char* value) { m_isDisabledHasBeenSet = true; m_isDisabled.assign(value); }
    inline ServiceAccountSummary& WithIsDisabled(const Aws::String& value) { SetIsDisabled(value); return *this;}
    inline ServiceAccountSummary& WithIsDisabled(Aws::String&& value) { SetIsDisabled(std::move(value)); return *this;}
    inline ServiceAccountSummary& WithIsDisabled(const char* value) { SetIsDisabled(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the service account.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline ServiceAccountSummary& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline ServiceAccountSummary& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline ServiceAccountSummary& WithName(const char* value) { SetName(value); return *this;}
    ///@}
  private:

    Role m_grafanaRole;
    bool m_grafanaRoleHasBeenSet = false;

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    Aws::String m_isDisabled;
    bool m_isDisabledHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;
  };

} // namespace Model
} // namespace ManagedGrafana
} // namespace Aws
