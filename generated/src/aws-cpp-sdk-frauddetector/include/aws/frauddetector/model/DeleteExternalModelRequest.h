/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/frauddetector/FraudDetector_EXPORTS.h>
#include <aws/frauddetector/FraudDetectorRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace FraudDetector
{
namespace Model
{

  /**
   */
  class DeleteExternalModelRequest : public FraudDetectorRequest
  {
  public:
    AWS_FRAUDDETECTOR_API DeleteExternalModelRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DeleteExternalModel"; }

    AWS_FRAUDDETECTOR_API Aws::String SerializePayload() const override;

    AWS_FRAUDDETECTOR_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The endpoint of the Amazon Sagemaker model to delete.</p>
     */
    inline const Aws::String& GetModelEndpoint() const { return m_modelEndpoint; }
    inline bool ModelEndpointHasBeenSet() const { return m_modelEndpointHasBeenSet; }
    template<typename ModelEndpointT = Aws::String>
    void SetModelEndpoint(ModelEndpointT&& value) { m_modelEndpointHasBeenSet = true; m_modelEndpoint = std::forward<ModelEndpointT>(value); }
    template<typename ModelEndpointT = Aws::String>
    DeleteExternalModelRequest& WithModelEndpoint(ModelEndpointT&& value) { SetModelEndpoint(std::forward<ModelEndpointT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_modelEndpoint;
    bool m_modelEndpointHasBeenSet = false;
  };

} // namespace Model
} // namespace FraudDetector
} // namespace Aws
