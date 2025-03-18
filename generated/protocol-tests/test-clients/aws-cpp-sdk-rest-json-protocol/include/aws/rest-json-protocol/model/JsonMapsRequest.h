﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/rest-json-protocol/RestJsonProtocol_EXPORTS.h>
#include <aws/rest-json-protocol/RestJsonProtocolRequest.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/rest-json-protocol/model/GreetingStruct.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <utility>

namespace Aws
{
namespace RestJsonProtocol
{
namespace Model
{

  /**
   */
  class JsonMapsRequest : public RestJsonProtocolRequest
  {
  public:
    AWS_RESTJSONPROTOCOL_API JsonMapsRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "JsonMaps"; }

    AWS_RESTJSONPROTOCOL_API Aws::String SerializePayload() const override;

    AWS_RESTJSONPROTOCOL_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    
    inline const Aws::Map<Aws::String, GreetingStruct>& GetDenseStructMap() const { return m_denseStructMap; }
    inline bool DenseStructMapHasBeenSet() const { return m_denseStructMapHasBeenSet; }
    template<typename DenseStructMapT = Aws::Map<Aws::String, GreetingStruct>>
    void SetDenseStructMap(DenseStructMapT&& value) { m_denseStructMapHasBeenSet = true; m_denseStructMap = std::forward<DenseStructMapT>(value); }
    template<typename DenseStructMapT = Aws::Map<Aws::String, GreetingStruct>>
    JsonMapsRequest& WithDenseStructMap(DenseStructMapT&& value) { SetDenseStructMap(std::forward<DenseStructMapT>(value)); return *this;}
    template<typename DenseStructMapKeyT = Aws::String, typename DenseStructMapValueT = GreetingStruct>
    JsonMapsRequest& AddDenseStructMap(DenseStructMapKeyT&& key, DenseStructMapValueT&& value) {
      m_denseStructMapHasBeenSet = true; m_denseStructMap.emplace(std::forward<DenseStructMapKeyT>(key), std::forward<DenseStructMapValueT>(value)); return *this;
    }
    ///@}

    ///@{
    
    inline const Aws::Map<Aws::String, int>& GetDenseNumberMap() const { return m_denseNumberMap; }
    inline bool DenseNumberMapHasBeenSet() const { return m_denseNumberMapHasBeenSet; }
    template<typename DenseNumberMapT = Aws::Map<Aws::String, int>>
    void SetDenseNumberMap(DenseNumberMapT&& value) { m_denseNumberMapHasBeenSet = true; m_denseNumberMap = std::forward<DenseNumberMapT>(value); }
    template<typename DenseNumberMapT = Aws::Map<Aws::String, int>>
    JsonMapsRequest& WithDenseNumberMap(DenseNumberMapT&& value) { SetDenseNumberMap(std::forward<DenseNumberMapT>(value)); return *this;}
    inline JsonMapsRequest& AddDenseNumberMap(Aws::String key, int value) {
      m_denseNumberMapHasBeenSet = true; m_denseNumberMap.emplace(key, value); return *this;
    }
    ///@}

    ///@{
    
    inline const Aws::Map<Aws::String, bool>& GetDenseBooleanMap() const { return m_denseBooleanMap; }
    inline bool DenseBooleanMapHasBeenSet() const { return m_denseBooleanMapHasBeenSet; }
    template<typename DenseBooleanMapT = Aws::Map<Aws::String, bool>>
    void SetDenseBooleanMap(DenseBooleanMapT&& value) { m_denseBooleanMapHasBeenSet = true; m_denseBooleanMap = std::forward<DenseBooleanMapT>(value); }
    template<typename DenseBooleanMapT = Aws::Map<Aws::String, bool>>
    JsonMapsRequest& WithDenseBooleanMap(DenseBooleanMapT&& value) { SetDenseBooleanMap(std::forward<DenseBooleanMapT>(value)); return *this;}
    inline JsonMapsRequest& AddDenseBooleanMap(Aws::String key, bool value) {
      m_denseBooleanMapHasBeenSet = true; m_denseBooleanMap.emplace(key, value); return *this;
    }
    ///@}

    ///@{
    
    inline const Aws::Map<Aws::String, Aws::String>& GetDenseStringMap() const { return m_denseStringMap; }
    inline bool DenseStringMapHasBeenSet() const { return m_denseStringMapHasBeenSet; }
    template<typename DenseStringMapT = Aws::Map<Aws::String, Aws::String>>
    void SetDenseStringMap(DenseStringMapT&& value) { m_denseStringMapHasBeenSet = true; m_denseStringMap = std::forward<DenseStringMapT>(value); }
    template<typename DenseStringMapT = Aws::Map<Aws::String, Aws::String>>
    JsonMapsRequest& WithDenseStringMap(DenseStringMapT&& value) { SetDenseStringMap(std::forward<DenseStringMapT>(value)); return *this;}
    template<typename DenseStringMapKeyT = Aws::String, typename DenseStringMapValueT = Aws::String>
    JsonMapsRequest& AddDenseStringMap(DenseStringMapKeyT&& key, DenseStringMapValueT&& value) {
      m_denseStringMapHasBeenSet = true; m_denseStringMap.emplace(std::forward<DenseStringMapKeyT>(key), std::forward<DenseStringMapValueT>(value)); return *this;
    }
    ///@}

    ///@{
    
    inline const Aws::Map<Aws::String, Aws::Vector<Aws::String>>& GetDenseSetMap() const { return m_denseSetMap; }
    inline bool DenseSetMapHasBeenSet() const { return m_denseSetMapHasBeenSet; }
    template<typename DenseSetMapT = Aws::Map<Aws::String, Aws::Vector<Aws::String>>>
    void SetDenseSetMap(DenseSetMapT&& value) { m_denseSetMapHasBeenSet = true; m_denseSetMap = std::forward<DenseSetMapT>(value); }
    template<typename DenseSetMapT = Aws::Map<Aws::String, Aws::Vector<Aws::String>>>
    JsonMapsRequest& WithDenseSetMap(DenseSetMapT&& value) { SetDenseSetMap(std::forward<DenseSetMapT>(value)); return *this;}
    template<typename DenseSetMapKeyT = Aws::String, typename DenseSetMapValueT = Aws::Vector<Aws::String>>
    JsonMapsRequest& AddDenseSetMap(DenseSetMapKeyT&& key, DenseSetMapValueT&& value) {
      m_denseSetMapHasBeenSet = true; m_denseSetMap.emplace(std::forward<DenseSetMapKeyT>(key), std::forward<DenseSetMapValueT>(value)); return *this;
    }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    inline bool RequestIdHasBeenSet() const { return m_requestIdHasBeenSet; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    JsonMapsRequest& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Map<Aws::String, GreetingStruct> m_denseStructMap;
    bool m_denseStructMapHasBeenSet = false;

    Aws::Map<Aws::String, int> m_denseNumberMap;
    bool m_denseNumberMapHasBeenSet = false;

    Aws::Map<Aws::String, bool> m_denseBooleanMap;
    bool m_denseBooleanMapHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_denseStringMap;
    bool m_denseStringMapHasBeenSet = false;

    Aws::Map<Aws::String, Aws::Vector<Aws::String>> m_denseSetMap;
    bool m_denseSetMapHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace RestJsonProtocol
} // namespace Aws
