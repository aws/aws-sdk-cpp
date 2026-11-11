/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/crt/cbor/Cbor.h>
#include <aws/rpcv2cborcorpustests/RpcV2CborCorpusTests_EXPORTS.h>
#include <aws/rpcv2cborcorpustests/model/HeartbeatEvent.h>
#include <aws/rpcv2cborcorpustests/model/ListEvent.h>
#include <aws/rpcv2cborcorpustests/model/MapEvent.h>
#include <aws/rpcv2cborcorpustests/model/ScalarsEvent.h>
#include <aws/rpcv2cborcorpustests/model/StructEvent.h>
#include <aws/rpcv2cborcorpustests/model/UnionEvent.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Cbor {
class CborValue;
}  // namespace Cbor
}  // namespace Utils
namespace RpcV2CborCorpusTests {
namespace Model {

class ResponseEventStream {
 public:
  AWS_RPCV2CBORCORPUSTESTS_API ResponseEventStream() = default;
  AWS_RPCV2CBORCORPUSTESTS_API ResponseEventStream(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder);
  AWS_RPCV2CBORCORPUSTESTS_API ResponseEventStream& operator=(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder);
  AWS_RPCV2CBORCORPUSTESTS_API void CborEncode(Aws::Crt::Cbor::CborEncoder& encoder) const;

  ///@{

  inline const ScalarsEvent& GetScalarsEvent() const { return m_scalarsEvent; }
  inline bool ScalarsEventHasBeenSet() const { return m_scalarsEventHasBeenSet; }
  template <typename ScalarsEventT = ScalarsEvent>
  void SetScalarsEvent(ScalarsEventT&& value) {
    m_scalarsEventHasBeenSet = true;
    m_scalarsEvent = std::forward<ScalarsEventT>(value);
  }
  template <typename ScalarsEventT = ScalarsEvent>
  ResponseEventStream& WithScalarsEvent(ScalarsEventT&& value) {
    SetScalarsEvent(std::forward<ScalarsEventT>(value));
    return *this;
  }
  ///@}

  ///@{

  inline const ListEvent& GetListEvent() const { return m_listEvent; }
  inline bool ListEventHasBeenSet() const { return m_listEventHasBeenSet; }
  template <typename ListEventT = ListEvent>
  void SetListEvent(ListEventT&& value) {
    m_listEventHasBeenSet = true;
    m_listEvent = std::forward<ListEventT>(value);
  }
  template <typename ListEventT = ListEvent>
  ResponseEventStream& WithListEvent(ListEventT&& value) {
    SetListEvent(std::forward<ListEventT>(value));
    return *this;
  }
  ///@}

  ///@{

  inline const MapEvent& GetMapEvent() const { return m_mapEvent; }
  inline bool MapEventHasBeenSet() const { return m_mapEventHasBeenSet; }
  template <typename MapEventT = MapEvent>
  void SetMapEvent(MapEventT&& value) {
    m_mapEventHasBeenSet = true;
    m_mapEvent = std::forward<MapEventT>(value);
  }
  template <typename MapEventT = MapEvent>
  ResponseEventStream& WithMapEvent(MapEventT&& value) {
    SetMapEvent(std::forward<MapEventT>(value));
    return *this;
  }
  ///@}

  ///@{

  inline const StructEvent& GetStructEvent() const { return m_structEvent; }
  inline bool StructEventHasBeenSet() const { return m_structEventHasBeenSet; }
  template <typename StructEventT = StructEvent>
  void SetStructEvent(StructEventT&& value) {
    m_structEventHasBeenSet = true;
    m_structEvent = std::forward<StructEventT>(value);
  }
  template <typename StructEventT = StructEvent>
  ResponseEventStream& WithStructEvent(StructEventT&& value) {
    SetStructEvent(std::forward<StructEventT>(value));
    return *this;
  }
  ///@}

  ///@{

  inline const UnionEvent& GetUnionEvent() const { return m_unionEvent; }
  inline bool UnionEventHasBeenSet() const { return m_unionEventHasBeenSet; }
  template <typename UnionEventT = UnionEvent>
  void SetUnionEvent(UnionEventT&& value) {
    m_unionEventHasBeenSet = true;
    m_unionEvent = std::forward<UnionEventT>(value);
  }
  template <typename UnionEventT = UnionEvent>
  ResponseEventStream& WithUnionEvent(UnionEventT&& value) {
    SetUnionEvent(std::forward<UnionEventT>(value));
    return *this;
  }
  ///@}

  ///@{

  inline const HeartbeatEvent& GetHeartbeatEvent() const { return m_heartbeatEvent; }
  inline bool HeartbeatEventHasBeenSet() const { return m_heartbeatEventHasBeenSet; }
  template <typename HeartbeatEventT = HeartbeatEvent>
  void SetHeartbeatEvent(HeartbeatEventT&& value) {
    m_heartbeatEventHasBeenSet = true;
    m_heartbeatEvent = std::forward<HeartbeatEventT>(value);
  }
  template <typename HeartbeatEventT = HeartbeatEvent>
  ResponseEventStream& WithHeartbeatEvent(HeartbeatEventT&& value) {
    SetHeartbeatEvent(std::forward<HeartbeatEventT>(value));
    return *this;
  }
  ///@}
 private:
  ScalarsEvent m_scalarsEvent;

  ListEvent m_listEvent;

  MapEvent m_mapEvent;

  StructEvent m_structEvent;

  UnionEvent m_unionEvent;

  HeartbeatEvent m_heartbeatEvent;
  bool m_scalarsEventHasBeenSet = false;
  bool m_listEventHasBeenSet = false;
  bool m_mapEventHasBeenSet = false;
  bool m_structEventHasBeenSet = false;
  bool m_unionEventHasBeenSet = false;
  bool m_heartbeatEventHasBeenSet = false;
};

}  // namespace Model
}  // namespace RpcV2CborCorpusTests
}  // namespace Aws
