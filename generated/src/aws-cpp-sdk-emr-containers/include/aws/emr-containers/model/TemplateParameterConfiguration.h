/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/emr-containers/EMRContainers_EXPORTS.h>
#include <aws/emr-containers/model/TemplateParameterDataType.h>
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
namespace EMRContainers
{
namespace Model
{

  /**
   * <p>The configuration of a job template parameter.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/emr-containers-2020-10-01/TemplateParameterConfiguration">AWS
   * API Reference</a></p>
   */
  class TemplateParameterConfiguration
  {
  public:
    AWS_EMRCONTAINERS_API TemplateParameterConfiguration();
    AWS_EMRCONTAINERS_API TemplateParameterConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_EMRCONTAINERS_API TemplateParameterConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_EMRCONTAINERS_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The type of the job template parameter. Allowed values are: ‘String’,
     * ‘Number’.</p>
     */
    inline const TemplateParameterDataType& GetType() const{ return m_type; }

    /**
     * <p>The type of the job template parameter. Allowed values are: ‘String’,
     * ‘Number’.</p>
     */
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }

    /**
     * <p>The type of the job template parameter. Allowed values are: ‘String’,
     * ‘Number’.</p>
     */
    inline void SetType(const TemplateParameterDataType& value) { m_typeHasBeenSet = true; m_type = value; }

    /**
     * <p>The type of the job template parameter. Allowed values are: ‘String’,
     * ‘Number’.</p>
     */
    inline void SetType(TemplateParameterDataType&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }

    /**
     * <p>The type of the job template parameter. Allowed values are: ‘String’,
     * ‘Number’.</p>
     */
    inline TemplateParameterConfiguration& WithType(const TemplateParameterDataType& value) { SetType(value); return *this;}

    /**
     * <p>The type of the job template parameter. Allowed values are: ‘String’,
     * ‘Number’.</p>
     */
    inline TemplateParameterConfiguration& WithType(TemplateParameterDataType&& value) { SetType(std::move(value)); return *this;}


    /**
     * <p>The default value for the job template parameter.</p>
     */
    inline const Aws::String& GetDefaultValue() const{ return m_defaultValue; }

    /**
     * <p>The default value for the job template parameter.</p>
     */
    inline bool DefaultValueHasBeenSet() const { return m_defaultValueHasBeenSet; }

    /**
     * <p>The default value for the job template parameter.</p>
     */
    inline void SetDefaultValue(const Aws::String& value) { m_defaultValueHasBeenSet = true; m_defaultValue = value; }

    /**
     * <p>The default value for the job template parameter.</p>
     */
    inline void SetDefaultValue(Aws::String&& value) { m_defaultValueHasBeenSet = true; m_defaultValue = std::move(value); }

    /**
     * <p>The default value for the job template parameter.</p>
     */
    inline void SetDefaultValue(const char* value) { m_defaultValueHasBeenSet = true; m_defaultValue.assign(value); }

    /**
     * <p>The default value for the job template parameter.</p>
     */
    inline TemplateParameterConfiguration& WithDefaultValue(const Aws::String& value) { SetDefaultValue(value); return *this;}

    /**
     * <p>The default value for the job template parameter.</p>
     */
    inline TemplateParameterConfiguration& WithDefaultValue(Aws::String&& value) { SetDefaultValue(std::move(value)); return *this;}

    /**
     * <p>The default value for the job template parameter.</p>
     */
    inline TemplateParameterConfiguration& WithDefaultValue(const char* value) { SetDefaultValue(value); return *this;}

  private:

    TemplateParameterDataType m_type;
    bool m_typeHasBeenSet = false;

    Aws::String m_defaultValue;
    bool m_defaultValueHasBeenSet = false;
  };

} // namespace Model
} // namespace EMRContainers
} // namespace Aws
