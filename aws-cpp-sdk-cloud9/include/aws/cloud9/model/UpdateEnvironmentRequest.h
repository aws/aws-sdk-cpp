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
    AWS_CLOUD9_API UpdateEnvironmentRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateEnvironment"; }

    AWS_CLOUD9_API Aws::String SerializePayload() const override;

    AWS_CLOUD9_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The ID of the environment to change settings.</p>
     */
    inline const Aws::String& GetEnvironmentId() const{ return m_environmentId; }

    /**
     * <p>The ID of the environment to change settings.</p>
     */
    inline bool EnvironmentIdHasBeenSet() const { return m_environmentIdHasBeenSet; }

    /**
     * <p>The ID of the environment to change settings.</p>
     */
    inline void SetEnvironmentId(const Aws::String& value) { m_environmentIdHasBeenSet = true; m_environmentId = value; }

    /**
     * <p>The ID of the environment to change settings.</p>
     */
    inline void SetEnvironmentId(Aws::String&& value) { m_environmentIdHasBeenSet = true; m_environmentId = std::move(value); }

    /**
     * <p>The ID of the environment to change settings.</p>
     */
    inline void SetEnvironmentId(const char* value) { m_environmentIdHasBeenSet = true; m_environmentId.assign(value); }

    /**
     * <p>The ID of the environment to change settings.</p>
     */
    inline UpdateEnvironmentRequest& WithEnvironmentId(const Aws::String& value) { SetEnvironmentId(value); return *this;}

    /**
     * <p>The ID of the environment to change settings.</p>
     */
    inline UpdateEnvironmentRequest& WithEnvironmentId(Aws::String&& value) { SetEnvironmentId(std::move(value)); return *this;}

    /**
     * <p>The ID of the environment to change settings.</p>
     */
    inline UpdateEnvironmentRequest& WithEnvironmentId(const char* value) { SetEnvironmentId(value); return *this;}


    /**
     * <p>A replacement name for the environment.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>A replacement name for the environment.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>A replacement name for the environment.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>A replacement name for the environment.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>A replacement name for the environment.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>A replacement name for the environment.</p>
     */
    inline UpdateEnvironmentRequest& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>A replacement name for the environment.</p>
     */
    inline UpdateEnvironmentRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>A replacement name for the environment.</p>
     */
    inline UpdateEnvironmentRequest& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>Any new or replacement description for the environment.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>Any new or replacement description for the environment.</p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>Any new or replacement description for the environment.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>Any new or replacement description for the environment.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>Any new or replacement description for the environment.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>Any new or replacement description for the environment.</p>
     */
    inline UpdateEnvironmentRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>Any new or replacement description for the environment.</p>
     */
    inline UpdateEnvironmentRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>Any new or replacement description for the environment.</p>
     */
    inline UpdateEnvironmentRequest& WithDescription(const char* value) { SetDescription(value); return *this;}


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
    inline const ManagedCredentialsAction& GetManagedCredentialsAction() const{ return m_managedCredentialsAction; }

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
    inline bool ManagedCredentialsActionHasBeenSet() const { return m_managedCredentialsActionHasBeenSet; }

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
    inline void SetManagedCredentialsAction(const ManagedCredentialsAction& value) { m_managedCredentialsActionHasBeenSet = true; m_managedCredentialsAction = value; }

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
    inline void SetManagedCredentialsAction(ManagedCredentialsAction&& value) { m_managedCredentialsActionHasBeenSet = true; m_managedCredentialsAction = std::move(value); }

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
    inline UpdateEnvironmentRequest& WithManagedCredentialsAction(const ManagedCredentialsAction& value) { SetManagedCredentialsAction(value); return *this;}

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
    inline UpdateEnvironmentRequest& WithManagedCredentialsAction(ManagedCredentialsAction&& value) { SetManagedCredentialsAction(std::move(value)); return *this;}

  private:

    Aws::String m_environmentId;
    bool m_environmentIdHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    ManagedCredentialsAction m_managedCredentialsAction;
    bool m_managedCredentialsActionHasBeenSet = false;
  };

} // namespace Model
} // namespace Cloud9
} // namespace Aws
