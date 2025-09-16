/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/rest-json-protocol/RestJsonProtocolRequest.h>
#include <aws/rest-json-protocol/RestJsonProtocol_EXPORTS.h>
#include <aws/rest-json-protocol/model/FooEnum.h>

#include <utility>

namespace Aws {
namespace Http {
class URI;
}  // namespace Http
namespace RestJsonProtocol {
namespace Model {

/**
 */
class OmitsSerializingEmptyListsRequest : public RestJsonProtocolRequest {
 public:
  AWS_RESTJSONPROTOCOL_API OmitsSerializingEmptyListsRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "OmitsSerializingEmptyLists"; }

  AWS_RESTJSONPROTOCOL_API Aws::String SerializePayload() const override;

  AWS_RESTJSONPROTOCOL_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;

  ///@{

  inline const Aws::Vector<Aws::String>& GetQueryStringList() const { return m_queryStringList; }
  inline bool QueryStringListHasBeenSet() const { return m_queryStringListHasBeenSet; }
  template <typename QueryStringListT = Aws::Vector<Aws::String>>
  void SetQueryStringList(QueryStringListT&& value) {
    m_queryStringListHasBeenSet = true;
    m_queryStringList = std::forward<QueryStringListT>(value);
  }
  template <typename QueryStringListT = Aws::Vector<Aws::String>>
  OmitsSerializingEmptyListsRequest& WithQueryStringList(QueryStringListT&& value) {
    SetQueryStringList(std::forward<QueryStringListT>(value));
    return *this;
  }
  template <typename QueryStringListT = Aws::String>
  OmitsSerializingEmptyListsRequest& AddQueryStringList(QueryStringListT&& value) {
    m_queryStringListHasBeenSet = true;
    m_queryStringList.emplace_back(std::forward<QueryStringListT>(value));
    return *this;
  }
  ///@}

  ///@{

  inline const Aws::Vector<int>& GetQueryIntegerList() const { return m_queryIntegerList; }
  inline bool QueryIntegerListHasBeenSet() const { return m_queryIntegerListHasBeenSet; }
  template <typename QueryIntegerListT = Aws::Vector<int>>
  void SetQueryIntegerList(QueryIntegerListT&& value) {
    m_queryIntegerListHasBeenSet = true;
    m_queryIntegerList = std::forward<QueryIntegerListT>(value);
  }
  template <typename QueryIntegerListT = Aws::Vector<int>>
  OmitsSerializingEmptyListsRequest& WithQueryIntegerList(QueryIntegerListT&& value) {
    SetQueryIntegerList(std::forward<QueryIntegerListT>(value));
    return *this;
  }
  inline OmitsSerializingEmptyListsRequest& AddQueryIntegerList(int value) {
    m_queryIntegerListHasBeenSet = true;
    m_queryIntegerList.push_back(value);
    return *this;
  }
  ///@}

  ///@{

  inline const Aws::Vector<double>& GetQueryDoubleList() const { return m_queryDoubleList; }
  inline bool QueryDoubleListHasBeenSet() const { return m_queryDoubleListHasBeenSet; }
  template <typename QueryDoubleListT = Aws::Vector<double>>
  void SetQueryDoubleList(QueryDoubleListT&& value) {
    m_queryDoubleListHasBeenSet = true;
    m_queryDoubleList = std::forward<QueryDoubleListT>(value);
  }
  template <typename QueryDoubleListT = Aws::Vector<double>>
  OmitsSerializingEmptyListsRequest& WithQueryDoubleList(QueryDoubleListT&& value) {
    SetQueryDoubleList(std::forward<QueryDoubleListT>(value));
    return *this;
  }
  inline OmitsSerializingEmptyListsRequest& AddQueryDoubleList(double value) {
    m_queryDoubleListHasBeenSet = true;
    m_queryDoubleList.push_back(value);
    return *this;
  }
  ///@}

  ///@{

  inline const Aws::Vector<bool>& GetQueryBooleanList() const { return m_queryBooleanList; }
  inline bool QueryBooleanListHasBeenSet() const { return m_queryBooleanListHasBeenSet; }
  template <typename QueryBooleanListT = Aws::Vector<bool>>
  void SetQueryBooleanList(QueryBooleanListT&& value) {
    m_queryBooleanListHasBeenSet = true;
    m_queryBooleanList = std::forward<QueryBooleanListT>(value);
  }
  template <typename QueryBooleanListT = Aws::Vector<bool>>
  OmitsSerializingEmptyListsRequest& WithQueryBooleanList(QueryBooleanListT&& value) {
    SetQueryBooleanList(std::forward<QueryBooleanListT>(value));
    return *this;
  }
  inline OmitsSerializingEmptyListsRequest& AddQueryBooleanList(bool value) {
    m_queryBooleanListHasBeenSet = true;
    m_queryBooleanList.push_back(value);
    return *this;
  }
  ///@}

