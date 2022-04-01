﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lookoutvision/LookoutforVision_EXPORTS.h>
#include <aws/lookoutvision/LookoutforVisionRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace LookoutforVision
{
namespace Model
{

  /**
   */
  class AWS_LOOKOUTFORVISION_API DescribeModelRequest : public LookoutforVisionRequest
  {
  public:
    DescribeModelRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeModel"; }

    Aws::String SerializePayload() const override;


    /**
     * <p>The project that contains the version of a model that you want to
     * describe.</p>
     */
    inline const Aws::String& GetProjectName() const{ return m_projectName; }

    /**
     * <p>The project that contains the version of a model that you want to
     * describe.</p>
     */
    inline bool ProjectNameHasBeenSet() const { return m_projectNameHasBeenSet; }

    /**
     * <p>The project that contains the version of a model that you want to
     * describe.</p>
     */
    inline void SetProjectName(const Aws::String& value) { m_projectNameHasBeenSet = true; m_projectName = value; }

    /**
     * <p>The project that contains the version of a model that you want to
     * describe.</p>
     */
    inline void SetProjectName(Aws::String&& value) { m_projectNameHasBeenSet = true; m_projectName = std::move(value); }

    /**
     * <p>The project that contains the version of a model that you want to
     * describe.</p>
     */
    inline void SetProjectName(const char* value) { m_projectNameHasBeenSet = true; m_projectName.assign(value); }

    /**
     * <p>The project that contains the version of a model that you want to
     * describe.</p>
     */
    inline DescribeModelRequest& WithProjectName(const Aws::String& value) { SetProjectName(value); return *this;}

    /**
     * <p>The project that contains the version of a model that you want to
     * describe.</p>
     */
    inline DescribeModelRequest& WithProjectName(Aws::String&& value) { SetProjectName(std::move(value)); return *this;}

    /**
     * <p>The project that contains the version of a model that you want to
     * describe.</p>
     */
    inline DescribeModelRequest& WithProjectName(const char* value) { SetProjectName(value); return *this;}


    /**
     * <p>The version of the model that you want to describe.</p>
     */
    inline const Aws::String& GetModelVersion() const{ return m_modelVersion; }

    /**
     * <p>The version of the model that you want to describe.</p>
     */
    inline bool ModelVersionHasBeenSet() const { return m_modelVersionHasBeenSet; }

    /**
     * <p>The version of the model that you want to describe.</p>
     */
    inline void SetModelVersion(const Aws::String& value) { m_modelVersionHasBeenSet = true; m_modelVersion = value; }

    /**
     * <p>The version of the model that you want to describe.</p>
     */
    inline void SetModelVersion(Aws::String&& value) { m_modelVersionHasBeenSet = true; m_modelVersion = std::move(value); }

    /**
     * <p>The version of the model that you want to describe.</p>
     */
    inline void SetModelVersion(const char* value) { m_modelVersionHasBeenSet = true; m_modelVersion.assign(value); }

    /**
     * <p>The version of the model that you want to describe.</p>
     */
    inline DescribeModelRequest& WithModelVersion(const Aws::String& value) { SetModelVersion(value); return *this;}

    /**
     * <p>The version of the model that you want to describe.</p>
     */
    inline DescribeModelRequest& WithModelVersion(Aws::String&& value) { SetModelVersion(std::move(value)); return *this;}

    /**
     * <p>The version of the model that you want to describe.</p>
     */
    inline DescribeModelRequest& WithModelVersion(const char* value) { SetModelVersion(value); return *this;}

  private:

    Aws::String m_projectName;
    bool m_projectNameHasBeenSet;

    Aws::String m_modelVersion;
    bool m_modelVersionHasBeenSet;
  };

} // namespace Model
} // namespace LookoutforVision
} // namespace Aws
