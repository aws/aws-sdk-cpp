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
  class GetKinesisStreamRequest : public FirehoseRequest
  {
  public:
    AWS_FIREHOSE_API GetKinesisStreamRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetKinesisStream"; }

    AWS_FIREHOSE_API Aws::String SerializePayload() const override;

    AWS_FIREHOSE_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    
    inline const Aws::String& GetDeliveryStreamARN() const{ return m_deliveryStreamARN; }

    
    inline bool DeliveryStreamARNHasBeenSet() const { return m_deliveryStreamARNHasBeenSet; }

    
    inline void SetDeliveryStreamARN(const Aws::String& value) { m_deliveryStreamARNHasBeenSet = true; m_deliveryStreamARN = value; }

    
    inline void SetDeliveryStreamARN(Aws::String&& value) { m_deliveryStreamARNHasBeenSet = true; m_deliveryStreamARN = std::move(value); }

    
    inline void SetDeliveryStreamARN(const char* value) { m_deliveryStreamARNHasBeenSet = true; m_deliveryStreamARN.assign(value); }

    
    inline GetKinesisStreamRequest& WithDeliveryStreamARN(const Aws::String& value) { SetDeliveryStreamARN(value); return *this;}

    
    inline GetKinesisStreamRequest& WithDeliveryStreamARN(Aws::String&& value) { SetDeliveryStreamARN(std::move(value)); return *this;}

    
    inline GetKinesisStreamRequest& WithDeliveryStreamARN(const char* value) { SetDeliveryStreamARN(value); return *this;}

  private:

    Aws::String m_deliveryStreamARN;
    bool m_deliveryStreamARNHasBeenSet = false;
  };

} // namespace Model
} // namespace Firehose
} // namespace Aws
