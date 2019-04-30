/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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
  class AWS_DIRECTCONNECT_API AssociatedGateway
  {
  public:
    AssociatedGateway();
    AssociatedGateway(Aws::Utils::Json::JsonView jsonValue);
    AssociatedGateway& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The ID of the associated gateway.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }

    /**
     * <p>The ID of the associated gateway.</p>
     */
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }

    /**
     * <p>The ID of the associated gateway.</p>
     */
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }

    /**
     * <p>The ID of the associated gateway.</p>
     */
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }

    /**
     * <p>The ID of the associated gateway.</p>
     */
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }

    /**
     * <p>The ID of the associated gateway.</p>
     */
    inline AssociatedGateway& WithId(const Aws::String& value) { SetId(value); return *this;}

    /**
     * <p>The ID of the associated gateway.</p>
     */
    inline AssociatedGateway& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}

    /**
     * <p>The ID of the associated gateway.</p>
     */
    inline AssociatedGateway& WithId(const char* value) { SetId(value); return *this;}


    /**
     * <p>The type of associated gateway.</p>
     */
    inline const GatewayType& GetType() const{ return m_type; }

    /**
     * <p>The type of associated gateway.</p>
     */
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }

    /**
     * <p>The type of associated gateway.</p>
     */
    inline void SetType(const GatewayType& value) { m_typeHasBeenSet = true; m_type = value; }

    /**
     * <p>The type of associated gateway.</p>
     */
    inline void SetType(GatewayType&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }

    /**
     * <p>The type of associated gateway.</p>
     */
    inline AssociatedGateway& WithType(const GatewayType& value) { SetType(value); return *this;}

    /**
     * <p>The type of associated gateway.</p>
     */
    inline AssociatedGateway& WithType(GatewayType&& value) { SetType(std::move(value)); return *this;}


    /**
     * <p>The ID of the AWS account that owns the associated virtual private gateway or
     * transit gateway.</p>
     */
    inline const Aws::String& GetOwnerAccount() const{ return m_ownerAccount; }

    /**
     * <p>The ID of the AWS account that owns the associated virtual private gateway or
     * transit gateway.</p>
     */
    inline bool OwnerAccountHasBeenSet() const { return m_ownerAccountHasBeenSet; }

    /**
     * <p>The ID of the AWS account that owns the associated virtual private gateway or
     * transit gateway.</p>
     */
    inline void SetOwnerAccount(const Aws::String& value) { m_ownerAccountHasBeenSet = true; m_ownerAccount = value; }

    /**
     * <p>The ID of the AWS account that owns the associated virtual private gateway or
     * transit gateway.</p>
     */
    inline void SetOwnerAccount(Aws::String&& value) { m_ownerAccountHasBeenSet = true; m_ownerAccount = std::move(value); }

    /**
     * <p>The ID of the AWS account that owns the associated virtual private gateway or
     * transit gateway.</p>
     */
    inline void SetOwnerAccount(const char* value) { m_ownerAccountHasBeenSet = true; m_ownerAccount.assign(value); }

    /**
     * <p>The ID of the AWS account that owns the associated virtual private gateway or
     * transit gateway.</p>
     */
    inline AssociatedGateway& WithOwnerAccount(const Aws::String& value) { SetOwnerAccount(value); return *this;}

    /**
     * <p>The ID of the AWS account that owns the associated virtual private gateway or
     * transit gateway.</p>
     */
    inline AssociatedGateway& WithOwnerAccount(Aws::String&& value) { SetOwnerAccount(std::move(value)); return *this;}

    /**
     * <p>The ID of the AWS account that owns the associated virtual private gateway or
     * transit gateway.</p>
     */
    inline AssociatedGateway& WithOwnerAccount(const char* value) { SetOwnerAccount(value); return *this;}


    /**
     * <p>The Region where the associated gateway is located.</p>
     */
    inline const Aws::String& GetRegion() const{ return m_region; }

    /**
     * <p>The Region where the associated gateway is located.</p>
     */
    inline bool RegionHasBeenSet() const { return m_regionHasBeenSet; }

    /**
     * <p>The Region where the associated gateway is located.</p>
     */
    inline void SetRegion(const Aws::String& value) { m_regionHasBeenSet = true; m_region = value; }

    /**
     * <p>The Region where the associated gateway is located.</p>
     */
    inline void SetRegion(Aws::String&& value) { m_regionHasBeenSet = true; m_region = std::move(value); }

    /**
     * <p>The Region where the associated gateway is located.</p>
     */
    inline void SetRegion(const char* value) { m_regionHasBeenSet = true; m_region.assign(value); }

    /**
     * <p>The Region where the associated gateway is located.</p>
     */
    inline AssociatedGateway& WithRegion(const Aws::String& value) { SetRegion(value); return *this;}

    /**
     * <p>The Region where the associated gateway is located.</p>
     */
    inline AssociatedGateway& WithRegion(Aws::String&& value) { SetRegion(std::move(value)); return *this;}

    /**
     * <p>The Region where the associated gateway is located.</p>
     */
    inline AssociatedGateway& WithRegion(const char* value) { SetRegion(value); return *this;}

  private:

    Aws::String m_id;
    bool m_idHasBeenSet;

    GatewayType m_type;
    bool m_typeHasBeenSet;

    Aws::String m_ownerAccount;
    bool m_ownerAccountHasBeenSet;

    Aws::String m_region;
    bool m_regionHasBeenSet;
  };

} // namespace Model
} // namespace DirectConnect
} // namespace Aws
