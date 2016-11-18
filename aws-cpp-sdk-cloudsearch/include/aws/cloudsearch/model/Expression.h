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
#include <aws/cloudsearch/CloudSearch_EXPORTS.h>
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
namespace CloudSearch
{
namespace Model
{

  /**
   * <p>A named expression that can be evaluated at search time. Can be used to sort
   * the search results, define other expressions, or return computed information in
   * the search results. </p>
   */
  class AWS_CLOUDSEARCH_API Expression
  {
  public:
    Expression();
    Expression(const Aws::Utils::Xml::XmlNode& xmlNode);
    Expression& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    void OutputToStream(Aws::OStream& oStream, const char* location) const;

    
    inline const Aws::String& GetExpressionName() const{ return m_expressionName; }

    
    inline void SetExpressionName(const Aws::String& value) { m_expressionNameHasBeenSet = true; m_expressionName = value; }

    
    inline void SetExpressionName(Aws::String&& value) { m_expressionNameHasBeenSet = true; m_expressionName = value; }

    
    inline void SetExpressionName(const char* value) { m_expressionNameHasBeenSet = true; m_expressionName.assign(value); }

    
    inline Expression& WithExpressionName(const Aws::String& value) { SetExpressionName(value); return *this;}

    
    inline Expression& WithExpressionName(Aws::String&& value) { SetExpressionName(value); return *this;}

    
    inline Expression& WithExpressionName(const char* value) { SetExpressionName(value); return *this;}

    
    inline const Aws::String& GetExpressionValue() const{ return m_expressionValue; }

    
    inline void SetExpressionValue(const Aws::String& value) { m_expressionValueHasBeenSet = true; m_expressionValue = value; }

    
    inline void SetExpressionValue(Aws::String&& value) { m_expressionValueHasBeenSet = true; m_expressionValue = value; }

    
    inline void SetExpressionValue(const char* value) { m_expressionValueHasBeenSet = true; m_expressionValue.assign(value); }

    
    inline Expression& WithExpressionValue(const Aws::String& value) { SetExpressionValue(value); return *this;}

    
    inline Expression& WithExpressionValue(Aws::String&& value) { SetExpressionValue(value); return *this;}

    
    inline Expression& WithExpressionValue(const char* value) { SetExpressionValue(value); return *this;}

  private:
    Aws::String m_expressionName;
    bool m_expressionNameHasBeenSet;
    Aws::String m_expressionValue;
    bool m_expressionValueHasBeenSet;
  };

} // namespace Model
} // namespace CloudSearch
} // namespace Aws
