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
   * settings when you create or update a web app.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/transfer-2018-11-05/IdentityCenterConfig">AWS
   * API Reference</a></p>
   */
  class IdentityCenterConfig
  {
  public:
    AWS_TRANSFER_API IdentityCenterConfig();
    AWS_TRANSFER_API IdentityCenterConfig(Aws::Utils::Json::JsonView jsonValue);
    AWS_TRANSFER_API IdentityCenterConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_TRANSFER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) for the IAM Identity Center used for the web
     * app.</p>
     */
    inline const Aws::String& GetInstanceArn() const{ return m_instanceArn; }
    inline bool InstanceArnHasBeenSet() const { return m_instanceArnHasBeenSet; }
    inline void SetInstanceArn(const Aws::String& value) { m_instanceArnHasBeenSet = true; m_instanceArn = value; }
    inline void SetInstanceArn(Aws::String&& value) { m_instanceArnHasBeenSet = true; m_instanceArn = std::move(value); }
    inline void SetInstanceArn(const char* value) { m_instanceArnHasBeenSet = true; m_instanceArn.assign(value); }
    inline IdentityCenterConfig& WithInstanceArn(const Aws::String& value) { SetInstanceArn(value); return *this;}
    inline IdentityCenterConfig& WithInstanceArn(Aws::String&& value) { SetInstanceArn(std::move(value)); return *this;}
    inline IdentityCenterConfig& WithInstanceArn(const char* value) { SetInstanceArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The IAM role in IAM Identity Center used for the web app.</p>
     */
    inline const Aws::String& GetRole() const{ return m_role; }
    inline bool RoleHasBeenSet() const { return m_roleHasBeenSet; }
    inline void SetRole(const Aws::String& value) { m_roleHasBeenSet = true; m_role = value; }
    inline void SetRole(Aws::String&& value) { m_roleHasBeenSet = true; m_role = std::move(value); }
    inline void SetRole(const char* value) { m_roleHasBeenSet = true; m_role.assign(value); }
    inline IdentityCenterConfig& WithRole(const Aws::String& value) { SetRole(value); return *this;}
    inline IdentityCenterConfig& WithRole(Aws::String&& value) { SetRole(std::move(value)); return *this;}
    inline IdentityCenterConfig& WithRole(const char* value) { SetRole(value); return *this;}
    ///@}
  private:

    Aws::String m_instanceArn;
    bool m_instanceArnHasBeenSet = false;

    Aws::String m_role;
    bool m_roleHasBeenSet = false;
  };

} // namespace Model
} // namespace Transfer
} // namespace Aws
