/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
  class StartInstanceRefreshResult
  {
  public:
    AWS_AUTOSCALING_API StartInstanceRefreshResult() = default;
    AWS_AUTOSCALING_API StartInstanceRefreshResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_AUTOSCALING_API StartInstanceRefreshResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    /**
     * <p>A unique ID for tracking the progress of the instance refresh.</p>
     */
    inline const Aws::String& GetInstanceRefreshId() const { return m_instanceRefreshId; }
    template<typename InstanceRefreshIdT = Aws::String>
    void SetInstanceRefreshId(InstanceRefreshIdT&& value) { m_instanceRefreshIdHasBeenSet = true; m_instanceRefreshId = std::forward<InstanceRefreshIdT>(value); }
    template<typename InstanceRefreshIdT = Aws::String>
    StartInstanceRefreshResult& WithInstanceRefreshId(InstanceRefreshIdT&& value) { SetInstanceRefreshId(std::forward<InstanceRefreshIdT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const ResponseMetadata& GetResponseMetadata() const { return m_responseMetadata; }
    template<typename ResponseMetadataT = ResponseMetadata>
    void SetResponseMetadata(ResponseMetadataT&& value) { m_responseMetadataHasBeenSet = true; m_responseMetadata = std::forward<ResponseMetadataT>(value); }
    template<typename ResponseMetadataT = ResponseMetadata>
    StartInstanceRefreshResult& WithResponseMetadata(ResponseMetadataT&& value) { SetResponseMetadata(std::forward<ResponseMetadataT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_instanceRefreshId;
    bool m_instanceRefreshIdHasBeenSet = false;

    ResponseMetadata m_responseMetadata;
    bool m_responseMetadataHasBeenSet = false;
  };

} // namespace Model
} // namespace AutoScaling
} // namespace Aws
