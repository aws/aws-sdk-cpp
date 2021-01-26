/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/databrew/GlueDataBrew_EXPORTS.h>
#include <aws/databrew/GlueDataBrewRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/databrew/model/FormatOptions.h>
#include <aws/databrew/model/Input.h>
#include <utility>

namespace Aws
{
namespace GlueDataBrew
{
namespace Model
{

  /**
   */
  class AWS_GLUEDATABREW_API UpdateDatasetRequest : public GlueDataBrewRequest
  {
  public:
    UpdateDatasetRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateDataset"; }

    Aws::String SerializePayload() const override;


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

  private:

    Aws::String m_name;
    bool m_nameHasBeenSet;

    FormatOptions m_formatOptions;
    bool m_formatOptionsHasBeenSet;

    Input m_input;
    bool m_inputHasBeenSet;
  };

} // namespace Model
} // namespace GlueDataBrew
} // namespace Aws
