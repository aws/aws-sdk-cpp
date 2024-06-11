/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/directconnect/DirectConnect_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/directconnect/model/GatewayType.h>
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
namespace DirectConnect
{
namespace Model
{

  /**
   * <p>Information about the associated gateway.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/directconnect-2012-10-25/AssociatedGateway">AWS
   * API Reference</a></p>
   */
  class AssociatedGateway
  {
  public:
    AWS_DIRECTCONNECT_API AssociatedGateway();
    AWS_DIRECTCONNECT_API AssociatedGateway(Aws::Utils::Json::JsonView jsonValue);
    AWS_DIRECTCONNECT_API AssociatedGateway& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DIRECTCONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The ID of the associated gateway.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }
    inline AssociatedGateway& WithId(const Aws::String& value) { SetId(value); return *this;}
    inline AssociatedGateway& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}
    inline AssociatedGateway& WithId(const char* value) { SetId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of associated gateway.</p>
     */
    inline const GatewayType& GetType() const{ return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(const GatewayType& value) { m_typeHasBeenSet = true; m_type = value; }
    inline void SetType(GatewayType&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }
    inline AssociatedGateway& WithType(const GatewayType& value) { SetType(value); return *this;}
    inline AssociatedGateway& WithType(GatewayType&& value) { SetType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the Amazon Web Services account that owns the associated virtual
     * private gateway or transit gateway.</p>
     */
    inline const Aws::String& GetOwnerAccount() const{ return m_ownerAccount; }
    inline bool OwnerAccountHasBeenSet() const { return m_ownerAccountHasBeenSet; }
    inline void SetOwnerAccount(const Aws::String& value) { m_ownerAccountHasBeenSet = true; m_ownerAccount = value; }
    inline void SetOwnerAccount(Aws::String&& value) { m_ownerAccountHasBeenSet = true; m_ownerAccount = std::move(value); }
    inline void SetOwnerAccount(const char* value) { m_ownerAccountHasBeenSet = true; m_ownerAccount.assign(value); }
    inline AssociatedGateway& WithOwnerAccount(const Aws::String& value) { SetOwnerAccount(value); return *this;}
    inline AssociatedGateway& WithOwnerAccount(Aws::String&& value) { SetOwnerAccount(std::move(value)); return *this;}
    inline AssociatedGateway& WithOwnerAccount(const char* value) { SetOwnerAccount(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Region where the associated gateway is located.</p>
     */
    inline const Aws::String& GetRegion() const{ return m_region; }
    inline bool RegionHasBeenSet() const { return m_regionHasBeenSet; }
    inline void SetRegion(const Aws::String& value) { m_regionHasBeenSet = true; m_region = value; }
    inline void SetRegion(Aws::String&& value) { m_regionHasBeenSet = true; m_region = std::move(value); }
    inline void SetRegion(const char* value) { m_regionHasBeenSet = true; m_region.assign(value); }
    inline AssociatedGateway& WithRegion(const Aws::String& value) { SetRegion(value); return *this;}
    inline AssociatedGateway& WithRegion(Aws::String&& value) { SetRegion(std::move(value)); return *this;}
    inline AssociatedGateway& WithRegion(const char* value) { SetRegion(value); return *this;}
    ///@}
  private:

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    GatewayType m_type;
    bool m_typeHasBeenSet = false;

    Aws::String m_ownerAccount;
    bool m_ownerAccountHasBeenSet = false;

    Aws::String m_region;
    bool m_regionHasBeenSet = false;
  };

} // namespace Model
} // namespace DirectConnect
} // namespace Aws
