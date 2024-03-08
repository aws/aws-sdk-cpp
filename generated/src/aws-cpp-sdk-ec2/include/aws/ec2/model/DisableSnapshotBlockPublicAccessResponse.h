/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/ec2/model/SnapshotBlockPublicAccessState.h>
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
  class DisableSnapshotBlockPublicAccessResponse
  {
  public:
    AWS_EC2_API DisableSnapshotBlockPublicAccessResponse();
    AWS_EC2_API DisableSnapshotBlockPublicAccessResponse(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_EC2_API DisableSnapshotBlockPublicAccessResponse& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    /**
     * <p>Returns <code>unblocked</code> if the request succeeds.</p>
     */
    inline const SnapshotBlockPublicAccessState& GetState() const{ return m_state; }

    /**
     * <p>Returns <code>unblocked</code> if the request succeeds.</p>
     */
    inline void SetState(const SnapshotBlockPublicAccessState& value) { m_state = value; }

    /**
     * <p>Returns <code>unblocked</code> if the request succeeds.</p>
     */
    inline void SetState(SnapshotBlockPublicAccessState&& value) { m_state = std::move(value); }

    /**
     * <p>Returns <code>unblocked</code> if the request succeeds.</p>
     */
    inline DisableSnapshotBlockPublicAccessResponse& WithState(const SnapshotBlockPublicAccessState& value) { SetState(value); return *this;}

    /**
     * <p>Returns <code>unblocked</code> if the request succeeds.</p>
     */
    inline DisableSnapshotBlockPublicAccessResponse& WithState(SnapshotBlockPublicAccessState&& value) { SetState(std::move(value)); return *this;}


    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }

    
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }

    
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = std::move(value); }

    
    inline DisableSnapshotBlockPublicAccessResponse& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}

    
    inline DisableSnapshotBlockPublicAccessResponse& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(std::move(value)); return *this;}

  private:

    SnapshotBlockPublicAccessState m_state;

    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
