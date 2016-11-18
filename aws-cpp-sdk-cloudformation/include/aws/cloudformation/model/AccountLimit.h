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
#include <aws/cloudformation/CloudFormation_EXPORTS.h>
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
namespace CloudFormation
{
namespace Model
{

  /**
   * <p>The AccountLimit data type.</p>
   */
  class AWS_CLOUDFORMATION_API AccountLimit
  {
  public:
    AccountLimit();
    AccountLimit(const Aws::Utils::Xml::XmlNode& xmlNode);
    AccountLimit& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    void OutputToStream(Aws::OStream& oStream, const char* location) const;

    /**
     * <p>The name of the account limit. Currently, the only account limit is
     * <code>StackLimit</code>.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the account limit. Currently, the only account limit is
     * <code>StackLimit</code>.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the account limit. Currently, the only account limit is
     * <code>StackLimit</code>.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the account limit. Currently, the only account limit is
     * <code>StackLimit</code>.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the account limit. Currently, the only account limit is
     * <code>StackLimit</code>.</p>
     */
    inline AccountLimit& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the account limit. Currently, the only account limit is
     * <code>StackLimit</code>.</p>
     */
    inline AccountLimit& WithName(Aws::String&& value) { SetName(value); return *this;}

    /**
     * <p>The name of the account limit. Currently, the only account limit is
     * <code>StackLimit</code>.</p>
     */
    inline AccountLimit& WithName(const char* value) { SetName(value); return *this;}

    /**
     * <p>The value that is associated with the account limit name.</p>
     */
    inline int GetValue() const{ return m_value; }

    /**
     * <p>The value that is associated with the account limit name.</p>
     */
    inline void SetValue(int value) { m_valueHasBeenSet = true; m_value = value; }

    /**
     * <p>The value that is associated with the account limit name.</p>
     */
    inline AccountLimit& WithValue(int value) { SetValue(value); return *this;}

  private:
    Aws::String m_name;
    bool m_nameHasBeenSet;
    int m_value;
    bool m_valueHasBeenSet;
  };

} // namespace Model
} // namespace CloudFormation
} // namespace Aws
