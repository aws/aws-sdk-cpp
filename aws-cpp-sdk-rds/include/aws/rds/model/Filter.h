﻿/*
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
#include <aws/rds/RDS_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

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
   * <p>This type is not currently supported.</p>
   */
  class AWS_RDS_API Filter
  {
  public:
    Filter();
    Filter(const Aws::Utils::Xml::XmlNode& xmlNode);
    Filter& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    void OutputToStream(Aws::OStream& oStream, const char* location) const;

    /**
     * <p>This parameter is not currently supported.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>This parameter is not currently supported.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>This parameter is not currently supported.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>This parameter is not currently supported.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>This parameter is not currently supported.</p>
     */
    inline Filter& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>This parameter is not currently supported.</p>
     */
    inline Filter& WithName(Aws::String&& value) { SetName(value); return *this;}

    /**
     * <p>This parameter is not currently supported.</p>
     */
    inline Filter& WithName(const char* value) { SetName(value); return *this;}

    /**
     * <p>This parameter is not currently supported.</p>
     */
    inline const Aws::Vector<Aws::String>& GetValues() const{ return m_values; }

    /**
     * <p>This parameter is not currently supported.</p>
     */
    inline void SetValues(const Aws::Vector<Aws::String>& value) { m_valuesHasBeenSet = true; m_values = value; }

    /**
     * <p>This parameter is not currently supported.</p>
     */
    inline void SetValues(Aws::Vector<Aws::String>&& value) { m_valuesHasBeenSet = true; m_values = value; }

    /**
     * <p>This parameter is not currently supported.</p>
     */
    inline Filter& WithValues(const Aws::Vector<Aws::String>& value) { SetValues(value); return *this;}

    /**
     * <p>This parameter is not currently supported.</p>
     */
    inline Filter& WithValues(Aws::Vector<Aws::String>&& value) { SetValues(value); return *this;}

    /**
     * <p>This parameter is not currently supported.</p>
     */
    inline Filter& AddValues(const Aws::String& value) { m_valuesHasBeenSet = true; m_values.push_back(value); return *this; }

    /**
     * <p>This parameter is not currently supported.</p>
     */
    inline Filter& AddValues(Aws::String&& value) { m_valuesHasBeenSet = true; m_values.push_back(value); return *this; }

    /**
     * <p>This parameter is not currently supported.</p>
     */
    inline Filter& AddValues(const char* value) { m_valuesHasBeenSet = true; m_values.push_back(value); return *this; }

  private:
    Aws::String m_name;
    bool m_nameHasBeenSet;
    Aws::Vector<Aws::String> m_values;
    bool m_valuesHasBeenSet;
  };

} // namespace Model
} // namespace RDS
} // namespace Aws
