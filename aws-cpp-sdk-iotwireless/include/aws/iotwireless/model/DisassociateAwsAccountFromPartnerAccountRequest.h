/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotwireless/IoTWireless_EXPORTS.h>
#include <aws/iotwireless/IoTWirelessRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/iotwireless/model/PartnerType.h>
#include <utility>

namespace Aws
{
namespace Http
{
    class URI;
} //namespace Http
namespace IoTWireless
{
namespace Model
{

  /**
   */
  class DisassociateAwsAccountFromPartnerAccountRequest : public IoTWirelessRequest
  {
  public:
    AWS_IOTWIRELESS_API DisassociateAwsAccountFromPartnerAccountRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DisassociateAwsAccountFromPartnerAccount"; }

    AWS_IOTWIRELESS_API Aws::String SerializePayload() const override;

    AWS_IOTWIRELESS_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    /**
     * <p>The partner account ID to disassociate from the AWS account.</p>
     */
    inline const Aws::String& GetPartnerAccountId() const{ return m_partnerAccountId; }

    /**
     * <p>The partner account ID to disassociate from the AWS account.</p>
     */
    inline bool PartnerAccountIdHasBeenSet() const { return m_partnerAccountIdHasBeenSet; }

    /**
     * <p>The partner account ID to disassociate from the AWS account.</p>
     */
    inline void SetPartnerAccountId(const Aws::String& value) { m_partnerAccountIdHasBeenSet = true; m_partnerAccountId = value; }

    /**
     * <p>The partner account ID to disassociate from the AWS account.</p>
     */
    inline void SetPartnerAccountId(Aws::String&& value) { m_partnerAccountIdHasBeenSet = true; m_partnerAccountId = std::move(value); }

    /**
     * <p>The partner account ID to disassociate from the AWS account.</p>
     */
    inline void SetPartnerAccountId(const char* value) { m_partnerAccountIdHasBeenSet = true; m_partnerAccountId.assign(value); }

    /**
     * <p>The partner account ID to disassociate from the AWS account.</p>
     */
    inline DisassociateAwsAccountFromPartnerAccountRequest& WithPartnerAccountId(const Aws::String& value) { SetPartnerAccountId(value); return *this;}

    /**
     * <p>The partner account ID to disassociate from the AWS account.</p>
     */
    inline DisassociateAwsAccountFromPartnerAccountRequest& WithPartnerAccountId(Aws::String&& value) { SetPartnerAccountId(std::move(value)); return *this;}

    /**
     * <p>The partner account ID to disassociate from the AWS account.</p>
     */
    inline DisassociateAwsAccountFromPartnerAccountRequest& WithPartnerAccountId(const char* value) { SetPartnerAccountId(value); return *this;}


    /**
     * <p>The partner type.</p>
     */
    inline const PartnerType& GetPartnerType() const{ return m_partnerType; }

    /**
     * <p>The partner type.</p>
     */
    inline bool PartnerTypeHasBeenSet() const { return m_partnerTypeHasBeenSet; }

    /**
     * <p>The partner type.</p>
     */
    inline void SetPartnerType(const PartnerType& value) { m_partnerTypeHasBeenSet = true; m_partnerType = value; }

    /**
     * <p>The partner type.</p>
     */
    inline void SetPartnerType(PartnerType&& value) { m_partnerTypeHasBeenSet = true; m_partnerType = std::move(value); }

    /**
     * <p>The partner type.</p>
     */
    inline DisassociateAwsAccountFromPartnerAccountRequest& WithPartnerType(const PartnerType& value) { SetPartnerType(value); return *this;}

    /**
     * <p>The partner type.</p>
     */
    inline DisassociateAwsAccountFromPartnerAccountRequest& WithPartnerType(PartnerType&& value) { SetPartnerType(std::move(value)); return *this;}

  private:

    Aws::String m_partnerAccountId;
    bool m_partnerAccountIdHasBeenSet = false;

    PartnerType m_partnerType;
    bool m_partnerTypeHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTWireless
} // namespace Aws
