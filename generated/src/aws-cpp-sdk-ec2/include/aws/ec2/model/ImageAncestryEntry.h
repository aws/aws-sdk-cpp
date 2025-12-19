/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ec2/EC2_EXPORTS.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Xml {
class XmlNode;
}  // namespace Xml
}  // namespace Utils
namespace EC2 {
namespace Model {

/**
 * <p>Information about a single AMI in the ancestry chain and its source (parent)
 * AMI.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/ImageAncestryEntry">AWS
 * API Reference</a></p>
 */
class ImageAncestryEntry {
 public:
  AWS_EC2_API ImageAncestryEntry() = default;
  AWS_EC2_API ImageAncestryEntry(const Aws::Utils::Xml::XmlNode& xmlNode);
  AWS_EC2_API ImageAncestryEntry& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

  AWS_EC2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
  AWS_EC2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;

  ///@{
  /**
   * <p>The date and time when this AMI was created.</p>
   */
  inline const Aws::Utils::DateTime& GetCreationDate() const { return m_creationDate; }
  inline bool CreationDateHasBeenSet() const { return m_creationDateHasBeenSet; }
  template <typename CreationDateT = Aws::Utils::DateTime>
  void SetCreationDate(CreationDateT&& value) {
    m_creationDateHasBeenSet = true;
    m_creationDate = std::forward<CreationDateT>(value);
  }
  template <typename CreationDateT = Aws::Utils::DateTime>
  ImageAncestryEntry& WithCreationDate(CreationDateT&& value) {
    SetCreationDate(std::forward<CreationDateT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ID of this AMI.</p>
   */
  inline const Aws::String& GetImageId() const { return m_imageId; }
  inline bool ImageIdHasBeenSet() const { return m_imageIdHasBeenSet; }
  template <typename ImageIdT = Aws::String>
  void SetImageId(ImageIdT&& value) {
    m_imageIdHasBeenSet = true;
    m_imageId = std::forward<ImageIdT>(value);
  }
  template <typename ImageIdT = Aws::String>
  ImageAncestryEntry& WithImageId(ImageIdT&& value) {
    SetImageId(std::forward<ImageIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The owner alias (<code>amazon</code> | <code>aws-backup-vault</code> |
   * <code>aws-marketplace</code> ) of this AMI, if one is assigned. Otherwise, the
   * value is <code>null</code>.</p>
   */
  inline const Aws::String& GetImageOwnerAlias() const { return m_imageOwnerAlias; }
  inline bool ImageOwnerAliasHasBeenSet() const { return m_imageOwnerAliasHasBeenSet; }
  template <typename ImageOwnerAliasT = Aws::String>
  void SetImageOwnerAlias(ImageOwnerAliasT&& value) {
    m_imageOwnerAliasHasBeenSet = true;
    m_imageOwnerAlias = std::forward<ImageOwnerAliasT>(value);
  }
  template <typename ImageOwnerAliasT = Aws::String>
  ImageAncestryEntry& WithImageOwnerAlias(ImageOwnerAliasT&& value) {
    SetImageOwnerAlias(std::forward<ImageOwnerAliasT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ID of the parent AMI.</p>
   */
  inline const Aws::String& GetSourceImageId() const { return m_sourceImageId; }
  inline bool SourceImageIdHasBeenSet() const { return m_sourceImageIdHasBeenSet; }
  template <typename SourceImageIdT = Aws::String>
  void SetSourceImageId(SourceImageIdT&& value) {
    m_sourceImageIdHasBeenSet = true;
    m_sourceImageId = std::forward<SourceImageIdT>(value);
  }
  template <typename SourceImageIdT = Aws::String>
  ImageAncestryEntry& WithSourceImageId(SourceImageIdT&& value) {
    SetSourceImageId(std::forward<SourceImageIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Amazon Web Services Region of the parent AMI.</p>
   */
  inline const Aws::String& GetSourceImageRegion() const { return m_sourceImageRegion; }
  inline bool SourceImageRegionHasBeenSet() const { return m_sourceImageRegionHasBeenSet; }
  template <typename SourceImageRegionT = Aws::String>
  void SetSourceImageRegion(SourceImageRegionT&& value) {
    m_sourceImageRegionHasBeenSet = true;
    m_sourceImageRegion = std::forward<SourceImageRegionT>(value);
  }
  template <typename SourceImageRegionT = Aws::String>
  ImageAncestryEntry& WithSourceImageRegion(SourceImageRegionT&& value) {
    SetSourceImageRegion(std::forward<SourceImageRegionT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::Utils::DateTime m_creationDate{};

  Aws::String m_imageId;

  Aws::String m_imageOwnerAlias;

  Aws::String m_sourceImageId;

  Aws::String m_sourceImageRegion;
  bool m_creationDateHasBeenSet = false;
  bool m_imageIdHasBeenSet = false;
  bool m_imageOwnerAliasHasBeenSet = false;
  bool m_sourceImageIdHasBeenSet = false;
  bool m_sourceImageRegionHasBeenSet = false;
};

}  // namespace Model
}  // namespace EC2
}  // namespace Aws
