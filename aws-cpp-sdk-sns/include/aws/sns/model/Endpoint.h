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
#include <aws/sns/SNS_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSMap.h>

namespace Aws
{
namespace Utils
{
namespace Xml
{
  class XmlNode;
} // namespace Xml
} // namespace Utils
namespace SNS
{
namespace Model
{
  /*
    <p>Endpoint for mobile app and device.</p>
  */
  class AWS_SNS_API Endpoint
  {
  public:
    Endpoint();
    Endpoint(const Aws::Utils::Xml::XmlNode& xmlNode);
    Endpoint& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    void OutputToStream(Aws::OStream& oStream, const char* location) const;

    /*
     <p>EndpointArn for mobile app and device.</p>
    */
    inline const Aws::String& GetEndpointArn() const{ return m_endpointArn; }
    /*
     <p>EndpointArn for mobile app and device.</p>
    */
    inline void SetEndpointArn(const Aws::String& value) { m_endpointArnHasBeenSet = true; m_endpointArn = value; }

    /*
     <p>EndpointArn for mobile app and device.</p>
    */
    inline void SetEndpointArn(const char* value) { m_endpointArnHasBeenSet = true; m_endpointArn.assign(value); }

    /*
     <p>EndpointArn for mobile app and device.</p>
    */
    inline Endpoint&  WithEndpointArn(const Aws::String& value) { SetEndpointArn(value); return *this;}

    /*
     <p>EndpointArn for mobile app and device.</p>
    */
    inline Endpoint& WithEndpointArn(const char* value) { SetEndpointArn(value); return *this;}

    /*
     <p>Attributes for endpoint.</p>
    */
    inline const Aws::Map<Aws::String, Aws::String>& GetAttributes() const{ return m_attributes; }
    /*
     <p>Attributes for endpoint.</p>
    */
    inline void SetAttributes(const Aws::Map<Aws::String, Aws::String>& value) { m_attributesHasBeenSet = true; m_attributes = value; }

    /*
     <p>Attributes for endpoint.</p>
    */
    inline Endpoint&  WithAttributes(const Aws::Map<Aws::String, Aws::String>& value) { SetAttributes(value); return *this;}

    /*
     <p>Attributes for endpoint.</p>
    */
    inline Endpoint& AddAttributes(const Aws::String& key, const Aws::String& value) { m_attributesHasBeenSet = true; m_attributes[key] = value; return *this; }

    /*
     <p>Attributes for endpoint.</p>
    */
    inline Endpoint& AddAttributes(const char* key, const char* value) { m_attributesHasBeenSet = true; m_attributes[key] = value; return *this; }

  private:
    Aws::String m_endpointArn;
    bool m_endpointArnHasBeenSet;
    Aws::Map<Aws::String, Aws::String> m_attributes;
    bool m_attributesHasBeenSet;
  };

} // namespace Model
} // namespace SNS
} // namespace Aws
