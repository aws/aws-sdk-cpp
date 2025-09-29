/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/imagebuilder/Imagebuilder_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace imagebuilder
{
namespace Model
{

  /**
   * <p>The logging configuration that's defined for pipeline
   * execution.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/imagebuilder-2019-12-02/PipelineLoggingConfiguration">AWS
   * API Reference</a></p>
   */
  class PipelineLoggingConfiguration
  {
  public:
    AWS_IMAGEBUILDER_API PipelineLoggingConfiguration() = default;
    AWS_IMAGEBUILDER_API PipelineLoggingConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_IMAGEBUILDER_API PipelineLoggingConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IMAGEBUILDER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The log group name that Image Builder uses for image creation. If not
     * specified, the log group name defaults to
     * <code>/aws/imagebuilder/image-name</code>.</p>
     */
    inline const Aws::String& GetImageLogGroupName() const { return m_imageLogGroupName; }
    inline bool ImageLogGroupNameHasBeenSet() const { return m_imageLogGroupNameHasBeenSet; }
    template<typename ImageLogGroupNameT = Aws::String>
    void SetImageLogGroupName(ImageLogGroupNameT&& value) { m_imageLogGroupNameHasBeenSet = true; m_imageLogGroupName = std::forward<ImageLogGroupNameT>(value); }
    template<typename ImageLogGroupNameT = Aws::String>
    PipelineLoggingConfiguration& WithImageLogGroupName(ImageLogGroupNameT&& value) { SetImageLogGroupName(std::forward<ImageLogGroupNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The log group name that Image Builder uses for the log output during creation
     * of a new pipeline. If not specified, the pipeline log group name defaults to
     * <code>/aws/imagebuilder/pipeline/pipeline-name</code>.</p>
     */
    inline const Aws::String& GetPipelineLogGroupName() const { return m_pipelineLogGroupName; }
    inline bool PipelineLogGroupNameHasBeenSet() const { return m_pipelineLogGroupNameHasBeenSet; }
    template<typename PipelineLogGroupNameT = Aws::String>
    void SetPipelineLogGroupName(PipelineLogGroupNameT&& value) { m_pipelineLogGroupNameHasBeenSet = true; m_pipelineLogGroupName = std::forward<PipelineLogGroupNameT>(value); }
    template<typename PipelineLogGroupNameT = Aws::String>
    PipelineLoggingConfiguration& WithPipelineLogGroupName(PipelineLogGroupNameT&& value) { SetPipelineLogGroupName(std::forward<PipelineLogGroupNameT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_imageLogGroupName;
    bool m_imageLogGroupNameHasBeenSet = false;

    Aws::String m_pipelineLogGroupName;
    bool m_pipelineLogGroupNameHasBeenSet = false;
  };

} // namespace Model
} // namespace imagebuilder
} // namespace Aws
