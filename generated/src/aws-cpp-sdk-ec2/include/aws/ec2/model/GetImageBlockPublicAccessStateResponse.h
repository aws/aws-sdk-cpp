/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ec2/model/ManagedBy.h>
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
  class GetImageBlockPublicAccessStateResponse
  {
  public:
    AWS_EC2_API GetImageBlockPublicAccessStateResponse();
    AWS_EC2_API GetImageBlockPublicAccessStateResponse(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_EC2_API GetImageBlockPublicAccessStateResponse& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    /**
     * <p>The current state of block public access for AMIs at the account level in the
     * specified Amazon Web Services Region.</p> <p>Possible values:</p> <ul> <li> <p>
     * <code>block-new-sharing</code> - Any attempt to publicly share your AMIs in the
     * specified Region is blocked.</p> </li> <li> <p> <code>unblocked</code> - Your
     * AMIs in the specified Region can be publicly shared.</p> </li> </ul>
     */
    inline const Aws::String& GetImageBlockPublicAccessState() const{ return m_imageBlockPublicAccessState; }
    inline void SetImageBlockPublicAccessState(const Aws::String& value) { m_imageBlockPublicAccessState = value; }
    inline void SetImageBlockPublicAccessState(Aws::String&& value) { m_imageBlockPublicAccessState = std::move(value); }
    inline void SetImageBlockPublicAccessState(const char* value) { m_imageBlockPublicAccessState.assign(value); }
    inline GetImageBlockPublicAccessStateResponse& WithImageBlockPublicAccessState(const Aws::String& value) { SetImageBlockPublicAccessState(value); return *this;}
    inline GetImageBlockPublicAccessStateResponse& WithImageBlockPublicAccessState(Aws::String&& value) { SetImageBlockPublicAccessState(std::move(value)); return *this;}
    inline GetImageBlockPublicAccessStateResponse& WithImageBlockPublicAccessState(const char* value) { SetImageBlockPublicAccessState(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The entity that manages the state for block public access for AMIs. Possible
     * values include:</p> <ul> <li> <p> <code>account</code> - The state is managed by
     * the account.</p> </li> <li> <p> <code>declarative-policy</code> - The state is
     * managed by a declarative policy and can't be modified by the account.</p> </li>
     * </ul>
     */
    inline const ManagedBy& GetManagedBy() const{ return m_managedBy; }
    inline void SetManagedBy(const ManagedBy& value) { m_managedBy = value; }
    inline void SetManagedBy(ManagedBy&& value) { m_managedBy = std::move(value); }
    inline GetImageBlockPublicAccessStateResponse& WithManagedBy(const ManagedBy& value) { SetManagedBy(value); return *this;}
    inline GetImageBlockPublicAccessStateResponse& WithManagedBy(ManagedBy&& value) { SetManagedBy(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = std::move(value); }
    inline GetImageBlockPublicAccessStateResponse& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}
    inline GetImageBlockPublicAccessStateResponse& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_imageBlockPublicAccessState;

    ManagedBy m_managedBy;

    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
