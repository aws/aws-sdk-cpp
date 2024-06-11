/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ecr/ECR_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ecr/model/Layer.h>
#include <aws/ecr/model/LayerFailure.h>
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
namespace ECR
{
namespace Model
{
  class BatchCheckLayerAvailabilityResult
  {
  public:
    AWS_ECR_API BatchCheckLayerAvailabilityResult();
    AWS_ECR_API BatchCheckLayerAvailabilityResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_ECR_API BatchCheckLayerAvailabilityResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A list of image layer objects corresponding to the image layer references in
     * the request.</p>
     */
    inline const Aws::Vector<Layer>& GetLayers() const{ return m_layers; }
    inline void SetLayers(const Aws::Vector<Layer>& value) { m_layers = value; }
    inline void SetLayers(Aws::Vector<Layer>&& value) { m_layers = std::move(value); }
    inline BatchCheckLayerAvailabilityResult& WithLayers(const Aws::Vector<Layer>& value) { SetLayers(value); return *this;}
    inline BatchCheckLayerAvailabilityResult& WithLayers(Aws::Vector<Layer>&& value) { SetLayers(std::move(value)); return *this;}
    inline BatchCheckLayerAvailabilityResult& AddLayers(const Layer& value) { m_layers.push_back(value); return *this; }
    inline BatchCheckLayerAvailabilityResult& AddLayers(Layer&& value) { m_layers.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Any failures associated with the call.</p>
     */
    inline const Aws::Vector<LayerFailure>& GetFailures() const{ return m_failures; }
    inline void SetFailures(const Aws::Vector<LayerFailure>& value) { m_failures = value; }
    inline void SetFailures(Aws::Vector<LayerFailure>&& value) { m_failures = std::move(value); }
    inline BatchCheckLayerAvailabilityResult& WithFailures(const Aws::Vector<LayerFailure>& value) { SetFailures(value); return *this;}
    inline BatchCheckLayerAvailabilityResult& WithFailures(Aws::Vector<LayerFailure>&& value) { SetFailures(std::move(value)); return *this;}
    inline BatchCheckLayerAvailabilityResult& AddFailures(const LayerFailure& value) { m_failures.push_back(value); return *this; }
    inline BatchCheckLayerAvailabilityResult& AddFailures(LayerFailure&& value) { m_failures.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline BatchCheckLayerAvailabilityResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline BatchCheckLayerAvailabilityResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline BatchCheckLayerAvailabilityResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<Layer> m_layers;

    Aws::Vector<LayerFailure> m_failures;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace ECR
} // namespace Aws
