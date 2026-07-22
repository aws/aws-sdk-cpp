/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/amp/PrometheusService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace PrometheusService {
namespace Model {

/**
 * <p>The configuration identifies the CloudWatch dataset used as a scraper
 * destination.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/amp-2020-08-01/CloudWatchConfiguration">AWS
 * API Reference</a></p>
 */
class CloudWatchConfiguration {
 public:
  AWS_PROMETHEUSSERVICE_API CloudWatchConfiguration() = default;
  AWS_PROMETHEUSSERVICE_API CloudWatchConfiguration(Aws::Utils::Json::JsonView jsonValue);
  AWS_PROMETHEUSSERVICE_API CloudWatchConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_PROMETHEUSSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) of the CloudWatch dataset. To use the default
   * dataset, specify
   * <code>arn:aws:cloudwatch:&lt;region&gt;:&lt;account-id&gt;:dataset/default</code>.</p>
   */
  inline const Aws::String& GetDatasetArn() const { return m_datasetArn; }
  inline bool DatasetArnHasBeenSet() const { return m_datasetArnHasBeenSet; }
  template <typename DatasetArnT = Aws::String>
  void SetDatasetArn(DatasetArnT&& value) {
    m_datasetArnHasBeenSet = true;
    m_datasetArn = std::forward<DatasetArnT>(value);
  }
  template <typename DatasetArnT = Aws::String>
  CloudWatchConfiguration& WithDatasetArn(DatasetArnT&& value) {
    SetDatasetArn(std::forward<DatasetArnT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_datasetArn;
  bool m_datasetArnHasBeenSet = false;
};

}  // namespace Model
}  // namespace PrometheusService
}  // namespace Aws
