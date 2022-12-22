/**
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
   * <p>Attributes of Hyperledger Fabric for a member in a Managed Blockchain network
   * using the Hyperledger Fabric framework.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/managedblockchain-2018-09-24/MemberFabricAttributes">AWS
   * API Reference</a></p>
   */
  class MemberFabricAttributes
  {
  public:
    AWS_MANAGEDBLOCKCHAIN_API MemberFabricAttributes();
    AWS_MANAGEDBLOCKCHAIN_API MemberFabricAttributes(Aws::Utils::Json::JsonView jsonValue);
    AWS_MANAGEDBLOCKCHAIN_API MemberFabricAttributes& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MANAGEDBLOCKCHAIN_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The user name for the initial administrator user for the member.</p>
     */
    inline const Aws::String& GetAdminUsername() const{ return m_adminUsername; }

    /**
     * <p>The user name for the initial administrator user for the member.</p>
     */
    inline bool AdminUsernameHasBeenSet() const { return m_adminUsernameHasBeenSet; }

    /**
     * <p>The user name for the initial administrator user for the member.</p>
     */
    inline void SetAdminUsername(const Aws::String& value) { m_adminUsernameHasBeenSet = true; m_adminUsername = value; }

    /**
     * <p>The user name for the initial administrator user for the member.</p>
     */
    inline void SetAdminUsername(Aws::String&& value) { m_adminUsernameHasBeenSet = true; m_adminUsername = std::move(value); }

    /**
     * <p>The user name for the initial administrator user for the member.</p>
     */
    inline void SetAdminUsername(const char* value) { m_adminUsernameHasBeenSet = true; m_adminUsername.assign(value); }

    /**
     * <p>The user name for the initial administrator user for the member.</p>
     */
    inline MemberFabricAttributes& WithAdminUsername(const Aws::String& value) { SetAdminUsername(value); return *this;}

    /**
     * <p>The user name for the initial administrator user for the member.</p>
     */
    inline MemberFabricAttributes& WithAdminUsername(Aws::String&& value) { SetAdminUsername(std::move(value)); return *this;}

    /**
     * <p>The user name for the initial administrator user for the member.</p>
     */
    inline MemberFabricAttributes& WithAdminUsername(const char* value) { SetAdminUsername(value); return *this;}


    /**
     * <p>The endpoint used to access the member's certificate authority.</p>
     */
    inline const Aws::String& GetCaEndpoint() const{ return m_caEndpoint; }

    /**
     * <p>The endpoint used to access the member's certificate authority.</p>
     */
    inline bool CaEndpointHasBeenSet() const { return m_caEndpointHasBeenSet; }

    /**
     * <p>The endpoint used to access the member's certificate authority.</p>
     */
    inline void SetCaEndpoint(const Aws::String& value) { m_caEndpointHasBeenSet = true; m_caEndpoint = value; }

    /**
     * <p>The endpoint used to access the member's certificate authority.</p>
     */
    inline void SetCaEndpoint(Aws::String&& value) { m_caEndpointHasBeenSet = true; m_caEndpoint = std::move(value); }

    /**
     * <p>The endpoint used to access the member's certificate authority.</p>
     */
    inline void SetCaEndpoint(const char* value) { m_caEndpointHasBeenSet = true; m_caEndpoint.assign(value); }

    /**
     * <p>The endpoint used to access the member's certificate authority.</p>
     */
    inline MemberFabricAttributes& WithCaEndpoint(const Aws::String& value) { SetCaEndpoint(value); return *this;}

    /**
     * <p>The endpoint used to access the member's certificate authority.</p>
     */
    inline MemberFabricAttributes& WithCaEndpoint(Aws::String&& value) { SetCaEndpoint(std::move(value)); return *this;}

    /**
     * <p>The endpoint used to access the member's certificate authority.</p>
     */
    inline MemberFabricAttributes& WithCaEndpoint(const char* value) { SetCaEndpoint(value); return *this;}

  private:

    Aws::String m_adminUsername;
    bool m_adminUsernameHasBeenSet = false;

    Aws::String m_caEndpoint;
    bool m_caEndpointHasBeenSet = false;
  };

} // namespace Model
} // namespace ManagedBlockchain
} // namespace Aws
