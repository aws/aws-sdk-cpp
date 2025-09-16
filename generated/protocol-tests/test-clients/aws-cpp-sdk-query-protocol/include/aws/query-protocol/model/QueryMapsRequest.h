/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/query-protocol/QueryProtocolRequest.h>
#include <aws/query-protocol/QueryProtocol_EXPORTS.h>
#include <aws/query-protocol/model/GreetingStruct.h>
#include <aws/query-protocol/model/NestedStructWithMap.h>

#include <utility>

namespace Aws {
namespace QueryProtocol {
namespace Model {

/**
 */
class QueryMapsRequest : public QueryProtocolRequest {
 public:
  AWS_QUERYPROTOCOL_API QueryMapsRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "QueryMaps"; }

  AWS_QUERYPROTOCOL_API Aws::String SerializePayload() const override;

 protected:
  AWS_QUERYPROTOCOL_API void DumpBodyToUrl(Aws::Http::URI& uri) const override;

 public:
  ///@{

  inline const Aws::Map<Aws::String, Aws::String>& GetMapArg() const { return m_mapArg; }
  inline bool MapArgHasBeenSet() const { return m_mapArgHasBeenSet; }
  template <typename MapArgT = Aws::Map<Aws::String, Aws::String>>
  void SetMapArg(MapArgT&& value) {
    m_mapArgHasBeenSet = true;
    m_mapArg = std::forward<MapArgT>(value);
  }
  template <typename MapArgT = Aws::Map<Aws::String, Aws::String>>
  QueryMapsRequest& WithMapArg(MapArgT&& value) {
    SetMapArg(std::forward<MapArgT>(value));
    return *this;
  }
  template <typename MapArgKeyT = Aws::String, typename MapArgValueT = Aws::String>
  QueryMapsRequest& AddMapArg(MapArgKeyT&& key, MapArgValueT&& value) {
    m_mapArgHasBeenSet = true;
    m_mapArg.emplace(std::forward<MapArgKeyT>(key), std::forward<MapArgValueT>(value));
    return *this;
  }
  ///@}

  ///@{

  inline const Aws::Map<Aws::String, Aws::String>& GetRenamedMapArg() const { return m_renamedMapArg; }
  inline bool RenamedMapArgHasBeenSet() const { return m_renamedMapArgHasBeenSet; }
  template <typename RenamedMapArgT = Aws::Map<Aws::String, Aws::String>>
  void SetRenamedMapArg(RenamedMapArgT&& value) {
    m_renamedMapArgHasBeenSet = true;
    m_renamedMapArg = std::forward<RenamedMapArgT>(value);
  }
  template <typename RenamedMapArgT = Aws::Map<Aws::String, Aws::String>>
  QueryMapsRequest& WithRenamedMapArg(RenamedMapArgT&& value) {
    SetRenamedMapArg(std::forward<RenamedMapArgT>(value));
    return *this;
  }
  template <typename RenamedMapArgKeyT = Aws::String, typename RenamedMapArgValueT = Aws::String>
  QueryMapsRequest& AddRenamedMapArg(RenamedMapArgKeyT&& key, RenamedMapArgValueT&& value) {
    m_renamedMapArgHasBeenSet = true;
    m_renamedMapArg.emplace(std::forward<RenamedMapArgKeyT>(key), std::forward<RenamedMapArgValueT>(value));
    return *this;
  }
  ///@}

  ///@{

  inline const Aws::Map<Aws::String, GreetingStruct>& GetComplexMapArg() const { return m_complexMapArg; }
  inline bool ComplexMapArgHasBeenSet() const { return m_complexMapArgHasBeenSet; }
  template <typename ComplexMapArgT = Aws::Map<Aws::String, GreetingStruct>>
  void SetComplexMapArg(ComplexMapArgT&& value) {
    m_complexMapArgHasBeenSet = true;
    m_complexMapArg = std::forward<ComplexMapArgT>(value);
  }
  template <typename ComplexMapArgT = Aws::Map<Aws::String, GreetingStruct>>
  QueryMapsRequest& WithComplexMapArg(ComplexMapArgT&& value) {
    SetComplexMapArg(std::forward<ComplexMapArgT>(value));
    return *this;
  }
  template <typename ComplexMapArgKeyT = Aws::String, typename ComplexMapArgValueT = GreetingStruct>
  QueryMapsRequest& AddComplexMapArg(ComplexMapArgKeyT&& key, ComplexMapArgValueT&& value) {
    m_complexMapArgHasBeenSet = true;
    m_complexMapArg.emplace(std::forward<ComplexMapArgKeyT>(key), std::forward<ComplexMapArgValueT>(value));
    return *this;
  }
  ///@}

