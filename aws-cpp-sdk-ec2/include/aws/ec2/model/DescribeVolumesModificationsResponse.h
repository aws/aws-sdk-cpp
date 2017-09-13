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
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ec2/model/ResponseMetadata.h>
#include <aws/ec2/model/VolumeModification.h>
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
namespace EC2
{
namespace Model
{
  class AWS_EC2_API DescribeVolumesModificationsResponse
  {
  public:
    DescribeVolumesModificationsResponse();
    DescribeVolumesModificationsResponse(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    DescribeVolumesModificationsResponse& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    /**
     * <p>A list of returned <a>VolumeModification</a> objects.</p>
     */
    inline const Aws::Vector<VolumeModification>& GetVolumesModifications() const{ return m_volumesModifications; }

    /**
     * <p>A list of returned <a>VolumeModification</a> objects.</p>
     */
    inline void SetVolumesModifications(const Aws::Vector<VolumeModification>& value) { m_volumesModifications = value; }

    /**
     * <p>A list of returned <a>VolumeModification</a> objects.</p>
     */
    inline void SetVolumesModifications(Aws::Vector<VolumeModification>&& value) { m_volumesModifications = std::move(value); }

    /**
     * <p>A list of returned <a>VolumeModification</a> objects.</p>
     */
    inline DescribeVolumesModificationsResponse& WithVolumesModifications(const Aws::Vector<VolumeModification>& value) { SetVolumesModifications(value); return *this;}

    /**
     * <p>A list of returned <a>VolumeModification</a> objects.</p>
     */
    inline DescribeVolumesModificationsResponse& WithVolumesModifications(Aws::Vector<VolumeModification>&& value) { SetVolumesModifications(std::move(value)); return *this;}

    /**
     * <p>A list of returned <a>VolumeModification</a> objects.</p>
     */
    inline DescribeVolumesModificationsResponse& AddVolumesModifications(const VolumeModification& value) { m_volumesModifications.push_back(value); return *this; }

    /**
     * <p>A list of returned <a>VolumeModification</a> objects.</p>
     */
    inline DescribeVolumesModificationsResponse& AddVolumesModifications(VolumeModification&& value) { m_volumesModifications.push_back(std::move(value)); return *this; }


    /**
     * <p>Token for pagination, null if there are no more results </p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>Token for pagination, null if there are no more results </p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>Token for pagination, null if there are no more results </p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>Token for pagination, null if there are no more results </p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>Token for pagination, null if there are no more results </p>
     */
    inline DescribeVolumesModificationsResponse& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>Token for pagination, null if there are no more results </p>
     */
    inline DescribeVolumesModificationsResponse& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>Token for pagination, null if there are no more results </p>
     */
    inline DescribeVolumesModificationsResponse& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }

    
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }

    
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = std::move(value); }

    
    inline DescribeVolumesModificationsResponse& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}

    
    inline DescribeVolumesModificationsResponse& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(std::move(value)); return *this;}

  private:

    Aws::Vector<VolumeModification> m_volumesModifications;

    Aws::String m_nextToken;

    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
