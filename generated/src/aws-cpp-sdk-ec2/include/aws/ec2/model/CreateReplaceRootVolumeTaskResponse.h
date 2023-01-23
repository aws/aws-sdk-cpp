/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/ec2/model/ReplaceRootVolumeTask.h>
#include <aws/ec2/model/ResponseMetadata.h>
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
  class CreateReplaceRootVolumeTaskResponse
  {
  public:
    AWS_EC2_API CreateReplaceRootVolumeTaskResponse();
    AWS_EC2_API CreateReplaceRootVolumeTaskResponse(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_EC2_API CreateReplaceRootVolumeTaskResponse& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    /**
     * <p>Information about the root volume replacement task.</p>
     */
    inline const ReplaceRootVolumeTask& GetReplaceRootVolumeTask() const{ return m_replaceRootVolumeTask; }

    /**
     * <p>Information about the root volume replacement task.</p>
     */
    inline void SetReplaceRootVolumeTask(const ReplaceRootVolumeTask& value) { m_replaceRootVolumeTask = value; }

    /**
     * <p>Information about the root volume replacement task.</p>
     */
    inline void SetReplaceRootVolumeTask(ReplaceRootVolumeTask&& value) { m_replaceRootVolumeTask = std::move(value); }

    /**
     * <p>Information about the root volume replacement task.</p>
     */
    inline CreateReplaceRootVolumeTaskResponse& WithReplaceRootVolumeTask(const ReplaceRootVolumeTask& value) { SetReplaceRootVolumeTask(value); return *this;}

    /**
     * <p>Information about the root volume replacement task.</p>
     */
    inline CreateReplaceRootVolumeTaskResponse& WithReplaceRootVolumeTask(ReplaceRootVolumeTask&& value) { SetReplaceRootVolumeTask(std::move(value)); return *this;}


    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }

    
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }

    
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = std::move(value); }

    
    inline CreateReplaceRootVolumeTaskResponse& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}

    
    inline CreateReplaceRootVolumeTaskResponse& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(std::move(value)); return *this;}

  private:

    ReplaceRootVolumeTask m_replaceRootVolumeTask;

    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
