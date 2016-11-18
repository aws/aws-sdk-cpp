/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/
#pragma once
#include <aws/codepipeline/CodePipeline_EXPORTS.h>
#include <aws/codepipeline/CodePipelineRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace CodePipeline
{
namespace Model
{

  /**
   * <p>Represents the input of a get pipeline action.</p>
   */
  class AWS_CODEPIPELINE_API GetPipelineRequest : public CodePipelineRequest
  {
  public:
    GetPipelineRequest();
    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

    /**
     * <p>The name of the pipeline for which you want to get information. Pipeline
     * names must be unique under an Amazon Web Services (AWS) user account.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the pipeline for which you want to get information. Pipeline
     * names must be unique under an Amazon Web Services (AWS) user account.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the pipeline for which you want to get information. Pipeline
     * names must be unique under an Amazon Web Services (AWS) user account.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the pipeline for which you want to get information. Pipeline
     * names must be unique under an Amazon Web Services (AWS) user account.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the pipeline for which you want to get information. Pipeline
     * names must be unique under an Amazon Web Services (AWS) user account.</p>
     */
    inline GetPipelineRequest& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the pipeline for which you want to get information. Pipeline
     * names must be unique under an Amazon Web Services (AWS) user account.</p>
     */
    inline GetPipelineRequest& WithName(Aws::String&& value) { SetName(value); return *this;}

    /**
     * <p>The name of the pipeline for which you want to get information. Pipeline
     * names must be unique under an Amazon Web Services (AWS) user account.</p>
     */
    inline GetPipelineRequest& WithName(const char* value) { SetName(value); return *this;}

    /**
     * <p>The version number of the pipeline. If you do not specify a version, defaults
     * to the most current version.</p>
     */
    inline int GetVersion() const{ return m_version; }

    /**
     * <p>The version number of the pipeline. If you do not specify a version, defaults
     * to the most current version.</p>
     */
    inline void SetVersion(int value) { m_versionHasBeenSet = true; m_version = value; }

    /**
     * <p>The version number of the pipeline. If you do not specify a version, defaults
     * to the most current version.</p>
     */
    inline GetPipelineRequest& WithVersion(int value) { SetVersion(value); return *this;}

  private:
    Aws::String m_name;
    bool m_nameHasBeenSet;
    int m_version;
    bool m_versionHasBeenSet;
  };

} // namespace Model
} // namespace CodePipeline
} // namespace Aws
