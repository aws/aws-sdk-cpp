/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ecr-public/ECRPublic_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ecr-public/model/LayerFailureCode.h>
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
namespace ECRPublic
{
namespace Model
{

  /**
   * <p>An object that represents an Amazon ECR image layer failure.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ecr-public-2020-10-30/LayerFailure">AWS
   * API Reference</a></p>
   */
  class LayerFailure
  {
  public:
    AWS_ECRPUBLIC_API LayerFailure() = default;
    AWS_ECRPUBLIC_API LayerFailure(Aws::Utils::Json::JsonView jsonValue);
    AWS_ECRPUBLIC_API LayerFailure& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_ECRPUBLIC_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The layer digest that's associated with the failure.</p>
     */
    inline const Aws::String& GetLayerDigest() const { return m_layerDigest; }
    inline bool LayerDigestHasBeenSet() const { return m_layerDigestHasBeenSet; }
    template<typename LayerDigestT = Aws::String>
    void SetLayerDigest(LayerDigestT&& value) { m_layerDigestHasBeenSet = true; m_layerDigest = std::forward<LayerDigestT>(value); }
    template<typename LayerDigestT = Aws::String>
    LayerFailure& WithLayerDigest(LayerDigestT&& value) { SetLayerDigest(std::forward<LayerDigestT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The failure code that's associated with the failure.</p>
     */
    inline LayerFailureCode GetFailureCode() const { return m_failureCode; }
    inline bool FailureCodeHasBeenSet() const { return m_failureCodeHasBeenSet; }
    inline void SetFailureCode(LayerFailureCode value) { m_failureCodeHasBeenSet = true; m_failureCode = value; }
    inline LayerFailure& WithFailureCode(LayerFailureCode value) { SetFailureCode(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The reason for the failure.</p>
     */
    inline const Aws::String& GetFailureReason() const { return m_failureReason; }
    inline bool FailureReasonHasBeenSet() const { return m_failureReasonHasBeenSet; }
    template<typename FailureReasonT = Aws::String>
    void SetFailureReason(FailureReasonT&& value) { m_failureReasonHasBeenSet = true; m_failureReason = std::forward<FailureReasonT>(value); }
    template<typename FailureReasonT = Aws::String>
    LayerFailure& WithFailureReason(FailureReasonT&& value) { SetFailureReason(std::forward<FailureReasonT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_layerDigest;
    bool m_layerDigestHasBeenSet = false;

    LayerFailureCode m_failureCode{LayerFailureCode::NOT_SET};
    bool m_failureCodeHasBeenSet = false;

    Aws::String m_failureReason;
    bool m_failureReasonHasBeenSet = false;
  };

} // namespace Model
} // namespace ECRPublic
} // namespace Aws
