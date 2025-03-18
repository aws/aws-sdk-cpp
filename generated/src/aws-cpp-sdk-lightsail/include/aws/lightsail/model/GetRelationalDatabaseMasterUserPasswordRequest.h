/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lightsail/Lightsail_EXPORTS.h>
#include <aws/lightsail/LightsailRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/lightsail/model/RelationalDatabasePasswordVersion.h>
#include <utility>

namespace Aws
{
namespace Lightsail
{
namespace Model
{

  /**
   */
  class GetRelationalDatabaseMasterUserPasswordRequest : public LightsailRequest
  {
  public:
    AWS_LIGHTSAIL_API GetRelationalDatabaseMasterUserPasswordRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetRelationalDatabaseMasterUserPassword"; }

    AWS_LIGHTSAIL_API Aws::String SerializePayload() const override;

    AWS_LIGHTSAIL_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The name of your database for which to get the master user password.</p>
     */
    inline const Aws::String& GetRelationalDatabaseName() const { return m_relationalDatabaseName; }
    inline bool RelationalDatabaseNameHasBeenSet() const { return m_relationalDatabaseNameHasBeenSet; }
    template<typename RelationalDatabaseNameT = Aws::String>
    void SetRelationalDatabaseName(RelationalDatabaseNameT&& value) { m_relationalDatabaseNameHasBeenSet = true; m_relationalDatabaseName = std::forward<RelationalDatabaseNameT>(value); }
    template<typename RelationalDatabaseNameT = Aws::String>
    GetRelationalDatabaseMasterUserPasswordRequest& WithRelationalDatabaseName(RelationalDatabaseNameT&& value) { SetRelationalDatabaseName(std::forward<RelationalDatabaseNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The password version to return.</p> <p>Specifying <code>CURRENT</code> or
     * <code>PREVIOUS</code> returns the current or previous passwords respectively.
     * Specifying <code>PENDING</code> returns the newest version of the password that
     * will rotate to <code>CURRENT</code>. After the <code>PENDING</code> password
     * rotates to <code>CURRENT</code>, the <code>PENDING</code> password is no longer
     * available.</p> <p>Default: <code>CURRENT</code> </p>
     */
    inline RelationalDatabasePasswordVersion GetPasswordVersion() const { return m_passwordVersion; }
    inline bool PasswordVersionHasBeenSet() const { return m_passwordVersionHasBeenSet; }
    inline void SetPasswordVersion(RelationalDatabasePasswordVersion value) { m_passwordVersionHasBeenSet = true; m_passwordVersion = value; }
    inline GetRelationalDatabaseMasterUserPasswordRequest& WithPasswordVersion(RelationalDatabasePasswordVersion value) { SetPasswordVersion(value); return *this;}
    ///@}
  private:

    Aws::String m_relationalDatabaseName;
    bool m_relationalDatabaseNameHasBeenSet = false;

    RelationalDatabasePasswordVersion m_passwordVersion{RelationalDatabasePasswordVersion::NOT_SET};
    bool m_passwordVersionHasBeenSet = false;
  };

} // namespace Model
} // namespace Lightsail
} // namespace Aws
