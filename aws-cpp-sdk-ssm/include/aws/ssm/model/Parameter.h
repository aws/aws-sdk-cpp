/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ssm/SSM_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ssm/model/ParameterType.h>
#include <aws/core/utils/DateTime.h>
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
namespace SSM
{
namespace Model
{

  /**
   * <p>An Amazon Web Services Systems Manager parameter in Parameter
   * Store.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/Parameter">AWS API
   * Reference</a></p>
   */
  class Parameter
  {
  public:
    AWS_SSM_API Parameter();
    AWS_SSM_API Parameter(Aws::Utils::Json::JsonView jsonValue);
    AWS_SSM_API Parameter& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SSM_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name of the parameter.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the parameter.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the parameter.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the parameter.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the parameter.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the parameter.</p>
     */
    inline Parameter& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the parameter.</p>
     */
    inline Parameter& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the parameter.</p>
     */
    inline Parameter& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The type of parameter. Valid values include the following:
     * <code>String</code>, <code>StringList</code>, and <code>SecureString</code>.</p>
     *  <p>If type is <code>StringList</code>, the system returns a
     * comma-separated string with no spaces between commas in the <code>Value</code>
     * field.</p> 
     */
    inline const ParameterType& GetType() const{ return m_type; }

    /**
     * <p>The type of parameter. Valid values include the following:
     * <code>String</code>, <code>StringList</code>, and <code>SecureString</code>.</p>
     *  <p>If type is <code>StringList</code>, the system returns a
     * comma-separated string with no spaces between commas in the <code>Value</code>
     * field.</p> 
     */
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }

    /**
     * <p>The type of parameter. Valid values include the following:
     * <code>String</code>, <code>StringList</code>, and <code>SecureString</code>.</p>
     *  <p>If type is <code>StringList</code>, the system returns a
     * comma-separated string with no spaces between commas in the <code>Value</code>
     * field.</p> 
     */
    inline void SetType(const ParameterType& value) { m_typeHasBeenSet = true; m_type = value; }

    /**
     * <p>The type of parameter. Valid values include the following:
     * <code>String</code>, <code>StringList</code>, and <code>SecureString</code>.</p>
     *  <p>If type is <code>StringList</code>, the system returns a
     * comma-separated string with no spaces between commas in the <code>Value</code>
     * field.</p> 
     */
    inline void SetType(ParameterType&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }

    /**
     * <p>The type of parameter. Valid values include the following:
     * <code>String</code>, <code>StringList</code>, and <code>SecureString</code>.</p>
     *  <p>If type is <code>StringList</code>, the system returns a
     * comma-separated string with no spaces between commas in the <code>Value</code>
     * field.</p> 
     */
    inline Parameter& WithType(const ParameterType& value) { SetType(value); return *this;}

    /**
     * <p>The type of parameter. Valid values include the following:
     * <code>String</code>, <code>StringList</code>, and <code>SecureString</code>.</p>
     *  <p>If type is <code>StringList</code>, the system returns a
     * comma-separated string with no spaces between commas in the <code>Value</code>
     * field.</p> 
     */
    inline Parameter& WithType(ParameterType&& value) { SetType(std::move(value)); return *this;}


    /**
     * <p>The parameter value.</p>  <p>If type is <code>StringList</code>, the
     * system returns a comma-separated string with no spaces between commas in the
     * <code>Value</code> field.</p> 
     */
    inline const Aws::String& GetValue() const{ return m_value; }

    /**
     * <p>The parameter value.</p>  <p>If type is <code>StringList</code>, the
     * system returns a comma-separated string with no spaces between commas in the
     * <code>Value</code> field.</p> 
     */
    inline bool ValueHasBeenSet() const { return m_valueHasBeenSet; }

    /**
     * <p>The parameter value.</p>  <p>If type is <code>StringList</code>, the
     * system returns a comma-separated string with no spaces between commas in the
     * <code>Value</code> field.</p> 
     */
    inline void SetValue(const Aws::String& value) { m_valueHasBeenSet = true; m_value = value; }

