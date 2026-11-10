/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/crt/cbor/Cbor.h>
#include <aws/gamelift/GameLift_EXPORTS.h>
#include <aws/gamelift/model/LogDeliveryDestinationType.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Cbor {
class CborValue;
}  // namespace Cbor
}  // namespace Utils
namespace GameLift {
namespace Model {

/**
 * <p>A single destination that receives game session placement insight logs for a
 * game session queue.</p>  <p>Amazon CloudWatch Logs vended log charges
 * apply to each destination. Amazon S3 and Amazon Data Firehose destinations also
 * incur their own service charges. For more information, see <a
 * href="http://aws.amazon.com/cloudwatch/pricing/">Amazon CloudWatch
 * Pricing</a>.</p> <p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/gamelift-2015-10-01/LogDeliveryDestination">AWS
 * API Reference</a></p>
 */
class LogDeliveryDestination {
 public:
  AWS_GAMELIFT_API LogDeliveryDestination() = default;
  AWS_GAMELIFT_API LogDeliveryDestination(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder);
  AWS_GAMELIFT_API LogDeliveryDestination& operator=(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder);
  AWS_GAMELIFT_API void CborEncode(Aws::Crt::Cbor::CborEncoder& encoder) const;

  ///@{
  /**
   * <p>The type of Amazon Web Services resource that receives the game session
   * placement insight logs. This value is required. Valid values are:</p> <ul> <li>
   * <p> <code>CLOUDWATCH</code> -- an Amazon CloudWatch Logs log group.</p> </li>
   * <li> <p> <code>S3</code> -- an Amazon S3 bucket.</p> </li> <li> <p>
   * <code>FIREHOSE</code> -- an Amazon Data Firehose delivery stream.</p> </li>
   * </ul>
   */
  inline LogDeliveryDestinationType GetLogDestination() const { return m_logDestination; }
  inline bool LogDestinationHasBeenSet() const { return m_logDestinationHasBeenSet; }
  inline void SetLogDestination(LogDeliveryDestinationType value) {
    m_logDestinationHasBeenSet = true;
    m_logDestination = value;
  }
  inline LogDeliveryDestination& WithLogDestination(LogDeliveryDestinationType value) {
    SetLogDestination(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) of the resource that receives the game session
   * placement insight logs. This resource must match the type that you specify in
   * <code>LogDestination</code>. This value is required for <code>FIREHOSE</code>
   * destinations. For <code>CLOUDWATCH</code> and <code>S3</code>, you can omit this
   * value; Amazon GameLift Servers then creates a destination resource of the
   * specified type on your behalf.</p>
   */
  inline const Aws::String& GetDestinationArn() const { return m_destinationArn; }
  inline bool DestinationArnHasBeenSet() const { return m_destinationArnHasBeenSet; }
  template <typename DestinationArnT = Aws::String>
  void SetDestinationArn(DestinationArnT&& value) {
    m_destinationArnHasBeenSet = true;
    m_destinationArn = std::forward<DestinationArnT>(value);
  }
  template <typename DestinationArnT = Aws::String>
  LogDeliveryDestination& WithDestinationArn(DestinationArnT&& value) {
    SetDestinationArn(std::forward<DestinationArnT>(value));
    return *this;
  }
  ///@}
 private:
  LogDeliveryDestinationType m_logDestination{LogDeliveryDestinationType::NOT_SET};

  Aws::String m_destinationArn;
  bool m_logDestinationHasBeenSet = false;
  bool m_destinationArnHasBeenSet = false;
};

}  // namespace Model
}  // namespace GameLift
}  // namespace Aws
