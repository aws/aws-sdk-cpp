/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ec2/model/ManagedBy.h>
#include <aws/ec2/model/ResponseMetadata.h>
#include <aws/ec2/model/ImageCriterion.h>
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
  class GetAllowedImagesSettingsResponse
  {
  public:
    AWS_EC2_API GetAllowedImagesSettingsResponse() = default;
    AWS_EC2_API GetAllowedImagesSettingsResponse(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_EC2_API GetAllowedImagesSettingsResponse& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    /**
     * <p>The current state of the Allowed AMIs setting at the account level in the
     * specified Amazon Web Services Region.</p> <p>Possible values:</p> <ul> <li> <p>
     * <code>disabled</code>: All AMIs are allowed.</p> </li> <li> <p>
     * <code>audit-mode</code>: All AMIs are allowed, but the <code>ImageAllowed</code>
     * field is set to <code>true</code> if the AMI would be allowed with the current
     * list of criteria if allowed AMIs was enabled.</p> </li> <li> <p>
     * <code>enabled</code>: Only AMIs matching the image criteria are discoverable and
     * available for use.</p> </li> </ul>
     */
    inline const Aws::String& GetState() const { return m_state; }
    template<typename StateT = Aws::String>
    void SetState(StateT&& value) { m_stateHasBeenSet = true; m_state = std::forward<StateT>(value); }
    template<typename StateT = Aws::String>
    GetAllowedImagesSettingsResponse& WithState(StateT&& value) { SetState(std::forward<StateT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The list of criteria for images that are discoverable and usable in the
     * account in the specified Amazon Web Services Region.</p>
     */
    inline const Aws::Vector<ImageCriterion>& GetImageCriteria() const { return m_imageCriteria; }
    template<typename ImageCriteriaT = Aws::Vector<ImageCriterion>>
    void SetImageCriteria(ImageCriteriaT&& value) { m_imageCriteriaHasBeenSet = true; m_imageCriteria = std::forward<ImageCriteriaT>(value); }
    template<typename ImageCriteriaT = Aws::Vector<ImageCriterion>>
    GetAllowedImagesSettingsResponse& WithImageCriteria(ImageCriteriaT&& value) { SetImageCriteria(std::forward<ImageCriteriaT>(value)); return *this;}
    template<typename ImageCriteriaT = ImageCriterion>
    GetAllowedImagesSettingsResponse& AddImageCriteria(ImageCriteriaT&& value) { m_imageCriteriaHasBeenSet = true; m_imageCriteria.emplace_back(std::forward<ImageCriteriaT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The entity that manages the Allowed AMIs settings. Possible values
     * include:</p> <ul> <li> <p> <code>account</code> - The Allowed AMIs settings is
     * managed by the account.</p> </li> <li> <p> <code>declarative-policy</code> - The
     * Allowed AMIs settings is managed by a declarative policy and can't be modified
     * by the account.</p> </li> </ul>
     */
    inline ManagedBy GetManagedBy() const { return m_managedBy; }
    inline void SetManagedBy(ManagedBy value) { m_managedByHasBeenSet = true; m_managedBy = value; }
    inline GetAllowedImagesSettingsResponse& WithManagedBy(ManagedBy value) { SetManagedBy(value); return *this;}
    ///@}

    ///@{
    
    inline const ResponseMetadata& GetResponseMetadata() const { return m_responseMetadata; }
    template<typename ResponseMetadataT = ResponseMetadata>
    void SetResponseMetadata(ResponseMetadataT&& value) { m_responseMetadataHasBeenSet = true; m_responseMetadata = std::forward<ResponseMetadataT>(value); }
    template<typename ResponseMetadataT = ResponseMetadata>
    GetAllowedImagesSettingsResponse& WithResponseMetadata(ResponseMetadataT&& value) { SetResponseMetadata(std::forward<ResponseMetadataT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_state;
    bool m_stateHasBeenSet = false;

    Aws::Vector<ImageCriterion> m_imageCriteria;
    bool m_imageCriteriaHasBeenSet = false;

    ManagedBy m_managedBy{ManagedBy::NOT_SET};
    bool m_managedByHasBeenSet = false;

    ResponseMetadata m_responseMetadata;
    bool m_responseMetadataHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
