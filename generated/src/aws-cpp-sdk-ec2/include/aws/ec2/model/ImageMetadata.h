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
    AWS_EC2_API ImageMetadata() = default;
    AWS_EC2_API ImageMetadata(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_EC2_API ImageMetadata& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_EC2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_EC2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>The ID of the AMI.</p>
     */
    inline const Aws::String& GetImageId() const { return m_imageId; }
    inline bool ImageIdHasBeenSet() const { return m_imageIdHasBeenSet; }
    template<typename ImageIdT = Aws::String>
    void SetImageId(ImageIdT&& value) { m_imageIdHasBeenSet = true; m_imageId = std::forward<ImageIdT>(value); }
    template<typename ImageIdT = Aws::String>
    ImageMetadata& WithImageId(ImageIdT&& value) { SetImageId(std::forward<ImageIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the AMI.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    ImageMetadata& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the Amazon Web Services account that owns the AMI.</p>
     */
    inline const Aws::String& GetOwnerId() const { return m_ownerId; }
    inline bool OwnerIdHasBeenSet() const { return m_ownerIdHasBeenSet; }
    template<typename OwnerIdT = Aws::String>
    void SetOwnerId(OwnerIdT&& value) { m_ownerIdHasBeenSet = true; m_ownerId = std::forward<OwnerIdT>(value); }
    template<typename OwnerIdT = Aws::String>
    ImageMetadata& WithOwnerId(OwnerIdT&& value) { SetOwnerId(std::forward<OwnerIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The current state of the AMI. If the state is <code>available</code>, the AMI
     * is successfully registered and can be used to launch an instance.</p>
     */
    inline ImageState GetState() const { return m_state; }
    inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }
    inline void SetState(ImageState value) { m_stateHasBeenSet = true; m_state = value; }
    inline ImageMetadata& WithState(ImageState value) { SetState(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The alias of the AMI owner.</p> <p>Valid values: <code>amazon</code> |
     * <code>aws-backup-vault</code> | <code>aws-marketplace</code> </p>
     */
    inline const Aws::String& GetImageOwnerAlias() const { return m_imageOwnerAlias; }
    inline bool ImageOwnerAliasHasBeenSet() const { return m_imageOwnerAliasHasBeenSet; }
    template<typename ImageOwnerAliasT = Aws::String>
    void SetImageOwnerAlias(ImageOwnerAliasT&& value) { m_imageOwnerAliasHasBeenSet = true; m_imageOwnerAlias = std::forward<ImageOwnerAliasT>(value); }
    template<typename ImageOwnerAliasT = Aws::String>
    ImageMetadata& WithImageOwnerAlias(ImageOwnerAliasT&& value) { SetImageOwnerAlias(std::forward<ImageOwnerAliasT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time the AMI was created.</p>
     */
    inline const Aws::String& GetCreationDate() const { return m_creationDate; }
    inline bool CreationDateHasBeenSet() const { return m_creationDateHasBeenSet; }
    template<typename CreationDateT = Aws::String>
    void SetCreationDate(CreationDateT&& value) { m_creationDateHasBeenSet = true; m_creationDate = std::forward<CreationDateT>(value); }
    template<typename CreationDateT = Aws::String>
    ImageMetadata& WithCreationDate(CreationDateT&& value) { SetCreationDate(std::forward<CreationDateT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The deprecation date and time of the AMI, in UTC, in the following format:
     * <i>YYYY</i>-<i>MM</i>-<i>DD</i>T<i>HH</i>:<i>MM</i>:<i>SS</i>Z.</p>
     */
    inline const Aws::String& GetDeprecationTime() const { return m_deprecationTime; }
    inline bool DeprecationTimeHasBeenSet() const { return m_deprecationTimeHasBeenSet; }
    template<typename DeprecationTimeT = Aws::String>
    void SetDeprecationTime(DeprecationTimeT&& value) { m_deprecationTimeHasBeenSet = true; m_deprecationTime = std::forward<DeprecationTimeT>(value); }
    template<typename DeprecationTimeT = Aws::String>
    ImageMetadata& WithDeprecationTime(DeprecationTimeT&& value) { SetDeprecationTime(std::forward<DeprecationTimeT>(value)); return *this;}
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
    inline bool GetImageAllowed() const { return m_imageAllowed; }
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
    inline bool GetIsPublic() const { return m_isPublic; }
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

    ImageState m_state{ImageState::NOT_SET};
    bool m_stateHasBeenSet = false;

    Aws::String m_imageOwnerAlias;
    bool m_imageOwnerAliasHasBeenSet = false;

    Aws::String m_creationDate;
    bool m_creationDateHasBeenSet = false;

    Aws::String m_deprecationTime;
    bool m_deprecationTimeHasBeenSet = false;

    bool m_imageAllowed{false};
    bool m_imageAllowedHasBeenSet = false;

    bool m_isPublic{false};
    bool m_isPublicHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
