/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/monitoring/CloudWatch_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace Utils
{
namespace Xml
{
  class XmlNode;
} // namespace Xml
} // namespace Utils
namespace CloudWatch
{
namespace Model
{

  /**
   * <p> The <code>DimensionFilter</code> data type is used to filter
   * <a>ListMetrics</a> results. </p>
   */
  class AWS_CLOUDWATCH_API DimensionFilter
  {
  public:
    DimensionFilter();
    DimensionFilter(const Aws::Utils::Xml::XmlNode& xmlNode);
    DimensionFilter& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    void OutputToStream(Aws::OStream& oStream, const char* location) const;

    /**
     * <p>The dimension name to be matched.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The dimension name to be matched.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The dimension name to be matched.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The dimension name to be matched.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The dimension name to be matched.</p>
     */
    inline DimensionFilter& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The dimension name to be matched.</p>
     */
    inline DimensionFilter& WithName(Aws::String&& value) { SetName(value); return *this;}

    /**
     * <p>The dimension name to be matched.</p>
     */
    inline DimensionFilter& WithName(const char* value) { SetName(value); return *this;}

    /**
     * <p>The value of the dimension to be matched.</p> <note> <p>Specifying a
     * <code>Name</code> without specifying a <code>Value</code> returns all values
     * associated with that <code>Name</code>.</p> </note>
     */
    inline const Aws::String& GetValue() const{ return m_value; }

    /**
     * <p>The value of the dimension to be matched.</p> <note> <p>Specifying a
     * <code>Name</code> without specifying a <code>Value</code> returns all values
     * associated with that <code>Name</code>.</p> </note>
     */
    inline void SetValue(const Aws::String& value) { m_valueHasBeenSet = true; m_value = value; }

    /**
     * <p>The value of the dimension to be matched.</p> <note> <p>Specifying a
     * <code>Name</code> without specifying a <code>Value</code> returns all values
     * associated with that <code>Name</code>.</p> </note>
     */
    inline void SetValue(Aws::String&& value) { m_valueHasBeenSet = true; m_value = value; }

    /**
     * <p>The value of the dimension to be matched.</p> <note> <p>Specifying a
     * <code>Name</code> without specifying a <code>Value</code> returns all values
     * associated with that <code>Name</code>.</p> </note>
     */
    inline void SetValue(const char* value) { m_valueHasBeenSet = true; m_value.assign(value); }

    /**
     * <p>The value of the dimension to be matched.</p> <note> <p>Specifying a
     * <code>Name</code> without specifying a <code>Value</code> returns all values
     * associated with that <code>Name</code>.</p> </note>
     */
    inline DimensionFilter& WithValue(const Aws::String& value) { SetValue(value); return *this;}

    /**
     * <p>The value of the dimension to be matched.</p> <note> <p>Specifying a
     * <code>Name</code> without specifying a <code>Value</code> returns all values
     * associated with that <code>Name</code>.</p> </note>
     */
    inline DimensionFilter& WithValue(Aws::String&& value) { SetValue(value); return *this;}

    /**
     * <p>The value of the dimension to be matched.</p> <note> <p>Specifying a
     * <code>Name</code> without specifying a <code>Value</code> returns all values
     * associated with that <code>Name</code>.</p> </note>
     */
    inline DimensionFilter& WithValue(const char* value) { SetValue(value); return *this;}

  private:
    Aws::String m_name;
    bool m_nameHasBeenSet;
    Aws::String m_value;
    bool m_valueHasBeenSet;
  };

} // namespace Model
} // namespace CloudWatch
} // namespace Aws
