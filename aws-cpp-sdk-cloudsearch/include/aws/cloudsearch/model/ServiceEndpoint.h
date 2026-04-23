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
#include <aws/cloudsearch/CloudSearch_EXPORTS.h>
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
namespace CloudSearch
{
namespace Model
{

  /**
   * <p>The endpoint to which service requests can be submitted.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cloudsearch-2013-01-01/ServiceEndpoint">AWS
   * API Reference</a></p>
   */
  class AWS_CLOUDSEARCH_API ServiceEndpoint
  {
  public:
    ServiceEndpoint();
    ServiceEndpoint(const Aws::Utils::Xml::XmlNode& xmlNode);
    ServiceEndpoint& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    void OutputToStream(Aws::OStream& oStream, const char* location) const;


    
    inline const Aws::String& GetEndpoint() const{ return m_endpoint; }

    
    inline bool EndpointHasBeenSet() const { return m_endpointHasBeenSet; }

    
    inline void SetEndpoint(const Aws::String& value) { m_endpointHasBeenSet = true; m_endpoint = value; }

    
    inline void SetEndpoint(Aws::String&& value) { m_endpointHasBeenSet = true; m_endpoint = std::move(value); }

    
    inline void SetEndpoint(const char* value) { m_endpointHasBeenSet = true; m_endpoint.assign(value); }

    
    inline ServiceEndpoint& WithEndpoint(const Aws::String& value) { SetEndpoint(value); return *this;}

    
    inline ServiceEndpoint& WithEndpoint(Aws::String&& value) { SetEndpoint(std::move(value)); return *this;}

    
    inline ServiceEndpoint& WithEndpoint(const char* value) { SetEndpoint(value); return *this;}

  private:

    Aws::String m_endpoint;
    bool m_endpointHasBeenSet;
  };

} // namespace Model
} // namespace CloudSearch
} // namespace Aws
