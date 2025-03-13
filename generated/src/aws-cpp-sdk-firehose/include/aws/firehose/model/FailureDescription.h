/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/firehose/Firehose_EXPORTS.h>
#include <aws/firehose/model/DeliveryStreamFailureType.h>
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
namespace Firehose
{
namespace Model
{

  /**
   * <p>Provides details in case one of the following operations fails due to an
   * error related to KMS: <a>CreateDeliveryStream</a>, <a>DeleteDeliveryStream</a>,
   * <a>StartDeliveryStreamEncryption</a>,
   * <a>StopDeliveryStreamEncryption</a>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/firehose-2015-08-04/FailureDescription">AWS
   * API Reference</a></p>
   */
  class FailureDescription
  {
  public:
    AWS_FIREHOSE_API FailureDescription() = default;
    AWS_FIREHOSE_API FailureDescription(Aws::Utils::Json::JsonView jsonValue);
    AWS_FIREHOSE_API FailureDescription& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_FIREHOSE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The type of error that caused the failure.</p>
     */
    inline DeliveryStreamFailureType GetType() const { return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(DeliveryStreamFailureType value) { m_typeHasBeenSet = true; m_type = value; }
    inline FailureDescription& WithType(DeliveryStreamFailureType value) { SetType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A message providing details about the error that caused the failure.</p>
     */
    inline const Aws::String& GetDetails() const { return m_details; }
    inline bool DetailsHasBeenSet() const { return m_detailsHasBeenSet; }
    template<typename DetailsT = Aws::String>
    void SetDetails(DetailsT&& value) { m_detailsHasBeenSet = true; m_details = std::forward<DetailsT>(value); }
    template<typename DetailsT = Aws::String>
    FailureDescription& WithDetails(DetailsT&& value) { SetDetails(std::forward<DetailsT>(value)); return *this;}
    ///@}
  private:

    DeliveryStreamFailureType m_type{DeliveryStreamFailureType::NOT_SET};
    bool m_typeHasBeenSet = false;

    Aws::String m_details;
    bool m_detailsHasBeenSet = false;
  };

} // namespace Model
} // namespace Firehose
} // namespace Aws
