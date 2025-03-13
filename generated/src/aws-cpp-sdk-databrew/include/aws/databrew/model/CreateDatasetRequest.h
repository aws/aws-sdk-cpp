/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/databrew/GlueDataBrew_EXPORTS.h>
#include <aws/databrew/GlueDataBrewRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/databrew/model/InputFormat.h>
#include <aws/databrew/model/FormatOptions.h>
#include <aws/databrew/model/Input.h>
#include <aws/databrew/model/PathOptions.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <utility>

namespace Aws
{
namespace GlueDataBrew
{
namespace Model
{

  /**
   */
  class CreateDatasetRequest : public GlueDataBrewRequest
  {
  public:
    AWS_GLUEDATABREW_API CreateDatasetRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateDataset"; }

    AWS_GLUEDATABREW_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The name of the dataset to be created. Valid characters are alphanumeric
     * (A-Z, a-z, 0-9), hyphen (-), period (.), and space.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    CreateDatasetRequest& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The file format of a dataset that is created from an Amazon S3 file or
     * folder.</p>
     */
    inline InputFormat GetFormat() const { return m_format; }
    inline bool FormatHasBeenSet() const { return m_formatHasBeenSet; }
    inline void SetFormat(InputFormat value) { m_formatHasBeenSet = true; m_format = value; }
    inline CreateDatasetRequest& WithFormat(InputFormat value) { SetFormat(value); return *this;}
    ///@}

    ///@{
    
    inline const FormatOptions& GetFormatOptions() const { return m_formatOptions; }
    inline bool FormatOptionsHasBeenSet() const { return m_formatOptionsHasBeenSet; }
    template<typename FormatOptionsT = FormatOptions>
    void SetFormatOptions(FormatOptionsT&& value) { m_formatOptionsHasBeenSet = true; m_formatOptions = std::forward<FormatOptionsT>(value); }
    template<typename FormatOptionsT = FormatOptions>
    CreateDatasetRequest& WithFormatOptions(FormatOptionsT&& value) { SetFormatOptions(std::forward<FormatOptionsT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Input& GetInput() const { return m_input; }
    inline bool InputHasBeenSet() const { return m_inputHasBeenSet; }
    template<typename InputT = Input>
    void SetInput(InputT&& value) { m_inputHasBeenSet = true; m_input = std::forward<InputT>(value); }
    template<typename InputT = Input>
    CreateDatasetRequest& WithInput(InputT&& value) { SetInput(std::forward<InputT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A set of options that defines how DataBrew interprets an Amazon S3 path of
     * the dataset.</p>
     */
    inline const PathOptions& GetPathOptions() const { return m_pathOptions; }
    inline bool PathOptionsHasBeenSet() const { return m_pathOptionsHasBeenSet; }
    template<typename PathOptionsT = PathOptions>
    void SetPathOptions(PathOptionsT&& value) { m_pathOptionsHasBeenSet = true; m_pathOptions = std::forward<PathOptionsT>(value); }
    template<typename PathOptionsT = PathOptions>
    CreateDatasetRequest& WithPathOptions(PathOptionsT&& value) { SetPathOptions(std::forward<PathOptionsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Metadata tags to apply to this dataset.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const { return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    template<typename TagsT = Aws::Map<Aws::String, Aws::String>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Map<Aws::String, Aws::String>>
    CreateDatasetRequest& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsKeyT = Aws::String, typename TagsValueT = Aws::String>
    CreateDatasetRequest& AddTags(TagsKeyT&& key, TagsValueT&& value) {
      m_tagsHasBeenSet = true; m_tags.emplace(std::forward<TagsKeyT>(key), std::forward<TagsValueT>(value)); return *this;
    }
    ///@}
  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    InputFormat m_format{InputFormat::NOT_SET};
    bool m_formatHasBeenSet = false;

    FormatOptions m_formatOptions;
    bool m_formatOptionsHasBeenSet = false;

    Input m_input;
    bool m_inputHasBeenSet = false;

    PathOptions m_pathOptions;
    bool m_pathOptionsHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace GlueDataBrew
} // namespace Aws
