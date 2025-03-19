/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloud9/Cloud9_EXPORTS.h>
#include <aws/cloud9/Cloud9Request.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/cloud9/model/ManagedCredentialsAction.h>
#include <utility>

namespace Aws
{
namespace Cloud9
{
namespace Model
{

  /**
   */
  class UpdateEnvironmentRequest : public Cloud9Request
  {
  public:
    AWS_CLOUD9_API UpdateEnvironmentRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateEnvironment"; }

    AWS_CLOUD9_API Aws::String SerializePayload() const override;

    AWS_CLOUD9_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The ID of the environment to change settings.</p>
     */
    inline const Aws::String& GetEnvironmentId() const { return m_environmentId; }
    inline bool EnvironmentIdHasBeenSet() const { return m_environmentIdHasBeenSet; }
    template<typename EnvironmentIdT = Aws::String>
    void SetEnvironmentId(EnvironmentIdT&& value) { m_environmentIdHasBeenSet = true; m_environmentId = std::forward<EnvironmentIdT>(value); }
    template<typename EnvironmentIdT = Aws::String>
    UpdateEnvironmentRequest& WithEnvironmentId(EnvironmentIdT&& value) { SetEnvironmentId(std::forward<EnvironmentIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A replacement name for the environment.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    UpdateEnvironmentRequest& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Any new or replacement description for the environment.</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    UpdateEnvironmentRequest& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Allows the environment owner to turn on or turn off the Amazon Web Services
     * managed temporary credentials for an Cloud9 environment by using one of the
     * following values:</p> <ul> <li> <p> <code>ENABLE</code> </p> </li> <li> <p>
     * <code>DISABLE</code> </p> </li> </ul>  <p>Only the environment owner can
     * change the status of managed temporary credentials. An
     * <code>AccessDeniedException</code> is thrown if an attempt to turn on or turn
     * off managed temporary credentials is made by an account that's not the
     * environment owner.</p> 
     */
    inline ManagedCredentialsAction GetManagedCredentialsAction() const { return m_managedCredentialsAction; }
    inline bool ManagedCredentialsActionHasBeenSet() const { return m_managedCredentialsActionHasBeenSet; }
    inline void SetManagedCredentialsAction(ManagedCredentialsAction value) { m_managedCredentialsActionHasBeenSet = true; m_managedCredentialsAction = value; }
    inline UpdateEnvironmentRequest& WithManagedCredentialsAction(ManagedCredentialsAction value) { SetManagedCredentialsAction(value); return *this;}
    ///@}
  private:

    Aws::String m_environmentId;
    bool m_environmentIdHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    ManagedCredentialsAction m_managedCredentialsAction{ManagedCredentialsAction::NOT_SET};
    bool m_managedCredentialsActionHasBeenSet = false;
  };

} // namespace Model
} // namespace Cloud9
} // namespace Aws
