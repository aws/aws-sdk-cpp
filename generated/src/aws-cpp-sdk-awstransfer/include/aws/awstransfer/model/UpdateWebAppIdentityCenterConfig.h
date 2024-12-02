/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/awstransfer/Transfer_EXPORTS.h>
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
namespace Transfer
{
namespace Model
{

  /**
   * <p>A structure that describes the values to use for the IAM Identity Center
   * settings when you update a web app.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/transfer-2018-11-05/UpdateWebAppIdentityCenterConfig">AWS
   * API Reference</a></p>
   */
  class UpdateWebAppIdentityCenterConfig
  {
  public:
    AWS_TRANSFER_API UpdateWebAppIdentityCenterConfig();
    AWS_TRANSFER_API UpdateWebAppIdentityCenterConfig(Aws::Utils::Json::JsonView jsonValue);
    AWS_TRANSFER_API UpdateWebAppIdentityCenterConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_TRANSFER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The IAM role used to access IAM Identity Center.</p>
     */
    inline const Aws::String& GetRole() const{ return m_role; }
    inline bool RoleHasBeenSet() const { return m_roleHasBeenSet; }
    inline void SetRole(const Aws::String& value) { m_roleHasBeenSet = true; m_role = value; }
    inline void SetRole(Aws::String&& value) { m_roleHasBeenSet = true; m_role = std::move(value); }
    inline void SetRole(const char* value) { m_roleHasBeenSet = true; m_role.assign(value); }
    inline UpdateWebAppIdentityCenterConfig& WithRole(const Aws::String& value) { SetRole(value); return *this;}
    inline UpdateWebAppIdentityCenterConfig& WithRole(Aws::String&& value) { SetRole(std::move(value)); return *this;}
    inline UpdateWebAppIdentityCenterConfig& WithRole(const char* value) { SetRole(value); return *this;}
    ///@}
  private:

    Aws::String m_role;
    bool m_roleHasBeenSet = false;
  };

} // namespace Model
} // namespace Transfer
} // namespace Aws
