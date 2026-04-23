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
#include <aws/mediaconnect/MediaConnect_EXPORTS.h>
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
namespace MediaConnect
{
namespace Model
{

  /**
   * An entitlement that has been granted to you from other AWS accounts.<p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconnect-2018-11-14/ListedEntitlement">AWS
   * API Reference</a></p>
   */
  class AWS_MEDIACONNECT_API ListedEntitlement
  {
  public:
    ListedEntitlement();
    ListedEntitlement(Aws::Utils::Json::JsonView jsonValue);
    ListedEntitlement& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * The ARN of the entitlement.
     */
    inline const Aws::String& GetEntitlementArn() const{ return m_entitlementArn; }

    /**
     * The ARN of the entitlement.
     */
    inline bool EntitlementArnHasBeenSet() const { return m_entitlementArnHasBeenSet; }

    /**
     * The ARN of the entitlement.
     */
    inline void SetEntitlementArn(const Aws::String& value) { m_entitlementArnHasBeenSet = true; m_entitlementArn = value; }

    /**
     * The ARN of the entitlement.
     */
    inline void SetEntitlementArn(Aws::String&& value) { m_entitlementArnHasBeenSet = true; m_entitlementArn = std::move(value); }

    /**
     * The ARN of the entitlement.
     */
    inline void SetEntitlementArn(const char* value) { m_entitlementArnHasBeenSet = true; m_entitlementArn.assign(value); }

    /**
     * The ARN of the entitlement.
     */
    inline ListedEntitlement& WithEntitlementArn(const Aws::String& value) { SetEntitlementArn(value); return *this;}

    /**
     * The ARN of the entitlement.
     */
    inline ListedEntitlement& WithEntitlementArn(Aws::String&& value) { SetEntitlementArn(std::move(value)); return *this;}

    /**
     * The ARN of the entitlement.
     */
    inline ListedEntitlement& WithEntitlementArn(const char* value) { SetEntitlementArn(value); return *this;}


    /**
     * The name of the entitlement.
     */
    inline const Aws::String& GetEntitlementName() const{ return m_entitlementName; }

    /**
     * The name of the entitlement.
     */
    inline bool EntitlementNameHasBeenSet() const { return m_entitlementNameHasBeenSet; }

    /**
     * The name of the entitlement.
     */
    inline void SetEntitlementName(const Aws::String& value) { m_entitlementNameHasBeenSet = true; m_entitlementName = value; }

    /**
     * The name of the entitlement.
     */
    inline void SetEntitlementName(Aws::String&& value) { m_entitlementNameHasBeenSet = true; m_entitlementName = std::move(value); }

    /**
     * The name of the entitlement.
     */
    inline void SetEntitlementName(const char* value) { m_entitlementNameHasBeenSet = true; m_entitlementName.assign(value); }

    /**
     * The name of the entitlement.
     */
    inline ListedEntitlement& WithEntitlementName(const Aws::String& value) { SetEntitlementName(value); return *this;}

    /**
     * The name of the entitlement.
     */
    inline ListedEntitlement& WithEntitlementName(Aws::String&& value) { SetEntitlementName(std::move(value)); return *this;}

    /**
     * The name of the entitlement.
     */
    inline ListedEntitlement& WithEntitlementName(const char* value) { SetEntitlementName(value); return *this;}

  private:

    Aws::String m_entitlementArn;
    bool m_entitlementArnHasBeenSet;

    Aws::String m_entitlementName;
    bool m_entitlementNameHasBeenSet;
  };

} // namespace Model
} // namespace MediaConnect
} // namespace Aws
