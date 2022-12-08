/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/proton/Proton_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/proton/model/EnvironmentAccountConnectionStatus.h>
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
namespace Proton
{
namespace Model
{

  /**
   * <p>Detailed data of an Proton environment account connection
   * resource.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/proton-2020-07-20/EnvironmentAccountConnection">AWS
   * API Reference</a></p>
   */
  class EnvironmentAccountConnection
  {
  public:
    AWS_PROTON_API EnvironmentAccountConnection();
    AWS_PROTON_API EnvironmentAccountConnection(Aws::Utils::Json::JsonView jsonValue);
    AWS_PROTON_API EnvironmentAccountConnection& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_PROTON_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The Amazon Resource Name (ARN) of the environment account connection.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the environment account connection.</p>
     */
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the environment account connection.</p>
     */
    inline void SetArn(const Aws::String& value) { m_arnHasBeenSet = true; m_arn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the environment account connection.</p>
     */
    inline void SetArn(Aws::String&& value) { m_arnHasBeenSet = true; m_arn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the environment account connection.</p>
     */
    inline void SetArn(const char* value) { m_arnHasBeenSet = true; m_arn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the environment account connection.</p>
     */
    inline EnvironmentAccountConnection& WithArn(const Aws::String& value) { SetArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the environment account connection.</p>
     */
    inline EnvironmentAccountConnection& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the environment account connection.</p>
     */
    inline EnvironmentAccountConnection& WithArn(const char* value) { SetArn(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of an IAM service role in the environment
     * account. Proton uses this role to provision infrastructure resources using
     * CodeBuild-based provisioning in the associated environment account.</p>
     */
    inline const Aws::String& GetCodebuildRoleArn() const{ return m_codebuildRoleArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of an IAM service role in the environment
     * account. Proton uses this role to provision infrastructure resources using
     * CodeBuild-based provisioning in the associated environment account.</p>
     */
    inline bool CodebuildRoleArnHasBeenSet() const { return m_codebuildRoleArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of an IAM service role in the environment
     * account. Proton uses this role to provision infrastructure resources using
     * CodeBuild-based provisioning in the associated environment account.</p>
     */
    inline void SetCodebuildRoleArn(const Aws::String& value) { m_codebuildRoleArnHasBeenSet = true; m_codebuildRoleArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of an IAM service role in the environment
     * account. Proton uses this role to provision infrastructure resources using
     * CodeBuild-based provisioning in the associated environment account.</p>
     */
    inline void SetCodebuildRoleArn(Aws::String&& value) { m_codebuildRoleArnHasBeenSet = true; m_codebuildRoleArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of an IAM service role in the environment
     * account. Proton uses this role to provision infrastructure resources using
     * CodeBuild-based provisioning in the associated environment account.</p>
     */
    inline void SetCodebuildRoleArn(const char* value) { m_codebuildRoleArnHasBeenSet = true; m_codebuildRoleArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of an IAM service role in the environment
     * account. Proton uses this role to provision infrastructure resources using
     * CodeBuild-based provisioning in the associated environment account.</p>
     */
    inline EnvironmentAccountConnection& WithCodebuildRoleArn(const Aws::String& value) { SetCodebuildRoleArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of an IAM service role in the environment
     * account. Proton uses this role to provision infrastructure resources using
     * CodeBuild-based provisioning in the associated environment account.</p>
     */
    inline EnvironmentAccountConnection& WithCodebuildRoleArn(Aws::String&& value) { SetCodebuildRoleArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of an IAM service role in the environment
     * account. Proton uses this role to provision infrastructure resources using
     * CodeBuild-based provisioning in the associated environment account.</p>
     */
    inline EnvironmentAccountConnection& WithCodebuildRoleArn(const char* value) { SetCodebuildRoleArn(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the IAM service role that Proton uses when
     * provisioning directly defined components in the associated environment account.
     * It determines the scope of infrastructure that a component can provision in the
     * account.</p> <p>The environment account connection must have a
     * <code>componentRoleArn</code> to allow directly defined components to be
     * associated with any environments running in the account.</p> <p>For more
     * information about components, see <a
     * href="https://docs.aws.amazon.com/proton/latest/userguide/ag-components.html">Proton
     * components</a> in the <i>Proton User Guide</i>.</p>
     */
    inline const Aws::String& GetComponentRoleArn() const{ return m_componentRoleArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the IAM service role that Proton uses when
     * provisioning directly defined components in the associated environment account.
     * It determines the scope of infrastructure that a component can provision in the
     * account.</p> <p>The environment account connection must have a
     * <code>componentRoleArn</code> to allow directly defined components to be
     * associated with any environments running in the account.</p> <p>For more
     * information about components, see <a
     * href="https://docs.aws.amazon.com/proton/latest/userguide/ag-components.html">Proton
     * components</a> in the <i>Proton User Guide</i>.</p>
     */
    inline bool ComponentRoleArnHasBeenSet() const { return m_componentRoleArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the IAM service role that Proton uses when
     * provisioning directly defined components in the associated environment account.
     * It determines the scope of infrastructure that a component can provision in the
     * account.</p> <p>The environment account connection must have a
     * <code>componentRoleArn</code> to allow directly defined components to be
     * associated with any environments running in the account.</p> <p>For more
     * information about components, see <a
     * href="https://docs.aws.amazon.com/proton/latest/userguide/ag-components.html">Proton
     * components</a> in the <i>Proton User Guide</i>.</p>
     */
    inline void SetComponentRoleArn(const Aws::String& value) { m_componentRoleArnHasBeenSet = true; m_componentRoleArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the IAM service role that Proton uses when
     * provisioning directly defined components in the associated environment account.
     * It determines the scope of infrastructure that a component can provision in the
     * account.</p> <p>The environment account connection must have a
     * <code>componentRoleArn</code> to allow directly defined components to be
     * associated with any environments running in the account.</p> <p>For more
     * information about components, see <a
     * href="https://docs.aws.amazon.com/proton/latest/userguide/ag-components.html">Proton
     * components</a> in the <i>Proton User Guide</i>.</p>
     */
    inline void SetComponentRoleArn(Aws::String&& value) { m_componentRoleArnHasBeenSet = true; m_componentRoleArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the IAM service role that Proton uses when
     * provisioning directly defined components in the associated environment account.
     * It determines the scope of infrastructure that a component can provision in the
     * account.</p> <p>The environment account connection must have a
     * <code>componentRoleArn</code> to allow directly defined components to be
     * associated with any environments running in the account.</p> <p>For more
     * information about components, see <a
     * href="https://docs.aws.amazon.com/proton/latest/userguide/ag-components.html">Proton
     * components</a> in the <i>Proton User Guide</i>.</p>
     */
    inline void SetComponentRoleArn(const char* value) { m_componentRoleArnHasBeenSet = true; m_componentRoleArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the IAM service role that Proton uses when
     * provisioning directly defined components in the associated environment account.
     * It determines the scope of infrastructure that a component can provision in the
     * account.</p> <p>The environment account connection must have a
     * <code>componentRoleArn</code> to allow directly defined components to be
     * associated with any environments running in the account.</p> <p>For more
     * information about components, see <a
     * href="https://docs.aws.amazon.com/proton/latest/userguide/ag-components.html">Proton
     * components</a> in the <i>Proton User Guide</i>.</p>
     */
    inline EnvironmentAccountConnection& WithComponentRoleArn(const Aws::String& value) { SetComponentRoleArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the IAM service role that Proton uses when
     * provisioning directly defined components in the associated environment account.
     * It determines the scope of infrastructure that a component can provision in the
     * account.</p> <p>The environment account connection must have a
     * <code>componentRoleArn</code> to allow directly defined components to be
     * associated with any environments running in the account.</p> <p>For more
     * information about components, see <a
     * href="https://docs.aws.amazon.com/proton/latest/userguide/ag-components.html">Proton
     * components</a> in the <i>Proton User Guide</i>.</p>
     */
    inline EnvironmentAccountConnection& WithComponentRoleArn(Aws::String&& value) { SetComponentRoleArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the IAM service role that Proton uses when
     * provisioning directly defined components in the associated environment account.
     * It determines the scope of infrastructure that a component can provision in the
     * account.</p> <p>The environment account connection must have a
     * <code>componentRoleArn</code> to allow directly defined components to be
     * associated with any environments running in the account.</p> <p>For more
     * information about components, see <a
     * href="https://docs.aws.amazon.com/proton/latest/userguide/ag-components.html">Proton
     * components</a> in the <i>Proton User Guide</i>.</p>
     */
    inline EnvironmentAccountConnection& WithComponentRoleArn(const char* value) { SetComponentRoleArn(value); return *this;}


    /**
     * <p>The environment account that's connected to the environment account
     * connection.</p>
     */
    inline const Aws::String& GetEnvironmentAccountId() const{ return m_environmentAccountId; }

    /**
     * <p>The environment account that's connected to the environment account
     * connection.</p>
     */
    inline bool EnvironmentAccountIdHasBeenSet() const { return m_environmentAccountIdHasBeenSet; }

    /**
     * <p>The environment account that's connected to the environment account
     * connection.</p>
     */
    inline void SetEnvironmentAccountId(const Aws::String& value) { m_environmentAccountIdHasBeenSet = true; m_environmentAccountId = value; }

    /**
     * <p>The environment account that's connected to the environment account
     * connection.</p>
     */
    inline void SetEnvironmentAccountId(Aws::String&& value) { m_environmentAccountIdHasBeenSet = true; m_environmentAccountId = std::move(value); }

    /**
     * <p>The environment account that's connected to the environment account
     * connection.</p>
     */
    inline void SetEnvironmentAccountId(const char* value) { m_environmentAccountIdHasBeenSet = true; m_environmentAccountId.assign(value); }

    /**
     * <p>The environment account that's connected to the environment account
     * connection.</p>
     */
    inline EnvironmentAccountConnection& WithEnvironmentAccountId(const Aws::String& value) { SetEnvironmentAccountId(value); return *this;}

    /**
     * <p>The environment account that's connected to the environment account
     * connection.</p>
     */
    inline EnvironmentAccountConnection& WithEnvironmentAccountId(Aws::String&& value) { SetEnvironmentAccountId(std::move(value)); return *this;}

    /**
     * <p>The environment account that's connected to the environment account
     * connection.</p>
     */
    inline EnvironmentAccountConnection& WithEnvironmentAccountId(const char* value) { SetEnvironmentAccountId(value); return *this;}


    /**
     * <p>The name of the environment that's associated with the environment account
     * connection.</p>
     */
    inline const Aws::String& GetEnvironmentName() const{ return m_environmentName; }

    /**
     * <p>The name of the environment that's associated with the environment account
     * connection.</p>
     */
    inline bool EnvironmentNameHasBeenSet() const { return m_environmentNameHasBeenSet; }

    /**
     * <p>The name of the environment that's associated with the environment account
     * connection.</p>
     */
    inline void SetEnvironmentName(const Aws::String& value) { m_environmentNameHasBeenSet = true; m_environmentName = value; }

    /**
     * <p>The name of the environment that's associated with the environment account
     * connection.</p>
     */
    inline void SetEnvironmentName(Aws::String&& value) { m_environmentNameHasBeenSet = true; m_environmentName = std::move(value); }

    /**
     * <p>The name of the environment that's associated with the environment account
     * connection.</p>
     */
    inline void SetEnvironmentName(const char* value) { m_environmentNameHasBeenSet = true; m_environmentName.assign(value); }

    /**
     * <p>The name of the environment that's associated with the environment account
     * connection.</p>
     */
    inline EnvironmentAccountConnection& WithEnvironmentName(const Aws::String& value) { SetEnvironmentName(value); return *this;}

    /**
     * <p>The name of the environment that's associated with the environment account
     * connection.</p>
     */
    inline EnvironmentAccountConnection& WithEnvironmentName(Aws::String&& value) { SetEnvironmentName(std::move(value)); return *this;}

    /**
     * <p>The name of the environment that's associated with the environment account
     * connection.</p>
     */
    inline EnvironmentAccountConnection& WithEnvironmentName(const char* value) { SetEnvironmentName(value); return *this;}


    /**
     * <p>The ID of the environment account connection.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }

    /**
     * <p>The ID of the environment account connection.</p>
     */
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }

    /**
     * <p>The ID of the environment account connection.</p>
     */
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }

    /**
     * <p>The ID of the environment account connection.</p>
     */
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }

    /**
     * <p>The ID of the environment account connection.</p>
     */
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }

    /**
     * <p>The ID of the environment account connection.</p>
     */
    inline EnvironmentAccountConnection& WithId(const Aws::String& value) { SetId(value); return *this;}

    /**
     * <p>The ID of the environment account connection.</p>
     */
    inline EnvironmentAccountConnection& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}

    /**
     * <p>The ID of the environment account connection.</p>
     */
    inline EnvironmentAccountConnection& WithId(const char* value) { SetId(value); return *this;}


    /**
     * <p>The time when the environment account connection was last modified.</p>
     */
    inline const Aws::Utils::DateTime& GetLastModifiedAt() const{ return m_lastModifiedAt; }

    /**
     * <p>The time when the environment account connection was last modified.</p>
     */
    inline bool LastModifiedAtHasBeenSet() const { return m_lastModifiedAtHasBeenSet; }

    /**
     * <p>The time when the environment account connection was last modified.</p>
     */
    inline void SetLastModifiedAt(const Aws::Utils::DateTime& value) { m_lastModifiedAtHasBeenSet = true; m_lastModifiedAt = value; }

    /**
     * <p>The time when the environment account connection was last modified.</p>
     */
    inline void SetLastModifiedAt(Aws::Utils::DateTime&& value) { m_lastModifiedAtHasBeenSet = true; m_lastModifiedAt = std::move(value); }

    /**
     * <p>The time when the environment account connection was last modified.</p>
     */
    inline EnvironmentAccountConnection& WithLastModifiedAt(const Aws::Utils::DateTime& value) { SetLastModifiedAt(value); return *this;}

    /**
     * <p>The time when the environment account connection was last modified.</p>
     */
    inline EnvironmentAccountConnection& WithLastModifiedAt(Aws::Utils::DateTime&& value) { SetLastModifiedAt(std::move(value)); return *this;}


    /**
     * <p>The ID of the management account that's connected to the environment account
     * connection.</p>
     */
    inline const Aws::String& GetManagementAccountId() const{ return m_managementAccountId; }

    /**
     * <p>The ID of the management account that's connected to the environment account
     * connection.</p>
     */
    inline bool ManagementAccountIdHasBeenSet() const { return m_managementAccountIdHasBeenSet; }

    /**
     * <p>The ID of the management account that's connected to the environment account
     * connection.</p>
     */
    inline void SetManagementAccountId(const Aws::String& value) { m_managementAccountIdHasBeenSet = true; m_managementAccountId = value; }

    /**
     * <p>The ID of the management account that's connected to the environment account
     * connection.</p>
     */
    inline void SetManagementAccountId(Aws::String&& value) { m_managementAccountIdHasBeenSet = true; m_managementAccountId = std::move(value); }

    /**
     * <p>The ID of the management account that's connected to the environment account
     * connection.</p>
     */
    inline void SetManagementAccountId(const char* value) { m_managementAccountIdHasBeenSet = true; m_managementAccountId.assign(value); }

    /**
     * <p>The ID of the management account that's connected to the environment account
     * connection.</p>
     */
    inline EnvironmentAccountConnection& WithManagementAccountId(const Aws::String& value) { SetManagementAccountId(value); return *this;}

    /**
     * <p>The ID of the management account that's connected to the environment account
     * connection.</p>
     */
    inline EnvironmentAccountConnection& WithManagementAccountId(Aws::String&& value) { SetManagementAccountId(std::move(value)); return *this;}

    /**
     * <p>The ID of the management account that's connected to the environment account
     * connection.</p>
     */
    inline EnvironmentAccountConnection& WithManagementAccountId(const char* value) { SetManagementAccountId(value); return *this;}


    /**
     * <p>The time when the environment account connection request was made.</p>
     */
    inline const Aws::Utils::DateTime& GetRequestedAt() const{ return m_requestedAt; }

    /**
     * <p>The time when the environment account connection request was made.</p>
     */
    inline bool RequestedAtHasBeenSet() const { return m_requestedAtHasBeenSet; }

    /**
     * <p>The time when the environment account connection request was made.</p>
     */
    inline void SetRequestedAt(const Aws::Utils::DateTime& value) { m_requestedAtHasBeenSet = true; m_requestedAt = value; }

    /**
     * <p>The time when the environment account connection request was made.</p>
     */
    inline void SetRequestedAt(Aws::Utils::DateTime&& value) { m_requestedAtHasBeenSet = true; m_requestedAt = std::move(value); }

    /**
     * <p>The time when the environment account connection request was made.</p>
     */
    inline EnvironmentAccountConnection& WithRequestedAt(const Aws::Utils::DateTime& value) { SetRequestedAt(value); return *this;}

    /**
     * <p>The time when the environment account connection request was made.</p>
     */
    inline EnvironmentAccountConnection& WithRequestedAt(Aws::Utils::DateTime&& value) { SetRequestedAt(std::move(value)); return *this;}


    /**
     * <p>The IAM service role that's associated with the environment account
     * connection.</p>
     */
    inline const Aws::String& GetRoleArn() const{ return m_roleArn; }

    /**
     * <p>The IAM service role that's associated with the environment account
     * connection.</p>
     */
    inline bool RoleArnHasBeenSet() const { return m_roleArnHasBeenSet; }

    /**
     * <p>The IAM service role that's associated with the environment account
     * connection.</p>
     */
    inline void SetRoleArn(const Aws::String& value) { m_roleArnHasBeenSet = true; m_roleArn = value; }

    /**
     * <p>The IAM service role that's associated with the environment account
     * connection.</p>
     */
    inline void SetRoleArn(Aws::String&& value) { m_roleArnHasBeenSet = true; m_roleArn = std::move(value); }

    /**
     * <p>The IAM service role that's associated with the environment account
     * connection.</p>
     */
    inline void SetRoleArn(const char* value) { m_roleArnHasBeenSet = true; m_roleArn.assign(value); }

    /**
     * <p>The IAM service role that's associated with the environment account
     * connection.</p>
     */
    inline EnvironmentAccountConnection& WithRoleArn(const Aws::String& value) { SetRoleArn(value); return *this;}

    /**
     * <p>The IAM service role that's associated with the environment account
     * connection.</p>
     */
    inline EnvironmentAccountConnection& WithRoleArn(Aws::String&& value) { SetRoleArn(std::move(value)); return *this;}

    /**
     * <p>The IAM service role that's associated with the environment account
     * connection.</p>
     */
    inline EnvironmentAccountConnection& WithRoleArn(const char* value) { SetRoleArn(value); return *this;}


    /**
     * <p>The status of the environment account connection.</p>
     */
    inline const EnvironmentAccountConnectionStatus& GetStatus() const{ return m_status; }

    /**
     * <p>The status of the environment account connection.</p>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p>The status of the environment account connection.</p>
     */
    inline void SetStatus(const EnvironmentAccountConnectionStatus& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>The status of the environment account connection.</p>
     */
    inline void SetStatus(EnvironmentAccountConnectionStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p>The status of the environment account connection.</p>
     */
    inline EnvironmentAccountConnection& WithStatus(const EnvironmentAccountConnectionStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>The status of the environment account connection.</p>
     */
    inline EnvironmentAccountConnection& WithStatus(EnvironmentAccountConnectionStatus&& value) { SetStatus(std::move(value)); return *this;}

  private:

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    Aws::String m_codebuildRoleArn;
    bool m_codebuildRoleArnHasBeenSet = false;

    Aws::String m_componentRoleArn;
    bool m_componentRoleArnHasBeenSet = false;

    Aws::String m_environmentAccountId;
    bool m_environmentAccountIdHasBeenSet = false;

    Aws::String m_environmentName;
    bool m_environmentNameHasBeenSet = false;

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    Aws::Utils::DateTime m_lastModifiedAt;
    bool m_lastModifiedAtHasBeenSet = false;

    Aws::String m_managementAccountId;
    bool m_managementAccountIdHasBeenSet = false;

    Aws::Utils::DateTime m_requestedAt;
    bool m_requestedAtHasBeenSet = false;

    Aws::String m_roleArn;
    bool m_roleArnHasBeenSet = false;

    EnvironmentAccountConnectionStatus m_status;
    bool m_statusHasBeenSet = false;
  };

} // namespace Model
} // namespace Proton
} // namespace Aws
