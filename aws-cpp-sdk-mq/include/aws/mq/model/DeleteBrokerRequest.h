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
#include <aws/mq/MQ_EXPORTS.h>
#include <aws/mq/MQRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace MQ
{
namespace Model
{

  /**
   */
  class AWS_MQ_API DeleteBrokerRequest : public MQRequest
  {
  public:
    DeleteBrokerRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DeleteBroker"; }

    Aws::String SerializePayload() const override;


    /**
     * The name of the broker. This value must be unique in your AWS account, 1-50
     * characters long, must contain only letters, numbers, dashes, and underscores,
     * and must not contain whitespaces, brackets, wildcard characters, or special
     * characters.
     */
    inline const Aws::String& GetBrokerId() const{ return m_brokerId; }

    /**
     * The name of the broker. This value must be unique in your AWS account, 1-50
     * characters long, must contain only letters, numbers, dashes, and underscores,
     * and must not contain whitespaces, brackets, wildcard characters, or special
     * characters.
     */
    inline bool BrokerIdHasBeenSet() const { return m_brokerIdHasBeenSet; }

    /**
     * The name of the broker. This value must be unique in your AWS account, 1-50
     * characters long, must contain only letters, numbers, dashes, and underscores,
     * and must not contain whitespaces, brackets, wildcard characters, or special
     * characters.
     */
    inline void SetBrokerId(const Aws::String& value) { m_brokerIdHasBeenSet = true; m_brokerId = value; }

    /**
     * The name of the broker. This value must be unique in your AWS account, 1-50
     * characters long, must contain only letters, numbers, dashes, and underscores,
     * and must not contain whitespaces, brackets, wildcard characters, or special
     * characters.
     */
    inline void SetBrokerId(Aws::String&& value) { m_brokerIdHasBeenSet = true; m_brokerId = std::move(value); }

    /**
     * The name of the broker. This value must be unique in your AWS account, 1-50
     * characters long, must contain only letters, numbers, dashes, and underscores,
     * and must not contain whitespaces, brackets, wildcard characters, or special
     * characters.
     */
    inline void SetBrokerId(const char* value) { m_brokerIdHasBeenSet = true; m_brokerId.assign(value); }

    /**
     * The name of the broker. This value must be unique in your AWS account, 1-50
     * characters long, must contain only letters, numbers, dashes, and underscores,
     * and must not contain whitespaces, brackets, wildcard characters, or special
     * characters.
     */
    inline DeleteBrokerRequest& WithBrokerId(const Aws::String& value) { SetBrokerId(value); return *this;}

    /**
     * The name of the broker. This value must be unique in your AWS account, 1-50
     * characters long, must contain only letters, numbers, dashes, and underscores,
     * and must not contain whitespaces, brackets, wildcard characters, or special
     * characters.
     */
    inline DeleteBrokerRequest& WithBrokerId(Aws::String&& value) { SetBrokerId(std::move(value)); return *this;}

    /**
     * The name of the broker. This value must be unique in your AWS account, 1-50
     * characters long, must contain only letters, numbers, dashes, and underscores,
     * and must not contain whitespaces, brackets, wildcard characters, or special
     * characters.
     */
    inline DeleteBrokerRequest& WithBrokerId(const char* value) { SetBrokerId(value); return *this;}

  private:

    Aws::String m_brokerId;
    bool m_brokerIdHasBeenSet;
  };

} // namespace Model
} // namespace MQ
} // namespace Aws
