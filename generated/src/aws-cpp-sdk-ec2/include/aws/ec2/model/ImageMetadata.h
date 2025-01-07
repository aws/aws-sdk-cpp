/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ec2/model/ImageState.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Xml
{
  class XmlNode;
} // namespace Xml
} // namespace Utils
namespace EC2
{
namespace Model
{

  /**
   * <p>Information about the AMI.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/ImageMetadata">AWS
   * API Reference</a></p>
   */
  class ImageMetadata
  {
  public:
    AWS_EC2_API ImageMetadata();
    AWS_EC2_API ImageMetadata(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_EC2_API ImageMetadata& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_EC2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_EC2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>The ID of the AMI.</p>
     */
    inline const Aws::String& GetImageId() const{ return m_imageId; }
    inline bool ImageIdHasBeenSet() const { return m_imageIdHasBeenSet; }
    inline void SetImageId(const Aws::String& value) { m_imageIdHasBeenSet = true; m_imageId = value; }
    inline void SetImageId(Aws::String&& value) { m_imageIdHasBeenSet = true; m_imageId = std::move(value); }
    inline void SetImageId(const char* value) { m_imageIdHasBeenSet = true; m_imageId.assign(value); }
    inline ImageMetadata& WithImageId(const Aws::String& value) { SetImageId(value); return *this;}
    inline ImageMetadata& WithImageId(Aws::String&& value) { SetImageId(std::move(value)); return *this;}
    inline ImageMetadata& WithImageId(const char* value) { SetImageId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the AMI.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline ImageMetadata& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline ImageMetadata& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline ImageMetadata& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the Amazon Web Services account that owns the AMI.</p>
     */
    inline const Aws::String& GetOwnerId() const{ return m_ownerId; }
    inline bool OwnerIdHasBeenSet() const { return m_ownerIdHasBeenSet; }
    inline void SetOwnerId(const Aws::String& value) { m_ownerIdHasBeenSet = true; m_ownerId = value; }
    inline void SetOwnerId(Aws::String&& value) { m_ownerIdHasBeenSet = true; m_ownerId = std::move(value); }
    inline void SetOwnerId(const char* value) { m_ownerIdHasBeenSet = true; m_ownerId.assign(value); }
    inline ImageMetadata& WithOwnerId(const Aws::String& value) { SetOwnerId(value); return *this;}
    inline ImageMetadata& WithOwnerId(Aws::String&& value) { SetOwnerId(std::move(value)); return *this;}
    inline ImageMetadata& WithOwnerId(const char* value) { SetOwnerId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The current state of the AMI. If the state is <code>available</code>, the AMI
     * is successfully registered and can be used to launch an instance.</p>
     */
    inline const ImageState& GetState() const{ return m_state; }
    inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }
    inline void SetState(const ImageState& value) { m_stateHasBeenSet = true; m_state = value; }
    inline void SetState(ImageState&& value) { m_stateHasBeenSet = true; m_state = std::move(value); }
    inline ImageMetadata& WithState(const ImageState& value) { SetState(value); return *this;}
    inline ImageMetadata& WithState(ImageState&& value) { SetState(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The alias of the AMI owner.</p> <p>Valid values: <code>amazon</code> |
     * <code>aws-backup-vault</code> | <code>aws-marketplace</code> </p>
     */
    inline const Aws::String& GetImageOwnerAlias() const{ return m_imageOwnerAlias; }
    inline bool ImageOwnerAliasHasBeenSet() const { return m_imageOwnerAliasHasBeenSet; }
    inline void SetImageOwnerAlias(const Aws::String& value) { m_imageOwnerAliasHasBeenSet = true; m_imageOwnerAlias = value; }
    inline void SetImageOwnerAlias(Aws::String&& value) { m_imageOwnerAliasHasBeenSet = true; m_imageOwnerAlias = std::move(value); }
    inline void SetImageOwnerAlias(const char* value) { m_imageOwnerAliasHasBeenSet = true; m_imageOwnerAlias.assign(value); }
    inline ImageMetadata& WithImageOwnerAlias(const Aws::String& value) { SetImageOwnerAlias(value); return *this;}
    inline ImageMetadata& WithImageOwnerAlias(Aws::String&& value) { SetImageOwnerAlias(std::move(value)); return *this;}
    inline ImageMetadata& WithImageOwnerAlias(const char* value) { SetImageOwnerAlias(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time the AMI was created.</p>
     */
    inline const Aws::String& GetCreationDate() const{ return m_creationDate; }
    inline bool CreationDateHasBeenSet() const { return m_creationDateHasBeenSet; }
    inline void SetCreationDate(const Aws::String& value) { m_creationDateHasBeenSet = true; m_creationDate = value; }
    inline void SetCreationDate(Aws::String&& value) { m_creationDateHasBeenSet = true; m_creationDate = std::move(value); }
    inline void SetCreationDate(const char* value) { m_creationDateHasBeenSet = true; m_creationDate.assign(value); }
    inline ImageMetadata& WithCreationDate(const Aws::String& value) { SetCreationDate(value); return *this;}
    inline ImageMetadata& WithCreationDate(Aws::String&& value) { SetCreationDate(std::move(value)); return *this;}
    inline ImageMetadata& WithCreationDate(const char* value) { SetCreationDate(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The deprecation date and time of the AMI, in UTC, in the following format:
     * <i>YYYY</i>-<i>MM</i>-<i>DD</i>T<i>HH</i>:<i>MM</i>:<i>SS</i>Z.</p>
     */
    inline const Aws::String& GetDeprecationTime() const{ return m_deprecationTime; }
    inline bool DeprecationTimeHasBeenSet() const { return m_deprecationTimeHasBeenSet; }
    inline void SetDeprecationTime(const Aws::String& value) { m_deprecationTimeHasBeenSet = true; m_deprecationTime = value; }
    inline void SetDeprecationTime(Aws::String&& value) { m_deprecationTimeHasBeenSet = true; m_deprecationTime = std::move(value); }
    inline void SetDeprecationTime(const char* value) { m_deprecationTimeHasBeenSet = true; m_deprecationTime.assign(value); }
    inline ImageMetadata& WithDeprecationTime(const Aws::String& value) { SetDeprecationTime(value); return *this;}
    inline ImageMetadata& WithDeprecationTime(Aws::String&& value) { SetDeprecationTime(std::move(value)); return *this;}
    inline ImageMetadata& WithDeprecationTime(const char* value) { SetDeprecationTime(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>If <code>true</code>, the AMI satisfies the criteria for Allowed AMIs and can
     * be discovered and used in the account. If <code>false</code>, the AMI can't be
     * discovered or used in the account.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/ec2-allowed-amis.html">Control
     * the discovery and use of AMIs in Amazon EC2 with Allowed AMIs</a> in <i>Amazon
     * EC2 User Guide</i>.</p>
     */
    inline bool GetImageAllowed() const{ return m_imageAllowed; }
    inline bool ImageAllowedHasBeenSet() const { return m_imageAllowedHasBeenSet; }
    inline void SetImageAllowed(bool value) { m_imageAllowedHasBeenSet = true; m_imageAllowed = value; }
    inline ImageMetadata& WithImageAllowed(bool value) { SetImageAllowed(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether the AMI has public launch permissions. A value of
     * <code>true</code> means this AMI has public launch permissions, while
     * <code>false</code> means it has only implicit (AMI owner) or explicit (shared
     * with your account) launch permissions.</p>
     */
    inline bool GetIsPublic() const{ return m_isPublic; }
    inline bool IsPublicHasBeenSet() const { return m_isPublicHasBeenSet; }
    inline void SetIsPublic(bool value) { m_isPublicHasBeenSet = true; m_isPublic = value; }
    inline ImageMetadata& WithIsPublic(bool value) { SetIsPublic(value); return *this;}
    ///@}
  private:

    Aws::String m_imageId;
    bool m_imageIdHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_ownerId;
    bool m_ownerIdHasBeenSet = false;

    ImageState m_state;
    bool m_stateHasBeenSet = false;

    Aws::String m_imageOwnerAlias;
    bool m_imageOwnerAliasHasBeenSet = false;

    Aws::String m_creationDate;
    bool m_creationDateHasBeenSet = false;

    Aws::String m_deprecationTime;
    bool m_deprecationTimeHasBeenSet = false;

    bool m_imageAllowed;
    bool m_imageAllowedHasBeenSet = false;

    bool m_isPublic;
    bool m_isPublicHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
