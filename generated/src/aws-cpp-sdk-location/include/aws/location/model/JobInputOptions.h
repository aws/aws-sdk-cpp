/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/location/LocationService_EXPORTS.h>
#include <aws/location/model/JobInputFormat.h>

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
 * <p>Configuration for input data location and format.</p>  <p>Input files
 * have a limitation of 10gb per file, and 1gb per Parquet row-group within the
 * file.</p> <p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/location-2020-11-19/JobInputOptions">AWS
 * API Reference</a></p>
 */
class JobInputOptions {
 public:
  AWS_LOCATIONSERVICE_API JobInputOptions() = default;
  AWS_LOCATIONSERVICE_API JobInputOptions(Aws::Utils::Json::JsonView jsonValue);
  AWS_LOCATIONSERVICE_API JobInputOptions& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_LOCATIONSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>S3 ARN or URI where input files are stored.</p>  <p>The Amazon S3
   * bucket must be created in the same Amazon Web Services region where you plan to
   * run your job.</p>
   */
  inline const Aws::String& GetLocation() const { return m_location; }
  inline bool LocationHasBeenSet() const { return m_locationHasBeenSet; }
  template <typename LocationT = Aws::String>
  void SetLocation(LocationT&& value) {
    m_locationHasBeenSet = true;
    m_location = std::forward<LocationT>(value);
  }
  template <typename LocationT = Aws::String>
  JobInputOptions& WithLocation(LocationT&& value) {
    SetLocation(std::forward<LocationT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Input data format. Currently only <code>Parquet</code> is supported.</p>
   *  <p>Input files have a limitation of 10gb per file, and 1gb per Parquet
   * row-group within the file.</p>
   */
  inline JobInputFormat GetFormat() const { return m_format; }
  inline bool FormatHasBeenSet() const { return m_formatHasBeenSet; }
  inline void SetFormat(JobInputFormat value) {
    m_formatHasBeenSet = true;
    m_format = value;
  }
  inline JobInputOptions& WithFormat(JobInputFormat value) {
    SetFormat(value);
    return *this;
  }
  ///@}
 private:
  Aws::String m_location;

  JobInputFormat m_format{JobInputFormat::NOT_SET};
  bool m_locationHasBeenSet = false;
  bool m_formatHasBeenSet = false;
};

}  // namespace Model
}  // namespace LocationService
}  // namespace Aws
