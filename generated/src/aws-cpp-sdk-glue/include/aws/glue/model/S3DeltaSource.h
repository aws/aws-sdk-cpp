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
   * <p>Specifies a Delta Lake data source stored in Amazon S3.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/S3DeltaSource">AWS
   * API Reference</a></p>
   */
  class S3DeltaSource
  {
  public:
    AWS_GLUE_API S3DeltaSource() = default;
    AWS_GLUE_API S3DeltaSource(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API S3DeltaSource& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the Delta Lake source.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    S3DeltaSource& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
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
    S3DeltaSource& WithPaths(PathsT&& value) { SetPaths(std::forward<PathsT>(value)); return *this;}
    template<typename PathsT = Aws::String>
    S3DeltaSource& AddPaths(PathsT&& value) { m_pathsHasBeenSet = true; m_paths.emplace_back(std::forward<PathsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Specifies additional connection options.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetAdditionalDeltaOptions() const { return m_additionalDeltaOptions; }
    inline bool AdditionalDeltaOptionsHasBeenSet() const { return m_additionalDeltaOptionsHasBeenSet; }
    template<typename AdditionalDeltaOptionsT = Aws::Map<Aws::String, Aws::String>>
    void SetAdditionalDeltaOptions(AdditionalDeltaOptionsT&& value) { m_additionalDeltaOptionsHasBeenSet = true; m_additionalDeltaOptions = std::forward<AdditionalDeltaOptionsT>(value); }
    template<typename AdditionalDeltaOptionsT = Aws::Map<Aws::String, Aws::String>>
    S3DeltaSource& WithAdditionalDeltaOptions(AdditionalDeltaOptionsT&& value) { SetAdditionalDeltaOptions(std::forward<AdditionalDeltaOptionsT>(value)); return *this;}
    template<typename AdditionalDeltaOptionsKeyT = Aws::String, typename AdditionalDeltaOptionsValueT = Aws::String>
    S3DeltaSource& AddAdditionalDeltaOptions(AdditionalDeltaOptionsKeyT&& key, AdditionalDeltaOptionsValueT&& value) {
      m_additionalDeltaOptionsHasBeenSet = true; m_additionalDeltaOptions.emplace(std::forward<AdditionalDeltaOptionsKeyT>(key), std::forward<AdditionalDeltaOptionsValueT>(value)); return *this;
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
    S3DeltaSource& WithAdditionalOptions(AdditionalOptionsT&& value) { SetAdditionalOptions(std::forward<AdditionalOptionsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the data schema for the Delta Lake source.</p>
     */
    inline const Aws::Vector<GlueSchema>& GetOutputSchemas() const { return m_outputSchemas; }
    inline bool OutputSchemasHasBeenSet() const { return m_outputSchemasHasBeenSet; }
    template<typename OutputSchemasT = Aws::Vector<GlueSchema>>
    void SetOutputSchemas(OutputSchemasT&& value) { m_outputSchemasHasBeenSet = true; m_outputSchemas = std::forward<OutputSchemasT>(value); }
    template<typename OutputSchemasT = Aws::Vector<GlueSchema>>
    S3DeltaSource& WithOutputSchemas(OutputSchemasT&& value) { SetOutputSchemas(std::forward<OutputSchemasT>(value)); return *this;}
    template<typename OutputSchemasT = GlueSchema>
    S3DeltaSource& AddOutputSchemas(OutputSchemasT&& value) { m_outputSchemasHasBeenSet = true; m_outputSchemas.emplace_back(std::forward<OutputSchemasT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::Vector<Aws::String> m_paths;
    bool m_pathsHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_additionalDeltaOptions;
    bool m_additionalDeltaOptionsHasBeenSet = false;

    S3DirectSourceAdditionalOptions m_additionalOptions;
    bool m_additionalOptionsHasBeenSet = false;

    Aws::Vector<GlueSchema> m_outputSchemas;
    bool m_outputSchemasHasBeenSet = false;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
