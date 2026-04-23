/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/ecr/model/LayerFailureCode.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace ECR
{
namespace Model
{

  /**
   * <p>An object representing an Amazon ECR image layer failure.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ecr-2015-09-21/LayerFailure">AWS
   * API Reference</a></p>
   */
  class AWS_ECR_API LayerFailure
  {
  public:
    LayerFailure();
    LayerFailure(Aws::Utils::Json::JsonView jsonValue);
    LayerFailure& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The layer digest associated with the failure.</p>
     */
    inline const Aws::String& GetLayerDigest() const{ return m_layerDigest; }

    /**
     * <p>The layer digest associated with the failure.</p>
     */
    inline bool LayerDigestHasBeenSet() const { return m_layerDigestHasBeenSet; }

    /**
     * <p>The layer digest associated with the failure.</p>
     */
    inline void SetLayerDigest(const Aws::String& value) { m_layerDigestHasBeenSet = true; m_layerDigest = value; }

    /**
     * <p>The layer digest associated with the failure.</p>
     */
    inline void SetLayerDigest(Aws::String&& value) { m_layerDigestHasBeenSet = true; m_layerDigest = std::move(value); }

    /**
     * <p>The layer digest associated with the failure.</p>
     */
    inline void SetLayerDigest(const char* value) { m_layerDigestHasBeenSet = true; m_layerDigest.assign(value); }

    /**
     * <p>The layer digest associated with the failure.</p>
     */
    inline LayerFailure& WithLayerDigest(const Aws::String& value) { SetLayerDigest(value); return *this;}

    /**
     * <p>The layer digest associated with the failure.</p>
     */
    inline LayerFailure& WithLayerDigest(Aws::String&& value) { SetLayerDigest(std::move(value)); return *this;}

    /**
     * <p>The layer digest associated with the failure.</p>
     */
    inline LayerFailure& WithLayerDigest(const char* value) { SetLayerDigest(value); return *this;}


    /**
     * <p>The failure code associated with the failure.</p>
     */
    inline const LayerFailureCode& GetFailureCode() const{ return m_failureCode; }

    /**
     * <p>The failure code associated with the failure.</p>
     */
    inline bool FailureCodeHasBeenSet() const { return m_failureCodeHasBeenSet; }

    /**
     * <p>The failure code associated with the failure.</p>
     */
    inline void SetFailureCode(const LayerFailureCode& value) { m_failureCodeHasBeenSet = true; m_failureCode = value; }

    /**
     * <p>The failure code associated with the failure.</p>
     */
    inline void SetFailureCode(LayerFailureCode&& value) { m_failureCodeHasBeenSet = true; m_failureCode = std::move(value); }

    /**
     * <p>The failure code associated with the failure.</p>
     */
    inline LayerFailure& WithFailureCode(const LayerFailureCode& value) { SetFailureCode(value); return *this;}

    /**
     * <p>The failure code associated with the failure.</p>
     */
    inline LayerFailure& WithFailureCode(LayerFailureCode&& value) { SetFailureCode(std::move(value)); return *this;}


    /**
     * <p>The reason for the failure.</p>
     */
    inline const Aws::String& GetFailureReason() const{ return m_failureReason; }

    /**
     * <p>The reason for the failure.</p>
     */
    inline bool FailureReasonHasBeenSet() const { return m_failureReasonHasBeenSet; }

    /**
     * <p>The reason for the failure.</p>
     */
    inline void SetFailureReason(const Aws::String& value) { m_failureReasonHasBeenSet = true; m_failureReason = value; }

    /**
     * <p>The reason for the failure.</p>
     */
    inline void SetFailureReason(Aws::String&& value) { m_failureReasonHasBeenSet = true; m_failureReason = std::move(value); }

    /**
     * <p>The reason for the failure.</p>
     */
    inline void SetFailureReason(const char* value) { m_failureReasonHasBeenSet = true; m_failureReason.assign(value); }

    /**
     * <p>The reason for the failure.</p>
     */
    inline LayerFailure& WithFailureReason(const Aws::String& value) { SetFailureReason(value); return *this;}

    /**
     * <p>The reason for the failure.</p>
     */
    inline LayerFailure& WithFailureReason(Aws::String&& value) { SetFailureReason(std::move(value)); return *this;}

    /**
     * <p>The reason for the failure.</p>
     */
    inline LayerFailure& WithFailureReason(const char* value) { SetFailureReason(value); return *this;}

  private:

    Aws::String m_layerDigest;
    bool m_layerDigestHasBeenSet;

    LayerFailureCode m_failureCode;
    bool m_failureCodeHasBeenSet;

    Aws::String m_failureReason;
    bool m_failureReasonHasBeenSet;
  };

} // namespace Model
} // namespace ECR
} // namespace Aws
