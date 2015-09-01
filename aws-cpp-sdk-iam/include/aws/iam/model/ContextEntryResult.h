/*
* Copyright 2010-2015 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
  /*
    $shape.documentation
  */
  class AWS_IAM_API ContextEntryResult
  {
  public:
    ContextEntryResult();
    ContextEntryResult(const Aws::Utils::Xml::XmlNode& xmlNode);
    ContextEntryResult& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    void OutputToStream(Aws::OStream& oStream, const char* location) const;

    
    inline const Aws::String& GetContextKeyName() const{ return m_contextKeyName; }

    
    inline void SetContextKeyName(const Aws::String& value) { m_contextKeyNameHasBeenSet = true; m_contextKeyName = value; }

    
    inline void SetContextKeyName(Aws::String&& value) { m_contextKeyNameHasBeenSet = true; m_contextKeyName = value; }

    
    inline void SetContextKeyName(const char* value) { m_contextKeyNameHasBeenSet = true; m_contextKeyName.assign(value); }

    
    inline ContextEntryResult& WithContextKeyName(const Aws::String& value) { SetContextKeyName(value); return *this;}

    
    inline ContextEntryResult& WithContextKeyName(Aws::String&& value) { SetContextKeyName(value); return *this;}

    
    inline ContextEntryResult& WithContextKeyName(const char* value) { SetContextKeyName(value); return *this;}

  private:
    Aws::String m_contextKeyName;
    bool m_contextKeyNameHasBeenSet;
  };

} // namespace Model
} // namespace IAM
} // namespace Aws
