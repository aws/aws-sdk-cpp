/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/
#pragma once
#include <aws/ecr/ECR_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ecr/model/LayerAvailability.h>

namespace Aws
{
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

  /**
   * <p>An object representing an Amazon ECR image layer.</p>
   */
  class AWS_ECR_API Layer
  {
  public:
    Layer();
    Layer(const Aws::Utils::Json::JsonValue& jsonValue);
    Layer& operator=(const Aws::Utils::Json::JsonValue& jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;

    /**
     * <p>The <code>sha256</code> digest of the image layer.</p>
     */
    inline const Aws::String& GetLayerDigest() const{ return m_layerDigest; }

    /**
     * <p>The <code>sha256</code> digest of the image layer.</p>
     */
    inline void SetLayerDigest(const Aws::String& value) { m_layerDigestHasBeenSet = true; m_layerDigest = value; }

    /**
     * <p>The <code>sha256</code> digest of the image layer.</p>
     */
    inline void SetLayerDigest(Aws::String&& value) { m_layerDigestHasBeenSet = true; m_layerDigest = value; }

    /**
     * <p>The <code>sha256</code> digest of the image layer.</p>
     */
    inline void SetLayerDigest(const char* value) { m_layerDigestHasBeenSet = true; m_layerDigest.assign(value); }

    /**
     * <p>The <code>sha256</code> digest of the image layer.</p>
     */
    inline Layer& WithLayerDigest(const Aws::String& value) { SetLayerDigest(value); return *this;}

    /**
     * <p>The <code>sha256</code> digest of the image layer.</p>
     */
    inline Layer& WithLayerDigest(Aws::String&& value) { SetLayerDigest(value); return *this;}

    /**
     * <p>The <code>sha256</code> digest of the image layer.</p>
     */
    inline Layer& WithLayerDigest(const char* value) { SetLayerDigest(value); return *this;}

    /**
     * <p>The availability status of the image layer. Valid values are
     * <code>AVAILABLE</code> and <code>UNAVAILABLE</code>.</p>
     */
    inline const LayerAvailability& GetLayerAvailability() const{ return m_layerAvailability; }

    /**
     * <p>The availability status of the image layer. Valid values are
     * <code>AVAILABLE</code> and <code>UNAVAILABLE</code>.</p>
     */
    inline void SetLayerAvailability(const LayerAvailability& value) { m_layerAvailabilityHasBeenSet = true; m_layerAvailability = value; }

    /**
     * <p>The availability status of the image layer. Valid values are
     * <code>AVAILABLE</code> and <code>UNAVAILABLE</code>.</p>
     */
    inline void SetLayerAvailability(LayerAvailability&& value) { m_layerAvailabilityHasBeenSet = true; m_layerAvailability = value; }

    /**
     * <p>The availability status of the image layer. Valid values are
     * <code>AVAILABLE</code> and <code>UNAVAILABLE</code>.</p>
     */
    inline Layer& WithLayerAvailability(const LayerAvailability& value) { SetLayerAvailability(value); return *this;}

    /**
     * <p>The availability status of the image layer. Valid values are
     * <code>AVAILABLE</code> and <code>UNAVAILABLE</code>.</p>
     */
    inline Layer& WithLayerAvailability(LayerAvailability&& value) { SetLayerAvailability(value); return *this;}

    /**
     * <p>The size, in bytes, of the image layer.</p>
     */
    inline long long GetLayerSize() const{ return m_layerSize; }

    /**
     * <p>The size, in bytes, of the image layer.</p>
     */
    inline void SetLayerSize(long long value) { m_layerSizeHasBeenSet = true; m_layerSize = value; }

    /**
     * <p>The size, in bytes, of the image layer.</p>
     */
    inline Layer& WithLayerSize(long long value) { SetLayerSize(value); return *this;}

  private:
    Aws::String m_layerDigest;
    bool m_layerDigestHasBeenSet;
    LayerAvailability m_layerAvailability;
    bool m_layerAvailabilityHasBeenSet;
    long long m_layerSize;
    bool m_layerSizeHasBeenSet;
  };

} // namespace Model
} // namespace ECR
} // namespace Aws
