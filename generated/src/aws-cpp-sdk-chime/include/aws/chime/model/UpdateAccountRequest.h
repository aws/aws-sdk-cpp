/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/chime/Chime_EXPORTS.h>
#include <aws/chime/ChimeRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/chime/model/License.h>
#include <utility>

namespace Aws
{
namespace Chime
{
namespace Model
{

  /**
   */
  class UpdateAccountRequest : public ChimeRequest
  {
  public:
    AWS_CHIME_API UpdateAccountRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateAccount"; }

    AWS_CHIME_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The Amazon Chime account ID.</p>
     */
    inline const Aws::String& GetAccountId() const{ return m_accountId; }
    inline bool AccountIdHasBeenSet() const { return m_accountIdHasBeenSet; }
    inline void SetAccountId(const Aws::String& value) { m_accountIdHasBeenSet = true; m_accountId = value; }
    inline void SetAccountId(Aws::String&& value) { m_accountIdHasBeenSet = true; m_accountId = std::move(value); }
    inline void SetAccountId(const char* value) { m_accountIdHasBeenSet = true; m_accountId.assign(value); }
    inline UpdateAccountRequest& WithAccountId(const Aws::String& value) { SetAccountId(value); return *this;}
    inline UpdateAccountRequest& WithAccountId(Aws::String&& value) { SetAccountId(std::move(value)); return *this;}
    inline UpdateAccountRequest& WithAccountId(const char* value) { SetAccountId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The new name for the specified Amazon Chime account.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline UpdateAccountRequest& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline UpdateAccountRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline UpdateAccountRequest& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The default license applied when you add users to an Amazon Chime
     * account.</p>
     */
    inline const License& GetDefaultLicense() const{ return m_defaultLicense; }
    inline bool DefaultLicenseHasBeenSet() const { return m_defaultLicenseHasBeenSet; }
    inline void SetDefaultLicense(const License& value) { m_defaultLicenseHasBeenSet = true; m_defaultLicense = value; }
    inline void SetDefaultLicense(License&& value) { m_defaultLicenseHasBeenSet = true; m_defaultLicense = std::move(value); }
    inline UpdateAccountRequest& WithDefaultLicense(const License& value) { SetDefaultLicense(value); return *this;}
    inline UpdateAccountRequest& WithDefaultLicense(License&& value) { SetDefaultLicense(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_accountId;
    bool m_accountIdHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    License m_defaultLicense;
    bool m_defaultLicenseHasBeenSet = false;
  };

} // namespace Model
} // namespace Chime
} // namespace Aws
