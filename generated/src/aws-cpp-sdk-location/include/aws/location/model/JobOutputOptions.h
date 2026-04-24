/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/location/LocationService_EXPORTS.h>
#include <aws/location/model/JobOutputFormat.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace LocationService {
namespace Model {

/**
 * <p>Configuration for output data location and format.</p><p><h3>See Also:</h3>
 * <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/location-2020-11-19/JobOutputOptions">AWS
 * API Reference</a></p>
 */
class JobOutputOptions {
 public:
  AWS_LOCATIONSERVICE_API JobOutputOptions() = default;
  AWS_LOCATIONSERVICE_API JobOutputOptions(Aws::Utils::Json::JsonView jsonValue);
  AWS_LOCATIONSERVICE_API JobOutputOptions& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_LOCATIONSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>Output data format. Currently only "Parquet" is supported.</p>
   */
  inline JobOutputFormat GetFormat() const { return m_format; }
  inline bool FormatHasBeenSet() const { return m_formatHasBeenSet; }
  inline void SetFormat(JobOutputFormat value) {
    m_formatHasBeenSet = true;
    m_format = value;
  }
  inline JobOutputOptions& WithFormat(JobOutputFormat value) {
    SetFormat(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>S3 ARN or URI where output files will be written.</p>  <p>The Amazon S3
   * bucket must exist in the same Amazon Web Services region where you plan to run
   * your job.</p>
   */
  inline const Aws::String& GetLocation() const { return m_location; }
  inline bool LocationHasBeenSet() const { return m_locationHasBeenSet; }
  template <typename LocationT = Aws::String>
  void SetLocation(LocationT&& value) {
    m_locationHasBeenSet = true;
    m_location = std::forward<LocationT>(value);
  }
  template <typename LocationT = Aws::String>
  JobOutputOptions& WithLocation(LocationT&& value) {
    SetLocation(std::forward<LocationT>(value));
    return *this;
  }
  ///@}
 private:
  JobOutputFormat m_format{JobOutputFormat::NOT_SET};

  Aws::String m_location;
  bool m_formatHasBeenSet = false;
  bool m_locationHasBeenSet = false;
};

}  // namespace Model
}  // namespace LocationService
}  // namespace Aws
