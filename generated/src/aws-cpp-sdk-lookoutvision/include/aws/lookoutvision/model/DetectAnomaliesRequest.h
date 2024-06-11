/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lookoutvision/LookoutforVision_EXPORTS.h>
#include <aws/lookoutvision/LookoutforVisionRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/Array.h>
#include <utility>

namespace Aws
{
namespace LookoutforVision
{
namespace Model
{

  /**
   */
  class DetectAnomaliesRequest : public StreamingLookoutforVisionRequest
  {
  public:
    AWS_LOOKOUTFORVISION_API DetectAnomaliesRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DetectAnomalies"; }


    ///@{
    /**
     * <p>The name of the project that contains the model version that you want to
     * use.</p>
     */
    inline const Aws::String& GetProjectName() const{ return m_projectName; }
    inline bool ProjectNameHasBeenSet() const { return m_projectNameHasBeenSet; }
    inline void SetProjectName(const Aws::String& value) { m_projectNameHasBeenSet = true; m_projectName = value; }
    inline void SetProjectName(Aws::String&& value) { m_projectNameHasBeenSet = true; m_projectName = std::move(value); }
    inline void SetProjectName(const char* value) { m_projectNameHasBeenSet = true; m_projectName.assign(value); }
    inline DetectAnomaliesRequest& WithProjectName(const Aws::String& value) { SetProjectName(value); return *this;}
    inline DetectAnomaliesRequest& WithProjectName(Aws::String&& value) { SetProjectName(std::move(value)); return *this;}
    inline DetectAnomaliesRequest& WithProjectName(const char* value) { SetProjectName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The version of the model that you want to use.</p>
     */
    inline const Aws::String& GetModelVersion() const{ return m_modelVersion; }
    inline bool ModelVersionHasBeenSet() const { return m_modelVersionHasBeenSet; }
    inline void SetModelVersion(const Aws::String& value) { m_modelVersionHasBeenSet = true; m_modelVersion = value; }
    inline void SetModelVersion(Aws::String&& value) { m_modelVersionHasBeenSet = true; m_modelVersion = std::move(value); }
    inline void SetModelVersion(const char* value) { m_modelVersionHasBeenSet = true; m_modelVersion.assign(value); }
    inline DetectAnomaliesRequest& WithModelVersion(const Aws::String& value) { SetModelVersion(value); return *this;}
    inline DetectAnomaliesRequest& WithModelVersion(Aws::String&& value) { SetModelVersion(std::move(value)); return *this;}
    inline DetectAnomaliesRequest& WithModelVersion(const char* value) { SetModelVersion(value); return *this;}
    ///@}
  private:

    Aws::String m_projectName;
    bool m_projectNameHasBeenSet = false;

    Aws::String m_modelVersion;
    bool m_modelVersionHasBeenSet = false;

  };

} // namespace Model
} // namespace LookoutforVision
} // namespace Aws
