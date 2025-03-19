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
    AWS_EC2_API GetImageBlockPublicAccessStateResponse() = default;
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
    inline const Aws::String& GetImageBlockPublicAccessState() const { return m_imageBlockPublicAccessState; }
    template<typename ImageBlockPublicAccessStateT = Aws::String>
    void SetImageBlockPublicAccessState(ImageBlockPublicAccessStateT&& value) { m_imageBlockPublicAccessStateHasBeenSet = true; m_imageBlockPublicAccessState = std::forward<ImageBlockPublicAccessStateT>(value); }
    template<typename ImageBlockPublicAccessStateT = Aws::String>
    GetImageBlockPublicAccessStateResponse& WithImageBlockPublicAccessState(ImageBlockPublicAccessStateT&& value) { SetImageBlockPublicAccessState(std::forward<ImageBlockPublicAccessStateT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The entity that manages the state for block public access for AMIs. Possible
     * values include:</p> <ul> <li> <p> <code>account</code> - The state is managed by
     * the account.</p> </li> <li> <p> <code>declarative-policy</code> - The state is
     * managed by a declarative policy and can't be modified by the account.</p> </li>
     * </ul>
     */
    inline ManagedBy GetManagedBy() const { return m_managedBy; }
    inline void SetManagedBy(ManagedBy value) { m_managedByHasBeenSet = true; m_managedBy = value; }
    inline GetImageBlockPublicAccessStateResponse& WithManagedBy(ManagedBy value) { SetManagedBy(value); return *this;}
    ///@}

    ///@{
    
    inline const ResponseMetadata& GetResponseMetadata() const { return m_responseMetadata; }
    template<typename ResponseMetadataT = ResponseMetadata>
    void SetResponseMetadata(ResponseMetadataT&& value) { m_responseMetadataHasBeenSet = true; m_responseMetadata = std::forward<ResponseMetadataT>(value); }
    template<typename ResponseMetadataT = ResponseMetadata>
    GetImageBlockPublicAccessStateResponse& WithResponseMetadata(ResponseMetadataT&& value) { SetResponseMetadata(std::forward<ResponseMetadataT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_imageBlockPublicAccessState;
    bool m_imageBlockPublicAccessStateHasBeenSet = false;

    ManagedBy m_managedBy{ManagedBy::NOT_SET};
    bool m_managedByHasBeenSet = false;

    ResponseMetadata m_responseMetadata;
    bool m_responseMetadataHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
