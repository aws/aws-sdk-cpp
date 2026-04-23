/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#pragma once
#include <aws/rds/RDS_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Xml
{
  class XmlNode;
} // namespace Xml
} // namespace Utils
namespace RDS
{
namespace Model
{

  /**
   * <p>Contains the available processor feature information for the DB instance
   * class of a DB instance.</p> <p>For more information, see <a
   * href="https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/Concepts.DBInstanceClass.html#USER_ConfigureProcessor">Configuring
   * the Processor of the DB Instance Class</a> in the <i>Amazon RDS User Guide. </i>
   * </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/AvailableProcessorFeature">AWS
   * API Reference</a></p>
   */
  class AWS_RDS_API AvailableProcessorFeature
  {
  public:
    AvailableProcessorFeature();
    AvailableProcessorFeature(const Aws::Utils::Xml::XmlNode& xmlNode);
    AvailableProcessorFeature& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p>The name of the processor feature. Valid names are <code>coreCount</code> and
     * <code>threadsPerCore</code>.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the processor feature. Valid names are <code>coreCount</code> and
     * <code>threadsPerCore</code>.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the processor feature. Valid names are <code>coreCount</code> and
     * <code>threadsPerCore</code>.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the processor feature. Valid names are <code>coreCount</code> and
     * <code>threadsPerCore</code>.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the processor feature. Valid names are <code>coreCount</code> and
     * <code>threadsPerCore</code>.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the processor feature. Valid names are <code>coreCount</code> and
     * <code>threadsPerCore</code>.</p>
     */
    inline AvailableProcessorFeature& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the processor feature. Valid names are <code>coreCount</code> and
     * <code>threadsPerCore</code>.</p>
     */
    inline AvailableProcessorFeature& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the processor feature. Valid names are <code>coreCount</code> and
     * <code>threadsPerCore</code>.</p>
     */
    inline AvailableProcessorFeature& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The default value for the processor feature of the DB instance class.</p>
     */
    inline const Aws::String& GetDefaultValue() const{ return m_defaultValue; }

    /**
     * <p>The default value for the processor feature of the DB instance class.</p>
     */
    inline bool DefaultValueHasBeenSet() const { return m_defaultValueHasBeenSet; }

    /**
     * <p>The default value for the processor feature of the DB instance class.</p>
     */
    inline void SetDefaultValue(const Aws::String& value) { m_defaultValueHasBeenSet = true; m_defaultValue = value; }

    /**
     * <p>The default value for the processor feature of the DB instance class.</p>
     */
    inline void SetDefaultValue(Aws::String&& value) { m_defaultValueHasBeenSet = true; m_defaultValue = std::move(value); }

    /**
     * <p>The default value for the processor feature of the DB instance class.</p>
     */
    inline void SetDefaultValue(const char* value) { m_defaultValueHasBeenSet = true; m_defaultValue.assign(value); }

    /**
     * <p>The default value for the processor feature of the DB instance class.</p>
     */
    inline AvailableProcessorFeature& WithDefaultValue(const Aws::String& value) { SetDefaultValue(value); return *this;}

    /**
     * <p>The default value for the processor feature of the DB instance class.</p>
     */
    inline AvailableProcessorFeature& WithDefaultValue(Aws::String&& value) { SetDefaultValue(std::move(value)); return *this;}

    /**
     * <p>The default value for the processor feature of the DB instance class.</p>
     */
    inline AvailableProcessorFeature& WithDefaultValue(const char* value) { SetDefaultValue(value); return *this;}


    /**
     * <p>The allowed values for the processor feature of the DB instance class.</p>
     */
    inline const Aws::String& GetAllowedValues() const{ return m_allowedValues; }

    /**
     * <p>The allowed values for the processor feature of the DB instance class.</p>
     */
    inline bool AllowedValuesHasBeenSet() const { return m_allowedValuesHasBeenSet; }

    /**
     * <p>The allowed values for the processor feature of the DB instance class.</p>
     */
    inline void SetAllowedValues(const Aws::String& value) { m_allowedValuesHasBeenSet = true; m_allowedValues = value; }

    /**
     * <p>The allowed values for the processor feature of the DB instance class.</p>
     */
    inline void SetAllowedValues(Aws::String&& value) { m_allowedValuesHasBeenSet = true; m_allowedValues = std::move(value); }

    /**
     * <p>The allowed values for the processor feature of the DB instance class.</p>
     */
    inline void SetAllowedValues(const char* value) { m_allowedValuesHasBeenSet = true; m_allowedValues.assign(value); }

    /**
     * <p>The allowed values for the processor feature of the DB instance class.</p>
     */
    inline AvailableProcessorFeature& WithAllowedValues(const Aws::String& value) { SetAllowedValues(value); return *this;}

    /**
     * <p>The allowed values for the processor feature of the DB instance class.</p>
     */
    inline AvailableProcessorFeature& WithAllowedValues(Aws::String&& value) { SetAllowedValues(std::move(value)); return *this;}

    /**
     * <p>The allowed values for the processor feature of the DB instance class.</p>
     */
    inline AvailableProcessorFeature& WithAllowedValues(const char* value) { SetAllowedValues(value); return *this;}

  private:

    Aws::String m_name;
    bool m_nameHasBeenSet;

    Aws::String m_defaultValue;
    bool m_defaultValueHasBeenSet;

    Aws::String m_allowedValues;
    bool m_allowedValuesHasBeenSet;
  };

} // namespace Model
} // namespace RDS
} // namespace Aws
