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
    AWS_GLUE_API S3DeltaSource();
    AWS_GLUE_API S3DeltaSource(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API S3DeltaSource& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the Delta Lake source.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline S3DeltaSource& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline S3DeltaSource& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline S3DeltaSource& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of the Amazon S3 paths to read from.</p>
     */
    inline const Aws::Vector<Aws::String>& GetPaths() const{ return m_paths; }
    inline bool PathsHasBeenSet() const { return m_pathsHasBeenSet; }
    inline void SetPaths(const Aws::Vector<Aws::String>& value) { m_pathsHasBeenSet = true; m_paths = value; }
    inline void SetPaths(Aws::Vector<Aws::String>&& value) { m_pathsHasBeenSet = true; m_paths = std::move(value); }
    inline S3DeltaSource& WithPaths(const Aws::Vector<Aws::String>& value) { SetPaths(value); return *this;}
    inline S3DeltaSource& WithPaths(Aws::Vector<Aws::String>&& value) { SetPaths(std::move(value)); return *this;}
    inline S3DeltaSource& AddPaths(const Aws::String& value) { m_pathsHasBeenSet = true; m_paths.push_back(value); return *this; }
    inline S3DeltaSource& AddPaths(Aws::String&& value) { m_pathsHasBeenSet = true; m_paths.push_back(std::move(value)); return *this; }
    inline S3DeltaSource& AddPaths(const char* value) { m_pathsHasBeenSet = true; m_paths.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>Specifies additional connection options.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetAdditionalDeltaOptions() const{ return m_additionalDeltaOptions; }
    inline bool AdditionalDeltaOptionsHasBeenSet() const { return m_additionalDeltaOptionsHasBeenSet; }
    inline void SetAdditionalDeltaOptions(const Aws::Map<Aws::String, Aws::String>& value) { m_additionalDeltaOptionsHasBeenSet = true; m_additionalDeltaOptions = value; }
    inline void SetAdditionalDeltaOptions(Aws::Map<Aws::String, Aws::String>&& value) { m_additionalDeltaOptionsHasBeenSet = true; m_additionalDeltaOptions = std::move(value); }
    inline S3DeltaSource& WithAdditionalDeltaOptions(const Aws::Map<Aws::String, Aws::String>& value) { SetAdditionalDeltaOptions(value); return *this;}
    inline S3DeltaSource& WithAdditionalDeltaOptions(Aws::Map<Aws::String, Aws::String>&& value) { SetAdditionalDeltaOptions(std::move(value)); return *this;}
    inline S3DeltaSource& AddAdditionalDeltaOptions(const Aws::String& key, const Aws::String& value) { m_additionalDeltaOptionsHasBeenSet = true; m_additionalDeltaOptions.emplace(key, value); return *this; }
    inline S3DeltaSource& AddAdditionalDeltaOptions(Aws::String&& key, const Aws::String& value) { m_additionalDeltaOptionsHasBeenSet = true; m_additionalDeltaOptions.emplace(std::move(key), value); return *this; }
    inline S3DeltaSource& AddAdditionalDeltaOptions(const Aws::String& key, Aws::String&& value) { m_additionalDeltaOptionsHasBeenSet = true; m_additionalDeltaOptions.emplace(key, std::move(value)); return *this; }
    inline S3DeltaSource& AddAdditionalDeltaOptions(Aws::String&& key, Aws::String&& value) { m_additionalDeltaOptionsHasBeenSet = true; m_additionalDeltaOptions.emplace(std::move(key), std::move(value)); return *this; }
    inline S3DeltaSource& AddAdditionalDeltaOptions(const char* key, Aws::String&& value) { m_additionalDeltaOptionsHasBeenSet = true; m_additionalDeltaOptions.emplace(key, std::move(value)); return *this; }
    inline S3DeltaSource& AddAdditionalDeltaOptions(Aws::String&& key, const char* value) { m_additionalDeltaOptionsHasBeenSet = true; m_additionalDeltaOptions.emplace(std::move(key), value); return *this; }
    inline S3DeltaSource& AddAdditionalDeltaOptions(const char* key, const char* value) { m_additionalDeltaOptionsHasBeenSet = true; m_additionalDeltaOptions.emplace(key, value); return *this; }
    ///@}

    ///@{
    /**
     * <p>Specifies additional options for the connector.</p>
     */
    inline const S3DirectSourceAdditionalOptions& GetAdditionalOptions() const{ return m_additionalOptions; }
    inline bool AdditionalOptionsHasBeenSet() const { return m_additionalOptionsHasBeenSet; }
    inline void SetAdditionalOptions(const S3DirectSourceAdditionalOptions& value) { m_additionalOptionsHasBeenSet = true; m_additionalOptions = value; }
    inline void SetAdditionalOptions(S3DirectSourceAdditionalOptions&& value) { m_additionalOptionsHasBeenSet = true; m_additionalOptions = std::move(value); }
    inline S3DeltaSource& WithAdditionalOptions(const S3DirectSourceAdditionalOptions& value) { SetAdditionalOptions(value); return *this;}
    inline S3DeltaSource& WithAdditionalOptions(S3DirectSourceAdditionalOptions&& value) { SetAdditionalOptions(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the data schema for the Delta Lake source.</p>
     */
    inline const Aws::Vector<GlueSchema>& GetOutputSchemas() const{ return m_outputSchemas; }
    inline bool OutputSchemasHasBeenSet() const { return m_outputSchemasHasBeenSet; }
    inline void SetOutputSchemas(const Aws::Vector<GlueSchema>& value) { m_outputSchemasHasBeenSet = true; m_outputSchemas = value; }
    inline void SetOutputSchemas(Aws::Vector<GlueSchema>&& value) { m_outputSchemasHasBeenSet = true; m_outputSchemas = std::move(value); }
    inline S3DeltaSource& WithOutputSchemas(const Aws::Vector<GlueSchema>& value) { SetOutputSchemas(value); return *this;}
    inline S3DeltaSource& WithOutputSchemas(Aws::Vector<GlueSchema>&& value) { SetOutputSchemas(std::move(value)); return *this;}
    inline S3DeltaSource& AddOutputSchemas(const GlueSchema& value) { m_outputSchemasHasBeenSet = true; m_outputSchemas.push_back(value); return *this; }
    inline S3DeltaSource& AddOutputSchemas(GlueSchema&& value) { m_outputSchemasHasBeenSet = true; m_outputSchemas.push_back(std::move(value)); return *this; }
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