    /**
     * <p>The parameter value.</p>  <p>If type is <code>StringList</code>, the
     * system returns a comma-separated string with no spaces between commas in the
     * <code>Value</code> field.</p> 
     */
    inline void SetValue(Aws::String&& value) { m_valueHasBeenSet = true; m_value = std::move(value); }

    /**
     * <p>The parameter value.</p>  <p>If type is <code>StringList</code>, the
     * system returns a comma-separated string with no spaces between commas in the
     * <code>Value</code> field.</p> 
     */
    inline void SetValue(const char* value) { m_valueHasBeenSet = true; m_value.assign(value); }

    /**
     * <p>The parameter value.</p>  <p>If type is <code>StringList</code>, the
     * system returns a comma-separated string with no spaces between commas in the
     * <code>Value</code> field.</p> 
     */
    inline Parameter& WithValue(const Aws::String& value) { SetValue(value); return *this;}

    /**
     * <p>The parameter value.</p>  <p>If type is <code>StringList</code>, the
     * system returns a comma-separated string with no spaces between commas in the
     * <code>Value</code> field.</p> 
     */
    inline Parameter& WithValue(Aws::String&& value) { SetValue(std::move(value)); return *this;}

    /**
     * <p>The parameter value.</p>  <p>If type is <code>StringList</code>, the
     * system returns a comma-separated string with no spaces between commas in the
     * <code>Value</code> field.</p> 
     */
    inline Parameter& WithValue(const char* value) { SetValue(value); return *this;}


    /**
     * <p>The parameter version.</p>
     */
    inline long long GetVersion() const{ return m_version; }

    /**
     * <p>The parameter version.</p>
     */
    inline bool VersionHasBeenSet() const { return m_versionHasBeenSet; }

    /**
     * <p>The parameter version.</p>
     */
    inline void SetVersion(long long value) { m_versionHasBeenSet = true; m_version = value; }

    /**
     * <p>The parameter version.</p>
     */
    inline Parameter& WithVersion(long long value) { SetVersion(value); return *this;}


    /**
     * <p>Either the version number or the label used to retrieve the parameter value.
     * Specify selectors by using one of the following formats:</p>
     * <p>parameter_name:version</p> <p>parameter_name:label</p>
     */
    inline const Aws::String& GetSelector() const{ return m_selector; }

    /**
     * <p>Either the version number or the label used to retrieve the parameter value.
     * Specify selectors by using one of the following formats:</p>
     * <p>parameter_name:version</p> <p>parameter_name:label</p>
     */
    inline bool SelectorHasBeenSet() const { return m_selectorHasBeenSet; }

    /**
     * <p>Either the version number or the label used to retrieve the parameter value.
     * Specify selectors by using one of the following formats:</p>
     * <p>parameter_name:version</p> <p>parameter_name:label</p>
     */
    inline void SetSelector(const Aws::String& value) { m_selectorHasBeenSet = true; m_selector = value; }

    /**
     * <p>Either the version number or the label used to retrieve the parameter value.
     * Specify selectors by using one of the following formats:</p>
     * <p>parameter_name:version</p> <p>parameter_name:label</p>
     */
    inline void SetSelector(Aws::String&& value) { m_selectorHasBeenSet = true; m_selector = std::move(value); }

    /**
     * <p>Either the version number or the label used to retrieve the parameter value.
     * Specify selectors by using one of the following formats:</p>
     * <p>parameter_name:version</p> <p>parameter_name:label</p>
     */
    inline void SetSelector(const char* value) { m_selectorHasBeenSet = true; m_selector.assign(value); }

    /**
     * <p>Either the version number or the label used to retrieve the parameter value.
     * Specify selectors by using one of the following formats:</p>
     * <p>parameter_name:version</p> <p>parameter_name:label</p>
     */
    inline Parameter& WithSelector(const Aws::String& value) { SetSelector(value); return *this;}

