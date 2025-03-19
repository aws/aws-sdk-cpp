/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ec2/model/Tag.h>
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
   * <p>Describes a Network Access Scope.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/NetworkInsightsAccessScope">AWS
   * API Reference</a></p>
   */
  class NetworkInsightsAccessScope
  {
  public:
    AWS_EC2_API NetworkInsightsAccessScope() = default;
    AWS_EC2_API NetworkInsightsAccessScope(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_EC2_API NetworkInsightsAccessScope& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_EC2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_EC2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>The ID of the Network Access Scope.</p>
     */
    inline const Aws::String& GetNetworkInsightsAccessScopeId() const { return m_networkInsightsAccessScopeId; }
    inline bool NetworkInsightsAccessScopeIdHasBeenSet() const { return m_networkInsightsAccessScopeIdHasBeenSet; }
    template<typename NetworkInsightsAccessScopeIdT = Aws::String>
    void SetNetworkInsightsAccessScopeId(NetworkInsightsAccessScopeIdT&& value) { m_networkInsightsAccessScopeIdHasBeenSet = true; m_networkInsightsAccessScopeId = std::forward<NetworkInsightsAccessScopeIdT>(value); }
    template<typename NetworkInsightsAccessScopeIdT = Aws::String>
    NetworkInsightsAccessScope& WithNetworkInsightsAccessScopeId(NetworkInsightsAccessScopeIdT&& value) { SetNetworkInsightsAccessScopeId(std::forward<NetworkInsightsAccessScopeIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the Network Access Scope.</p>
     */
    inline const Aws::String& GetNetworkInsightsAccessScopeArn() const { return m_networkInsightsAccessScopeArn; }
    inline bool NetworkInsightsAccessScopeArnHasBeenSet() const { return m_networkInsightsAccessScopeArnHasBeenSet; }
    template<typename NetworkInsightsAccessScopeArnT = Aws::String>
    void SetNetworkInsightsAccessScopeArn(NetworkInsightsAccessScopeArnT&& value) { m_networkInsightsAccessScopeArnHasBeenSet = true; m_networkInsightsAccessScopeArn = std::forward<NetworkInsightsAccessScopeArnT>(value); }
    template<typename NetworkInsightsAccessScopeArnT = Aws::String>
    NetworkInsightsAccessScope& WithNetworkInsightsAccessScopeArn(NetworkInsightsAccessScopeArnT&& value) { SetNetworkInsightsAccessScopeArn(std::forward<NetworkInsightsAccessScopeArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The creation date.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedDate() const { return m_createdDate; }
    inline bool CreatedDateHasBeenSet() const { return m_createdDateHasBeenSet; }
    template<typename CreatedDateT = Aws::Utils::DateTime>
    void SetCreatedDate(CreatedDateT&& value) { m_createdDateHasBeenSet = true; m_createdDate = std::forward<CreatedDateT>(value); }
    template<typename CreatedDateT = Aws::Utils::DateTime>
    NetworkInsightsAccessScope& WithCreatedDate(CreatedDateT&& value) { SetCreatedDate(std::forward<CreatedDateT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The last updated date.</p>
     */
    inline const Aws::Utils::DateTime& GetUpdatedDate() const { return m_updatedDate; }
    inline bool UpdatedDateHasBeenSet() const { return m_updatedDateHasBeenSet; }
    template<typename UpdatedDateT = Aws::Utils::DateTime>
    void SetUpdatedDate(UpdatedDateT&& value) { m_updatedDateHasBeenSet = true; m_updatedDate = std::forward<UpdatedDateT>(value); }
    template<typename UpdatedDateT = Aws::Utils::DateTime>
    NetworkInsightsAccessScope& WithUpdatedDate(UpdatedDateT&& value) { SetUpdatedDate(std::forward<UpdatedDateT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The tags.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const { return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    template<typename TagsT = Aws::Vector<Tag>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Vector<Tag>>
    NetworkInsightsAccessScope& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsT = Tag>
    NetworkInsightsAccessScope& AddTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags.emplace_back(std::forward<TagsT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_networkInsightsAccessScopeId;
    bool m_networkInsightsAccessScopeIdHasBeenSet = false;

    Aws::String m_networkInsightsAccessScopeArn;
    bool m_networkInsightsAccessScopeArnHasBeenSet = false;

    Aws::Utils::DateTime m_createdDate{};
    bool m_createdDateHasBeenSet = false;

    Aws::Utils::DateTime m_updatedDate{};
    bool m_updatedDateHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
