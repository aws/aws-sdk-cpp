/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/kinesis/KinesisRequest.h>
#include <aws/kinesis/Kinesis_EXPORTS.h>

#include <utility>

namespace Aws {
namespace Kinesis {
namespace Model {

/**
 */
class UpdateMaxRecordSizeRequest : public KinesisRequest {
 public:
  AWS_KINESIS_API UpdateMaxRecordSizeRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "UpdateMaxRecordSize"; }

  AWS_KINESIS_API Aws::String SerializePayload() const override;

  AWS_KINESIS_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

  /**
   * Helper function to collect parameters (configurable and static hardcoded) required for endpoint computation.
   */
  AWS_KINESIS_API EndpointParameters GetEndpointContextParams() const override;

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) of the stream for the
   * <code>MaxRecordSize</code> update.</p>
   */
  inline const Aws::String& GetStreamARN() const { return m_streamARN; }
  inline bool StreamARNHasBeenSet() const { return m_streamARNHasBeenSet; }
  template <typename StreamARNT = Aws::String>
  void SetStreamARN(StreamARNT&& value) {
    m_streamARNHasBeenSet = true;
    m_streamARN = std::forward<StreamARNT>(value);
  }
  template <typename StreamARNT = Aws::String>
  UpdateMaxRecordSizeRequest& WithStreamARN(StreamARNT&& value) {
    SetStreamARN(std::forward<StreamARNT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The maximum record size of a single record in KiB that you can write to, and
   * read from a stream. Specify a value between 1024 and 10240 KiB (1 to 10 MiB). If
   * you specify a value that is out of this range, <code>UpdateMaxRecordSize</code>
   * sends back an <code>ValidationException</code> message.</p>
   */
  inline int GetMaxRecordSizeInKiB() const { return m_maxRecordSizeInKiB; }
  inline bool MaxRecordSizeInKiBHasBeenSet() const { return m_maxRecordSizeInKiBHasBeenSet; }
  inline void SetMaxRecordSizeInKiB(int value) {
    m_maxRecordSizeInKiBHasBeenSet = true;
    m_maxRecordSizeInKiB = value;
  }
  inline UpdateMaxRecordSizeRequest& WithMaxRecordSizeInKiB(int value) {
    SetMaxRecordSizeInKiB(value);
    return *this;
  }
  ///@}
 private:
  Aws::String m_streamARN;

  int m_maxRecordSizeInKiB{0};
  bool m_streamARNHasBeenSet = false;
  bool m_maxRecordSizeInKiBHasBeenSet = false;
};

}  // namespace Model
}  // namespace Kinesis
}  // namespace Aws
