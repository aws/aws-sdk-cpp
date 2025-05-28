/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ec2/model/ResponseMetadata.h>
#include <aws/ec2/model/DeleteSnapshotReturnCode.h>
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
  class DeregisterImageResponse
  {
  public:
    AWS_EC2_API DeregisterImageResponse() = default;
    AWS_EC2_API DeregisterImageResponse(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_EC2_API DeregisterImageResponse& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    /**
     * <p>Returns <code>true</code> if the request succeeds; otherwise, it returns an
     * error.</p>
     */
    inline bool GetReturn() const { return m_return; }
    inline void SetReturn(bool value) { m_returnHasBeenSet = true; m_return = value; }
    inline DeregisterImageResponse& WithReturn(bool value) { SetReturn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The deletion result for each snapshot associated with the AMI, including the
     * snapshot ID and its success or error code.</p>
     */
    inline const Aws::Vector<DeleteSnapshotReturnCode>& GetDeleteSnapshotResults() const { return m_deleteSnapshotResults; }
    template<typename DeleteSnapshotResultsT = Aws::Vector<DeleteSnapshotReturnCode>>
    void SetDeleteSnapshotResults(DeleteSnapshotResultsT&& value) { m_deleteSnapshotResultsHasBeenSet = true; m_deleteSnapshotResults = std::forward<DeleteSnapshotResultsT>(value); }
    template<typename DeleteSnapshotResultsT = Aws::Vector<DeleteSnapshotReturnCode>>
    DeregisterImageResponse& WithDeleteSnapshotResults(DeleteSnapshotResultsT&& value) { SetDeleteSnapshotResults(std::forward<DeleteSnapshotResultsT>(value)); return *this;}
    template<typename DeleteSnapshotResultsT = DeleteSnapshotReturnCode>
    DeregisterImageResponse& AddDeleteSnapshotResults(DeleteSnapshotResultsT&& value) { m_deleteSnapshotResultsHasBeenSet = true; m_deleteSnapshotResults.emplace_back(std::forward<DeleteSnapshotResultsT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const ResponseMetadata& GetResponseMetadata() const { return m_responseMetadata; }
    template<typename ResponseMetadataT = ResponseMetadata>
    void SetResponseMetadata(ResponseMetadataT&& value) { m_responseMetadataHasBeenSet = true; m_responseMetadata = std::forward<ResponseMetadataT>(value); }
    template<typename ResponseMetadataT = ResponseMetadata>
    DeregisterImageResponse& WithResponseMetadata(ResponseMetadataT&& value) { SetResponseMetadata(std::forward<ResponseMetadataT>(value)); return *this;}
    ///@}
  private:

    bool m_return{false};
    bool m_returnHasBeenSet = false;

    Aws::Vector<DeleteSnapshotReturnCode> m_deleteSnapshotResults;
    bool m_deleteSnapshotResultsHasBeenSet = false;

    ResponseMetadata m_responseMetadata;
    bool m_responseMetadataHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
