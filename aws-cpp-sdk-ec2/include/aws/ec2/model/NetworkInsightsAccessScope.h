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
    AWS_EC2_API NetworkInsightsAccessScope();
    AWS_EC2_API NetworkInsightsAccessScope(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_EC2_API NetworkInsightsAccessScope& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_EC2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_EC2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p>The ID of the Network Access Scope.</p>
     */
    inline const Aws::String& GetNetworkInsightsAccessScopeId() const{ return m_networkInsightsAccessScopeId; }

    /**
     * <p>The ID of the Network Access Scope.</p>
     */
    inline bool NetworkInsightsAccessScopeIdHasBeenSet() const { return m_networkInsightsAccessScopeIdHasBeenSet; }

    /**
     * <p>The ID of the Network Access Scope.</p>
     */
    inline void SetNetworkInsightsAccessScopeId(const Aws::String& value) { m_networkInsightsAccessScopeIdHasBeenSet = true; m_networkInsightsAccessScopeId = value; }

    /**
     * <p>The ID of the Network Access Scope.</p>
     */
    inline void SetNetworkInsightsAccessScopeId(Aws::String&& value) { m_networkInsightsAccessScopeIdHasBeenSet = true; m_networkInsightsAccessScopeId = std::move(value); }

    /**
     * <p>The ID of the Network Access Scope.</p>
     */
    inline void SetNetworkInsightsAccessScopeId(const char* value) { m_networkInsightsAccessScopeIdHasBeenSet = true; m_networkInsightsAccessScopeId.assign(value); }

    /**
     * <p>The ID of the Network Access Scope.</p>
     */
    inline NetworkInsightsAccessScope& WithNetworkInsightsAccessScopeId(const Aws::String& value) { SetNetworkInsightsAccessScopeId(value); return *this;}

    /**
     * <p>The ID of the Network Access Scope.</p>
     */
    inline NetworkInsightsAccessScope& WithNetworkInsightsAccessScopeId(Aws::String&& value) { SetNetworkInsightsAccessScopeId(std::move(value)); return *this;}

    /**
     * <p>The ID of the Network Access Scope.</p>
     */
    inline NetworkInsightsAccessScope& WithNetworkInsightsAccessScopeId(const char* value) { SetNetworkInsightsAccessScopeId(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the Network Access Scope.</p>
     */
    inline const Aws::String& GetNetworkInsightsAccessScopeArn() const{ return m_networkInsightsAccessScopeArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the Network Access Scope.</p>
     */
    inline bool NetworkInsightsAccessScopeArnHasBeenSet() const { return m_networkInsightsAccessScopeArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the Network Access Scope.</p>
     */
    inline void SetNetworkInsightsAccessScopeArn(const Aws::String& value) { m_networkInsightsAccessScopeArnHasBeenSet = true; m_networkInsightsAccessScopeArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the Network Access Scope.</p>
     */
    inline void SetNetworkInsightsAccessScopeArn(Aws::String&& value) { m_networkInsightsAccessScopeArnHasBeenSet = true; m_networkInsightsAccessScopeArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the Network Access Scope.</p>
     */
    inline void SetNetworkInsightsAccessScopeArn(const char* value) { m_networkInsightsAccessScopeArnHasBeenSet = true; m_networkInsightsAccessScopeArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the Network Access Scope.</p>
     */
    inline NetworkInsightsAccessScope& WithNetworkInsightsAccessScopeArn(const Aws::String& value) { SetNetworkInsightsAccessScopeArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the Network Access Scope.</p>
     */
    inline NetworkInsightsAccessScope& WithNetworkInsightsAccessScopeArn(Aws::String&& value) { SetNetworkInsightsAccessScopeArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the Network Access Scope.</p>
     */
    inline NetworkInsightsAccessScope& WithNetworkInsightsAccessScopeArn(const char* value) { SetNetworkInsightsAccessScopeArn(value); return *this;}


    /**
     * <p>The creation date.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedDate() const{ return m_createdDate; }

    /**
     * <p>The creation date.</p>
     */
    inline bool CreatedDateHasBeenSet() const { return m_createdDateHasBeenSet; }

    /**
     * <p>The creation date.</p>
     */
    inline void SetCreatedDate(const Aws::Utils::DateTime& value) { m_createdDateHasBeenSet = true; m_createdDate = value; }

    /**
     * <p>The creation date.</p>
     */
    inline void SetCreatedDate(Aws::Utils::DateTime&& value) { m_createdDateHasBeenSet = true; m_createdDate = std::move(value); }

    /**
     * <p>The creation date.</p>
     */
    inline NetworkInsightsAccessScope& WithCreatedDate(const Aws::Utils::DateTime& value) { SetCreatedDate(value); return *this;}

    /**
     * <p>The creation date.</p>
     */
    inline NetworkInsightsAccessScope& WithCreatedDate(Aws::Utils::DateTime&& value) { SetCreatedDate(std::move(value)); return *this;}


    /**
     * <p>The last updated date.</p>
     */
    inline const Aws::Utils::DateTime& GetUpdatedDate() const{ return m_updatedDate; }

    /**
     * <p>The last updated date.</p>
     */
    inline bool UpdatedDateHasBeenSet() const { return m_updatedDateHasBeenSet; }

    /**
     * <p>The last updated date.</p>
     */
    inline void SetUpdatedDate(const Aws::Utils::DateTime& value) { m_updatedDateHasBeenSet = true; m_updatedDate = value; }

    /**
     * <p>The last updated date.</p>
     */
    inline void SetUpdatedDate(Aws::Utils::DateTime&& value) { m_updatedDateHasBeenSet = true; m_updatedDate = std::move(value); }

    /**
     * <p>The last updated date.</p>
     */
    inline NetworkInsightsAccessScope& WithUpdatedDate(const Aws::Utils::DateTime& value) { SetUpdatedDate(value); return *this;}

    /**
     * <p>The last updated date.</p>
     */
    inline NetworkInsightsAccessScope& WithUpdatedDate(Aws::Utils::DateTime&& value) { SetUpdatedDate(std::move(value)); return *this;}


    /**
     * <p>The tags.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }

    /**
     * <p>The tags.</p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>The tags.</p>
     */
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>The tags.</p>
     */
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>The tags.</p>
     */
    inline NetworkInsightsAccessScope& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}

    /**
     * <p>The tags.</p>
     */
    inline NetworkInsightsAccessScope& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>The tags.</p>
     */
    inline NetworkInsightsAccessScope& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }

    /**
     * <p>The tags.</p>
     */
    inline NetworkInsightsAccessScope& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_networkInsightsAccessScopeId;
    bool m_networkInsightsAccessScopeIdHasBeenSet = false;

    Aws::String m_networkInsightsAccessScopeArn;
    bool m_networkInsightsAccessScopeArnHasBeenSet = false;

    Aws::Utils::DateTime m_createdDate;
    bool m_createdDateHasBeenSet = false;

    Aws::Utils::DateTime m_updatedDate;
    bool m_updatedDateHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
