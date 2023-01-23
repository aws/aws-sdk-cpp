/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ec2/model/ResponseMetadata.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
  /**
   * <p>Contains the output of RunScheduledInstances.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/RunScheduledInstancesResult">AWS
   * API Reference</a></p>
   */
  class RunScheduledInstancesResponse
  {
  public:
    AWS_EC2_API RunScheduledInstancesResponse();
    AWS_EC2_API RunScheduledInstancesResponse(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_EC2_API RunScheduledInstancesResponse& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    /**
     * <p>The IDs of the newly launched instances.</p>
     */
    inline const Aws::Vector<Aws::String>& GetInstanceIdSet() const{ return m_instanceIdSet; }

    /**
     * <p>The IDs of the newly launched instances.</p>
     */
    inline void SetInstanceIdSet(const Aws::Vector<Aws::String>& value) { m_instanceIdSet = value; }

    /**
     * <p>The IDs of the newly launched instances.</p>
     */
    inline void SetInstanceIdSet(Aws::Vector<Aws::String>&& value) { m_instanceIdSet = std::move(value); }

    /**
     * <p>The IDs of the newly launched instances.</p>
     */
    inline RunScheduledInstancesResponse& WithInstanceIdSet(const Aws::Vector<Aws::String>& value) { SetInstanceIdSet(value); return *this;}

    /**
     * <p>The IDs of the newly launched instances.</p>
     */
    inline RunScheduledInstancesResponse& WithInstanceIdSet(Aws::Vector<Aws::String>&& value) { SetInstanceIdSet(std::move(value)); return *this;}

    /**
     * <p>The IDs of the newly launched instances.</p>
     */
    inline RunScheduledInstancesResponse& AddInstanceIdSet(const Aws::String& value) { m_instanceIdSet.push_back(value); return *this; }

    /**
     * <p>The IDs of the newly launched instances.</p>
     */
    inline RunScheduledInstancesResponse& AddInstanceIdSet(Aws::String&& value) { m_instanceIdSet.push_back(std::move(value)); return *this; }

    /**
     * <p>The IDs of the newly launched instances.</p>
     */
    inline RunScheduledInstancesResponse& AddInstanceIdSet(const char* value) { m_instanceIdSet.push_back(value); return *this; }


    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }

    
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }

    
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = std::move(value); }

    
    inline RunScheduledInstancesResponse& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}

    
    inline RunScheduledInstancesResponse& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(std::move(value)); return *this;}

  private:

    Aws::Vector<Aws::String> m_instanceIdSet;

    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
