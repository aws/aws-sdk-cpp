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
    AWS_GLUE_API StartImportLabelsTaskRunRequest();

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
    inline const Aws::String& GetTransformId() const{ return m_transformId; }
    inline bool TransformIdHasBeenSet() const { return m_transformIdHasBeenSet; }
    inline void SetTransformId(const Aws::String& value) { m_transformIdHasBeenSet = true; m_transformId = value; }
    inline void SetTransformId(Aws::String&& value) { m_transformIdHasBeenSet = true; m_transformId = std::move(value); }
    inline void SetTransformId(const char* value) { m_transformIdHasBeenSet = true; m_transformId.assign(value); }
    inline StartImportLabelsTaskRunRequest& WithTransformId(const Aws::String& value) { SetTransformId(value); return *this;}
    inline StartImportLabelsTaskRunRequest& WithTransformId(Aws::String&& value) { SetTransformId(std::move(value)); return *this;}
    inline StartImportLabelsTaskRunRequest& WithTransformId(const char* value) { SetTransformId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Simple Storage Service (Amazon S3) path from where you import the
     * labels.</p>
     */
    inline const Aws::String& GetInputS3Path() const{ return m_inputS3Path; }
    inline bool InputS3PathHasBeenSet() const { return m_inputS3PathHasBeenSet; }
    inline void SetInputS3Path(const Aws::String& value) { m_inputS3PathHasBeenSet = true; m_inputS3Path = value; }
    inline void SetInputS3Path(Aws::String&& value) { m_inputS3PathHasBeenSet = true; m_inputS3Path = std::move(value); }
    inline void SetInputS3Path(const char* value) { m_inputS3PathHasBeenSet = true; m_inputS3Path.assign(value); }
    inline StartImportLabelsTaskRunRequest& WithInputS3Path(const Aws::String& value) { SetInputS3Path(value); return *this;}
    inline StartImportLabelsTaskRunRequest& WithInputS3Path(Aws::String&& value) { SetInputS3Path(std::move(value)); return *this;}
    inline StartImportLabelsTaskRunRequest& WithInputS3Path(const char* value) { SetInputS3Path(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether to overwrite your existing labels.</p>
     */
    inline bool GetReplaceAllLabels() const{ return m_replaceAllLabels; }
    inline bool ReplaceAllLabelsHasBeenSet() const { return m_replaceAllLabelsHasBeenSet; }
    inline void SetReplaceAllLabels(bool value) { m_replaceAllLabelsHasBeenSet = true; m_replaceAllLabels = value; }
    inline StartImportLabelsTaskRunRequest& WithReplaceAllLabels(bool value) { SetReplaceAllLabels(value); return *this;}
    ///@}
  private:

    Aws::String m_transformId;
    bool m_transformIdHasBeenSet = false;

    Aws::String m_inputS3Path;
    bool m_inputS3PathHasBeenSet = false;

    bool m_replaceAllLabels;
    bool m_replaceAllLabelsHasBeenSet = false;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
