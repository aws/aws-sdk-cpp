/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/dynamodb/DynamoDB_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/dynamodb/model/ThrottlingReason.h>
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
namespace DynamoDB
{
namespace Model
{

  /**
   * <p>Throughput exceeds the current throughput quota for your account. For
   * detailed information about why the request was throttled and the ARN of the
   * impacted resource, find the <a
   * href="https://docs.aws.amazon.com/amazondynamodb/latest/APIReference/API_ThrottlingReason.html">ThrottlingReason</a>
   * field in the returned exception. Contact <a
   * href="https://aws.amazon.com/support">Amazon Web Services Support</a> to request
   * a quota increase.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/dynamodb-2012-08-10/RequestLimitExceeded">AWS
   * API Reference</a></p>
   */
  class RequestLimitExceeded
  {
  public:
    AWS_DYNAMODB_API RequestLimitExceeded() = default;
    AWS_DYNAMODB_API RequestLimitExceeded(Aws::Utils::Json::JsonView jsonValue);
    AWS_DYNAMODB_API RequestLimitExceeded& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DYNAMODB_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    
    inline const Aws::String& GetMessage() const { return m_message; }
    inline bool MessageHasBeenSet() const { return m_messageHasBeenSet; }
    template<typename MessageT = Aws::String>
    void SetMessage(MessageT&& value) { m_messageHasBeenSet = true; m_message = std::forward<MessageT>(value); }
    template<typename MessageT = Aws::String>
    RequestLimitExceeded& WithMessage(MessageT&& value) { SetMessage(std::forward<MessageT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of <a
     * href="https://docs.aws.amazon.com/amazondynamodb/latest/APIReference/API_ThrottlingReason.html">ThrottlingReason</a>
     * that provide detailed diagnostic information about why the request was
     * throttled. </p>
     */
    inline const Aws::Vector<ThrottlingReason>& GetThrottlingReasons() const { return m_throttlingReasons; }
    inline bool ThrottlingReasonsHasBeenSet() const { return m_throttlingReasonsHasBeenSet; }
    template<typename ThrottlingReasonsT = Aws::Vector<ThrottlingReason>>
    void SetThrottlingReasons(ThrottlingReasonsT&& value) { m_throttlingReasonsHasBeenSet = true; m_throttlingReasons = std::forward<ThrottlingReasonsT>(value); }
    template<typename ThrottlingReasonsT = Aws::Vector<ThrottlingReason>>
    RequestLimitExceeded& WithThrottlingReasons(ThrottlingReasonsT&& value) { SetThrottlingReasons(std::forward<ThrottlingReasonsT>(value)); return *this;}
    template<typename ThrottlingReasonsT = ThrottlingReason>
    RequestLimitExceeded& AddThrottlingReasons(ThrottlingReasonsT&& value) { m_throttlingReasonsHasBeenSet = true; m_throttlingReasons.emplace_back(std::forward<ThrottlingReasonsT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_message;
    bool m_messageHasBeenSet = false;

    Aws::Vector<ThrottlingReason> m_throttlingReasons;
    bool m_throttlingReasonsHasBeenSet = false;
  };

} // namespace Model
} // namespace DynamoDB
} // namespace Aws