    /**
     * <p>Either the version number or the label used to retrieve the parameter value.
     * Specify selectors by using one of the following formats:</p>
     * <p>parameter_name:version</p> <p>parameter_name:label</p>
     */
    inline Parameter& WithSelector(Aws::String&& value) { SetSelector(std::move(value)); return *this;}

    /**
     * <p>Either the version number or the label used to retrieve the parameter value.
     * Specify selectors by using one of the following formats:</p>
     * <p>parameter_name:version</p> <p>parameter_name:label</p>
     */
    inline Parameter& WithSelector(const char* value) { SetSelector(value); return *this;}


    /**
     * <p>Applies to parameters that reference information in other Amazon Web Services
     * services. <code>SourceResult</code> is the raw result or response from the
     * source.</p>
     */
    inline const Aws::String& GetSourceResult() const{ return m_sourceResult; }

    /**
     * <p>Applies to parameters that reference information in other Amazon Web Services
     * services. <code>SourceResult</code> is the raw result or response from the
     * source.</p>
     */
    inline bool SourceResultHasBeenSet() const { return m_sourceResultHasBeenSet; }

    /**
     * <p>Applies to parameters that reference information in other Amazon Web Services
     * services. <code>SourceResult</code> is the raw result or response from the
     * source.</p>
     */
    inline void SetSourceResult(const Aws::String& value) { m_sourceResultHasBeenSet = true; m_sourceResult = value; }

    /**
     * <p>Applies to parameters that reference information in other Amazon Web Services
     * services. <code>SourceResult</code> is the raw result or response from the
     * source.</p>
     */
    inline void SetSourceResult(Aws::String&& value) { m_sourceResultHasBeenSet = true; m_sourceResult = std::move(value); }

    /**
     * <p>Applies to parameters that reference information in other Amazon Web Services
     * services. <code>SourceResult</code> is the raw result or response from the
     * source.</p>
     */
    inline void SetSourceResult(const char* value) { m_sourceResultHasBeenSet = true; m_sourceResult.assign(value); }

    /**
     * <p>Applies to parameters that reference information in other Amazon Web Services
     * services. <code>SourceResult</code> is the raw result or response from the
     * source.</p>
     */
    inline Parameter& WithSourceResult(const Aws::String& value) { SetSourceResult(value); return *this;}

    /**
     * <p>Applies to parameters that reference information in other Amazon Web Services
     * services. <code>SourceResult</code> is the raw result or response from the
     * source.</p>
     */
    inline Parameter& WithSourceResult(Aws::String&& value) { SetSourceResult(std::move(value)); return *this;}

    /**
     * <p>Applies to parameters that reference information in other Amazon Web Services
     * services. <code>SourceResult</code> is the raw result or response from the
     * source.</p>
     */
    inline Parameter& WithSourceResult(const char* value) { SetSourceResult(value); return *this;}


    /**
     * <p>Date the parameter was last changed or updated and the parameter version was
     * created.</p>
     */
    inline const Aws::Utils::DateTime& GetLastModifiedDate() const{ return m_lastModifiedDate; }

    /**
     * <p>Date the parameter was last changed or updated and the parameter version was
     * created.</p>
     */
    inline bool LastModifiedDateHasBeenSet() const { return m_lastModifiedDateHasBeenSet; }

    /**
     * <p>Date the parameter was last changed or updated and the parameter version was
     * created.</p>
     */
    inline void SetLastModifiedDate(const Aws::Utils::DateTime& value) { m_lastModifiedDateHasBeenSet = true; m_lastModifiedDate = value; }

    /**
     * <p>Date the parameter was last changed or updated and the parameter version was
     * created.</p>
     */
    inline void SetLastModifiedDate(Aws::Utils::DateTime&& value) { m_lastModifiedDateHasBeenSet = true; m_lastModifiedDate = std::move(value); }

    /**
     * <p>Date the parameter was last changed or updated and the parameter version was
     * created.</p>
     */
    inline Parameter& WithLastModifiedDate(const Aws::Utils::DateTime& value) { SetLastModifiedDate(value); return *this;}

