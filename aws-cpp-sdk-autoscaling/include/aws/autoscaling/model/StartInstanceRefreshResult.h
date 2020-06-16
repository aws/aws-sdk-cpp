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
#include <aws/autoscaling/AutoScaling_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/autoscaling/model/ResponseMetadata.h>
#include <utility>

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
namespace AutoScaling
{
namespace Model
{
  class AWS_AUTOSCALING_API StartInstanceRefreshResult
  {
  public:
    StartInstanceRefreshResult();
    StartInstanceRefreshResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    StartInstanceRefreshResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    /**
     * <p>A unique ID for tracking the progress of the request.</p>
     */
    inline const Aws::String& GetInstanceRefreshId() const{ return m_instanceRefreshId; }

    /**
     * <p>A unique ID for tracking the progress of the request.</p>
     */
    inline void SetInstanceRefreshId(const Aws::String& value) { m_instanceRefreshId = value; }

    /**
     * <p>A unique ID for tracking the progress of the request.</p>
     */
    inline void SetInstanceRefreshId(Aws::String&& value) { m_instanceRefreshId = std::move(value); }

    /**
     * <p>A unique ID for tracking the progress of the request.</p>
     */
    inline void SetInstanceRefreshId(const char* value) { m_instanceRefreshId.assign(value); }

    /**
     * <p>A unique ID for tracking the progress of the request.</p>
     */
    inline StartInstanceRefreshResult& WithInstanceRefreshId(const Aws::String& value) { SetInstanceRefreshId(value); return *this;}

    /**
     * <p>A unique ID for tracking the progress of the request.</p>
     */
    inline StartInstanceRefreshResult& WithInstanceRefreshId(Aws::String&& value) { SetInstanceRefreshId(std::move(value)); return *this;}

    /**
     * <p>A unique ID for tracking the progress of the request.</p>
     */
    inline StartInstanceRefreshResult& WithInstanceRefreshId(const char* value) { SetInstanceRefreshId(value); return *this;}


    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }

    
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }

    
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = std::move(value); }

    
    inline StartInstanceRefreshResult& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}

    
    inline StartInstanceRefreshResult& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(std::move(value)); return *this;}

  private:

    Aws::String m_instanceRefreshId;

    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace AutoScaling
} // namespace Aws
