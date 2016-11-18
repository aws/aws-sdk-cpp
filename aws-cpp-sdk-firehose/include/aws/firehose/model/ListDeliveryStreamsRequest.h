/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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

namespace Aws
{
namespace Firehose
{
namespace Model
{

  /**
   * <p>Contains the parameters for <a>ListDeliveryStreams</a>.</p>
   */
  class AWS_FIREHOSE_API ListDeliveryStreamsRequest : public FirehoseRequest
  {
  public:
    ListDeliveryStreamsRequest();
    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

    /**
     * <p>The maximum number of delivery streams to list.</p>
     */
    inline int GetLimit() const{ return m_limit; }

    /**
     * <p>The maximum number of delivery streams to list.</p>
     */
    inline void SetLimit(int value) { m_limitHasBeenSet = true; m_limit = value; }

    /**
     * <p>The maximum number of delivery streams to list.</p>
     */
    inline ListDeliveryStreamsRequest& WithLimit(int value) { SetLimit(value); return *this;}

    /**
     * <p>The name of the delivery stream to start the list with.</p>
     */
    inline const Aws::String& GetExclusiveStartDeliveryStreamName() const{ return m_exclusiveStartDeliveryStreamName; }

    /**
     * <p>The name of the delivery stream to start the list with.</p>
     */
    inline void SetExclusiveStartDeliveryStreamName(const Aws::String& value) { m_exclusiveStartDeliveryStreamNameHasBeenSet = true; m_exclusiveStartDeliveryStreamName = value; }

    /**
     * <p>The name of the delivery stream to start the list with.</p>
     */
    inline void SetExclusiveStartDeliveryStreamName(Aws::String&& value) { m_exclusiveStartDeliveryStreamNameHasBeenSet = true; m_exclusiveStartDeliveryStreamName = value; }

    /**
     * <p>The name of the delivery stream to start the list with.</p>
     */
    inline void SetExclusiveStartDeliveryStreamName(const char* value) { m_exclusiveStartDeliveryStreamNameHasBeenSet = true; m_exclusiveStartDeliveryStreamName.assign(value); }

    /**
     * <p>The name of the delivery stream to start the list with.</p>
     */
    inline ListDeliveryStreamsRequest& WithExclusiveStartDeliveryStreamName(const Aws::String& value) { SetExclusiveStartDeliveryStreamName(value); return *this;}

    /**
     * <p>The name of the delivery stream to start the list with.</p>
     */
    inline ListDeliveryStreamsRequest& WithExclusiveStartDeliveryStreamName(Aws::String&& value) { SetExclusiveStartDeliveryStreamName(value); return *this;}

    /**
     * <p>The name of the delivery stream to start the list with.</p>
     */
    inline ListDeliveryStreamsRequest& WithExclusiveStartDeliveryStreamName(const char* value) { SetExclusiveStartDeliveryStreamName(value); return *this;}

  private:
    int m_limit;
    bool m_limitHasBeenSet;
    Aws::String m_exclusiveStartDeliveryStreamName;
    bool m_exclusiveStartDeliveryStreamNameHasBeenSet;
  };

} // namespace Model
} // namespace Firehose
} // namespace Aws
