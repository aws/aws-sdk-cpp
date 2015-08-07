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
  class AWS_IAM_API PolicyToSimulate
  {
  public:
    PolicyToSimulate();
    PolicyToSimulate(const Aws::Utils::Xml::XmlNode& xmlNode);
    PolicyToSimulate& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    void OutputToStream(Aws::OStream& oStream, const char* location) const;

    
    inline const Aws::String& GetPolicyIdentifier() const{ return m_policyIdentifier; }
    
    inline void SetPolicyIdentifier(const Aws::String& value) { m_policyIdentifierHasBeenSet = true; m_policyIdentifier = value; }

    
    inline void SetPolicyIdentifier(const char* value) { m_policyIdentifierHasBeenSet = true; m_policyIdentifier.assign(value); }

    
    inline PolicyToSimulate&  WithPolicyIdentifier(const Aws::String& value) { SetPolicyIdentifier(value); return *this;}

    
    inline PolicyToSimulate& WithPolicyIdentifier(const char* value) { SetPolicyIdentifier(value); return *this;}

    
    inline const Aws::String& GetPolicyDocument() const{ return m_policyDocument; }
    
    inline void SetPolicyDocument(const Aws::String& value) { m_policyDocumentHasBeenSet = true; m_policyDocument = value; }

    
    inline void SetPolicyDocument(const char* value) { m_policyDocumentHasBeenSet = true; m_policyDocument.assign(value); }

    
    inline PolicyToSimulate&  WithPolicyDocument(const Aws::String& value) { SetPolicyDocument(value); return *this;}

    
    inline PolicyToSimulate& WithPolicyDocument(const char* value) { SetPolicyDocument(value); return *this;}

  private:
    Aws::String m_policyIdentifier;
    bool m_policyIdentifierHasBeenSet;
    Aws::String m_policyDocument;
    bool m_policyDocumentHasBeenSet;
  };

} // namespace Model
} // namespace IAM
} // namespace Aws