    /**
     * <p>Date the parameter was last changed or updated and the parameter version was
     * created.</p>
     */
    inline Parameter& WithLastModifiedDate(Aws::Utils::DateTime&& value) { SetLastModifiedDate(std::move(value)); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the parameter.</p>
     */
    inline const Aws::String& GetARN() const{ return m_aRN; }

    /**
     * <p>The Amazon Resource Name (ARN) of the parameter.</p>
     */
    inline bool ARNHasBeenSet() const { return m_aRNHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the parameter.</p>
     */
    inline void SetARN(const Aws::String& value) { m_aRNHasBeenSet = true; m_aRN = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the parameter.</p>
     */
    inline void SetARN(Aws::String&& value) { m_aRNHasBeenSet = true; m_aRN = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the parameter.</p>
     */
    inline void SetARN(const char* value) { m_aRNHasBeenSet = true; m_aRN.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the parameter.</p>
     */
    inline Parameter& WithARN(const Aws::String& value) { SetARN(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the parameter.</p>
     */
    inline Parameter& WithARN(Aws::String&& value) { SetARN(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the parameter.</p>
     */
    inline Parameter& WithARN(const char* value) { SetARN(value); return *this;}


    /**
     * <p>The data type of the parameter, such as <code>text</code> or
     * <code>aws:ec2:image</code>. The default is <code>text</code>.</p>
     */
    inline const Aws::String& GetDataType() const{ return m_dataType; }

    /**
     * <p>The data type of the parameter, such as <code>text</code> or
     * <code>aws:ec2:image</code>. The default is <code>text</code>.</p>
     */
    inline bool DataTypeHasBeenSet() const { return m_dataTypeHasBeenSet; }

    /**
     * <p>The data type of the parameter, such as <code>text</code> or
     * <code>aws:ec2:image</code>. The default is <code>text</code>.</p>
     */
    inline void SetDataType(const Aws::String& value) { m_dataTypeHasBeenSet = true; m_dataType = value; }

    /**
     * <p>The data type of the parameter, such as <code>text</code> or
     * <code>aws:ec2:image</code>. The default is <code>text</code>.</p>
     */
    inline void SetDataType(Aws::String&& value) { m_dataTypeHasBeenSet = true; m_dataType = std::move(value); }

    /**
     * <p>The data type of the parameter, such as <code>text</code> or
     * <code>aws:ec2:image</code>. The default is <code>text</code>.</p>
     */
    inline void SetDataType(const char* value) { m_dataTypeHasBeenSet = true; m_dataType.assign(value); }

    /**
     * <p>The data type of the parameter, such as <code>text</code> or
     * <code>aws:ec2:image</code>. The default is <code>text</code>.</p>
     */
    inline Parameter& WithDataType(const Aws::String& value) { SetDataType(value); return *this;}

    /**
     * <p>The data type of the parameter, such as <code>text</code> or
     * <code>aws:ec2:image</code>. The default is <code>text</code>.</p>
     */
    inline Parameter& WithDataType(Aws::String&& value) { SetDataType(std::move(value)); return *this;}

    /**
     * <p>The data type of the parameter, such as <code>text</code> or
     * <code>aws:ec2:image</code>. The default is <code>text</code>.</p>
     */
    inline Parameter& WithDataType(const char* value) { SetDataType(value); return *this;}

  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    ParameterType m_type;
    bool m_typeHasBeenSet = false;

    Aws::String m_value;
    bool m_valueHasBeenSet = false;

    long long m_version;
    bool m_versionHasBeenSet = false;

    Aws::String m_selector;
    bool m_selectorHasBeenSet = false;

    Aws::String m_sourceResult;
    bool m_sourceResultHasBeenSet = false;

    Aws::Utils::DateTime m_lastModifiedDate;
    bool m_lastModifiedDateHasBeenSet = false;

    Aws::String m_aRN;
    bool m_aRNHasBeenSet = false;

    Aws::String m_dataType;
    bool m_dataTypeHasBeenSet = false;
  };

} // namespace Model
} // namespace SSM
} // namespace Aws
