﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/rbin/RecycleBin_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/rbin/model/RetentionPeriod.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/rbin/model/ResourceType.h>
#include <aws/rbin/model/RuleStatus.h>
#include <aws/rbin/model/Tag.h>
#include <aws/rbin/model/ResourceTag.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace RecycleBin
{
namespace Model
{
  class AWS_RECYCLEBIN_API CreateRuleResult
  {
  public:
    CreateRuleResult();
    CreateRuleResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    CreateRuleResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The unique ID of the retention rule.</p>
     */
    inline const Aws::String& GetIdentifier() const{ return m_identifier; }

    /**
     * <p>The unique ID of the retention rule.</p>
     */
    inline void SetIdentifier(const Aws::String& value) { m_identifier = value; }

    /**
     * <p>The unique ID of the retention rule.</p>
     */
    inline void SetIdentifier(Aws::String&& value) { m_identifier = std::move(value); }

    /**
     * <p>The unique ID of the retention rule.</p>
     */
    inline void SetIdentifier(const char* value) { m_identifier.assign(value); }

    /**
     * <p>The unique ID of the retention rule.</p>
     */
    inline CreateRuleResult& WithIdentifier(const Aws::String& value) { SetIdentifier(value); return *this;}

    /**
     * <p>The unique ID of the retention rule.</p>
     */
    inline CreateRuleResult& WithIdentifier(Aws::String&& value) { SetIdentifier(std::move(value)); return *this;}

    /**
     * <p>The unique ID of the retention rule.</p>
     */
    inline CreateRuleResult& WithIdentifier(const char* value) { SetIdentifier(value); return *this;}


    
    inline const RetentionPeriod& GetRetentionPeriod() const{ return m_retentionPeriod; }

    
    inline void SetRetentionPeriod(const RetentionPeriod& value) { m_retentionPeriod = value; }

    
    inline void SetRetentionPeriod(RetentionPeriod&& value) { m_retentionPeriod = std::move(value); }

    
    inline CreateRuleResult& WithRetentionPeriod(const RetentionPeriod& value) { SetRetentionPeriod(value); return *this;}

    
    inline CreateRuleResult& WithRetentionPeriod(RetentionPeriod&& value) { SetRetentionPeriod(std::move(value)); return *this;}


    /**
     * <p>The retention rule description.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>The retention rule description.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_description = value; }

    /**
     * <p>The retention rule description.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_description = std::move(value); }

    /**
     * <p>The retention rule description.</p>
     */
    inline void SetDescription(const char* value) { m_description.assign(value); }

    /**
     * <p>The retention rule description.</p>
     */
    inline CreateRuleResult& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>The retention rule description.</p>
     */
    inline CreateRuleResult& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>The retention rule description.</p>
     */
    inline CreateRuleResult& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>Information about the tags assigned to the retention rule.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }

    /**
     * <p>Information about the tags assigned to the retention rule.</p>
     */
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tags = value; }

    /**
     * <p>Information about the tags assigned to the retention rule.</p>
     */
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tags = std::move(value); }

    /**
     * <p>Information about the tags assigned to the retention rule.</p>
     */
    inline CreateRuleResult& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}

    /**
     * <p>Information about the tags assigned to the retention rule.</p>
     */
    inline CreateRuleResult& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>Information about the tags assigned to the retention rule.</p>
     */
    inline CreateRuleResult& AddTags(const Tag& value) { m_tags.push_back(value); return *this; }

    /**
     * <p>Information about the tags assigned to the retention rule.</p>
     */
    inline CreateRuleResult& AddTags(Tag&& value) { m_tags.push_back(std::move(value)); return *this; }


    /**
     * <p>The resource type retained by the retention rule.</p>
     */
    inline const ResourceType& GetResourceType() const{ return m_resourceType; }

    /**
     * <p>The resource type retained by the retention rule.</p>
     */
    inline void SetResourceType(const ResourceType& value) { m_resourceType = value; }

    /**
     * <p>The resource type retained by the retention rule.</p>
     */
    inline void SetResourceType(ResourceType&& value) { m_resourceType = std::move(value); }

    /**
     * <p>The resource type retained by the retention rule.</p>
     */
    inline CreateRuleResult& WithResourceType(const ResourceType& value) { SetResourceType(value); return *this;}

    /**
     * <p>The resource type retained by the retention rule.</p>
     */
    inline CreateRuleResult& WithResourceType(ResourceType&& value) { SetResourceType(std::move(value)); return *this;}


    /**
     * <p>Information about the resource tags used to identify resources that are
     * retained by the retention rule.</p>
     */
    inline const Aws::Vector<ResourceTag>& GetResourceTags() const{ return m_resourceTags; }

    /**
     * <p>Information about the resource tags used to identify resources that are
     * retained by the retention rule.</p>
     */
    inline void SetResourceTags(const Aws::Vector<ResourceTag>& value) { m_resourceTags = value; }

    /**
     * <p>Information about the resource tags used to identify resources that are
     * retained by the retention rule.</p>
     */
    inline void SetResourceTags(Aws::Vector<ResourceTag>&& value) { m_resourceTags = std::move(value); }

    /**
     * <p>Information about the resource tags used to identify resources that are
     * retained by the retention rule.</p>
     */
    inline CreateRuleResult& WithResourceTags(const Aws::Vector<ResourceTag>& value) { SetResourceTags(value); return *this;}

    /**
     * <p>Information about the resource tags used to identify resources that are
     * retained by the retention rule.</p>
     */
    inline CreateRuleResult& WithResourceTags(Aws::Vector<ResourceTag>&& value) { SetResourceTags(std::move(value)); return *this;}

    /**
     * <p>Information about the resource tags used to identify resources that are
     * retained by the retention rule.</p>
     */
    inline CreateRuleResult& AddResourceTags(const ResourceTag& value) { m_resourceTags.push_back(value); return *this; }

    /**
     * <p>Information about the resource tags used to identify resources that are
     * retained by the retention rule.</p>
     */
    inline CreateRuleResult& AddResourceTags(ResourceTag&& value) { m_resourceTags.push_back(std::move(value)); return *this; }


    /**
     * <p>The state of the retention rule. Only retention rules that are in the
     * <code>available</code> state retain resources.</p>
     */
    inline const RuleStatus& GetStatus() const{ return m_status; }

    /**
     * <p>The state of the retention rule. Only retention rules that are in the
     * <code>available</code> state retain resources.</p>
     */
    inline void SetStatus(const RuleStatus& value) { m_status = value; }

    /**
     * <p>The state of the retention rule. Only retention rules that are in the
     * <code>available</code> state retain resources.</p>
     */
    inline void SetStatus(RuleStatus&& value) { m_status = std::move(value); }

    /**
     * <p>The state of the retention rule. Only retention rules that are in the
     * <code>available</code> state retain resources.</p>
     */
    inline CreateRuleResult& WithStatus(const RuleStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>The state of the retention rule. Only retention rules that are in the
     * <code>available</code> state retain resources.</p>
     */
    inline CreateRuleResult& WithStatus(RuleStatus&& value) { SetStatus(std::move(value)); return *this;}

  private:

    Aws::String m_identifier;

    RetentionPeriod m_retentionPeriod;

    Aws::String m_description;

    Aws::Vector<Tag> m_tags;

    ResourceType m_resourceType;

    Aws::Vector<ResourceTag> m_resourceTags;

    RuleStatus m_status;
  };

} // namespace Model
} // namespace RecycleBin
} // namespace Aws
