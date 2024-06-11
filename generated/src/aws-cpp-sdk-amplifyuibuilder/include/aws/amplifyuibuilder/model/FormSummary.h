/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/amplifyuibuilder/AmplifyUIBuilder_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/amplifyuibuilder/model/FormDataTypeConfig.h>
#include <aws/amplifyuibuilder/model/FormActionType.h>
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
namespace AmplifyUIBuilder
{
namespace Model
{

  /**
   * <p>Describes the basic information about a form.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/amplifyuibuilder-2021-08-11/FormSummary">AWS
   * API Reference</a></p>
   */
  class FormSummary
  {
  public:
    AWS_AMPLIFYUIBUILDER_API FormSummary();
    AWS_AMPLIFYUIBUILDER_API FormSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_AMPLIFYUIBUILDER_API FormSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_AMPLIFYUIBUILDER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The unique ID for the app associated with the form summary.</p>
     */
    inline const Aws::String& GetAppId() const{ return m_appId; }
    inline bool AppIdHasBeenSet() const { return m_appIdHasBeenSet; }
    inline void SetAppId(const Aws::String& value) { m_appIdHasBeenSet = true; m_appId = value; }
    inline void SetAppId(Aws::String&& value) { m_appIdHasBeenSet = true; m_appId = std::move(value); }
    inline void SetAppId(const char* value) { m_appIdHasBeenSet = true; m_appId.assign(value); }
    inline FormSummary& WithAppId(const Aws::String& value) { SetAppId(value); return *this;}
    inline FormSummary& WithAppId(Aws::String&& value) { SetAppId(std::move(value)); return *this;}
    inline FormSummary& WithAppId(const char* value) { SetAppId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The form's data source type.</p>
     */
    inline const FormDataTypeConfig& GetDataType() const{ return m_dataType; }
    inline bool DataTypeHasBeenSet() const { return m_dataTypeHasBeenSet; }
    inline void SetDataType(const FormDataTypeConfig& value) { m_dataTypeHasBeenSet = true; m_dataType = value; }
    inline void SetDataType(FormDataTypeConfig&& value) { m_dataTypeHasBeenSet = true; m_dataType = std::move(value); }
    inline FormSummary& WithDataType(const FormDataTypeConfig& value) { SetDataType(value); return *this;}
    inline FormSummary& WithDataType(FormDataTypeConfig&& value) { SetDataType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the backend environment that is part of the Amplify app.</p>
     */
    inline const Aws::String& GetEnvironmentName() const{ return m_environmentName; }
    inline bool EnvironmentNameHasBeenSet() const { return m_environmentNameHasBeenSet; }
    inline void SetEnvironmentName(const Aws::String& value) { m_environmentNameHasBeenSet = true; m_environmentName = value; }
    inline void SetEnvironmentName(Aws::String&& value) { m_environmentNameHasBeenSet = true; m_environmentName = std::move(value); }
    inline void SetEnvironmentName(const char* value) { m_environmentNameHasBeenSet = true; m_environmentName.assign(value); }
    inline FormSummary& WithEnvironmentName(const Aws::String& value) { SetEnvironmentName(value); return *this;}
    inline FormSummary& WithEnvironmentName(Aws::String&& value) { SetEnvironmentName(std::move(value)); return *this;}
    inline FormSummary& WithEnvironmentName(const char* value) { SetEnvironmentName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of operation to perform on the form.</p>
     */
    inline const FormActionType& GetFormActionType() const{ return m_formActionType; }
    inline bool FormActionTypeHasBeenSet() const { return m_formActionTypeHasBeenSet; }
    inline void SetFormActionType(const FormActionType& value) { m_formActionTypeHasBeenSet = true; m_formActionType = value; }
    inline void SetFormActionType(FormActionType&& value) { m_formActionTypeHasBeenSet = true; m_formActionType = std::move(value); }
    inline FormSummary& WithFormActionType(const FormActionType& value) { SetFormActionType(value); return *this;}
    inline FormSummary& WithFormActionType(FormActionType&& value) { SetFormActionType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the form.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }
    inline FormSummary& WithId(const Aws::String& value) { SetId(value); return *this;}
    inline FormSummary& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}
    inline FormSummary& WithId(const char* value) { SetId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the form.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline FormSummary& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline FormSummary& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline FormSummary& WithName(const char* value) { SetName(value); return *this;}
    ///@}
  private:

    Aws::String m_appId;
    bool m_appIdHasBeenSet = false;

    FormDataTypeConfig m_dataType;
    bool m_dataTypeHasBeenSet = false;

    Aws::String m_environmentName;
    bool m_environmentNameHasBeenSet = false;

    FormActionType m_formActionType;
    bool m_formActionTypeHasBeenSet = false;

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;
  };

} // namespace Model
} // namespace AmplifyUIBuilder
} // namespace Aws
