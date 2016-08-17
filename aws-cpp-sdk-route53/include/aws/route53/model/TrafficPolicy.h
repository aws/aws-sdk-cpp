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
#include <aws/route53/Route53_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/route53/model/RRType.h>

namespace Aws
{
namespace Utils
{
namespace Xml
{
  class XmlNode;
} // namespace Xml
} // namespace Utils
namespace Route53
{
namespace Model
{

  class AWS_ROUTE53_API TrafficPolicy
  {
  public:
    TrafficPolicy();
    TrafficPolicy(const Aws::Utils::Xml::XmlNode& xmlNode);
    TrafficPolicy& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    void AddToNode(Aws::Utils::Xml::XmlNode& parentNode) const;

    
    inline const Aws::String& GetId() const{ return m_id; }

    
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }

    
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = value; }

    
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }

    
    inline TrafficPolicy& WithId(const Aws::String& value) { SetId(value); return *this;}

    
    inline TrafficPolicy& WithId(Aws::String&& value) { SetId(value); return *this;}

    
    inline TrafficPolicy& WithId(const char* value) { SetId(value); return *this;}

    
    inline int GetVersion() const{ return m_version; }

    
    inline void SetVersion(int value) { m_versionHasBeenSet = true; m_version = value; }

    
    inline TrafficPolicy& WithVersion(int value) { SetVersion(value); return *this;}

    
    inline const Aws::String& GetName() const{ return m_name; }

    
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = value; }

    
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    
    inline TrafficPolicy& WithName(const Aws::String& value) { SetName(value); return *this;}

    
    inline TrafficPolicy& WithName(Aws::String&& value) { SetName(value); return *this;}

    
    inline TrafficPolicy& WithName(const char* value) { SetName(value); return *this;}

    
    inline const RRType& GetType() const{ return m_type; }

    
    inline void SetType(const RRType& value) { m_typeHasBeenSet = true; m_type = value; }

    
    inline void SetType(RRType&& value) { m_typeHasBeenSet = true; m_type = value; }

    
    inline TrafficPolicy& WithType(const RRType& value) { SetType(value); return *this;}

    
    inline TrafficPolicy& WithType(RRType&& value) { SetType(value); return *this;}

    
    inline const Aws::String& GetDocument() const{ return m_document; }

    
    inline void SetDocument(const Aws::String& value) { m_documentHasBeenSet = true; m_document = value; }

    
    inline void SetDocument(Aws::String&& value) { m_documentHasBeenSet = true; m_document = value; }

    
    inline void SetDocument(const char* value) { m_documentHasBeenSet = true; m_document.assign(value); }

    
    inline TrafficPolicy& WithDocument(const Aws::String& value) { SetDocument(value); return *this;}

    
    inline TrafficPolicy& WithDocument(Aws::String&& value) { SetDocument(value); return *this;}

    
    inline TrafficPolicy& WithDocument(const char* value) { SetDocument(value); return *this;}

    
    inline const Aws::String& GetComment() const{ return m_comment; }

    
    inline void SetComment(const Aws::String& value) { m_commentHasBeenSet = true; m_comment = value; }

    
    inline void SetComment(Aws::String&& value) { m_commentHasBeenSet = true; m_comment = value; }

    
    inline void SetComment(const char* value) { m_commentHasBeenSet = true; m_comment.assign(value); }

    
    inline TrafficPolicy& WithComment(const Aws::String& value) { SetComment(value); return *this;}

    
    inline TrafficPolicy& WithComment(Aws::String&& value) { SetComment(value); return *this;}

    
    inline TrafficPolicy& WithComment(const char* value) { SetComment(value); return *this;}

  private:
    Aws::String m_id;
    bool m_idHasBeenSet;
    int m_version;
    bool m_versionHasBeenSet;
    Aws::String m_name;
    bool m_nameHasBeenSet;
    RRType m_type;
    bool m_typeHasBeenSet;
    Aws::String m_document;
    bool m_documentHasBeenSet;
    Aws::String m_comment;
    bool m_commentHasBeenSet;
  };

} // namespace Model
} // namespace Route53
} // namespace Aws
