/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
  class ListedEntitlement
  {
  public:
    AWS_MEDIACONNECT_API ListedEntitlement();
    AWS_MEDIACONNECT_API ListedEntitlement(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIACONNECT_API ListedEntitlement& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIACONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * Percentage from 0-100 of the data transfer cost to be billed to the subscriber.
     */
    inline int GetDataTransferSubscriberFeePercent() const{ return m_dataTransferSubscriberFeePercent; }

    /**
     * Percentage from 0-100 of the data transfer cost to be billed to the subscriber.
     */
    inline bool DataTransferSubscriberFeePercentHasBeenSet() const { return m_dataTransferSubscriberFeePercentHasBeenSet; }

    /**
     * Percentage from 0-100 of the data transfer cost to be billed to the subscriber.
     */
    inline void SetDataTransferSubscriberFeePercent(int value) { m_dataTransferSubscriberFeePercentHasBeenSet = true; m_dataTransferSubscriberFeePercent = value; }

    /**
     * Percentage from 0-100 of the data transfer cost to be billed to the subscriber.
     */
    inline ListedEntitlement& WithDataTransferSubscriberFeePercent(int value) { SetDataTransferSubscriberFeePercent(value); return *this;}


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

    int m_dataTransferSubscriberFeePercent;
    bool m_dataTransferSubscriberFeePercentHasBeenSet = false;

    Aws::String m_entitlementArn;
    bool m_entitlementArnHasBeenSet = false;

    Aws::String m_entitlementName;
    bool m_entitlementNameHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaConnect
} // namespace Aws
