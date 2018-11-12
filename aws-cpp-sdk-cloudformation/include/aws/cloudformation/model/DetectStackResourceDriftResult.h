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
#include <aws/cloudformation/CloudFormation_EXPORTS.h>
#include <aws/cloudformation/model/StackResourceDrift.h>
#include <aws/cloudformation/model/ResponseMetadata.h>
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
namespace CloudFormation
{
namespace Model
{
  class AWS_CLOUDFORMATION_API DetectStackResourceDriftResult
  {
  public:
    DetectStackResourceDriftResult();
    DetectStackResourceDriftResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    DetectStackResourceDriftResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    /**
     * <p>Information about whether the resource's actual configuration has drifted
     * from its expected template configuration, including actual and expected property
     * values and any differences detected.</p>
     */
    inline const StackResourceDrift& GetStackResourceDrift() const{ return m_stackResourceDrift; }

    /**
     * <p>Information about whether the resource's actual configuration has drifted
     * from its expected template configuration, including actual and expected property
     * values and any differences detected.</p>
     */
    inline void SetStackResourceDrift(const StackResourceDrift& value) { m_stackResourceDrift = value; }

    /**
     * <p>Information about whether the resource's actual configuration has drifted
     * from its expected template configuration, including actual and expected property
     * values and any differences detected.</p>
     */
    inline void SetStackResourceDrift(StackResourceDrift&& value) { m_stackResourceDrift = std::move(value); }

    /**
     * <p>Information about whether the resource's actual configuration has drifted
     * from its expected template configuration, including actual and expected property
     * values and any differences detected.</p>
     */
    inline DetectStackResourceDriftResult& WithStackResourceDrift(const StackResourceDrift& value) { SetStackResourceDrift(value); return *this;}

    /**
     * <p>Information about whether the resource's actual configuration has drifted
     * from its expected template configuration, including actual and expected property
     * values and any differences detected.</p>
     */
    inline DetectStackResourceDriftResult& WithStackResourceDrift(StackResourceDrift&& value) { SetStackResourceDrift(std::move(value)); return *this;}


    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }

    
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }

    
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = std::move(value); }

    
    inline DetectStackResourceDriftResult& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}

    
    inline DetectStackResourceDriftResult& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(std::move(value)); return *this;}

  private:

    StackResourceDrift m_stackResourceDrift;

    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace CloudFormation
} // namespace Aws
