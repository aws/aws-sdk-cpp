﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/appconfig/AppConfig_EXPORTS.h>
#include <aws/appconfig/model/ValidatorType.h>
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
namespace AppConfig
{
namespace Model
{

  /**
   * <p>A validator provides a syntactic or semantic check to ensure the
   * configuration that you want to deploy functions as intended. To validate your
   * application configuration data, you provide a schema or an Amazon Web Services
   * Lambda function that runs against the configuration. The configuration
   * deployment or update can only proceed when the configuration data is valid. For
   * more information, see <a
   * href="https://docs.aws.amazon.com/appconfig/latest/userguide/appconfig-creating-configuration-profile.html#appconfig-creating-configuration-and-profile-validators">About
   * validators</a> in the <i>AppConfig User Guide</i>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/appconfig-2019-10-09/Validator">AWS
   * API Reference</a></p>
   */
  class Validator
  {
  public:
    AWS_APPCONFIG_API Validator();
    AWS_APPCONFIG_API Validator(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPCONFIG_API Validator& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPCONFIG_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>AppConfig supports validators of type <code>JSON_SCHEMA</code> and
     * <code>LAMBDA</code> </p>
     */
    inline const ValidatorType& GetType() const{ return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(const ValidatorType& value) { m_typeHasBeenSet = true; m_type = value; }
    inline void SetType(ValidatorType&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }
    inline Validator& WithType(const ValidatorType& value) { SetType(value); return *this;}
    inline Validator& WithType(ValidatorType&& value) { SetType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Either the JSON Schema content or the Amazon Resource Name (ARN) of an Lambda
     * function.</p>
     */
    inline const Aws::String& GetContent() const{ return m_content; }
    inline bool ContentHasBeenSet() const { return m_contentHasBeenSet; }
    inline void SetContent(const Aws::String& value) { m_contentHasBeenSet = true; m_content = value; }
    inline void SetContent(Aws::String&& value) { m_contentHasBeenSet = true; m_content = std::move(value); }
    inline void SetContent(const char* value) { m_contentHasBeenSet = true; m_content.assign(value); }
    inline Validator& WithContent(const Aws::String& value) { SetContent(value); return *this;}
    inline Validator& WithContent(Aws::String&& value) { SetContent(std::move(value)); return *this;}
    inline Validator& WithContent(const char* value) { SetContent(value); return *this;}
    ///@}
  private:

    ValidatorType m_type;
    bool m_typeHasBeenSet = false;

    Aws::String m_content;
    bool m_contentHasBeenSet = false;
  };

} // namespace Model
} // namespace AppConfig
} // namespace Aws
