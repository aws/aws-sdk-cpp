/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#pragma once
#include <aws/redshift/Redshift_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/redshift/model/Tag.h>
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
namespace Redshift
{
namespace Model
{

  /**
   * <p>Returns information about an HSM configuration, which is an object that
   * describes to Amazon Redshift clusters the information they require to connect to
   * an HSM where they can store database encryption keys.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/redshift-2012-12-01/HsmConfiguration">AWS
   * API Reference</a></p>
   */
  class AWS_REDSHIFT_API HsmConfiguration
  {
  public:
    HsmConfiguration();
    HsmConfiguration(const Aws::Utils::Xml::XmlNode& xmlNode);
    HsmConfiguration& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p>The name of the Amazon Redshift HSM configuration.</p>
     */
    inline const Aws::String& GetHsmConfigurationIdentifier() const{ return m_hsmConfigurationIdentifier; }

    /**
     * <p>The name of the Amazon Redshift HSM configuration.</p>
     */
    inline bool HsmConfigurationIdentifierHasBeenSet() const { return m_hsmConfigurationIdentifierHasBeenSet; }

    /**
     * <p>The name of the Amazon Redshift HSM configuration.</p>
     */
    inline void SetHsmConfigurationIdentifier(const Aws::String& value) { m_hsmConfigurationIdentifierHasBeenSet = true; m_hsmConfigurationIdentifier = value; }

    /**
     * <p>The name of the Amazon Redshift HSM configuration.</p>
     */
    inline void SetHsmConfigurationIdentifier(Aws::String&& value) { m_hsmConfigurationIdentifierHasBeenSet = true; m_hsmConfigurationIdentifier = std::move(value); }

    /**
     * <p>The name of the Amazon Redshift HSM configuration.</p>
     */
    inline void SetHsmConfigurationIdentifier(const char* value) { m_hsmConfigurationIdentifierHasBeenSet = true; m_hsmConfigurationIdentifier.assign(value); }

    /**
     * <p>The name of the Amazon Redshift HSM configuration.</p>
     */
    inline HsmConfiguration& WithHsmConfigurationIdentifier(const Aws::String& value) { SetHsmConfigurationIdentifier(value); return *this;}

    /**
     * <p>The name of the Amazon Redshift HSM configuration.</p>
     */
    inline HsmConfiguration& WithHsmConfigurationIdentifier(Aws::String&& value) { SetHsmConfigurationIdentifier(std::move(value)); return *this;}

    /**
     * <p>The name of the Amazon Redshift HSM configuration.</p>
     */
    inline HsmConfiguration& WithHsmConfigurationIdentifier(const char* value) { SetHsmConfigurationIdentifier(value); return *this;}


    /**
     * <p>A text description of the HSM configuration.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>A text description of the HSM configuration.</p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>A text description of the HSM configuration.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>A text description of the HSM configuration.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>A text description of the HSM configuration.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>A text description of the HSM configuration.</p>
     */
    inline HsmConfiguration& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>A text description of the HSM configuration.</p>
     */
    inline HsmConfiguration& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>A text description of the HSM configuration.</p>
     */
    inline HsmConfiguration& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>The IP address that the Amazon Redshift cluster must use to access the
     * HSM.</p>
     */
    inline const Aws::String& GetHsmIpAddress() const{ return m_hsmIpAddress; }

    /**
     * <p>The IP address that the Amazon Redshift cluster must use to access the
     * HSM.</p>
     */
    inline bool HsmIpAddressHasBeenSet() const { return m_hsmIpAddressHasBeenSet; }

    /**
     * <p>The IP address that the Amazon Redshift cluster must use to access the
     * HSM.</p>
     */
    inline void SetHsmIpAddress(const Aws::String& value) { m_hsmIpAddressHasBeenSet = true; m_hsmIpAddress = value; }

    /**
     * <p>The IP address that the Amazon Redshift cluster must use to access the
     * HSM.</p>
     */
    inline void SetHsmIpAddress(Aws::String&& value) { m_hsmIpAddressHasBeenSet = true; m_hsmIpAddress = std::move(value); }

