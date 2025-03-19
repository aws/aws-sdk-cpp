/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/glue/Glue_EXPORTS.h>
#include <aws/glue/GlueRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Glue
{
namespace Model
{

  /**
   */
  class StartImportLabelsTaskRunRequest : public GlueRequest
  {
  public:
    AWS_GLUE_API StartImportLabelsTaskRunRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "StartImportLabelsTaskRun"; }

    AWS_GLUE_API Aws::String SerializePayload() const override;

    AWS_GLUE_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The unique identifier of the machine learning transform.</p>
     */
    inline const Aws::String& GetTransformId() const { return m_transformId; }
    inline bool TransformIdHasBeenSet() const { return m_transformIdHasBeenSet; }
    template<typename TransformIdT = Aws::String>
    void SetTransformId(TransformIdT&& value) { m_transformIdHasBeenSet = true; m_transformId = std::forward<TransformIdT>(value); }
    template<typename TransformIdT = Aws::String>
    StartImportLabelsTaskRunRequest& WithTransformId(TransformIdT&& value) { SetTransformId(std::forward<TransformIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Simple Storage Service (Amazon S3) path from where you import the
     * labels.</p>
     */
    inline const Aws::String& GetInputS3Path() const { return m_inputS3Path; }
    inline bool InputS3PathHasBeenSet() const { return m_inputS3PathHasBeenSet; }
    template<typename InputS3PathT = Aws::String>
    void SetInputS3Path(InputS3PathT&& value) { m_inputS3PathHasBeenSet = true; m_inputS3Path = std::forward<InputS3PathT>(value); }
    template<typename InputS3PathT = Aws::String>
    StartImportLabelsTaskRunRequest& WithInputS3Path(InputS3PathT&& value) { SetInputS3Path(std::forward<InputS3PathT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether to overwrite your existing labels.</p>
     */
    inline bool GetReplaceAllLabels() const { return m_replaceAllLabels; }
    inline bool ReplaceAllLabelsHasBeenSet() const { return m_replaceAllLabelsHasBeenSet; }
    inline void SetReplaceAllLabels(bool value) { m_replaceAllLabelsHasBeenSet = true; m_replaceAllLabels = value; }
    inline StartImportLabelsTaskRunRequest& WithReplaceAllLabels(bool value) { SetReplaceAllLabels(value); return *this;}
    ///@}
  private:

    Aws::String m_transformId;
    bool m_transformIdHasBeenSet = false;

    Aws::String m_inputS3Path;
    bool m_inputS3PathHasBeenSet = false;

    bool m_replaceAllLabels{false};
    bool m_replaceAllLabelsHasBeenSet = false;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
