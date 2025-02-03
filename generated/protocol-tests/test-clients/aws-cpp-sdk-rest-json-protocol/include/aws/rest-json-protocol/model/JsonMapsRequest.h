/**
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
    AWS_RESTJSONPROTOCOL_API JsonMapsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "JsonMaps"; }

    AWS_RESTJSONPROTOCOL_API Aws::String SerializePayload() const override;

    AWS_RESTJSONPROTOCOL_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    
    inline const Aws::Map<Aws::String, GreetingStruct>& GetDenseStructMap() const{ return m_denseStructMap; }
    inline bool DenseStructMapHasBeenSet() const { return m_denseStructMapHasBeenSet; }
    inline void SetDenseStructMap(const Aws::Map<Aws::String, GreetingStruct>& value) { m_denseStructMapHasBeenSet = true; m_denseStructMap = value; }
    inline void SetDenseStructMap(Aws::Map<Aws::String, GreetingStruct>&& value) { m_denseStructMapHasBeenSet = true; m_denseStructMap = std::move(value); }
    inline JsonMapsRequest& WithDenseStructMap(const Aws::Map<Aws::String, GreetingStruct>& value) { SetDenseStructMap(value); return *this;}
    inline JsonMapsRequest& WithDenseStructMap(Aws::Map<Aws::String, GreetingStruct>&& value) { SetDenseStructMap(std::move(value)); return *this;}
    inline JsonMapsRequest& AddDenseStructMap(const Aws::String& key, const GreetingStruct& value) { m_denseStructMapHasBeenSet = true; m_denseStructMap.emplace(key, value); return *this; }
    inline JsonMapsRequest& AddDenseStructMap(Aws::String&& key, const GreetingStruct& value) { m_denseStructMapHasBeenSet = true; m_denseStructMap.emplace(std::move(key), value); return *this; }
    inline JsonMapsRequest& AddDenseStructMap(const Aws::String& key, GreetingStruct&& value) { m_denseStructMapHasBeenSet = true; m_denseStructMap.emplace(key, std::move(value)); return *this; }
    inline JsonMapsRequest& AddDenseStructMap(Aws::String&& key, GreetingStruct&& value) { m_denseStructMapHasBeenSet = true; m_denseStructMap.emplace(std::move(key), std::move(value)); return *this; }
    inline JsonMapsRequest& AddDenseStructMap(const char* key, GreetingStruct&& value) { m_denseStructMapHasBeenSet = true; m_denseStructMap.emplace(key, std::move(value)); return *this; }
    inline JsonMapsRequest& AddDenseStructMap(const char* key, const GreetingStruct& value) { m_denseStructMapHasBeenSet = true; m_denseStructMap.emplace(key, value); return *this; }
    ///@}

    ///@{
    
    inline const Aws::Map<Aws::String, int>& GetDenseNumberMap() const{ return m_denseNumberMap; }
    inline bool DenseNumberMapHasBeenSet() const { return m_denseNumberMapHasBeenSet; }
    inline void SetDenseNumberMap(const Aws::Map<Aws::String, int>& value) { m_denseNumberMapHasBeenSet = true; m_denseNumberMap = value; }
    inline void SetDenseNumberMap(Aws::Map<Aws::String, int>&& value) { m_denseNumberMapHasBeenSet = true; m_denseNumberMap = std::move(value); }
    inline JsonMapsRequest& WithDenseNumberMap(const Aws::Map<Aws::String, int>& value) { SetDenseNumberMap(value); return *this;}
    inline JsonMapsRequest& WithDenseNumberMap(Aws::Map<Aws::String, int>&& value) { SetDenseNumberMap(std::move(value)); return *this;}
    inline JsonMapsRequest& AddDenseNumberMap(const Aws::String& key, int value) { m_denseNumberMapHasBeenSet = true; m_denseNumberMap.emplace(key, value); return *this; }
    inline JsonMapsRequest& AddDenseNumberMap(Aws::String&& key, int value) { m_denseNumberMapHasBeenSet = true; m_denseNumberMap.emplace(std::move(key), value); return *this; }
    inline JsonMapsRequest& AddDenseNumberMap(const char* key, int value) { m_denseNumberMapHasBeenSet = true; m_denseNumberMap.emplace(key, value); return *this; }
    ///@}

    ///@{
    
    inline const Aws::Map<Aws::String, bool>& GetDenseBooleanMap() const{ return m_denseBooleanMap; }
    inline bool DenseBooleanMapHasBeenSet() const { return m_denseBooleanMapHasBeenSet; }
    inline void SetDenseBooleanMap(const Aws::Map<Aws::String, bool>& value) { m_denseBooleanMapHasBeenSet = true; m_denseBooleanMap = value; }
    inline void SetDenseBooleanMap(Aws::Map<Aws::String, bool>&& value) { m_denseBooleanMapHasBeenSet = true; m_denseBooleanMap = std::move(value); }
    inline JsonMapsRequest& WithDenseBooleanMap(const Aws::Map<Aws::String, bool>& value) { SetDenseBooleanMap(value); return *this;}
    inline JsonMapsRequest& WithDenseBooleanMap(Aws::Map<Aws::String, bool>&& value) { SetDenseBooleanMap(std::move(value)); return *this;}
    inline JsonMapsRequest& AddDenseBooleanMap(const Aws::String& key, bool value) { m_denseBooleanMapHasBeenSet = true; m_denseBooleanMap.emplace(key, value); return *this; }
    inline JsonMapsRequest& AddDenseBooleanMap(Aws::String&& key, bool value) { m_denseBooleanMapHasBeenSet = true; m_denseBooleanMap.emplace(std::move(key), value); return *this; }
    inline JsonMapsRequest& AddDenseBooleanMap(const char* key, bool value) { m_denseBooleanMapHasBeenSet = true; m_denseBooleanMap.emplace(key, value); return *this; }
    ///@}

    ///@{
    
    inline const Aws::Map<Aws::String, Aws::String>& GetDenseStringMap() const{ return m_denseStringMap; }
    inline bool DenseStringMapHasBeenSet() const { return m_denseStringMapHasBeenSet; }
    inline void SetDenseStringMap(const Aws::Map<Aws::String, Aws::String>& value) { m_denseStringMapHasBeenSet = true; m_denseStringMap = value; }
    inline void SetDenseStringMap(Aws::Map<Aws::String, Aws::String>&& value) { m_denseStringMapHasBeenSet = true; m_denseStringMap = std::move(value); }
    inline JsonMapsRequest& WithDenseStringMap(const Aws::Map<Aws::String, Aws::String>& value) { SetDenseStringMap(value); return *this;}
    inline JsonMapsRequest& WithDenseStringMap(Aws::Map<Aws::String, Aws::String>&& value) { SetDenseStringMap(std::move(value)); return *this;}
    inline JsonMapsRequest& AddDenseStringMap(const Aws::String& key, const Aws::String& value) { m_denseStringMapHasBeenSet = true; m_denseStringMap.emplace(key, value); return *this; }
    inline JsonMapsRequest& AddDenseStringMap(Aws::String&& key, const Aws::String& value) { m_denseStringMapHasBeenSet = true; m_denseStringMap.emplace(std::move(key), value); return *this; }
    inline JsonMapsRequest& AddDenseStringMap(const Aws::String& key, Aws::String&& value) { m_denseStringMapHasBeenSet = true; m_denseStringMap.emplace(key, std::move(value)); return *this; }
    inline JsonMapsRequest& AddDenseStringMap(Aws::String&& key, Aws::String&& value) { m_denseStringMapHasBeenSet = true; m_denseStringMap.emplace(std::move(key), std::move(value)); return *this; }
    inline JsonMapsRequest& AddDenseStringMap(const char* key, Aws::String&& value) { m_denseStringMapHasBeenSet = true; m_denseStringMap.emplace(key, std::move(value)); return *this; }
    inline JsonMapsRequest& AddDenseStringMap(Aws::String&& key, const char* value) { m_denseStringMapHasBeenSet = true; m_denseStringMap.emplace(std::move(key), value); return *this; }
    inline JsonMapsRequest& AddDenseStringMap(const char* key, const char* value) { m_denseStringMapHasBeenSet = true; m_denseStringMap.emplace(key, value); return *this; }
    ///@}

    ///@{
    
    inline const Aws::Map<Aws::String, Aws::Vector<Aws::String>>& GetDenseSetMap() const{ return m_denseSetMap; }
    inline bool DenseSetMapHasBeenSet() const { return m_denseSetMapHasBeenSet; }
    inline void SetDenseSetMap(const Aws::Map<Aws::String, Aws::Vector<Aws::String>>& value) { m_denseSetMapHasBeenSet = true; m_denseSetMap = value; }
    inline void SetDenseSetMap(Aws::Map<Aws::String, Aws::Vector<Aws::String>>&& value) { m_denseSetMapHasBeenSet = true; m_denseSetMap = std::move(value); }
    inline JsonMapsRequest& WithDenseSetMap(const Aws::Map<Aws::String, Aws::Vector<Aws::String>>& value) { SetDenseSetMap(value); return *this;}
    inline JsonMapsRequest& WithDenseSetMap(Aws::Map<Aws::String, Aws::Vector<Aws::String>>&& value) { SetDenseSetMap(std::move(value)); return *this;}
    inline JsonMapsRequest& AddDenseSetMap(const Aws::String& key, const Aws::Vector<Aws::String>& value) { m_denseSetMapHasBeenSet = true; m_denseSetMap.emplace(key, value); return *this; }
    inline JsonMapsRequest& AddDenseSetMap(Aws::String&& key, const Aws::Vector<Aws::String>& value) { m_denseSetMapHasBeenSet = true; m_denseSetMap.emplace(std::move(key), value); return *this; }
    inline JsonMapsRequest& AddDenseSetMap(const Aws::String& key, Aws::Vector<Aws::String>&& value) { m_denseSetMapHasBeenSet = true; m_denseSetMap.emplace(key, std::move(value)); return *this; }
    inline JsonMapsRequest& AddDenseSetMap(Aws::String&& key, Aws::Vector<Aws::String>&& value) { m_denseSetMapHasBeenSet = true; m_denseSetMap.emplace(std::move(key), std::move(value)); return *this; }
    inline JsonMapsRequest& AddDenseSetMap(const char* key, Aws::Vector<Aws::String>&& value) { m_denseSetMapHasBeenSet = true; m_denseSetMap.emplace(key, std::move(value)); return *this; }
    inline JsonMapsRequest& AddDenseSetMap(const char* key, const Aws::Vector<Aws::String>& value) { m_denseSetMapHasBeenSet = true; m_denseSetMap.emplace(key, value); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline bool RequestIdHasBeenSet() const { return m_requestIdHasBeenSet; }
    inline void SetRequestId(const Aws::String& value) { m_requestIdHasBeenSet = true; m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestIdHasBeenSet = true; m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestIdHasBeenSet = true; m_requestId.assign(value); }
    inline JsonMapsRequest& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline JsonMapsRequest& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline JsonMapsRequest& WithRequestId(const char* value) { SetRequestId(value); return *this;}
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
