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


    /**
     * <p>The unique ID for the app associated with the form summary.</p>
     */
    inline const Aws::String& GetAppId() const{ return m_appId; }

    /**
     * <p>The unique ID for the app associated with the form summary.</p>
     */
    inline bool AppIdHasBeenSet() const { return m_appIdHasBeenSet; }

    /**
     * <p>The unique ID for the app associated with the form summary.</p>
     */
    inline void SetAppId(const Aws::String& value) { m_appIdHasBeenSet = true; m_appId = value; }

    /**
     * <p>The unique ID for the app associated with the form summary.</p>
     */
    inline void SetAppId(Aws::String&& value) { m_appIdHasBeenSet = true; m_appId = std::move(value); }

    /**
     * <p>The unique ID for the app associated with the form summary.</p>
     */
    inline void SetAppId(const char* value) { m_appIdHasBeenSet = true; m_appId.assign(value); }

    /**
     * <p>The unique ID for the app associated with the form summary.</p>
     */
    inline FormSummary& WithAppId(const Aws::String& value) { SetAppId(value); return *this;}

    /**
     * <p>The unique ID for the app associated with the form summary.</p>
     */
    inline FormSummary& WithAppId(Aws::String&& value) { SetAppId(std::move(value)); return *this;}

    /**
     * <p>The unique ID for the app associated with the form summary.</p>
     */
    inline FormSummary& WithAppId(const char* value) { SetAppId(value); return *this;}


    /**
     * <p>The form's data source type.</p>
     */
    inline const FormDataTypeConfig& GetDataType() const{ return m_dataType; }

    /**
     * <p>The form's data source type.</p>
     */
    inline bool DataTypeHasBeenSet() const { return m_dataTypeHasBeenSet; }

    /**
     * <p>The form's data source type.</p>
     */
    inline void SetDataType(const FormDataTypeConfig& value) { m_dataTypeHasBeenSet = true; m_dataType = value; }

    /**
     * <p>The form's data source type.</p>
     */
    inline void SetDataType(FormDataTypeConfig&& value) { m_dataTypeHasBeenSet = true; m_dataType = std::move(value); }

    /**
     * <p>The form's data source type.</p>
     */
    inline FormSummary& WithDataType(const FormDataTypeConfig& value) { SetDataType(value); return *this;}

    /**
     * <p>The form's data source type.</p>
     */
    inline FormSummary& WithDataType(FormDataTypeConfig&& value) { SetDataType(std::move(value)); return *this;}


    /**
     * <p>The name of the backend environment that is part of the Amplify app.</p>
     */
    inline const Aws::String& GetEnvironmentName() const{ return m_environmentName; }

    /**
     * <p>The name of the backend environment that is part of the Amplify app.</p>
     */
    inline bool EnvironmentNameHasBeenSet() const { return m_environmentNameHasBeenSet; }

    /**
     * <p>The name of the backend environment that is part of the Amplify app.</p>
     */
    inline void SetEnvironmentName(const Aws::String& value) { m_environmentNameHasBeenSet = true; m_environmentName = value; }

    /**
     * <p>The name of the backend environment that is part of the Amplify app.</p>
     */
    inline void SetEnvironmentName(Aws::String&& value) { m_environmentNameHasBeenSet = true; m_environmentName = std::move(value); }

    /**
     * <p>The name of the backend environment that is part of the Amplify app.</p>
     */
    inline void SetEnvironmentName(const char* value) { m_environmentNameHasBeenSet = true; m_environmentName.assign(value); }

    /**
     * <p>The name of the backend environment that is part of the Amplify app.</p>
     */
    inline FormSummary& WithEnvironmentName(const Aws::String& value) { SetEnvironmentName(value); return *this;}

    /**
     * <p>The name of the backend environment that is part of the Amplify app.</p>
     */
    inline FormSummary& WithEnvironmentName(Aws::String&& value) { SetEnvironmentName(std::move(value)); return *this;}

    /**
     * <p>The name of the backend environment that is part of the Amplify app.</p>
     */
    inline FormSummary& WithEnvironmentName(const char* value) { SetEnvironmentName(value); return *this;}


    /**
     * <p>The type of operation to perform on the form.</p>
     */
    inline const FormActionType& GetFormActionType() const{ return m_formActionType; }

    /**
     * <p>The type of operation to perform on the form.</p>
     */
    inline bool FormActionTypeHasBeenSet() const { return m_formActionTypeHasBeenSet; }

    /**
     * <p>The type of operation to perform on the form.</p>
     */
    inline void SetFormActionType(const FormActionType& value) { m_formActionTypeHasBeenSet = true; m_formActionType = value; }

    /**
     * <p>The type of operation to perform on the form.</p>
     */
    inline void SetFormActionType(FormActionType&& value) { m_formActionTypeHasBeenSet = true; m_formActionType = std::move(value); }

    /**
     * <p>The type of operation to perform on the form.</p>
     */
    inline FormSummary& WithFormActionType(const FormActionType& value) { SetFormActionType(value); return *this;}

    /**
     * <p>The type of operation to perform on the form.</p>
     */
    inline FormSummary& WithFormActionType(FormActionType&& value) { SetFormActionType(std::move(value)); return *this;}


    /**
     * <p>The ID of the form.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }

    /**
     * <p>The ID of the form.</p>
     */
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }

    /**
     * <p>The ID of the form.</p>
     */
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }

    /**
     * <p>The ID of the form.</p>
     */
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }

    /**
     * <p>The ID of the form.</p>
     */
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }

    /**
     * <p>The ID of the form.</p>
     */
    inline FormSummary& WithId(const Aws::String& value) { SetId(value); return *this;}

    /**
     * <p>The ID of the form.</p>
     */
    inline FormSummary& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}

    /**
     * <p>The ID of the form.</p>
     */
    inline FormSummary& WithId(const char* value) { SetId(value); return *this;}


    /**
     * <p>The name of the form.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the form.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the form.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the form.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the form.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the form.</p>
     */
    inline FormSummary& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the form.</p>
     */
    inline FormSummary& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the form.</p>
     */
    inline FormSummary& WithName(const char* value) { SetName(value); return *this;}

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
