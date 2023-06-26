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
    AWS_GLUE_API S3HudiSource();
    AWS_GLUE_API S3HudiSource(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API S3HudiSource& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name of the Hudi source.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the Hudi source.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the Hudi source.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the Hudi source.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the Hudi source.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the Hudi source.</p>
     */
    inline S3HudiSource& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the Hudi source.</p>
     */
    inline S3HudiSource& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the Hudi source.</p>
     */
    inline S3HudiSource& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>A list of the Amazon S3 paths to read from.</p>
     */
    inline const Aws::Vector<Aws::String>& GetPaths() const{ return m_paths; }

    /**
     * <p>A list of the Amazon S3 paths to read from.</p>
     */
    inline bool PathsHasBeenSet() const { return m_pathsHasBeenSet; }

    /**
     * <p>A list of the Amazon S3 paths to read from.</p>
     */
    inline void SetPaths(const Aws::Vector<Aws::String>& value) { m_pathsHasBeenSet = true; m_paths = value; }

    /**
     * <p>A list of the Amazon S3 paths to read from.</p>
     */
    inline void SetPaths(Aws::Vector<Aws::String>&& value) { m_pathsHasBeenSet = true; m_paths = std::move(value); }

    /**
     * <p>A list of the Amazon S3 paths to read from.</p>
     */
    inline S3HudiSource& WithPaths(const Aws::Vector<Aws::String>& value) { SetPaths(value); return *this;}

    /**
     * <p>A list of the Amazon S3 paths to read from.</p>
     */
    inline S3HudiSource& WithPaths(Aws::Vector<Aws::String>&& value) { SetPaths(std::move(value)); return *this;}

    /**
     * <p>A list of the Amazon S3 paths to read from.</p>
     */
    inline S3HudiSource& AddPaths(const Aws::String& value) { m_pathsHasBeenSet = true; m_paths.push_back(value); return *this; }

    /**
     * <p>A list of the Amazon S3 paths to read from.</p>
     */
    inline S3HudiSource& AddPaths(Aws::String&& value) { m_pathsHasBeenSet = true; m_paths.push_back(std::move(value)); return *this; }

    /**
     * <p>A list of the Amazon S3 paths to read from.</p>
     */
    inline S3HudiSource& AddPaths(const char* value) { m_pathsHasBeenSet = true; m_paths.push_back(value); return *this; }


    /**
     * <p>Specifies additional connection options.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetAdditionalHudiOptions() const{ return m_additionalHudiOptions; }

    /**
     * <p>Specifies additional connection options.</p>
     */
    inline bool AdditionalHudiOptionsHasBeenSet() const { return m_additionalHudiOptionsHasBeenSet; }

    /**
     * <p>Specifies additional connection options.</p>
     */
    inline void SetAdditionalHudiOptions(const Aws::Map<Aws::String, Aws::String>& value) { m_additionalHudiOptionsHasBeenSet = true; m_additionalHudiOptions = value; }

    /**
     * <p>Specifies additional connection options.</p>
     */
    inline void SetAdditionalHudiOptions(Aws::Map<Aws::String, Aws::String>&& value) { m_additionalHudiOptionsHasBeenSet = true; m_additionalHudiOptions = std::move(value); }

    /**
     * <p>Specifies additional connection options.</p>
     */
    inline S3HudiSource& WithAdditionalHudiOptions(const Aws::Map<Aws::String, Aws::String>& value) { SetAdditionalHudiOptions(value); return *this;}

    /**
     * <p>Specifies additional connection options.</p>
     */
    inline S3HudiSource& WithAdditionalHudiOptions(Aws::Map<Aws::String, Aws::String>&& value) { SetAdditionalHudiOptions(std::move(value)); return *this;}

    /**
     * <p>Specifies additional connection options.</p>
     */
    inline S3HudiSource& AddAdditionalHudiOptions(const Aws::String& key, const Aws::String& value) { m_additionalHudiOptionsHasBeenSet = true; m_additionalHudiOptions.emplace(key, value); return *this; }

    /**
     * <p>Specifies additional connection options.</p>
     */
    inline S3HudiSource& AddAdditionalHudiOptions(Aws::String&& key, const Aws::String& value) { m_additionalHudiOptionsHasBeenSet = true; m_additionalHudiOptions.emplace(std::move(key), value); return *this; }

    /**
     * <p>Specifies additional connection options.</p>
     */
    inline S3HudiSource& AddAdditionalHudiOptions(const Aws::String& key, Aws::String&& value) { m_additionalHudiOptionsHasBeenSet = true; m_additionalHudiOptions.emplace(key, std::move(value)); return *this; }

    /**
     * <p>Specifies additional connection options.</p>
     */
    inline S3HudiSource& AddAdditionalHudiOptions(Aws::String&& key, Aws::String&& value) { m_additionalHudiOptionsHasBeenSet = true; m_additionalHudiOptions.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>Specifies additional connection options.</p>
     */
    inline S3HudiSource& AddAdditionalHudiOptions(const char* key, Aws::String&& value) { m_additionalHudiOptionsHasBeenSet = true; m_additionalHudiOptions.emplace(key, std::move(value)); return *this; }

    /**
     * <p>Specifies additional connection options.</p>
     */
    inline S3HudiSource& AddAdditionalHudiOptions(Aws::String&& key, const char* value) { m_additionalHudiOptionsHasBeenSet = true; m_additionalHudiOptions.emplace(std::move(key), value); return *this; }

    /**
     * <p>Specifies additional connection options.</p>
     */
    inline S3HudiSource& AddAdditionalHudiOptions(const char* key, const char* value) { m_additionalHudiOptionsHasBeenSet = true; m_additionalHudiOptions.emplace(key, value); return *this; }


    /**
     * <p>Specifies additional options for the connector.</p>
     */
    inline const S3DirectSourceAdditionalOptions& GetAdditionalOptions() const{ return m_additionalOptions; }

    /**
     * <p>Specifies additional options for the connector.</p>
     */
    inline bool AdditionalOptionsHasBeenSet() const { return m_additionalOptionsHasBeenSet; }

    /**
     * <p>Specifies additional options for the connector.</p>
     */
    inline void SetAdditionalOptions(const S3DirectSourceAdditionalOptions& value) { m_additionalOptionsHasBeenSet = true; m_additionalOptions = value; }

    /**
     * <p>Specifies additional options for the connector.</p>
     */
    inline void SetAdditionalOptions(S3DirectSourceAdditionalOptions&& value) { m_additionalOptionsHasBeenSet = true; m_additionalOptions = std::move(value); }

    /**
     * <p>Specifies additional options for the connector.</p>
     */
    inline S3HudiSource& WithAdditionalOptions(const S3DirectSourceAdditionalOptions& value) { SetAdditionalOptions(value); return *this;}

    /**
     * <p>Specifies additional options for the connector.</p>
     */
    inline S3HudiSource& WithAdditionalOptions(S3DirectSourceAdditionalOptions&& value) { SetAdditionalOptions(std::move(value)); return *this;}


    /**
     * <p>Specifies the data schema for the Hudi source.</p>
     */
    inline const Aws::Vector<GlueSchema>& GetOutputSchemas() const{ return m_outputSchemas; }

    /**
     * <p>Specifies the data schema for the Hudi source.</p>
     */
    inline bool OutputSchemasHasBeenSet() const { return m_outputSchemasHasBeenSet; }

    /**
     * <p>Specifies the data schema for the Hudi source.</p>
     */
    inline void SetOutputSchemas(const Aws::Vector<GlueSchema>& value) { m_outputSchemasHasBeenSet = true; m_outputSchemas = value; }

    /**
     * <p>Specifies the data schema for the Hudi source.</p>
     */
    inline void SetOutputSchemas(Aws::Vector<GlueSchema>&& value) { m_outputSchemasHasBeenSet = true; m_outputSchemas = std::move(value); }

    /**
     * <p>Specifies the data schema for the Hudi source.</p>
     */
    inline S3HudiSource& WithOutputSchemas(const Aws::Vector<GlueSchema>& value) { SetOutputSchemas(value); return *this;}

    /**
     * <p>Specifies the data schema for the Hudi source.</p>
     */
    inline S3HudiSource& WithOutputSchemas(Aws::Vector<GlueSchema>&& value) { SetOutputSchemas(std::move(value)); return *this;}

    /**
     * <p>Specifies the data schema for the Hudi source.</p>
     */
    inline S3HudiSource& AddOutputSchemas(const GlueSchema& value) { m_outputSchemasHasBeenSet = true; m_outputSchemas.push_back(value); return *this; }

    /**
     * <p>Specifies the data schema for the Hudi source.</p>
     */
    inline S3HudiSource& AddOutputSchemas(GlueSchema&& value) { m_outputSchemasHasBeenSet = true; m_outputSchemas.push_back(std::move(value)); return *this; }

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
