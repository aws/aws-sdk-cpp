/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
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
namespace CodePipeline
{
namespace Model
{

  /**
   * <p>Returns a summary of a pipeline.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/codepipeline-2015-07-09/PipelineSummary">AWS
   * API Reference</a></p>
   */
  class AWS_CODEPIPELINE_API PipelineSummary
  {
  public:
    PipelineSummary();
    PipelineSummary(Aws::Utils::Json::JsonView jsonValue);
    PipelineSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name of the pipeline.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the pipeline.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the pipeline.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the pipeline.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the pipeline.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the pipeline.</p>
     */
    inline PipelineSummary& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the pipeline.</p>
     */
    inline PipelineSummary& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the pipeline.</p>
     */
    inline PipelineSummary& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The version number of the pipeline.</p>
     */
    inline int GetVersion() const{ return m_version; }

    /**
     * <p>The version number of the pipeline.</p>
     */
    inline bool VersionHasBeenSet() const { return m_versionHasBeenSet; }

    /**
     * <p>The version number of the pipeline.</p>
     */
    inline void SetVersion(int value) { m_versionHasBeenSet = true; m_version = value; }

    /**
     * <p>The version number of the pipeline.</p>
     */
    inline PipelineSummary& WithVersion(int value) { SetVersion(value); return *this;}


    /**
     * <p>The date and time the pipeline was created, in timestamp format.</p>
     */
    inline const Aws::Utils::DateTime& GetCreated() const{ return m_created; }

    /**
     * <p>The date and time the pipeline was created, in timestamp format.</p>
     */
    inline bool CreatedHasBeenSet() const { return m_createdHasBeenSet; }

    /**
     * <p>The date and time the pipeline was created, in timestamp format.</p>
     */
    inline void SetCreated(const Aws::Utils::DateTime& value) { m_createdHasBeenSet = true; m_created = value; }

    /**
     * <p>The date and time the pipeline was created, in timestamp format.</p>
     */
    inline void SetCreated(Aws::Utils::DateTime&& value) { m_createdHasBeenSet = true; m_created = std::move(value); }

    /**
     * <p>The date and time the pipeline was created, in timestamp format.</p>
     */
    inline PipelineSummary& WithCreated(const Aws::Utils::DateTime& value) { SetCreated(value); return *this;}

    /**
     * <p>The date and time the pipeline was created, in timestamp format.</p>
     */
    inline PipelineSummary& WithCreated(Aws::Utils::DateTime&& value) { SetCreated(std::move(value)); return *this;}


    /**
     * <p>The date and time of the last update to the pipeline, in timestamp
     * format.</p>
     */
    inline const Aws::Utils::DateTime& GetUpdated() const{ return m_updated; }

    /**
     * <p>The date and time of the last update to the pipeline, in timestamp
     * format.</p>
     */
    inline bool UpdatedHasBeenSet() const { return m_updatedHasBeenSet; }

    /**
     * <p>The date and time of the last update to the pipeline, in timestamp
     * format.</p>
     */
    inline void SetUpdated(const Aws::Utils::DateTime& value) { m_updatedHasBeenSet = true; m_updated = value; }

    /**
     * <p>The date and time of the last update to the pipeline, in timestamp
     * format.</p>
     */
    inline void SetUpdated(Aws::Utils::DateTime&& value) { m_updatedHasBeenSet = true; m_updated = std::move(value); }

    /**
     * <p>The date and time of the last update to the pipeline, in timestamp
     * format.</p>
     */
    inline PipelineSummary& WithUpdated(const Aws::Utils::DateTime& value) { SetUpdated(value); return *this;}

    /**
     * <p>The date and time of the last update to the pipeline, in timestamp
     * format.</p>
     */
    inline PipelineSummary& WithUpdated(Aws::Utils::DateTime&& value) { SetUpdated(std::move(value)); return *this;}

  private:

    Aws::String m_name;
    bool m_nameHasBeenSet;

    int m_version;
    bool m_versionHasBeenSet;

    Aws::Utils::DateTime m_created;
    bool m_createdHasBeenSet;

    Aws::Utils::DateTime m_updated;
    bool m_updatedHasBeenSet;
  };

} // namespace Model
} // namespace CodePipeline
} // namespace Aws
