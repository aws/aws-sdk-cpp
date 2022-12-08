/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/kms/KMS_EXPORTS.h>
#include <aws/kms/KMSRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace KMS
{
namespace Model
{

  /**
   */
  class DeleteAliasRequest : public KMSRequest
  {
  public:
    AWS_KMS_API DeleteAliasRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DeleteAlias"; }

    AWS_KMS_API Aws::String SerializePayload() const override;

    AWS_KMS_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The alias to be deleted. The alias name must begin with <code>alias/</code>
     * followed by the alias name, such as <code>alias/ExampleAlias</code>.</p>
     */
    inline const Aws::String& GetAliasName() const{ return m_aliasName; }

    /**
     * <p>The alias to be deleted. The alias name must begin with <code>alias/</code>
     * followed by the alias name, such as <code>alias/ExampleAlias</code>.</p>
     */
    inline bool AliasNameHasBeenSet() const { return m_aliasNameHasBeenSet; }

    /**
     * <p>The alias to be deleted. The alias name must begin with <code>alias/</code>
     * followed by the alias name, such as <code>alias/ExampleAlias</code>.</p>
     */
    inline void SetAliasName(const Aws::String& value) { m_aliasNameHasBeenSet = true; m_aliasName = value; }

    /**
     * <p>The alias to be deleted. The alias name must begin with <code>alias/</code>
     * followed by the alias name, such as <code>alias/ExampleAlias</code>.</p>
     */
    inline void SetAliasName(Aws::String&& value) { m_aliasNameHasBeenSet = true; m_aliasName = std::move(value); }

    /**
     * <p>The alias to be deleted. The alias name must begin with <code>alias/</code>
     * followed by the alias name, such as <code>alias/ExampleAlias</code>.</p>
     */
    inline void SetAliasName(const char* value) { m_aliasNameHasBeenSet = true; m_aliasName.assign(value); }

    /**
     * <p>The alias to be deleted. The alias name must begin with <code>alias/</code>
     * followed by the alias name, such as <code>alias/ExampleAlias</code>.</p>
     */
    inline DeleteAliasRequest& WithAliasName(const Aws::String& value) { SetAliasName(value); return *this;}

    /**
     * <p>The alias to be deleted. The alias name must begin with <code>alias/</code>
     * followed by the alias name, such as <code>alias/ExampleAlias</code>.</p>
     */
    inline DeleteAliasRequest& WithAliasName(Aws::String&& value) { SetAliasName(std::move(value)); return *this;}

    /**
     * <p>The alias to be deleted. The alias name must begin with <code>alias/</code>
     * followed by the alias name, such as <code>alias/ExampleAlias</code>.</p>
     */
    inline DeleteAliasRequest& WithAliasName(const char* value) { SetAliasName(value); return *this;}

  private:

    Aws::String m_aliasName;
    bool m_aliasNameHasBeenSet = false;
  };

} // namespace Model
} // namespace KMS
} // namespace Aws
