/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
  class LayerFailure
  {
  public:
    AWS_ECR_API LayerFailure();
    AWS_ECR_API LayerFailure(Aws::Utils::Json::JsonView jsonValue);
    AWS_ECR_API LayerFailure& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_ECR_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The layer digest associated with the failure.</p>
     */
    inline const Aws::String& GetLayerDigest() const{ return m_layerDigest; }
    inline bool LayerDigestHasBeenSet() const { return m_layerDigestHasBeenSet; }
    inline void SetLayerDigest(const Aws::String& value) { m_layerDigestHasBeenSet = true; m_layerDigest = value; }
    inline void SetLayerDigest(Aws::String&& value) { m_layerDigestHasBeenSet = true; m_layerDigest = std::move(value); }
    inline void SetLayerDigest(const char* value) { m_layerDigestHasBeenSet = true; m_layerDigest.assign(value); }
    inline LayerFailure& WithLayerDigest(const Aws::String& value) { SetLayerDigest(value); return *this;}
    inline LayerFailure& WithLayerDigest(Aws::String&& value) { SetLayerDigest(std::move(value)); return *this;}
    inline LayerFailure& WithLayerDigest(const char* value) { SetLayerDigest(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The failure code associated with the failure.</p>
     */
    inline const LayerFailureCode& GetFailureCode() const{ return m_failureCode; }
    inline bool FailureCodeHasBeenSet() const { return m_failureCodeHasBeenSet; }
    inline void SetFailureCode(const LayerFailureCode& value) { m_failureCodeHasBeenSet = true; m_failureCode = value; }
    inline void SetFailureCode(LayerFailureCode&& value) { m_failureCodeHasBeenSet = true; m_failureCode = std::move(value); }
    inline LayerFailure& WithFailureCode(const LayerFailureCode& value) { SetFailureCode(value); return *this;}
    inline LayerFailure& WithFailureCode(LayerFailureCode&& value) { SetFailureCode(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The reason for the failure.</p>
     */
    inline const Aws::String& GetFailureReason() const{ return m_failureReason; }
    inline bool FailureReasonHasBeenSet() const { return m_failureReasonHasBeenSet; }
    inline void SetFailureReason(const Aws::String& value) { m_failureReasonHasBeenSet = true; m_failureReason = value; }
    inline void SetFailureReason(Aws::String&& value) { m_failureReasonHasBeenSet = true; m_failureReason = std::move(value); }
    inline void SetFailureReason(const char* value) { m_failureReasonHasBeenSet = true; m_failureReason.assign(value); }
    inline LayerFailure& WithFailureReason(const Aws::String& value) { SetFailureReason(value); return *this;}
    inline LayerFailure& WithFailureReason(Aws::String&& value) { SetFailureReason(std::move(value)); return *this;}
    inline LayerFailure& WithFailureReason(const char* value) { SetFailureReason(value); return *this;}
    ///@}
  private:

    Aws::String m_layerDigest;
    bool m_layerDigestHasBeenSet = false;

    LayerFailureCode m_failureCode;
    bool m_failureCodeHasBeenSet = false;

    Aws::String m_failureReason;
    bool m_failureReasonHasBeenSet = false;
  };

} // namespace Model
} // namespace ECR
} // namespace Aws
