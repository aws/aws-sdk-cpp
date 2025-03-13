/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/machinelearning/MachineLearning_EXPORTS.h>
#include <aws/machinelearning/MachineLearningRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace MachineLearning
{
namespace Model
{

  /**
   */
  class GetMLModelRequest : public MachineLearningRequest
  {
  public:
    AWS_MACHINELEARNING_API GetMLModelRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetMLModel"; }

    AWS_MACHINELEARNING_API Aws::String SerializePayload() const override;

    AWS_MACHINELEARNING_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The ID assigned to the <code>MLModel</code> at creation.</p>
     */
    inline const Aws::String& GetMLModelId() const { return m_mLModelId; }
    inline bool MLModelIdHasBeenSet() const { return m_mLModelIdHasBeenSet; }
    template<typename MLModelIdT = Aws::String>
    void SetMLModelId(MLModelIdT&& value) { m_mLModelIdHasBeenSet = true; m_mLModelId = std::forward<MLModelIdT>(value); }
    template<typename MLModelIdT = Aws::String>
    GetMLModelRequest& WithMLModelId(MLModelIdT&& value) { SetMLModelId(std::forward<MLModelIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies whether the <code>GetMLModel</code> operation should return
     * <code>Recipe</code>.</p> <p>If true, <code>Recipe</code> is returned.</p> <p>If
     * false, <code>Recipe</code> is not returned.</p>
     */
    inline bool GetVerbose() const { return m_verbose; }
    inline bool VerboseHasBeenSet() const { return m_verboseHasBeenSet; }
    inline void SetVerbose(bool value) { m_verboseHasBeenSet = true; m_verbose = value; }
    inline GetMLModelRequest& WithVerbose(bool value) { SetVerbose(value); return *this;}
    ///@}
  private:

    Aws::String m_mLModelId;
    bool m_mLModelIdHasBeenSet = false;

    bool m_verbose{false};
    bool m_verboseHasBeenSet = false;
  };

} // namespace Model
} // namespace MachineLearning
} // namespace Aws
