/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/firehose/Firehose_EXPORTS.h>
#include <aws/firehose/FirehoseRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Firehose
{
namespace Model
{

  /**
   */
  class DeleteDeliveryStreamRequest : public FirehoseRequest
  {
  public:
    AWS_FIREHOSE_API DeleteDeliveryStreamRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DeleteDeliveryStream"; }

    AWS_FIREHOSE_API Aws::String SerializePayload() const override;

    AWS_FIREHOSE_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The name of the Firehose stream.</p>
     */
    inline const Aws::String& GetDeliveryStreamName() const { return m_deliveryStreamName; }
    inline bool DeliveryStreamNameHasBeenSet() const { return m_deliveryStreamNameHasBeenSet; }
    template<typename DeliveryStreamNameT = Aws::String>
    void SetDeliveryStreamName(DeliveryStreamNameT&& value) { m_deliveryStreamNameHasBeenSet = true; m_deliveryStreamName = std::forward<DeliveryStreamNameT>(value); }
    template<typename DeliveryStreamNameT = Aws::String>
    DeleteDeliveryStreamRequest& WithDeliveryStreamName(DeliveryStreamNameT&& value) { SetDeliveryStreamName(std::forward<DeliveryStreamNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Set this to true if you want to delete the Firehose stream even if Firehose
     * is unable to retire the grant for the CMK. Firehose might be unable to retire
     * the grant due to a customer error, such as when the CMK or the grant are in an
     * invalid state. If you force deletion, you can then use the <a
     * href="https://docs.aws.amazon.com/kms/latest/APIReference/API_RevokeGrant.html">RevokeGrant</a>
     * operation to revoke the grant you gave to Firehose. If a failure to retire the
     * grant happens due to an Amazon Web Services KMS issue, Firehose keeps retrying
     * the delete operation.</p> <p>The default value is false.</p>
     */
    inline bool GetAllowForceDelete() const { return m_allowForceDelete; }
    inline bool AllowForceDeleteHasBeenSet() const { return m_allowForceDeleteHasBeenSet; }
    inline void SetAllowForceDelete(bool value) { m_allowForceDeleteHasBeenSet = true; m_allowForceDelete = value; }
    inline DeleteDeliveryStreamRequest& WithAllowForceDelete(bool value) { SetAllowForceDelete(value); return *this;}
    ///@}
  private:

    Aws::String m_deliveryStreamName;
    bool m_deliveryStreamNameHasBeenSet = false;

    bool m_allowForceDelete{false};
    bool m_allowForceDeleteHasBeenSet = false;
  };

} // namespace Model
} // namespace Firehose
} // namespace Aws
