/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/config/ConfigService_EXPORTS.h>
#include <aws/config/model/ConformancePackType.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace ConfigService {
namespace Model {

/**
 * <p>Filters for filtering results from <a>DescribeConformancePacks</a> and
 * <a>DescribeConformancePackStatus</a> by conformance pack type.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/config-2014-11-12/DescribeConformancePacksFilters">AWS
 * API Reference</a></p>
 */
class DescribeConformancePacksFilters {
 public:
  AWS_CONFIGSERVICE_API DescribeConformancePacksFilters() = default;
  AWS_CONFIGSERVICE_API DescribeConformancePacksFilters(Aws::Utils::Json::JsonView jsonValue);
  AWS_CONFIGSERVICE_API DescribeConformancePacksFilters& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_CONFIGSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>Filters results by conformance pack type. Valid values:</p> <ul> <li> <p>
   * <code>CUSTOM</code> – A custom conformance pack.</p> </li> <li> <p>
   * <code>MANAGED</code> – A managed conformance pack.</p> </li> </ul> <p>If you
   * specify both values, Config returns conformance packs of either type.</p>
   */
  inline const Aws::Vector<ConformancePackType>& GetTypes() const { return m_types; }
  inline bool TypesHasBeenSet() const { return m_typesHasBeenSet; }
  template <typename TypesT = Aws::Vector<ConformancePackType>>
  void SetTypes(TypesT&& value) {
    m_typesHasBeenSet = true;
    m_types = std::forward<TypesT>(value);
  }
  template <typename TypesT = Aws::Vector<ConformancePackType>>
  DescribeConformancePacksFilters& WithTypes(TypesT&& value) {
    SetTypes(std::forward<TypesT>(value));
    return *this;
  }
  inline DescribeConformancePacksFilters& AddTypes(ConformancePackType value) {
    m_typesHasBeenSet = true;
    m_types.push_back(value);
    return *this;
  }
  ///@}
 private:
  Aws::Vector<ConformancePackType> m_types;
  bool m_typesHasBeenSet = false;
};

}  // namespace Model
}  // namespace ConfigService
}  // namespace Aws
