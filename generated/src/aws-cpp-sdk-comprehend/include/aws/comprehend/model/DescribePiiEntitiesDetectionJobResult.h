﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/comprehend/Comprehend_EXPORTS.h>
#include <aws/comprehend/model/PiiEntitiesDetectionJobProperties.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace Comprehend
{
namespace Model
{
  class DescribePiiEntitiesDetectionJobResult
  {
  public:
    AWS_COMPREHEND_API DescribePiiEntitiesDetectionJobResult() = default;
    AWS_COMPREHEND_API DescribePiiEntitiesDetectionJobResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_COMPREHEND_API DescribePiiEntitiesDetectionJobResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    
    inline const PiiEntitiesDetectionJobProperties& GetPiiEntitiesDetectionJobProperties() const { return m_piiEntitiesDetectionJobProperties; }
    template<typename PiiEntitiesDetectionJobPropertiesT = PiiEntitiesDetectionJobProperties>
    void SetPiiEntitiesDetectionJobProperties(PiiEntitiesDetectionJobPropertiesT&& value) { m_piiEntitiesDetectionJobPropertiesHasBeenSet = true; m_piiEntitiesDetectionJobProperties = std::forward<PiiEntitiesDetectionJobPropertiesT>(value); }
    template<typename PiiEntitiesDetectionJobPropertiesT = PiiEntitiesDetectionJobProperties>
    DescribePiiEntitiesDetectionJobResult& WithPiiEntitiesDetectionJobProperties(PiiEntitiesDetectionJobPropertiesT&& value) { SetPiiEntitiesDetectionJobProperties(std::forward<PiiEntitiesDetectionJobPropertiesT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    DescribePiiEntitiesDetectionJobResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    PiiEntitiesDetectionJobProperties m_piiEntitiesDetectionJobProperties;
    bool m_piiEntitiesDetectionJobPropertiesHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Comprehend
} // namespace Aws
