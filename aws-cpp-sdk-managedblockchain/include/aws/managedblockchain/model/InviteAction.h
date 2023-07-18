﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/managedblockchain/ManagedBlockchain_EXPORTS.h>
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
namespace ManagedBlockchain
{
namespace Model
{

  /**
   * <p>An action to invite a specific AWS account to create a member and join the
   * network. The <code>InviteAction</code> is carried out when a
   * <code>Proposal</code> is <code>APPROVED</code>.</p> <p>Applies only to
   * Hyperledger Fabric.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/managedblockchain-2018-09-24/InviteAction">AWS
   * API Reference</a></p>
   */
  class AWS_MANAGEDBLOCKCHAIN_API InviteAction
  {
  public:
    InviteAction();
    InviteAction(Aws::Utils::Json::JsonView jsonValue);
    InviteAction& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The AWS account ID to invite.</p>
     */
    inline const Aws::String& GetPrincipal() const{ return m_principal; }

    /**
     * <p>The AWS account ID to invite.</p>
     */
    inline bool PrincipalHasBeenSet() const { return m_principalHasBeenSet; }

    /**
     * <p>The AWS account ID to invite.</p>
     */
    inline void SetPrincipal(const Aws::String& value) { m_principalHasBeenSet = true; m_principal = value; }

    /**
     * <p>The AWS account ID to invite.</p>
     */
    inline void SetPrincipal(Aws::String&& value) { m_principalHasBeenSet = true; m_principal = std::move(value); }

    /**
     * <p>The AWS account ID to invite.</p>
     */
    inline void SetPrincipal(const char* value) { m_principalHasBeenSet = true; m_principal.assign(value); }

    /**
     * <p>The AWS account ID to invite.</p>
     */
    inline InviteAction& WithPrincipal(const Aws::String& value) { SetPrincipal(value); return *this;}

    /**
     * <p>The AWS account ID to invite.</p>
     */
    inline InviteAction& WithPrincipal(Aws::String&& value) { SetPrincipal(std::move(value)); return *this;}

    /**
     * <p>The AWS account ID to invite.</p>
     */
    inline InviteAction& WithPrincipal(const char* value) { SetPrincipal(value); return *this;}

  private:

    Aws::String m_principal;
    bool m_principalHasBeenSet;
  };

} // namespace Model
} // namespace ManagedBlockchain
} // namespace Aws
