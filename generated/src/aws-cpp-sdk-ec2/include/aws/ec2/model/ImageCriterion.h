/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
   * <p>The list of criteria that are evaluated to determine whch AMIs are
   * discoverable and usable in the account in the specified Amazon Web Services
   * Region. Currently, the only criteria that can be specified are AMI providers.
   * </p> <p>Up to 10 <code>imageCriteria</code> objects can be specified, and up to
   * a total of 200 values for all <code>imageProviders</code>. For more information,
   * see <a
   * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/ec2-allowed-amis.html#allowed-amis-json-configuration">JSON
   * configuration for the Allowed AMIs criteria</a> in the <i>Amazon EC2 User
   * Guide</i>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/ImageCriterion">AWS
   * API Reference</a></p>
   */
  class ImageCriterion
  {
  public:
    AWS_EC2_API ImageCriterion();
    AWS_EC2_API ImageCriterion(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_EC2_API ImageCriterion& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_EC2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_EC2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>A list of AMI providers whose AMIs are discoverable and useable in the
     * account. Up to a total of 200 values can be specified.</p> <p>Possible
     * values:</p> <p> <code>amazon</code>: Allow AMIs created by Amazon Web
     * Services.</p> <p> <code>aws-marketplace</code>: Allow AMIs created by verified
     * providers in the Amazon Web Services Marketplace.</p> <p>
     * <code>aws-backup-vault</code>: Allow AMIs created by Amazon Web Services Backup.
     * </p> <p>12-digit account ID: Allow AMIs created by this account. One or more
     * account IDs can be specified.</p> <p> <code>none</code>: Allow AMIs created by
     * your own account only.</p>
     */
    inline const Aws::Vector<Aws::String>& GetImageProviders() const{ return m_imageProviders; }
    inline bool ImageProvidersHasBeenSet() const { return m_imageProvidersHasBeenSet; }
    inline void SetImageProviders(const Aws::Vector<Aws::String>& value) { m_imageProvidersHasBeenSet = true; m_imageProviders = value; }
    inline void SetImageProviders(Aws::Vector<Aws::String>&& value) { m_imageProvidersHasBeenSet = true; m_imageProviders = std::move(value); }
    inline ImageCriterion& WithImageProviders(const Aws::Vector<Aws::String>& value) { SetImageProviders(value); return *this;}
    inline ImageCriterion& WithImageProviders(Aws::Vector<Aws::String>&& value) { SetImageProviders(std::move(value)); return *this;}
    inline ImageCriterion& AddImageProviders(const Aws::String& value) { m_imageProvidersHasBeenSet = true; m_imageProviders.push_back(value); return *this; }
    inline ImageCriterion& AddImageProviders(Aws::String&& value) { m_imageProvidersHasBeenSet = true; m_imageProviders.push_back(std::move(value)); return *this; }
    inline ImageCriterion& AddImageProviders(const char* value) { m_imageProvidersHasBeenSet = true; m_imageProviders.push_back(value); return *this; }
    ///@}
  private:

    Aws::Vector<Aws::String> m_imageProviders;
    bool m_imageProvidersHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
