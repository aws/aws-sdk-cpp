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
#include <aws/iam/IAM_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/iam/model/ContextKeyTypeEnum.h>

namespace Aws
{
namespace Utils
{
namespace Xml
{
  class XmlNode;
} // namespace Xml
} // namespace Utils
namespace IAM
{
namespace Model
{

  class AWS_IAM_API ContextEntry
  {
  public:
    ContextEntry();
    ContextEntry(const Aws::Utils::Xml::XmlNode& xmlNode);
    ContextEntry& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    void OutputToStream(Aws::OStream& oStream, const char* location) const;

    
    inline const Aws::String& GetContextKeyName() const{ return m_contextKeyName; }

    
    inline void SetContextKeyName(const Aws::String& value) { m_contextKeyNameHasBeenSet = true; m_contextKeyName = value; }

    
    inline void SetContextKeyName(Aws::String&& value) { m_contextKeyNameHasBeenSet = true; m_contextKeyName = value; }

    
    inline void SetContextKeyName(const char* value) { m_contextKeyNameHasBeenSet = true; m_contextKeyName.assign(value); }

    
    inline ContextEntry& WithContextKeyName(const Aws::String& value) { SetContextKeyName(value); return *this;}

    
    inline ContextEntry& WithContextKeyName(Aws::String&& value) { SetContextKeyName(value); return *this;}

    
    inline ContextEntry& WithContextKeyName(const char* value) { SetContextKeyName(value); return *this;}

    
    inline const Aws::Vector<Aws::String>& GetContextKeyValues() const{ return m_contextKeyValues; }

    
    inline void SetContextKeyValues(const Aws::Vector<Aws::String>& value) { m_contextKeyValuesHasBeenSet = true; m_contextKeyValues = value; }

    
    inline void SetContextKeyValues(Aws::Vector<Aws::String>&& value) { m_contextKeyValuesHasBeenSet = true; m_contextKeyValues = value; }

    
    inline ContextEntry& WithContextKeyValues(const Aws::Vector<Aws::String>& value) { SetContextKeyValues(value); return *this;}

    
    inline ContextEntry& WithContextKeyValues(Aws::Vector<Aws::String>&& value) { SetContextKeyValues(value); return *this;}

    
    inline ContextEntry& AddContextKeyValues(const Aws::String& value) { m_contextKeyValuesHasBeenSet = true; m_contextKeyValues.push_back(value); return *this; }

    
    inline ContextEntry& AddContextKeyValues(Aws::String&& value) { m_contextKeyValuesHasBeenSet = true; m_contextKeyValues.push_back(value); return *this; }

    
    inline ContextEntry& AddContextKeyValues(const char* value) { m_contextKeyValuesHasBeenSet = true; m_contextKeyValues.push_back(value); return *this; }

    
    inline const ContextKeyTypeEnum& GetContextKeyType() const{ return m_contextKeyType; }

    
    inline void SetContextKeyType(const ContextKeyTypeEnum& value) { m_contextKeyTypeHasBeenSet = true; m_contextKeyType = value; }

    
    inline void SetContextKeyType(ContextKeyTypeEnum&& value) { m_contextKeyTypeHasBeenSet = true; m_contextKeyType = value; }

    
    inline ContextEntry& WithContextKeyType(const ContextKeyTypeEnum& value) { SetContextKeyType(value); return *this;}

    
    inline ContextEntry& WithContextKeyType(ContextKeyTypeEnum&& value) { SetContextKeyType(value); return *this;}

  private:
    Aws::String m_contextKeyName;
    bool m_contextKeyNameHasBeenSet;
    Aws::Vector<Aws::String> m_contextKeyValues;
    bool m_contextKeyValuesHasBeenSet;
    ContextKeyTypeEnum m_contextKeyType;
    bool m_contextKeyTypeHasBeenSet;
  };

} // namespace Model
} // namespace IAM
} // namespace Aws