  ///@{

  inline const Aws::Map<Aws::String, Aws::String>& GetMapWithXmlMemberName() const { return m_mapWithXmlMemberName; }
  inline bool MapWithXmlMemberNameHasBeenSet() const { return m_mapWithXmlMemberNameHasBeenSet; }
  template <typename MapWithXmlMemberNameT = Aws::Map<Aws::String, Aws::String>>
  void SetMapWithXmlMemberName(MapWithXmlMemberNameT&& value) {
    m_mapWithXmlMemberNameHasBeenSet = true;
    m_mapWithXmlMemberName = std::forward<MapWithXmlMemberNameT>(value);
  }
  template <typename MapWithXmlMemberNameT = Aws::Map<Aws::String, Aws::String>>
  QueryMapsRequest& WithMapWithXmlMemberName(MapWithXmlMemberNameT&& value) {
    SetMapWithXmlMemberName(std::forward<MapWithXmlMemberNameT>(value));
    return *this;
  }
  template <typename MapWithXmlMemberNameKeyT = Aws::String, typename MapWithXmlMemberNameValueT = Aws::String>
  QueryMapsRequest& AddMapWithXmlMemberName(MapWithXmlMemberNameKeyT&& key, MapWithXmlMemberNameValueT&& value) {
    m_mapWithXmlMemberNameHasBeenSet = true;
    m_mapWithXmlMemberName.emplace(std::forward<MapWithXmlMemberNameKeyT>(key), std::forward<MapWithXmlMemberNameValueT>(value));
    return *this;
  }
  ///@}

  ///@{

  inline const Aws::Map<Aws::String, Aws::String>& GetFlattenedMap() const { return m_flattenedMap; }
  inline bool FlattenedMapHasBeenSet() const { return m_flattenedMapHasBeenSet; }
  template <typename FlattenedMapT = Aws::Map<Aws::String, Aws::String>>
  void SetFlattenedMap(FlattenedMapT&& value) {
    m_flattenedMapHasBeenSet = true;
    m_flattenedMap = std::forward<FlattenedMapT>(value);
  }
  template <typename FlattenedMapT = Aws::Map<Aws::String, Aws::String>>
  QueryMapsRequest& WithFlattenedMap(FlattenedMapT&& value) {
    SetFlattenedMap(std::forward<FlattenedMapT>(value));
    return *this;
  }
  template <typename FlattenedMapKeyT = Aws::String, typename FlattenedMapValueT = Aws::String>
  QueryMapsRequest& AddFlattenedMap(FlattenedMapKeyT&& key, FlattenedMapValueT&& value) {
    m_flattenedMapHasBeenSet = true;
    m_flattenedMap.emplace(std::forward<FlattenedMapKeyT>(key), std::forward<FlattenedMapValueT>(value));
    return *this;
  }
  ///@}

  ///@{

