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


    /**
     * <p>The ID of the environment.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }

    /**
     * <p>The ID of the environment.</p>
     */
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }

    /**
     * <p>The ID of the environment.</p>
     */
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }

    /**
     * <p>The ID of the environment.</p>
     */
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }

    /**
     * <p>The ID of the environment.</p>
     */
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }

    /**
     * <p>The ID of the environment.</p>
     */
    inline Environment& WithId(const Aws::String& value) { SetId(value); return *this;}

    /**
     * <p>The ID of the environment.</p>
     */
    inline Environment& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}

    /**
     * <p>The ID of the environment.</p>
     */
    inline Environment& WithId(const char* value) { SetId(value); return *this;}


    /**
     * <p>The name of the environment.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the environment.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the environment.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the environment.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the environment.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the environment.</p>
     */
    inline Environment& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the environment.</p>
     */
    inline Environment& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the environment.</p>
     */
    inline Environment& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The description for the environment.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>The description for the environment.</p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>The description for the environment.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>The description for the environment.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>The description for the environment.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>The description for the environment.</p>
     */
    inline Environment& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>The description for the environment.</p>
     */
    inline Environment& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>The description for the environment.</p>
     */
    inline Environment& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>The type of environment. Valid values include the following:</p> <ul> <li>
     * <p> <code>ec2</code>: An Amazon Elastic Compute Cloud (Amazon EC2) instance
     * connects to the environment.</p> </li> <li> <p> <code>ssh</code>: Your own
     * server connects to the environment.</p> </li> </ul>
     */
    inline const EnvironmentType& GetType() const{ return m_type; }

    /**
     * <p>The type of environment. Valid values include the following:</p> <ul> <li>
     * <p> <code>ec2</code>: An Amazon Elastic Compute Cloud (Amazon EC2) instance
     * connects to the environment.</p> </li> <li> <p> <code>ssh</code>: Your own
     * server connects to the environment.</p> </li> </ul>
     */
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }

    /**
     * <p>The type of environment. Valid values include the following:</p> <ul> <li>
     * <p> <code>ec2</code>: An Amazon Elastic Compute Cloud (Amazon EC2) instance
     * connects to the environment.</p> </li> <li> <p> <code>ssh</code>: Your own
     * server connects to the environment.</p> </li> </ul>
     */
    inline void SetType(const EnvironmentType& value) { m_typeHasBeenSet = true; m_type = value; }

    /**
     * <p>The type of environment. Valid values include the following:</p> <ul> <li>
     * <p> <code>ec2</code>: An Amazon Elastic Compute Cloud (Amazon EC2) instance
     * connects to the environment.</p> </li> <li> <p> <code>ssh</code>: Your own
     * server connects to the environment.</p> </li> </ul>
     */
    inline void SetType(EnvironmentType&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }

    /**
     * <p>The type of environment. Valid values include the following:</p> <ul> <li>
     * <p> <code>ec2</code>: An Amazon Elastic Compute Cloud (Amazon EC2) instance
     * connects to the environment.</p> </li> <li> <p> <code>ssh</code>: Your own
     * server connects to the environment.</p> </li> </ul>
     */
    inline Environment& WithType(const EnvironmentType& value) { SetType(value); return *this;}

    /**
     * <p>The type of environment. Valid values include the following:</p> <ul> <li>
     * <p> <code>ec2</code>: An Amazon Elastic Compute Cloud (Amazon EC2) instance
     * connects to the environment.</p> </li> <li> <p> <code>ssh</code>: Your own
     * server connects to the environment.</p> </li> </ul>
     */
    inline Environment& WithType(EnvironmentType&& value) { SetType(std::move(value)); return *this;}


    /**
     * <p>The connection type used for connecting to an Amazon EC2 environment.
     * <code>CONNECT_SSH</code> is selected by default.</p>
     */
    inline const ConnectionType& GetConnectionType() const{ return m_connectionType; }

    /**
     * <p>The connection type used for connecting to an Amazon EC2 environment.
     * <code>CONNECT_SSH</code> is selected by default.</p>
     */
    inline bool ConnectionTypeHasBeenSet() const { return m_connectionTypeHasBeenSet; }

    /**
     * <p>The connection type used for connecting to an Amazon EC2 environment.
     * <code>CONNECT_SSH</code> is selected by default.</p>
     */
    inline void SetConnectionType(const ConnectionType& value) { m_connectionTypeHasBeenSet = true; m_connectionType = value; }

    /**
     * <p>The connection type used for connecting to an Amazon EC2 environment.
     * <code>CONNECT_SSH</code> is selected by default.</p>
     */
    inline void SetConnectionType(ConnectionType&& value) { m_connectionTypeHasBeenSet = true; m_connectionType = std::move(value); }

    /**
     * <p>The connection type used for connecting to an Amazon EC2 environment.
     * <code>CONNECT_SSH</code> is selected by default.</p>
     */
    inline Environment& WithConnectionType(const ConnectionType& value) { SetConnectionType(value); return *this;}

    /**
     * <p>The connection type used for connecting to an Amazon EC2 environment.
     * <code>CONNECT_SSH</code> is selected by default.</p>
     */
    inline Environment& WithConnectionType(ConnectionType&& value) { SetConnectionType(std::move(value)); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the environment.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the environment.</p>
     */
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the environment.</p>
     */
    inline void SetArn(const Aws::String& value) { m_arnHasBeenSet = true; m_arn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the environment.</p>
     */
    inline void SetArn(Aws::String&& value) { m_arnHasBeenSet = true; m_arn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the environment.</p>
     */
    inline void SetArn(const char* value) { m_arnHasBeenSet = true; m_arn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the environment.</p>
     */
    inline Environment& WithArn(const Aws::String& value) { SetArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the environment.</p>
     */
    inline Environment& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the environment.</p>
     */
    inline Environment& WithArn(const char* value) { SetArn(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the environment owner.</p>
     */
    inline const Aws::String& GetOwnerArn() const{ return m_ownerArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the environment owner.</p>
     */
    inline bool OwnerArnHasBeenSet() const { return m_ownerArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the environment owner.</p>
     */
    inline void SetOwnerArn(const Aws::String& value) { m_ownerArnHasBeenSet = true; m_ownerArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the environment owner.</p>
     */
    inline void SetOwnerArn(Aws::String&& value) { m_ownerArnHasBeenSet = true; m_ownerArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the environment owner.</p>
     */
    inline void SetOwnerArn(const char* value) { m_ownerArnHasBeenSet = true; m_ownerArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the environment owner.</p>
     */
    inline Environment& WithOwnerArn(const Aws::String& value) { SetOwnerArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the environment owner.</p>
     */
    inline Environment& WithOwnerArn(Aws::String&& value) { SetOwnerArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the environment owner.</p>
     */
    inline Environment& WithOwnerArn(const char* value) { SetOwnerArn(value); return *this;}


    /**
     * <p>The state of the environment in its creation or deletion lifecycle.</p>
     */
    inline const EnvironmentLifecycle& GetLifecycle() const{ return m_lifecycle; }

    /**
     * <p>The state of the environment in its creation or deletion lifecycle.</p>
     */
    inline bool LifecycleHasBeenSet() const { return m_lifecycleHasBeenSet; }

    /**
     * <p>The state of the environment in its creation or deletion lifecycle.</p>
     */
    inline void SetLifecycle(const EnvironmentLifecycle& value) { m_lifecycleHasBeenSet = true; m_lifecycle = value; }

    /**
     * <p>The state of the environment in its creation or deletion lifecycle.</p>
     */
    inline void SetLifecycle(EnvironmentLifecycle&& value) { m_lifecycleHasBeenSet = true; m_lifecycle = std::move(value); }

    /**
     * <p>The state of the environment in its creation or deletion lifecycle.</p>
     */
    inline Environment& WithLifecycle(const EnvironmentLifecycle& value) { SetLifecycle(value); return *this;}

    /**
     * <p>The state of the environment in its creation or deletion lifecycle.</p>
     */
    inline Environment& WithLifecycle(EnvironmentLifecycle&& value) { SetLifecycle(std::move(value)); return *this;}


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
    inline bool ManagedCredentialsStatusHasBeenSet() const { return m_managedCredentialsStatusHasBeenSet; }

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
    inline void SetManagedCredentialsStatus(const ManagedCredentialsStatus& value) { m_managedCredentialsStatusHasBeenSet = true; m_managedCredentialsStatus = value; }

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
    inline void SetManagedCredentialsStatus(ManagedCredentialsStatus&& value) { m_managedCredentialsStatusHasBeenSet = true; m_managedCredentialsStatus = std::move(value); }

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
    inline Environment& WithManagedCredentialsStatus(const ManagedCredentialsStatus& value) { SetManagedCredentialsStatus(value); return *this;}

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
    inline Environment& WithManagedCredentialsStatus(ManagedCredentialsStatus&& value) { SetManagedCredentialsStatus(std::move(value)); return *this;}

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
