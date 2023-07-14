﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ecr-public/ECRPublic_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ecr-public/model/Layer.h>
#include <aws/ecr-public/model/LayerFailure.h>
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
namespace ECRPublic
{
namespace Model
{
  class AWS_ECRPUBLIC_API BatchCheckLayerAvailabilityResult
  {
  public:
    BatchCheckLayerAvailabilityResult();
    BatchCheckLayerAvailabilityResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    BatchCheckLayerAvailabilityResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>A list of image layer objects corresponding to the image layer references in
     * the request.</p>
     */
    inline const Aws::Vector<Layer>& GetLayers() const{ return m_layers; }

    /**
     * <p>A list of image layer objects corresponding to the image layer references in
     * the request.</p>
     */
    inline void SetLayers(const Aws::Vector<Layer>& value) { m_layers = value; }

    /**
     * <p>A list of image layer objects corresponding to the image layer references in
     * the request.</p>
     */
    inline void SetLayers(Aws::Vector<Layer>&& value) { m_layers = std::move(value); }

    /**
     * <p>A list of image layer objects corresponding to the image layer references in
     * the request.</p>
     */
    inline BatchCheckLayerAvailabilityResult& WithLayers(const Aws::Vector<Layer>& value) { SetLayers(value); return *this;}

    /**
     * <p>A list of image layer objects corresponding to the image layer references in
     * the request.</p>
     */
    inline BatchCheckLayerAvailabilityResult& WithLayers(Aws::Vector<Layer>&& value) { SetLayers(std::move(value)); return *this;}

    /**
     * <p>A list of image layer objects corresponding to the image layer references in
     * the request.</p>
     */
    inline BatchCheckLayerAvailabilityResult& AddLayers(const Layer& value) { m_layers.push_back(value); return *this; }

    /**
     * <p>A list of image layer objects corresponding to the image layer references in
     * the request.</p>
     */
    inline BatchCheckLayerAvailabilityResult& AddLayers(Layer&& value) { m_layers.push_back(std::move(value)); return *this; }


    /**
     * <p>Any failures associated with the call.</p>
     */
    inline const Aws::Vector<LayerFailure>& GetFailures() const{ return m_failures; }

    /**
     * <p>Any failures associated with the call.</p>
     */
    inline void SetFailures(const Aws::Vector<LayerFailure>& value) { m_failures = value; }

    /**
     * <p>Any failures associated with the call.</p>
     */
    inline void SetFailures(Aws::Vector<LayerFailure>&& value) { m_failures = std::move(value); }

    /**
     * <p>Any failures associated with the call.</p>
     */
    inline BatchCheckLayerAvailabilityResult& WithFailures(const Aws::Vector<LayerFailure>& value) { SetFailures(value); return *this;}

    /**
     * <p>Any failures associated with the call.</p>
     */
    inline BatchCheckLayerAvailabilityResult& WithFailures(Aws::Vector<LayerFailure>&& value) { SetFailures(std::move(value)); return *this;}

    /**
     * <p>Any failures associated with the call.</p>
     */
    inline BatchCheckLayerAvailabilityResult& AddFailures(const LayerFailure& value) { m_failures.push_back(value); return *this; }

    /**
     * <p>Any failures associated with the call.</p>
     */
    inline BatchCheckLayerAvailabilityResult& AddFailures(LayerFailure&& value) { m_failures.push_back(std::move(value)); return *this; }

  private:

    Aws::Vector<Layer> m_layers;

    Aws::Vector<LayerFailure> m_failures;
  };

} // namespace Model
} // namespace ECRPublic
} // namespace Aws
