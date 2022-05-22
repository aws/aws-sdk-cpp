/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/rbin/RecycleBin_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/rbin/model/ResourceType.h>
#include <aws/rbin/model/RetentionPeriod.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/rbin/model/RuleStatus.h>
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
  class AWS_RECYCLEBIN_API GetRuleResult
  {
  public:
    GetRuleResult();
    GetRuleResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    GetRuleResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


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
    inline GetRuleResult& WithIdentifier(const Aws::String& value) { SetIdentifier(value); return *this;}

    /**
     * <p>The unique ID of the retention rule.</p>
     */
    inline GetRuleResult& WithIdentifier(Aws::String&& value) { SetIdentifier(std::move(value)); return *this;}

    /**
     * <p>The unique ID of the retention rule.</p>
     */
    inline GetRuleResult& WithIdentifier(const char* value) { SetIdentifier(value); return *this;}


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
    inline GetRuleResult& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>The retention rule description.</p>
     */
    inline GetRuleResult& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>The retention rule description.</p>
     */
    inline GetRuleResult& WithDescription(const char* value) { SetDescription(value); return *this;}


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
    inline GetRuleResult& WithResourceType(const ResourceType& value) { SetResourceType(value); return *this;}

    /**
     * <p>The resource type retained by the retention rule.</p>
     */
    inline GetRuleResult& WithResourceType(ResourceType&& value) { SetResourceType(std::move(value)); return *this;}


    /**
     * <p>Information about the retention period for which the retention rule is to
     * retain resources.</p>
     */
    inline const RetentionPeriod& GetRetentionPeriod() const{ return m_retentionPeriod; }

    /**
     * <p>Information about the retention period for which the retention rule is to
     * retain resources.</p>
     */
    inline void SetRetentionPeriod(const RetentionPeriod& value) { m_retentionPeriod = value; }

    /**
     * <p>Information about the retention period for which the retention rule is to
     * retain resources.</p>
     */
    inline void SetRetentionPeriod(RetentionPeriod&& value) { m_retentionPeriod = std::move(value); }

    /**
     * <p>Information about the retention period for which the retention rule is to
     * retain resources.</p>
     */
    inline GetRuleResult& WithRetentionPeriod(const RetentionPeriod& value) { SetRetentionPeriod(value); return *this;}

    /**
     * <p>Information about the retention period for which the retention rule is to
     * retain resources.</p>
     */
    inline GetRuleResult& WithRetentionPeriod(RetentionPeriod&& value) { SetRetentionPeriod(std::move(value)); return *this;}


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
    inline GetRuleResult& WithResourceTags(const Aws::Vector<ResourceTag>& value) { SetResourceTags(value); return *this;}

    /**
     * <p>Information about the resource tags used to identify resources that are
     * retained by the retention rule.</p>
     */
    inline GetRuleResult& WithResourceTags(Aws::Vector<ResourceTag>&& value) { SetResourceTags(std::move(value)); return *this;}

    /**
     * <p>Information about the resource tags used to identify resources that are
     * retained by the retention rule.</p>
     */
    inline GetRuleResult& AddResourceTags(const ResourceTag& value) { m_resourceTags.push_back(value); return *this; }

    /**
     * <p>Information about the resource tags used to identify resources that are
     * retained by the retention rule.</p>
     */
    inline GetRuleResult& AddResourceTags(ResourceTag&& value) { m_resourceTags.push_back(std::move(value)); return *this; }


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
    inline GetRuleResult& WithStatus(const RuleStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>The state of the retention rule. Only retention rules that are in the
     * <code>available</code> state retain resources.</p>
     */
    inline GetRuleResult& WithStatus(RuleStatus&& value) { SetStatus(std::move(value)); return *this;}

  private:

    Aws::String m_identifier;

    Aws::String m_description;

    ResourceType m_resourceType;

    RetentionPeriod m_retentionPeriod;

    Aws::Vector<ResourceTag> m_resourceTags;

    RuleStatus m_status;
  };

} // namespace Model
} // namespace RecycleBin
} // namespace Aws
