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
    AWS_EC2_API GetAllowedImagesSettingsResponse();
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
    inline const Aws::String& GetState() const{ return m_state; }
    inline void SetState(const Aws::String& value) { m_state = value; }
    inline void SetState(Aws::String&& value) { m_state = std::move(value); }
    inline void SetState(const char* value) { m_state.assign(value); }
    inline GetAllowedImagesSettingsResponse& WithState(const Aws::String& value) { SetState(value); return *this;}
    inline GetAllowedImagesSettingsResponse& WithState(Aws::String&& value) { SetState(std::move(value)); return *this;}
    inline GetAllowedImagesSettingsResponse& WithState(const char* value) { SetState(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The list of criteria for images that are discoverable and usable in the
     * account in the specified Amazon Web Services Region.</p>
     */
    inline const Aws::Vector<ImageCriterion>& GetImageCriteria() const{ return m_imageCriteria; }
    inline void SetImageCriteria(const Aws::Vector<ImageCriterion>& value) { m_imageCriteria = value; }
    inline void SetImageCriteria(Aws::Vector<ImageCriterion>&& value) { m_imageCriteria = std::move(value); }
    inline GetAllowedImagesSettingsResponse& WithImageCriteria(const Aws::Vector<ImageCriterion>& value) { SetImageCriteria(value); return *this;}
    inline GetAllowedImagesSettingsResponse& WithImageCriteria(Aws::Vector<ImageCriterion>&& value) { SetImageCriteria(std::move(value)); return *this;}
    inline GetAllowedImagesSettingsResponse& AddImageCriteria(const ImageCriterion& value) { m_imageCriteria.push_back(value); return *this; }
    inline GetAllowedImagesSettingsResponse& AddImageCriteria(ImageCriterion&& value) { m_imageCriteria.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The entity that manages the Allowed AMIs settings. Possible values
     * include:</p> <ul> <li> <p> <code>account</code> - The Allowed AMIs settings is
     * managed by the account.</p> </li> <li> <p> <code>declarative-policy</code> - The
     * Allowed AMIs settings is managed by a declarative policy and can't be modified
     * by the account.</p> </li> </ul>
     */
    inline const ManagedBy& GetManagedBy() const{ return m_managedBy; }
    inline void SetManagedBy(const ManagedBy& value) { m_managedBy = value; }
    inline void SetManagedBy(ManagedBy&& value) { m_managedBy = std::move(value); }
    inline GetAllowedImagesSettingsResponse& WithManagedBy(const ManagedBy& value) { SetManagedBy(value); return *this;}
    inline GetAllowedImagesSettingsResponse& WithManagedBy(ManagedBy&& value) { SetManagedBy(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = std::move(value); }
    inline GetAllowedImagesSettingsResponse& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}
    inline GetAllowedImagesSettingsResponse& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_state;

    Aws::Vector<ImageCriterion> m_imageCriteria;

    ManagedBy m_managedBy;

    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
