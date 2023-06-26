/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/amplifyuibuilder/AmplifyUIBuilder_EXPORTS.h>
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
namespace AmplifyUIBuilder
{
namespace Model
{

  /**
   * <p>Represents the data binding configuration for a specific property using data
   * stored in Amazon Web Services. For Amazon Web Services connected properties, you
   * can bind a property to data stored in an Amplify DataStore model.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/amplifyuibuilder-2021-08-11/FormInputBindingPropertiesValueProperties">AWS
   * API Reference</a></p>
   */
  class FormInputBindingPropertiesValueProperties
  {
  public:
    AWS_AMPLIFYUIBUILDER_API FormInputBindingPropertiesValueProperties();
    AWS_AMPLIFYUIBUILDER_API FormInputBindingPropertiesValueProperties(Aws::Utils::Json::JsonView jsonValue);
    AWS_AMPLIFYUIBUILDER_API FormInputBindingPropertiesValueProperties& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_AMPLIFYUIBUILDER_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>An Amplify DataStore model.</p>
     */
    inline const Aws::String& GetModel() const{ return m_model; }

    /**
     * <p>An Amplify DataStore model.</p>
     */
    inline bool ModelHasBeenSet() const { return m_modelHasBeenSet; }

    /**
     * <p>An Amplify DataStore model.</p>
     */
    inline void SetModel(const Aws::String& value) { m_modelHasBeenSet = true; m_model = value; }

    /**
     * <p>An Amplify DataStore model.</p>
     */
    inline void SetModel(Aws::String&& value) { m_modelHasBeenSet = true; m_model = std::move(value); }

    /**
     * <p>An Amplify DataStore model.</p>
     */
    inline void SetModel(const char* value) { m_modelHasBeenSet = true; m_model.assign(value); }

    /**
     * <p>An Amplify DataStore model.</p>
     */
    inline FormInputBindingPropertiesValueProperties& WithModel(const Aws::String& value) { SetModel(value); return *this;}

    /**
     * <p>An Amplify DataStore model.</p>
     */
    inline FormInputBindingPropertiesValueProperties& WithModel(Aws::String&& value) { SetModel(std::move(value)); return *this;}

    /**
     * <p>An Amplify DataStore model.</p>
     */
    inline FormInputBindingPropertiesValueProperties& WithModel(const char* value) { SetModel(value); return *this;}

  private:

    Aws::String m_model;
    bool m_modelHasBeenSet = false;
  };

} // namespace Model
} // namespace AmplifyUIBuilder
} // namespace Aws