    /**
     * <p>The IP address that the Amazon Redshift cluster must use to access the
     * HSM.</p>
     */
    inline void SetHsmIpAddress(const char* value) { m_hsmIpAddressHasBeenSet = true; m_hsmIpAddress.assign(value); }

    /**
     * <p>The IP address that the Amazon Redshift cluster must use to access the
     * HSM.</p>
     */
    inline HsmConfiguration& WithHsmIpAddress(const Aws::String& value) { SetHsmIpAddress(value); return *this;}

    /**
     * <p>The IP address that the Amazon Redshift cluster must use to access the
     * HSM.</p>
     */
    inline HsmConfiguration& WithHsmIpAddress(Aws::String&& value) { SetHsmIpAddress(std::move(value)); return *this;}

    /**
     * <p>The IP address that the Amazon Redshift cluster must use to access the
     * HSM.</p>
     */
    inline HsmConfiguration& WithHsmIpAddress(const char* value) { SetHsmIpAddress(value); return *this;}


    /**
     * <p>The name of the partition in the HSM where the Amazon Redshift clusters will
     * store their database encryption keys.</p>
     */
    inline const Aws::String& GetHsmPartitionName() const{ return m_hsmPartitionName; }

    /**
     * <p>The name of the partition in the HSM where the Amazon Redshift clusters will
     * store their database encryption keys.</p>
     */
    inline bool HsmPartitionNameHasBeenSet() const { return m_hsmPartitionNameHasBeenSet; }

    /**
     * <p>The name of the partition in the HSM where the Amazon Redshift clusters will
     * store their database encryption keys.</p>
     */
    inline void SetHsmPartitionName(const Aws::String& value) { m_hsmPartitionNameHasBeenSet = true; m_hsmPartitionName = value; }

    /**
     * <p>The name of the partition in the HSM where the Amazon Redshift clusters will
     * store their database encryption keys.</p>
     */
    inline void SetHsmPartitionName(Aws::String&& value) { m_hsmPartitionNameHasBeenSet = true; m_hsmPartitionName = std::move(value); }

    /**
     * <p>The name of the partition in the HSM where the Amazon Redshift clusters will
     * store their database encryption keys.</p>
     */
    inline void SetHsmPartitionName(const char* value) { m_hsmPartitionNameHasBeenSet = true; m_hsmPartitionName.assign(value); }

    /**
     * <p>The name of the partition in the HSM where the Amazon Redshift clusters will
     * store their database encryption keys.</p>
     */
    inline HsmConfiguration& WithHsmPartitionName(const Aws::String& value) { SetHsmPartitionName(value); return *this;}

    /**
     * <p>The name of the partition in the HSM where the Amazon Redshift clusters will
     * store their database encryption keys.</p>
     */
    inline HsmConfiguration& WithHsmPartitionName(Aws::String&& value) { SetHsmPartitionName(std::move(value)); return *this;}

    /**
     * <p>The name of the partition in the HSM where the Amazon Redshift clusters will
     * store their database encryption keys.</p>
     */
    inline HsmConfiguration& WithHsmPartitionName(const char* value) { SetHsmPartitionName(value); return *this;}


    /**
     * <p>The list of tags for the HSM configuration.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }

    /**
     * <p>The list of tags for the HSM configuration.</p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>The list of tags for the HSM configuration.</p>
     */
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>The list of tags for the HSM configuration.</p>
     */
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>The list of tags for the HSM configuration.</p>
     */
    inline HsmConfiguration& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}

    /**
     * <p>The list of tags for the HSM configuration.</p>
     */
    inline HsmConfiguration& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>The list of tags for the HSM configuration.</p>
     */
    inline HsmConfiguration& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }

    /**
     * <p>The list of tags for the HSM configuration.</p>
     */
    inline HsmConfiguration& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_hsmConfigurationIdentifier;
    bool m_hsmConfigurationIdentifierHasBeenSet;

    Aws::String m_description;
    bool m_descriptionHasBeenSet;

    Aws::String m_hsmIpAddress;
    bool m_hsmIpAddressHasBeenSet;

    Aws::String m_hsmPartitionName;
    bool m_hsmPartitionNameHasBeenSet;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet;
  };

} // namespace Model
} // namespace Redshift
} // namespace Aws
