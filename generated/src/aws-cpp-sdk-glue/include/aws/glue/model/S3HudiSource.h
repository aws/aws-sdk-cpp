/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/glue/Glue_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/glue/model/S3DirectSourceAdditionalOptions.h>
#include <aws/glue/model/GlueSchema.h>
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
   * <p>Specifies a Hudi data source stored in Amazon S3.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/S3HudiSource">AWS
   * API Reference</a></p>
   */
  class S3HudiSource
  {
  public:
    AWS_GLUE_API S3HudiSource() = default;
    AWS_GLUE_API S3HudiSource(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API S3HudiSource& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the Hudi source.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    S3HudiSource& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of the Amazon S3 paths to read from.</p>
     */
    inline const Aws::Vector<Aws::String>& GetPaths() const { return m_paths; }
    inline bool PathsHasBeenSet() const { return m_pathsHasBeenSet; }
    template<typename PathsT = Aws::Vector<Aws::String>>
    void SetPaths(PathsT&& value) { m_pathsHasBeenSet = true; m_paths = std::forward<PathsT>(value); }
    template<typename PathsT = Aws::Vector<Aws::String>>
    S3HudiSource& WithPaths(PathsT&& value) { SetPaths(std::forward<PathsT>(value)); return *this;}
    template<typename PathsT = Aws::String>
    S3HudiSource& AddPaths(PathsT&& value) { m_pathsHasBeenSet = true; m_paths.emplace_back(std::forward<PathsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Specifies additional connection options.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetAdditionalHudiOptions() const { return m_additionalHudiOptions; }
    inline bool AdditionalHudiOptionsHasBeenSet() const { return m_additionalHudiOptionsHasBeenSet; }
    template<typename AdditionalHudiOptionsT = Aws::Map<Aws::String, Aws::String>>
    void SetAdditionalHudiOptions(AdditionalHudiOptionsT&& value) { m_additionalHudiOptionsHasBeenSet = true; m_additionalHudiOptions = std::forward<AdditionalHudiOptionsT>(value); }
    template<typename AdditionalHudiOptionsT = Aws::Map<Aws::String, Aws::String>>
    S3HudiSource& WithAdditionalHudiOptions(AdditionalHudiOptionsT&& value) { SetAdditionalHudiOptions(std::forward<AdditionalHudiOptionsT>(value)); return *this;}
    template<typename AdditionalHudiOptionsKeyT = Aws::String, typename AdditionalHudiOptionsValueT = Aws::String>
    S3HudiSource& AddAdditionalHudiOptions(AdditionalHudiOptionsKeyT&& key, AdditionalHudiOptionsValueT&& value) {
      m_additionalHudiOptionsHasBeenSet = true; m_additionalHudiOptions.emplace(std::forward<AdditionalHudiOptionsKeyT>(key), std::forward<AdditionalHudiOptionsValueT>(value)); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>Specifies additional options for the connector.</p>
     */
    inline const S3DirectSourceAdditionalOptions& GetAdditionalOptions() const { return m_additionalOptions; }
    inline bool AdditionalOptionsHasBeenSet() const { return m_additionalOptionsHasBeenSet; }
    template<typename AdditionalOptionsT = S3DirectSourceAdditionalOptions>
    void SetAdditionalOptions(AdditionalOptionsT&& value) { m_additionalOptionsHasBeenSet = true; m_additionalOptions = std::forward<AdditionalOptionsT>(value); }
    template<typename AdditionalOptionsT = S3DirectSourceAdditionalOptions>
    S3HudiSource& WithAdditionalOptions(AdditionalOptionsT&& value) { SetAdditionalOptions(std::forward<AdditionalOptionsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the data schema for the Hudi source.</p>
     */
    inline const Aws::Vector<GlueSchema>& GetOutputSchemas() const { return m_outputSchemas; }
    inline bool OutputSchemasHasBeenSet() const { return m_outputSchemasHasBeenSet; }
    template<typename OutputSchemasT = Aws::Vector<GlueSchema>>
    void SetOutputSchemas(OutputSchemasT&& value) { m_outputSchemasHasBeenSet = true; m_outputSchemas = std::forward<OutputSchemasT>(value); }
    template<typename OutputSchemasT = Aws::Vector<GlueSchema>>
    S3HudiSource& WithOutputSchemas(OutputSchemasT&& value) { SetOutputSchemas(std::forward<OutputSchemasT>(value)); return *this;}
    template<typename OutputSchemasT = GlueSchema>
    S3HudiSource& AddOutputSchemas(OutputSchemasT&& value) { m_outputSchemasHasBeenSet = true; m_outputSchemas.emplace_back(std::forward<OutputSchemasT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::Vector<Aws::String> m_paths;
    bool m_pathsHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_additionalHudiOptions;
    bool m_additionalHudiOptionsHasBeenSet = false;

    S3DirectSourceAdditionalOptions m_additionalOptions;
    bool m_additionalOptionsHasBeenSet = false;

    Aws::Vector<GlueSchema> m_outputSchemas;
    bool m_outputSchemasHasBeenSet = false;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