  ///@{

  inline const Aws::Vector<Aws::Utils::DateTime>& GetQueryTimestampList() const { return m_queryTimestampList; }
  inline bool QueryTimestampListHasBeenSet() const { return m_queryTimestampListHasBeenSet; }
  template <typename QueryTimestampListT = Aws::Vector<Aws::Utils::DateTime>>
  void SetQueryTimestampList(QueryTimestampListT&& value) {
    m_queryTimestampListHasBeenSet = true;
    m_queryTimestampList = std::forward<QueryTimestampListT>(value);
  }
  template <typename QueryTimestampListT = Aws::Vector<Aws::Utils::DateTime>>
  OmitsSerializingEmptyListsRequest& WithQueryTimestampList(QueryTimestampListT&& value) {
    SetQueryTimestampList(std::forward<QueryTimestampListT>(value));
    return *this;
  }
  template <typename QueryTimestampListT = Aws::Utils::DateTime>
  OmitsSerializingEmptyListsRequest& AddQueryTimestampList(QueryTimestampListT&& value) {
    m_queryTimestampListHasBeenSet = true;
    m_queryTimestampList.emplace_back(std::forward<QueryTimestampListT>(value));
    return *this;
  }
  ///@}

  ///@{

  inline const Aws::Vector<FooEnum>& GetQueryEnumList() const { return m_queryEnumList; }
  inline bool QueryEnumListHasBeenSet() const { return m_queryEnumListHasBeenSet; }
  template <typename QueryEnumListT = Aws::Vector<FooEnum>>
  void SetQueryEnumList(QueryEnumListT&& value) {
    m_queryEnumListHasBeenSet = true;
    m_queryEnumList = std::forward<QueryEnumListT>(value);
  }
  template <typename QueryEnumListT = Aws::Vector<FooEnum>>
  OmitsSerializingEmptyListsRequest& WithQueryEnumList(QueryEnumListT&& value) {
    SetQueryEnumList(std::forward<QueryEnumListT>(value));
    return *this;
  }
  inline OmitsSerializingEmptyListsRequest& AddQueryEnumList(FooEnum value) {
    m_queryEnumListHasBeenSet = true;
    m_queryEnumList.push_back(value);
    return *this;
  }
  ///@}

  ///@{

  inline const Aws::Vector<int>& GetQueryIntegerEnumList() const { return m_queryIntegerEnumList; }
  inline bool QueryIntegerEnumListHasBeenSet() const { return m_queryIntegerEnumListHasBeenSet; }
  template <typename QueryIntegerEnumListT = Aws::Vector<int>>
  void SetQueryIntegerEnumList(QueryIntegerEnumListT&& value) {
    m_queryIntegerEnumListHasBeenSet = true;
    m_queryIntegerEnumList = std::forward<QueryIntegerEnumListT>(value);
  }
  template <typename QueryIntegerEnumListT = Aws::Vector<int>>
  OmitsSerializingEmptyListsRequest& WithQueryIntegerEnumList(QueryIntegerEnumListT&& value) {
    SetQueryIntegerEnumList(std::forward<QueryIntegerEnumListT>(value));
    return *this;
  }
  inline OmitsSerializingEmptyListsRequest& AddQueryIntegerEnumList(int value) {
    m_queryIntegerEnumListHasBeenSet = true;
    m_queryIntegerEnumList.push_back(value);
    return *this;
  }
  ///@}
 private:
  Aws::Vector<Aws::String> m_queryStringList;
  bool m_queryStringListHasBeenSet = false;

  Aws::Vector<int> m_queryIntegerList;
  bool m_queryIntegerListHasBeenSet = false;

  Aws::Vector<double> m_queryDoubleList;
  bool m_queryDoubleListHasBeenSet = false;

  Aws::Vector<bool> m_queryBooleanList;
  bool m_queryBooleanListHasBeenSet = false;

  Aws::Vector<Aws::Utils::DateTime> m_queryTimestampList;
  bool m_queryTimestampListHasBeenSet = false;

  Aws::Vector<FooEnum> m_queryEnumList;
  bool m_queryEnumListHasBeenSet = false;

  Aws::Vector<int> m_queryIntegerEnumList;
  bool m_queryIntegerEnumListHasBeenSet = false;
};

}  // namespace Model
}  // namespace RestJsonProtocol
}  // namespace Aws
