/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/iotsitewise/IoTSiteWise_EXPORTS.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace IoTSiteWise {
namespace Model {

/**
 * &lt;p&gt;Contains the location where error reports will be written on
 * failure.&lt;/p&gt;<p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/iotsitewise-2019-12-02/ExportErrorReportLocation">AWS
 * API Reference</a></p>
 */
class ExportErrorReportLocation {
 public:
  AWS_IOTSITEWISE_API ExportErrorReportLocation() = default;
  AWS_IOTSITEWISE_API ExportErrorReportLocation(Aws::Utils::Json::JsonView jsonValue);
  AWS_IOTSITEWISE_API ExportErrorReportLocation& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_IOTSITEWISE_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * &lt;p&gt;The S3 URI prefix for the error report.&lt;/p&gt;
   */
  inline const Aws::String& GetS3Uri() const { return m_s3Uri; }
  inline bool S3UriHasBeenSet() const { return m_s3UriHasBeenSet; }
  template <typename S3UriT = Aws::String>
  void SetS3Uri(S3UriT&& value) {
    m_s3UriHasBeenSet = true;
    m_s3Uri = std::forward<S3UriT>(value);
  }
  template <typename S3UriT = Aws::String>
  ExportErrorReportLocation& WithS3Uri(S3UriT&& value) {
    SetS3Uri(std::forward<S3UriT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_s3Uri;
  bool m_s3UriHasBeenSet = false;
};

}  // namespace Model
}  // namespace IoTSiteWise
}  // namespace Aws
