/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lambda-core/LambdaCore_EXPORTS.h>
#include <aws/lambda-core/model/ElasticIpType.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace LambdaCore {
namespace Model {

/**
 * <p>How the connector's network interfaces get an Elastic IP
 * address.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/lambda-core-2026-04-30/ElasticIpConfiguration">AWS
 * API Reference</a></p>
 */
class ElasticIpConfiguration {
 public:
  AWS_LAMBDACORE_API ElasticIpConfiguration() = default;
  AWS_LAMBDACORE_API ElasticIpConfiguration(Aws::Utils::Json::JsonView jsonValue);
  AWS_LAMBDACORE_API ElasticIpConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_LAMBDACORE_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The Elastic IP type for the connector's network interfaces.</p>
   */
  inline ElasticIpType GetType() const { return m_type; }
  inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
  inline void SetType(ElasticIpType value) {
    m_typeHasBeenSet = true;
    m_type = value;
  }
  inline ElasticIpConfiguration& WithType(ElasticIpType value) {
    SetType(value);
    return *this;
  }
  ///@}
 private:
  ElasticIpType m_type{ElasticIpType::NOT_SET};
  bool m_typeHasBeenSet = false;
};

}  // namespace Model
}  // namespace LambdaCore
}  // namespace Aws
