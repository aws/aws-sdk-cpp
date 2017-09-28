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
  class AWS_FIREHOSE_API GetKinesisStreamRequest : public FirehoseRequest
  {
  public:
    GetKinesisStreamRequest();
    
    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetKinesisStream"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    
    inline const Aws::String& GetDeliveryStreamARN() const{ return m_deliveryStreamARN; }

    
    inline void SetDeliveryStreamARN(const Aws::String& value) { m_deliveryStreamARNHasBeenSet = true; m_deliveryStreamARN = value; }

    
    inline void SetDeliveryStreamARN(Aws::String&& value) { m_deliveryStreamARNHasBeenSet = true; m_deliveryStreamARN = std::move(value); }

    
    inline void SetDeliveryStreamARN(const char* value) { m_deliveryStreamARNHasBeenSet = true; m_deliveryStreamARN.assign(value); }

    
    inline GetKinesisStreamRequest& WithDeliveryStreamARN(const Aws::String& value) { SetDeliveryStreamARN(value); return *this;}

    
    inline GetKinesisStreamRequest& WithDeliveryStreamARN(Aws::String&& value) { SetDeliveryStreamARN(std::move(value)); return *this;}

    
    inline GetKinesisStreamRequest& WithDeliveryStreamARN(const char* value) { SetDeliveryStreamARN(value); return *this;}

  private:

    Aws::String m_deliveryStreamARN;
    bool m_deliveryStreamARNHasBeenSet;
  };

} // namespace Model
} // namespace Firehose
} // namespace Aws
