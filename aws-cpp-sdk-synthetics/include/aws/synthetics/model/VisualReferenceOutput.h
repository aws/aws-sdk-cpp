/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/synthetics/Synthetics_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/synthetics/model/BaseScreenshot.h>
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
namespace Synthetics
{
namespace Model
{

  class AWS_SYNTHETICS_API VisualReferenceOutput
  {
  public:
    VisualReferenceOutput();
    VisualReferenceOutput(Aws::Utils::Json::JsonView jsonValue);
    VisualReferenceOutput& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    
    inline const Aws::Vector<BaseScreenshot>& GetBaseScreenshots() const{ return m_baseScreenshots; }

    
    inline bool BaseScreenshotsHasBeenSet() const { return m_baseScreenshotsHasBeenSet; }

    
    inline void SetBaseScreenshots(const Aws::Vector<BaseScreenshot>& value) { m_baseScreenshotsHasBeenSet = true; m_baseScreenshots = value; }

    
    inline void SetBaseScreenshots(Aws::Vector<BaseScreenshot>&& value) { m_baseScreenshotsHasBeenSet = true; m_baseScreenshots = std::move(value); }

    
    inline VisualReferenceOutput& WithBaseScreenshots(const Aws::Vector<BaseScreenshot>& value) { SetBaseScreenshots(value); return *this;}

    
    inline VisualReferenceOutput& WithBaseScreenshots(Aws::Vector<BaseScreenshot>&& value) { SetBaseScreenshots(std::move(value)); return *this;}

    
    inline VisualReferenceOutput& AddBaseScreenshots(const BaseScreenshot& value) { m_baseScreenshotsHasBeenSet = true; m_baseScreenshots.push_back(value); return *this; }

    
    inline VisualReferenceOutput& AddBaseScreenshots(BaseScreenshot&& value) { m_baseScreenshotsHasBeenSet = true; m_baseScreenshots.push_back(std::move(value)); return *this; }


    
    inline const Aws::String& GetBaseCanaryRunId() const{ return m_baseCanaryRunId; }

    
    inline bool BaseCanaryRunIdHasBeenSet() const { return m_baseCanaryRunIdHasBeenSet; }

    
    inline void SetBaseCanaryRunId(const Aws::String& value) { m_baseCanaryRunIdHasBeenSet = true; m_baseCanaryRunId = value; }

    
    inline void SetBaseCanaryRunId(Aws::String&& value) { m_baseCanaryRunIdHasBeenSet = true; m_baseCanaryRunId = std::move(value); }

    
    inline void SetBaseCanaryRunId(const char* value) { m_baseCanaryRunIdHasBeenSet = true; m_baseCanaryRunId.assign(value); }

    
    inline VisualReferenceOutput& WithBaseCanaryRunId(const Aws::String& value) { SetBaseCanaryRunId(value); return *this;}

    
    inline VisualReferenceOutput& WithBaseCanaryRunId(Aws::String&& value) { SetBaseCanaryRunId(std::move(value)); return *this;}

    
    inline VisualReferenceOutput& WithBaseCanaryRunId(const char* value) { SetBaseCanaryRunId(value); return *this;}

  private:

    Aws::Vector<BaseScreenshot> m_baseScreenshots;
    bool m_baseScreenshotsHasBeenSet;

    Aws::String m_baseCanaryRunId;
    bool m_baseCanaryRunIdHasBeenSet;
  };

} // namespace Model
} // namespace Synthetics
} // namespace Aws
