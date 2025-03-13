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
    AWS_CLOUD9_API Environment() = default;
    AWS_CLOUD9_API Environment(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLOUD9_API Environment& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLOUD9_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The ID of the environment.</p>
     */
    inline const Aws::String& GetId() const { return m_id; }
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
    template<typename IdT = Aws::String>
    void SetId(IdT&& value) { m_idHasBeenSet = true; m_id = std::forward<IdT>(value); }
    template<typename IdT = Aws::String>
    Environment& WithId(IdT&& value) { SetId(std::forward<IdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the environment.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    Environment& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The description for the environment.</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    Environment& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of environment. Valid values include the following:</p> <ul> <li>
     * <p> <code>ec2</code>: An Amazon Elastic Compute Cloud (Amazon EC2) instance
     * connects to the environment.</p> </li> <li> <p> <code>ssh</code>: Your own
     * server connects to the environment.</p> </li> </ul>
     */
    inline EnvironmentType GetType() const { return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(EnvironmentType value) { m_typeHasBeenSet = true; m_type = value; }
    inline Environment& WithType(EnvironmentType value) { SetType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The connection type used for connecting to an Amazon EC2 environment.
     * <code>CONNECT_SSH</code> is selected by default.</p>
     */
    inline ConnectionType GetConnectionType() const { return m_connectionType; }
    inline bool ConnectionTypeHasBeenSet() const { return m_connectionTypeHasBeenSet; }
    inline void SetConnectionType(ConnectionType value) { m_connectionTypeHasBeenSet = true; m_connectionType = value; }
    inline Environment& WithConnectionType(ConnectionType value) { SetConnectionType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the environment.</p>
     */
    inline const Aws::String& GetArn() const { return m_arn; }
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }
    template<typename ArnT = Aws::String>
    void SetArn(ArnT&& value) { m_arnHasBeenSet = true; m_arn = std::forward<ArnT>(value); }
    template<typename ArnT = Aws::String>
    Environment& WithArn(ArnT&& value) { SetArn(std::forward<ArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the environment owner.</p>
     */
    inline const Aws::String& GetOwnerArn() const { return m_ownerArn; }
    inline bool OwnerArnHasBeenSet() const { return m_ownerArnHasBeenSet; }
    template<typename OwnerArnT = Aws::String>
    void SetOwnerArn(OwnerArnT&& value) { m_ownerArnHasBeenSet = true; m_ownerArn = std::forward<OwnerArnT>(value); }
    template<typename OwnerArnT = Aws::String>
    Environment& WithOwnerArn(OwnerArnT&& value) { SetOwnerArn(std::forward<OwnerArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The state of the environment in its creation or deletion lifecycle.</p>
     */
    inline const EnvironmentLifecycle& GetLifecycle() const { return m_lifecycle; }
    inline bool LifecycleHasBeenSet() const { return m_lifecycleHasBeenSet; }
    template<typename LifecycleT = EnvironmentLifecycle>
    void SetLifecycle(LifecycleT&& value) { m_lifecycleHasBeenSet = true; m_lifecycle = std::forward<LifecycleT>(value); }
    template<typename LifecycleT = EnvironmentLifecycle>
    Environment& WithLifecycle(LifecycleT&& value) { SetLifecycle(std::forward<LifecycleT>(value)); return *this;}
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
    inline ManagedCredentialsStatus GetManagedCredentialsStatus() const { return m_managedCredentialsStatus; }
    inline bool ManagedCredentialsStatusHasBeenSet() const { return m_managedCredentialsStatusHasBeenSet; }
    inline void SetManagedCredentialsStatus(ManagedCredentialsStatus value) { m_managedCredentialsStatusHasBeenSet = true; m_managedCredentialsStatus = value; }
    inline Environment& WithManagedCredentialsStatus(ManagedCredentialsStatus value) { SetManagedCredentialsStatus(value); return *this;}
    ///@}
  private:

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    EnvironmentType m_type{EnvironmentType::NOT_SET};
    bool m_typeHasBeenSet = false;

    ConnectionType m_connectionType{ConnectionType::NOT_SET};
    bool m_connectionTypeHasBeenSet = false;

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    Aws::String m_ownerArn;
    bool m_ownerArnHasBeenSet = false;

    EnvironmentLifecycle m_lifecycle;
    bool m_lifecycleHasBeenSet = false;

    ManagedCredentialsStatus m_managedCredentialsStatus{ManagedCredentialsStatus::NOT_SET};
    bool m_managedCredentialsStatusHasBeenSet = false;
  };

} // namespace Model
} // namespace Cloud9
} // namespace Aws