  inline const Aws::Map<Aws::String, Aws::String>& GetFlattenedMapWithXmlName() const { return m_flattenedMapWithXmlName; }
  inline bool FlattenedMapWithXmlNameHasBeenSet() const { return m_flattenedMapWithXmlNameHasBeenSet; }
  template <typename FlattenedMapWithXmlNameT = Aws::Map<Aws::String, Aws::String>>
  void SetFlattenedMapWithXmlName(FlattenedMapWithXmlNameT&& value) {
    m_flattenedMapWithXmlNameHasBeenSet = true;
    m_flattenedMapWithXmlName = std::forward<FlattenedMapWithXmlNameT>(value);
  }
  template <typename FlattenedMapWithXmlNameT = Aws::Map<Aws::String, Aws::String>>
  QueryMapsRequest& WithFlattenedMapWithXmlName(FlattenedMapWithXmlNameT&& value) {
    SetFlattenedMapWithXmlName(std::forward<FlattenedMapWithXmlNameT>(value));
    return *this;
  }
  template <typename FlattenedMapWithXmlNameKeyT = Aws::String, typename FlattenedMapWithXmlNameValueT = Aws::String>
  QueryMapsRequest& AddFlattenedMapWithXmlName(FlattenedMapWithXmlNameKeyT&& key, FlattenedMapWithXmlNameValueT&& value) {
    m_flattenedMapWithXmlNameHasBeenSet = true;
    m_flattenedMapWithXmlName.emplace(std::forward<FlattenedMapWithXmlNameKeyT>(key), std::forward<FlattenedMapWithXmlNameValueT>(value));
    return *this;
  }
  ///@}

  ///@{

  inline const Aws::Map<Aws::String, Aws::Vector<Aws::String>>& GetMapOfLists() const { return m_mapOfLists; }
  inline bool MapOfListsHasBeenSet() const { return m_mapOfListsHasBeenSet; }
  template <typename MapOfListsT = Aws::Map<Aws::String, Aws::Vector<Aws::String>>>
  void SetMapOfLists(MapOfListsT&& value) {
    m_mapOfListsHasBeenSet = true;
    m_mapOfLists = std::forward<MapOfListsT>(value);
  }
  template <typename MapOfListsT = Aws::Map<Aws::String, Aws::Vector<Aws::String>>>
  QueryMapsRequest& WithMapOfLists(MapOfListsT&& value) {
    SetMapOfLists(std::forward<MapOfListsT>(value));
    return *this;
  }
  template <typename MapOfListsKeyT = Aws::String, typename MapOfListsValueT = Aws::Vector<Aws::String>>
  QueryMapsRequest& AddMapOfLists(MapOfListsKeyT&& key, MapOfListsValueT&& value) {
    m_mapOfListsHasBeenSet = true;
    m_mapOfLists.emplace(std::forward<MapOfListsKeyT>(key), std::forward<MapOfListsValueT>(value));
    return *this;
  }
  ///@}

  ///@{

  inline const NestedStructWithMap& GetNestedStructWithMap() const { return m_nestedStructWithMap; }
  inline bool NestedStructWithMapHasBeenSet() const { return m_nestedStructWithMapHasBeenSet; }
  template <typename NestedStructWithMapT = NestedStructWithMap>
  void SetNestedStructWithMap(NestedStructWithMapT&& value) {
    m_nestedStructWithMapHasBeenSet = true;
    m_nestedStructWithMap = std::forward<NestedStructWithMapT>(value);
  }
  template <typename NestedStructWithMapT = NestedStructWithMap>
  QueryMapsRequest& WithNestedStructWithMap(NestedStructWithMapT&& value) {
    SetNestedStructWithMap(std::forward<NestedStructWithMapT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::Map<Aws::String, Aws::String> m_mapArg;
  bool m_mapArgHasBeenSet = false;

  Aws::Map<Aws::String, Aws::String> m_renamedMapArg;
  bool m_renamedMapArgHasBeenSet = false;

  Aws::Map<Aws::String, GreetingStruct> m_complexMapArg;
  bool m_complexMapArgHasBeenSet = false;

  Aws::Map<Aws::String, Aws::String> m_mapWithXmlMemberName;
  bool m_mapWithXmlMemberNameHasBeenSet = false;

  Aws::Map<Aws::String, Aws::String> m_flattenedMap;
  bool m_flattenedMapHasBeenSet = false;

  Aws::Map<Aws::String, Aws::String> m_flattenedMapWithXmlName;
  bool m_flattenedMapWithXmlNameHasBeenSet = false;

  Aws::Map<Aws::String, Aws::Vector<Aws::String>> m_mapOfLists;
  bool m_mapOfListsHasBeenSet = false;

  NestedStructWithMap m_nestedStructWithMap;
  bool m_nestedStructWithMapHasBeenSet = false;
};

}  // namespace Model
}  // namespace QueryProtocol
}  // namespace Aws
