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
#include <aws/monitoring/CloudWatch_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/monitoring/model/ResponseMetadata.h>

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
namespace CloudWatch
{
namespace Model
{
  class AWS_CLOUDWATCH_API ListHostInfoResult
  {
  public:
    ListHostInfoResult();
    ListHostInfoResult(const AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    ListHostInfoResult& operator=(const AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);

    
    inline const Aws::String& GetHostName() const{ return m_hostName; }

    
    inline void SetHostName(const Aws::String& value) { m_hostName = value; }

    
    inline void SetHostName(Aws::String&& value) { m_hostName = value; }

    
    inline void SetHostName(const char* value) { m_hostName.assign(value); }

    
    inline ListHostInfoResult& WithHostName(const Aws::String& value) { SetHostName(value); return *this;}

    
    inline ListHostInfoResult& WithHostName(Aws::String&& value) { SetHostName(value); return *this;}

    
    inline ListHostInfoResult& WithHostName(const char* value) { SetHostName(value); return *this;}

    
    inline const Aws::String& GetStackName() const{ return m_stackName; }

    
    inline void SetStackName(const Aws::String& value) { m_stackName = value; }

    
    inline void SetStackName(Aws::String&& value) { m_stackName = value; }

    
    inline void SetStackName(const char* value) { m_stackName.assign(value); }

    
    inline ListHostInfoResult& WithStackName(const Aws::String& value) { SetStackName(value); return *this;}

    
    inline ListHostInfoResult& WithStackName(Aws::String&& value) { SetStackName(value); return *this;}

    
    inline ListHostInfoResult& WithStackName(const char* value) { SetStackName(value); return *this;}

    
    inline const Aws::String& GetMarketplace() const{ return m_marketplace; }

    
    inline void SetMarketplace(const Aws::String& value) { m_marketplace = value; }

    
    inline void SetMarketplace(Aws::String&& value) { m_marketplace = value; }

    
    inline void SetMarketplace(const char* value) { m_marketplace.assign(value); }

    
    inline ListHostInfoResult& WithMarketplace(const Aws::String& value) { SetMarketplace(value); return *this;}

    
    inline ListHostInfoResult& WithMarketplace(Aws::String&& value) { SetMarketplace(value); return *this;}

    
    inline ListHostInfoResult& WithMarketplace(const char* value) { SetMarketplace(value); return *this;}

    
    inline const Aws::String& GetRegion() const{ return m_region; }

    
    inline void SetRegion(const Aws::String& value) { m_region = value; }

    
    inline void SetRegion(Aws::String&& value) { m_region = value; }

    
    inline void SetRegion(const char* value) { m_region.assign(value); }

    
    inline ListHostInfoResult& WithRegion(const Aws::String& value) { SetRegion(value); return *this;}

    
    inline ListHostInfoResult& WithRegion(Aws::String&& value) { SetRegion(value); return *this;}

    
    inline ListHostInfoResult& WithRegion(const char* value) { SetRegion(value); return *this;}

    
    inline const Aws::Vector<Aws::String>& GetSdbDatastoreEndpoints() const{ return m_sdbDatastoreEndpoints; }

    
    inline void SetSdbDatastoreEndpoints(const Aws::Vector<Aws::String>& value) { m_sdbDatastoreEndpoints = value; }

    
    inline void SetSdbDatastoreEndpoints(Aws::Vector<Aws::String>&& value) { m_sdbDatastoreEndpoints = value; }

    
    inline ListHostInfoResult& WithSdbDatastoreEndpoints(const Aws::Vector<Aws::String>& value) { SetSdbDatastoreEndpoints(value); return *this;}

    
    inline ListHostInfoResult& WithSdbDatastoreEndpoints(Aws::Vector<Aws::String>&& value) { SetSdbDatastoreEndpoints(value); return *this;}

    
    inline ListHostInfoResult& AddSdbDatastoreEndpoints(const Aws::String& value) { m_sdbDatastoreEndpoints.push_back(value); return *this; }

    
    inline ListHostInfoResult& AddSdbDatastoreEndpoints(Aws::String&& value) { m_sdbDatastoreEndpoints.push_back(value); return *this; }

    
    inline ListHostInfoResult& AddSdbDatastoreEndpoints(const char* value) { m_sdbDatastoreEndpoints.push_back(value); return *this; }

    
    inline const Aws::Vector<Aws::String>& GetDatastoreEndpoints() const{ return m_datastoreEndpoints; }

    
    inline void SetDatastoreEndpoints(const Aws::Vector<Aws::String>& value) { m_datastoreEndpoints = value; }

    
    inline void SetDatastoreEndpoints(Aws::Vector<Aws::String>&& value) { m_datastoreEndpoints = value; }

    
    inline ListHostInfoResult& WithDatastoreEndpoints(const Aws::Vector<Aws::String>& value) { SetDatastoreEndpoints(value); return *this;}

    
    inline ListHostInfoResult& WithDatastoreEndpoints(Aws::Vector<Aws::String>&& value) { SetDatastoreEndpoints(value); return *this;}

    
    inline ListHostInfoResult& AddDatastoreEndpoints(const Aws::String& value) { m_datastoreEndpoints.push_back(value); return *this; }

    
    inline ListHostInfoResult& AddDatastoreEndpoints(Aws::String&& value) { m_datastoreEndpoints.push_back(value); return *this; }

    
    inline ListHostInfoResult& AddDatastoreEndpoints(const char* value) { m_datastoreEndpoints.push_back(value); return *this; }

    
    inline const Aws::Vector<Aws::String>& GetAmpQueues() const{ return m_ampQueues; }

    
    inline void SetAmpQueues(const Aws::Vector<Aws::String>& value) { m_ampQueues = value; }

    
    inline void SetAmpQueues(Aws::Vector<Aws::String>&& value) { m_ampQueues = value; }

    
    inline ListHostInfoResult& WithAmpQueues(const Aws::Vector<Aws::String>& value) { SetAmpQueues(value); return *this;}

    
    inline ListHostInfoResult& WithAmpQueues(Aws::Vector<Aws::String>&& value) { SetAmpQueues(value); return *this;}

    
    inline ListHostInfoResult& AddAmpQueues(const Aws::String& value) { m_ampQueues.push_back(value); return *this; }

    
    inline ListHostInfoResult& AddAmpQueues(Aws::String&& value) { m_ampQueues.push_back(value); return *this; }

    
    inline ListHostInfoResult& AddAmpQueues(const char* value) { m_ampQueues.push_back(value); return *this; }

    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }

    
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }

    
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = value; }

    
    inline ListHostInfoResult& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}

    
    inline ListHostInfoResult& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(value); return *this;}

  private:
    Aws::String m_hostName;
    Aws::String m_stackName;
    Aws::String m_marketplace;
    Aws::String m_region;
    Aws::Vector<Aws::String> m_sdbDatastoreEndpoints;
    Aws::Vector<Aws::String> m_datastoreEndpoints;
    Aws::Vector<Aws::String> m_ampQueues;
    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace CloudWatch
} // namespace Aws