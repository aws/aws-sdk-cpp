/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/query-protocol/QueryProtocol_EXPORTS.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Xml {
class XmlNode;
}  // namespace Xml
}  // namespace Utils
namespace QueryProtocol {
namespace Model {

class NestedStructWithMap {
 public:
  AWS_QUERYPROTOCOL_API NestedStructWithMap() = default;
  AWS_QUERYPROTOCOL_API NestedStructWithMap(const Aws::Utils::Xml::XmlNode& xmlNode);
  AWS_QUERYPROTOCOL_API NestedStructWithMap& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

  AWS_QUERYPROTOCOL_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
  AWS_QUERYPROTOCOL_API void OutputToStream(Aws::OStream& oStream, const char* location) const;

  ///@{

  inline const Aws::Map<Aws::String, Aws::String>& GetMapArg() const { return m_mapArg; }
  inline bool MapArgHasBeenSet() const { return m_mapArgHasBeenSet; }
  template <typename MapArgT = Aws::Map<Aws::String, Aws::String>>
  void SetMapArg(MapArgT&& value) {
    m_mapArgHasBeenSet = true;
    m_mapArg = std::forward<MapArgT>(value);
  }
  template <typename MapArgT = Aws::Map<Aws::String, Aws::String>>
  NestedStructWithMap& WithMapArg(MapArgT&& value) {
    SetMapArg(std::forward<MapArgT>(value));
    return *this;
  }
  template <typename MapArgKeyT = Aws::String, typename MapArgValueT = Aws::String>
  NestedStructWithMap& AddMapArg(MapArgKeyT&& key, MapArgValueT&& value) {
    m_mapArgHasBeenSet = true;
    m_mapArg.emplace(std::forward<MapArgKeyT>(key), std::forward<MapArgValueT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::Map<Aws::String, Aws::String> m_mapArg;
  bool m_mapArgHasBeenSet = false;
};

}  // namespace Model
}  // namespace QueryProtocol
}  // namespace Aws
