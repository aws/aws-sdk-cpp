/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloud9/Cloud9_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/cloud9/model/EnvironmentType.h>
#include <aws/cloud9/model/ConnectionType.h>
#include <aws/cloud9/model/EnvironmentLifecycle.h>
#include <aws/cloud9/model/ManagedCredentialsStatus.h>
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
namespace Cloud9
{
namespace Model
{

  /**
   * <p>Information about an Cloud9 development environment.</p><p><h3>See Also:</h3>
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cloud9-2017-09-23/Environment">AWS
   * API Reference</a></p>
   */
  class Environment
  {
  public:
    AWS_CLOUD9_API Environment();
    AWS_CLOUD9_API Environment(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLOUD9_API Environment& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLOUD9_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The ID of the environment.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }
    inline Environment& WithId(const Aws::String& value) { SetId(value); return *this;}
    inline Environment& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}
    inline Environment& WithId(const char* value) { SetId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the environment.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline Environment& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline Environment& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline Environment& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The description for the environment.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }
    inline Environment& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline Environment& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline Environment& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of environment. Valid values include the following:</p> <ul> <li>
     * <p> <code>ec2</code>: An Amazon Elastic Compute Cloud (Amazon EC2) instance
     * connects to the environment.</p> </li> <li> <p> <code>ssh</code>: Your own
     * server connects to the environment.</p> </li> </ul>
     */
    inline const EnvironmentType& GetType() const{ return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(const EnvironmentType& value) { m_typeHasBeenSet = true; m_type = value; }
    inline void SetType(EnvironmentType&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }
    inline Environment& WithType(const EnvironmentType& value) { SetType(value); return *this;}
    inline Environment& WithType(EnvironmentType&& value) { SetType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The connection type used for connecting to an Amazon EC2 environment.
     * <code>CONNECT_SSH</code> is selected by default.</p>
     */
    inline const ConnectionType& GetConnectionType() const{ return m_connectionType; }
    inline bool ConnectionTypeHasBeenSet() const { return m_connectionTypeHasBeenSet; }
    inline void SetConnectionType(const ConnectionType& value) { m_connectionTypeHasBeenSet = true; m_connectionType = value; }
    inline void SetConnectionType(ConnectionType&& value) { m_connectionTypeHasBeenSet = true; m_connectionType = std::move(value); }
    inline Environment& WithConnectionType(const ConnectionType& value) { SetConnectionType(value); return *this;}
    inline Environment& WithConnectionType(ConnectionType&& value) { SetConnectionType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the environment.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }
    inline void SetArn(const Aws::String& value) { m_arnHasBeenSet = true; m_arn = value; }
    inline void SetArn(Aws::String&& value) { m_arnHasBeenSet = true; m_arn = std::move(value); }
    inline void SetArn(const char* value) { m_arnHasBeenSet = true; m_arn.assign(value); }
    inline Environment& WithArn(const Aws::String& value) { SetArn(value); return *this;}
    inline Environment& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}
    inline Environment& WithArn(const char* value) { SetArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the environment owner.</p>
     */
    inline const Aws::String& GetOwnerArn() const{ return m_ownerArn; }
    inline bool OwnerArnHasBeenSet() const { return m_ownerArnHasBeenSet; }
    inline void SetOwnerArn(const Aws::String& value) { m_ownerArnHasBeenSet = true; m_ownerArn = value; }
    inline void SetOwnerArn(Aws::String&& value) { m_ownerArnHasBeenSet = true; m_ownerArn = std::move(value); }
    inline void SetOwnerArn(const char* value) { m_ownerArnHasBeenSet = true; m_ownerArn.assign(value); }
    inline Environment& WithOwnerArn(const Aws::String& value) { SetOwnerArn(value); return *this;}
    inline Environment& WithOwnerArn(Aws::String&& value) { SetOwnerArn(std::move(value)); return *this;}
    inline Environment& WithOwnerArn(const char* value) { SetOwnerArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The state of the environment in its creation or deletion lifecycle.</p>
     */
    inline const EnvironmentLifecycle& GetLifecycle() const{ return m_lifecycle; }
    inline bool LifecycleHasBeenSet() const { return m_lifecycleHasBeenSet; }
    inline void SetLifecycle(const EnvironmentLifecycle& value) { m_lifecycleHasBeenSet = true; m_lifecycle = value; }
    inline void SetLifecycle(EnvironmentLifecycle&& value) { m_lifecycleHasBeenSet = true; m_lifecycle = std::move(value); }
    inline Environment& WithLifecycle(const EnvironmentLifecycle& value) { SetLifecycle(value); return *this;}
    inline Environment& WithLifecycle(EnvironmentLifecycle&& value) { SetLifecycle(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Describes the status of Amazon Web Services managed temporary credentials for
     * the Cloud9 environment. Available values are:</p> <ul> <li> <p>
     * <code>ENABLED_ON_CREATE</code> </p> </li> <li> <p> <code>ENABLED_BY_OWNER</code>
     * </p> </li> <li> <p> <code>DISABLED_BY_DEFAULT</code> </p> </li> <li> <p>
     * <code>DISABLED_BY_OWNER</code> </p> </li> <li> <p>
     * <code>DISABLED_BY_COLLABORATOR</code> </p> </li> <li> <p>
     * <code>PENDING_REMOVAL_BY_COLLABORATOR</code> </p> </li> <li> <p>
     * <code>PENDING_REMOVAL_BY_OWNER</code> </p> </li> <li> <p>
     * <code>FAILED_REMOVAL_BY_COLLABORATOR</code> </p> </li> <li> <p>
     * <code>ENABLED_BY_OWNER</code> </p> </li> <li> <p>
     * <code>DISABLED_BY_DEFAULT</code> </p> </li> </ul>
     */
    inline const ManagedCredentialsStatus& GetManagedCredentialsStatus() const{ return m_managedCredentialsStatus; }
    inline bool ManagedCredentialsStatusHasBeenSet() const { return m_managedCredentialsStatusHasBeenSet; }
    inline void SetManagedCredentialsStatus(const ManagedCredentialsStatus& value) { m_managedCredentialsStatusHasBeenSet = true; m_managedCredentialsStatus = value; }
    inline void SetManagedCredentialsStatus(ManagedCredentialsStatus&& value) { m_managedCredentialsStatusHasBeenSet = true; m_managedCredentialsStatus = std::move(value); }
    inline Environment& WithManagedCredentialsStatus(const ManagedCredentialsStatus& value) { SetManagedCredentialsStatus(value); return *this;}
    inline Environment& WithManagedCredentialsStatus(ManagedCredentialsStatus&& value) { SetManagedCredentialsStatus(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    EnvironmentType m_type;
    bool m_typeHasBeenSet = false;

    ConnectionType m_connectionType;
    bool m_connectionTypeHasBeenSet = false;

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    Aws::String m_ownerArn;
    bool m_ownerArnHasBeenSet = false;

    EnvironmentLifecycle m_lifecycle;
    bool m_lifecycleHasBeenSet = false;

    ManagedCredentialsStatus m_managedCredentialsStatus;
    bool m_managedCredentialsStatusHasBeenSet = false;
  };

} // namespace Model
} // namespace Cloud9
} // namespace Aws
