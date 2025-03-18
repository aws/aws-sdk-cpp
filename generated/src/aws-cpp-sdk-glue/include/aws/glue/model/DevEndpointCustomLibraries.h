/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/glue/Glue_EXPORTS.h>
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
namespace Glue
{
namespace Model
{

  /**
   * <p>Custom libraries to be loaded into a development endpoint.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/DevEndpointCustomLibraries">AWS
   * API Reference</a></p>
   */
  class DevEndpointCustomLibraries
  {
  public:
    AWS_GLUE_API DevEndpointCustomLibraries() = default;
    AWS_GLUE_API DevEndpointCustomLibraries(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API DevEndpointCustomLibraries& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The paths to one or more Python libraries in an Amazon Simple Storage Service
     * (Amazon S3) bucket that should be loaded in your <code>DevEndpoint</code>.
     * Multiple values must be complete paths separated by a comma.</p>  <p>You
     * can only use pure Python libraries with a <code>DevEndpoint</code>. Libraries
     * that rely on C extensions, such as the <a
     * href="http://pandas.pydata.org/">pandas</a> Python data analysis library, are
     * not currently supported.</p> 
     */
    inline const Aws::String& GetExtraPythonLibsS3Path() const { return m_extraPythonLibsS3Path; }
    inline bool ExtraPythonLibsS3PathHasBeenSet() const { return m_extraPythonLibsS3PathHasBeenSet; }
    template<typename ExtraPythonLibsS3PathT = Aws::String>
    void SetExtraPythonLibsS3Path(ExtraPythonLibsS3PathT&& value) { m_extraPythonLibsS3PathHasBeenSet = true; m_extraPythonLibsS3Path = std::forward<ExtraPythonLibsS3PathT>(value); }
    template<typename ExtraPythonLibsS3PathT = Aws::String>
    DevEndpointCustomLibraries& WithExtraPythonLibsS3Path(ExtraPythonLibsS3PathT&& value) { SetExtraPythonLibsS3Path(std::forward<ExtraPythonLibsS3PathT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The path to one or more Java <code>.jar</code> files in an S3 bucket that
     * should be loaded in your <code>DevEndpoint</code>.</p>  <p>You can only
     * use pure Java/Scala libraries with a <code>DevEndpoint</code>.</p> 
     */
    inline const Aws::String& GetExtraJarsS3Path() const { return m_extraJarsS3Path; }
    inline bool ExtraJarsS3PathHasBeenSet() const { return m_extraJarsS3PathHasBeenSet; }
    template<typename ExtraJarsS3PathT = Aws::String>
    void SetExtraJarsS3Path(ExtraJarsS3PathT&& value) { m_extraJarsS3PathHasBeenSet = true; m_extraJarsS3Path = std::forward<ExtraJarsS3PathT>(value); }
    template<typename ExtraJarsS3PathT = Aws::String>
    DevEndpointCustomLibraries& WithExtraJarsS3Path(ExtraJarsS3PathT&& value) { SetExtraJarsS3Path(std::forward<ExtraJarsS3PathT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_extraPythonLibsS3Path;
    bool m_extraPythonLibsS3PathHasBeenSet = false;

    Aws::String m_extraJarsS3Path;
    bool m_extraJarsS3PathHasBeenSet = false;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
