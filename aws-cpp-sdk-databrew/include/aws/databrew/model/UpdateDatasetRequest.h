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
#include <utility>

namespace Aws
{
namespace GlueDataBrew
{
namespace Model
{

  /**
   */
  class UpdateDatasetRequest : public GlueDataBrewRequest
  {
  public:
    AWS_GLUEDATABREW_API UpdateDatasetRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateDataset"; }

    AWS_GLUEDATABREW_API Aws::String SerializePayload() const override;


    /**
     * <p>The name of the dataset to be updated.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the dataset to be updated.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the dataset to be updated.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the dataset to be updated.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the dataset to be updated.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the dataset to be updated.</p>
     */
    inline UpdateDatasetRequest& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the dataset to be updated.</p>
     */
    inline UpdateDatasetRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the dataset to be updated.</p>
     */
    inline UpdateDatasetRequest& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The file format of a dataset that is created from an Amazon S3 file or
     * folder.</p>
     */
    inline const InputFormat& GetFormat() const{ return m_format; }

    /**
     * <p>The file format of a dataset that is created from an Amazon S3 file or
     * folder.</p>
     */
    inline bool FormatHasBeenSet() const { return m_formatHasBeenSet; }

    /**
     * <p>The file format of a dataset that is created from an Amazon S3 file or
     * folder.</p>
     */
    inline void SetFormat(const InputFormat& value) { m_formatHasBeenSet = true; m_format = value; }

    /**
     * <p>The file format of a dataset that is created from an Amazon S3 file or
     * folder.</p>
     */
    inline void SetFormat(InputFormat&& value) { m_formatHasBeenSet = true; m_format = std::move(value); }

    /**
     * <p>The file format of a dataset that is created from an Amazon S3 file or
     * folder.</p>
     */
    inline UpdateDatasetRequest& WithFormat(const InputFormat& value) { SetFormat(value); return *this;}

    /**
     * <p>The file format of a dataset that is created from an Amazon S3 file or
     * folder.</p>
     */
    inline UpdateDatasetRequest& WithFormat(InputFormat&& value) { SetFormat(std::move(value)); return *this;}


    
    inline const FormatOptions& GetFormatOptions() const{ return m_formatOptions; }

    
    inline bool FormatOptionsHasBeenSet() const { return m_formatOptionsHasBeenSet; }

    
    inline void SetFormatOptions(const FormatOptions& value) { m_formatOptionsHasBeenSet = true; m_formatOptions = value; }

    
    inline void SetFormatOptions(FormatOptions&& value) { m_formatOptionsHasBeenSet = true; m_formatOptions = std::move(value); }

    
    inline UpdateDatasetRequest& WithFormatOptions(const FormatOptions& value) { SetFormatOptions(value); return *this;}

    
    inline UpdateDatasetRequest& WithFormatOptions(FormatOptions&& value) { SetFormatOptions(std::move(value)); return *this;}


    
    inline const Input& GetInput() const{ return m_input; }

    
    inline bool InputHasBeenSet() const { return m_inputHasBeenSet; }

    
    inline void SetInput(const Input& value) { m_inputHasBeenSet = true; m_input = value; }

    
    inline void SetInput(Input&& value) { m_inputHasBeenSet = true; m_input = std::move(value); }

    
    inline UpdateDatasetRequest& WithInput(const Input& value) { SetInput(value); return *this;}

    
    inline UpdateDatasetRequest& WithInput(Input&& value) { SetInput(std::move(value)); return *this;}


    /**
     * <p>A set of options that defines how DataBrew interprets an Amazon S3 path of
     * the dataset.</p>
     */
    inline const PathOptions& GetPathOptions() const{ return m_pathOptions; }

    /**
     * <p>A set of options that defines how DataBrew interprets an Amazon S3 path of
     * the dataset.</p>
     */
    inline bool PathOptionsHasBeenSet() const { return m_pathOptionsHasBeenSet; }

    /**
     * <p>A set of options that defines how DataBrew interprets an Amazon S3 path of
     * the dataset.</p>
     */
    inline void SetPathOptions(const PathOptions& value) { m_pathOptionsHasBeenSet = true; m_pathOptions = value; }

    /**
     * <p>A set of options that defines how DataBrew interprets an Amazon S3 path of
     * the dataset.</p>
     */
    inline void SetPathOptions(PathOptions&& value) { m_pathOptionsHasBeenSet = true; m_pathOptions = std::move(value); }

    /**
     * <p>A set of options that defines how DataBrew interprets an Amazon S3 path of
     * the dataset.</p>
     */
    inline UpdateDatasetRequest& WithPathOptions(const PathOptions& value) { SetPathOptions(value); return *this;}

    /**
     * <p>A set of options that defines how DataBrew interprets an Amazon S3 path of
     * the dataset.</p>
     */
    inline UpdateDatasetRequest& WithPathOptions(PathOptions&& value) { SetPathOptions(std::move(value)); return *this;}

  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    InputFormat m_format;
    bool m_formatHasBeenSet = false;

    FormatOptions m_formatOptions;
    bool m_formatOptionsHasBeenSet = false;

    Input m_input;
    bool m_inputHasBeenSet = false;

    PathOptions m_pathOptions;
    bool m_pathOptionsHasBeenSet = false;
  };

} // namespace Model
} // namespace GlueDataBrew
} // namespace Aws
