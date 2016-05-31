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
#include <aws/sns/SNS_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/sns/model/ResponseMetadata.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Xml
{
  class XmlDocument;
} // namespace Xml
} // namespace Utils
namespace SNS
{
namespace Model
{
  /**
   * <p>Response for GetPlatformApplicationAttributes action.</p>
   */
  class AWS_SNS_API GetPlatformApplicationAttributesResult
  {
  public:
    GetPlatformApplicationAttributesResult();
    GetPlatformApplicationAttributesResult(const AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    GetPlatformApplicationAttributesResult& operator=(const AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);

    /**
     * <p>Attributes include the following:</p> <ul> <li>
     * <code>EventEndpointCreated</code> -- Topic ARN to which EndpointCreated event
     * notifications should be sent.</li> <li> <code>EventEndpointDeleted</code> --
     * Topic ARN to which EndpointDeleted event notifications should be sent.</li> <li>
     * <code>EventEndpointUpdated</code> -- Topic ARN to which EndpointUpdate event
     * notifications should be sent.</li> <li> <code>EventDeliveryFailure</code> --
     * Topic ARN to which DeliveryFailure event notifications should be sent upon
     * Direct Publish delivery failure (permanent) to one of the application's
     * endpoints.</li> </ul>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetAttributes() const{ return m_attributes; }

    /**
     * <p>Attributes include the following:</p> <ul> <li>
     * <code>EventEndpointCreated</code> -- Topic ARN to which EndpointCreated event
     * notifications should be sent.</li> <li> <code>EventEndpointDeleted</code> --
     * Topic ARN to which EndpointDeleted event notifications should be sent.</li> <li>
     * <code>EventEndpointUpdated</code> -- Topic ARN to which EndpointUpdate event
     * notifications should be sent.</li> <li> <code>EventDeliveryFailure</code> --
     * Topic ARN to which DeliveryFailure event notifications should be sent upon
     * Direct Publish delivery failure (permanent) to one of the application's
     * endpoints.</li> </ul>
     */
    inline void SetAttributes(const Aws::Map<Aws::String, Aws::String>& value) { m_attributes = value; }

    /**
     * <p>Attributes include the following:</p> <ul> <li>
     * <code>EventEndpointCreated</code> -- Topic ARN to which EndpointCreated event
     * notifications should be sent.</li> <li> <code>EventEndpointDeleted</code> --
     * Topic ARN to which EndpointDeleted event notifications should be sent.</li> <li>
     * <code>EventEndpointUpdated</code> -- Topic ARN to which EndpointUpdate event
     * notifications should be sent.</li> <li> <code>EventDeliveryFailure</code> --
     * Topic ARN to which DeliveryFailure event notifications should be sent upon
     * Direct Publish delivery failure (permanent) to one of the application's
     * endpoints.</li> </ul>
     */
    inline void SetAttributes(Aws::Map<Aws::String, Aws::String>&& value) { m_attributes = value; }

    /**
     * <p>Attributes include the following:</p> <ul> <li>
     * <code>EventEndpointCreated</code> -- Topic ARN to which EndpointCreated event
     * notifications should be sent.</li> <li> <code>EventEndpointDeleted</code> --
     * Topic ARN to which EndpointDeleted event notifications should be sent.</li> <li>
     * <code>EventEndpointUpdated</code> -- Topic ARN to which EndpointUpdate event
     * notifications should be sent.</li> <li> <code>EventDeliveryFailure</code> --
     * Topic ARN to which DeliveryFailure event notifications should be sent upon
     * Direct Publish delivery failure (permanent) to one of the application's
     * endpoints.</li> </ul>
     */
    inline GetPlatformApplicationAttributesResult& WithAttributes(const Aws::Map<Aws::String, Aws::String>& value) { SetAttributes(value); return *this;}

    /**
     * <p>Attributes include the following:</p> <ul> <li>
     * <code>EventEndpointCreated</code> -- Topic ARN to which EndpointCreated event
     * notifications should be sent.</li> <li> <code>EventEndpointDeleted</code> --
     * Topic ARN to which EndpointDeleted event notifications should be sent.</li> <li>
     * <code>EventEndpointUpdated</code> -- Topic ARN to which EndpointUpdate event
     * notifications should be sent.</li> <li> <code>EventDeliveryFailure</code> --
     * Topic ARN to which DeliveryFailure event notifications should be sent upon
     * Direct Publish delivery failure (permanent) to one of the application's
     * endpoints.</li> </ul>
     */
    inline GetPlatformApplicationAttributesResult& WithAttributes(Aws::Map<Aws::String, Aws::String>&& value) { SetAttributes(value); return *this;}

    /**
     * <p>Attributes include the following:</p> <ul> <li>
     * <code>EventEndpointCreated</code> -- Topic ARN to which EndpointCreated event
     * notifications should be sent.</li> <li> <code>EventEndpointDeleted</code> --
     * Topic ARN to which EndpointDeleted event notifications should be sent.</li> <li>
     * <code>EventEndpointUpdated</code> -- Topic ARN to which EndpointUpdate event
     * notifications should be sent.</li> <li> <code>EventDeliveryFailure</code> --
     * Topic ARN to which DeliveryFailure event notifications should be sent upon
     * Direct Publish delivery failure (permanent) to one of the application's
     * endpoints.</li> </ul>
     */
    inline GetPlatformApplicationAttributesResult& AddAttributes(const Aws::String& key, const Aws::String& value) { m_attributes[key] = value; return *this; }

    /**
     * <p>Attributes include the following:</p> <ul> <li>
     * <code>EventEndpointCreated</code> -- Topic ARN to which EndpointCreated event
     * notifications should be sent.</li> <li> <code>EventEndpointDeleted</code> --
     * Topic ARN to which EndpointDeleted event notifications should be sent.</li> <li>
     * <code>EventEndpointUpdated</code> -- Topic ARN to which EndpointUpdate event
     * notifications should be sent.</li> <li> <code>EventDeliveryFailure</code> --
     * Topic ARN to which DeliveryFailure event notifications should be sent upon
     * Direct Publish delivery failure (permanent) to one of the application's
     * endpoints.</li> </ul>
     */
    inline GetPlatformApplicationAttributesResult& AddAttributes(Aws::String&& key, const Aws::String& value) { m_attributes[key] = value; return *this; }

    /**
     * <p>Attributes include the following:</p> <ul> <li>
     * <code>EventEndpointCreated</code> -- Topic ARN to which EndpointCreated event
     * notifications should be sent.</li> <li> <code>EventEndpointDeleted</code> --
     * Topic ARN to which EndpointDeleted event notifications should be sent.</li> <li>
     * <code>EventEndpointUpdated</code> -- Topic ARN to which EndpointUpdate event
     * notifications should be sent.</li> <li> <code>EventDeliveryFailure</code> --
     * Topic ARN to which DeliveryFailure event notifications should be sent upon
     * Direct Publish delivery failure (permanent) to one of the application's
     * endpoints.</li> </ul>
     */
    inline GetPlatformApplicationAttributesResult& AddAttributes(const Aws::String& key, Aws::String&& value) { m_attributes[key] = value; return *this; }

    /**
     * <p>Attributes include the following:</p> <ul> <li>
     * <code>EventEndpointCreated</code> -- Topic ARN to which EndpointCreated event
     * notifications should be sent.</li> <li> <code>EventEndpointDeleted</code> --
     * Topic ARN to which EndpointDeleted event notifications should be sent.</li> <li>
     * <code>EventEndpointUpdated</code> -- Topic ARN to which EndpointUpdate event
     * notifications should be sent.</li> <li> <code>EventDeliveryFailure</code> --
     * Topic ARN to which DeliveryFailure event notifications should be sent upon
     * Direct Publish delivery failure (permanent) to one of the application's
     * endpoints.</li> </ul>
     */
    inline GetPlatformApplicationAttributesResult& AddAttributes(Aws::String&& key, Aws::String&& value) { m_attributes[key] = value; return *this; }

    /**
     * <p>Attributes include the following:</p> <ul> <li>
     * <code>EventEndpointCreated</code> -- Topic ARN to which EndpointCreated event
     * notifications should be sent.</li> <li> <code>EventEndpointDeleted</code> --
     * Topic ARN to which EndpointDeleted event notifications should be sent.</li> <li>
     * <code>EventEndpointUpdated</code> -- Topic ARN to which EndpointUpdate event
     * notifications should be sent.</li> <li> <code>EventDeliveryFailure</code> --
     * Topic ARN to which DeliveryFailure event notifications should be sent upon
     * Direct Publish delivery failure (permanent) to one of the application's
     * endpoints.</li> </ul>
     */
    inline GetPlatformApplicationAttributesResult& AddAttributes(const char* key, Aws::String&& value) { m_attributes[key] = value; return *this; }

    /**
     * <p>Attributes include the following:</p> <ul> <li>
     * <code>EventEndpointCreated</code> -- Topic ARN to which EndpointCreated event
     * notifications should be sent.</li> <li> <code>EventEndpointDeleted</code> --
     * Topic ARN to which EndpointDeleted event notifications should be sent.</li> <li>
     * <code>EventEndpointUpdated</code> -- Topic ARN to which EndpointUpdate event
     * notifications should be sent.</li> <li> <code>EventDeliveryFailure</code> --
     * Topic ARN to which DeliveryFailure event notifications should be sent upon
     * Direct Publish delivery failure (permanent) to one of the application's
     * endpoints.</li> </ul>
     */
    inline GetPlatformApplicationAttributesResult& AddAttributes(Aws::String&& key, const char* value) { m_attributes[key] = value; return *this; }

    /**
     * <p>Attributes include the following:</p> <ul> <li>
     * <code>EventEndpointCreated</code> -- Topic ARN to which EndpointCreated event
     * notifications should be sent.</li> <li> <code>EventEndpointDeleted</code> --
     * Topic ARN to which EndpointDeleted event notifications should be sent.</li> <li>
     * <code>EventEndpointUpdated</code> -- Topic ARN to which EndpointUpdate event
     * notifications should be sent.</li> <li> <code>EventDeliveryFailure</code> --
     * Topic ARN to which DeliveryFailure event notifications should be sent upon
     * Direct Publish delivery failure (permanent) to one of the application's
     * endpoints.</li> </ul>
     */
    inline GetPlatformApplicationAttributesResult& AddAttributes(const char* key, const char* value) { m_attributes[key] = value; return *this; }

    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }

    
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }

    
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = value; }

    
    inline GetPlatformApplicationAttributesResult& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}

    
    inline GetPlatformApplicationAttributesResult& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(value); return *this;}

  private:
    Aws::Map<Aws::String, Aws::String> m_attributes;
    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace SNS
} // namespace Aws