/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lambda/Lambda_EXPORTS.h>
#include <aws/lambda/LambdaRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Lambda
{
namespace Model
{

  /**
   */
  class DeleteLayerVersionRequest : public LambdaRequest
  {
  public:
    AWS_LAMBDA_API DeleteLayerVersionRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DeleteLayerVersion"; }

    AWS_LAMBDA_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The name or Amazon Resource Name (ARN) of the layer.</p>
     */
    inline const Aws::String& GetLayerName() const { return m_layerName; }
    inline bool LayerNameHasBeenSet() const { return m_layerNameHasBeenSet; }
    template<typename LayerNameT = Aws::String>
    void SetLayerName(LayerNameT&& value) { m_layerNameHasBeenSet = true; m_layerName = std::forward<LayerNameT>(value); }
    template<typename LayerNameT = Aws::String>
    DeleteLayerVersionRequest& WithLayerName(LayerNameT&& value) { SetLayerName(std::forward<LayerNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The version number.</p>
     */
    inline long long GetVersionNumber() const { return m_versionNumber; }
    inline bool VersionNumberHasBeenSet() const { return m_versionNumberHasBeenSet; }
    inline void SetVersionNumber(long long value) { m_versionNumberHasBeenSet = true; m_versionNumber = value; }
    inline DeleteLayerVersionRequest& WithVersionNumber(long long value) { SetVersionNumber(value); return *this;}
    ///@}
  private:

    Aws::String m_layerName;
    bool m_layerNameHasBeenSet = false;

    long long m_versionNumber{0};
    bool m_versionNumberHasBeenSet = false;
  };

} // namespace Model
} // namespace Lambda
} // namespace Aws
