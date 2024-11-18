/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/customer-profiles/CustomerProfiles_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/customer-profiles/model/Statistic.h>
#include <aws/customer-profiles/model/Filter.h>
#include <aws/customer-profiles/model/Conditions.h>
#include <aws/customer-profiles/model/AttributeDetails.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
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
namespace CustomerProfiles
{
namespace Model
{
  class GetCalculatedAttributeDefinitionResult
  {
  public:
    AWS_CUSTOMERPROFILES_API GetCalculatedAttributeDefinitionResult();
    AWS_CUSTOMERPROFILES_API GetCalculatedAttributeDefinitionResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CUSTOMERPROFILES_API GetCalculatedAttributeDefinitionResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The unique name of the calculated attribute.</p>
     */
    inline const Aws::String& GetCalculatedAttributeName() const{ return m_calculatedAttributeName; }
    inline void SetCalculatedAttributeName(const Aws::String& value) { m_calculatedAttributeName = value; }
    inline void SetCalculatedAttributeName(Aws::String&& value) { m_calculatedAttributeName = std::move(value); }
    inline void SetCalculatedAttributeName(const char* value) { m_calculatedAttributeName.assign(value); }
    inline GetCalculatedAttributeDefinitionResult& WithCalculatedAttributeName(const Aws::String& value) { SetCalculatedAttributeName(value); return *this;}
    inline GetCalculatedAttributeDefinitionResult& WithCalculatedAttributeName(Aws::String&& value) { SetCalculatedAttributeName(std::move(value)); return *this;}
    inline GetCalculatedAttributeDefinitionResult& WithCalculatedAttributeName(const char* value) { SetCalculatedAttributeName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The display name of the calculated attribute.</p>
     */
    inline const Aws::String& GetDisplayName() const{ return m_displayName; }
    inline void SetDisplayName(const Aws::String& value) { m_displayName = value; }
    inline void SetDisplayName(Aws::String&& value) { m_displayName = std::move(value); }
    inline void SetDisplayName(const char* value) { m_displayName.assign(value); }
    inline GetCalculatedAttributeDefinitionResult& WithDisplayName(const Aws::String& value) { SetDisplayName(value); return *this;}
    inline GetCalculatedAttributeDefinitionResult& WithDisplayName(Aws::String&& value) { SetDisplayName(std::move(value)); return *this;}
    inline GetCalculatedAttributeDefinitionResult& WithDisplayName(const char* value) { SetDisplayName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The description of the calculated attribute.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline void SetDescription(const Aws::String& value) { m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_description.assign(value); }
    inline GetCalculatedAttributeDefinitionResult& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline GetCalculatedAttributeDefinitionResult& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline GetCalculatedAttributeDefinitionResult& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp of when the calculated attribute definition was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const{ return m_createdAt; }
    inline void SetCreatedAt(const Aws::Utils::DateTime& value) { m_createdAt = value; }
    inline void SetCreatedAt(Aws::Utils::DateTime&& value) { m_createdAt = std::move(value); }
    inline GetCalculatedAttributeDefinitionResult& WithCreatedAt(const Aws::Utils::DateTime& value) { SetCreatedAt(value); return *this;}
    inline GetCalculatedAttributeDefinitionResult& WithCreatedAt(Aws::Utils::DateTime&& value) { SetCreatedAt(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp of when the calculated attribute definition was most recently
     * edited.</p>
     */
    inline const Aws::Utils::DateTime& GetLastUpdatedAt() const{ return m_lastUpdatedAt; }
    inline void SetLastUpdatedAt(const Aws::Utils::DateTime& value) { m_lastUpdatedAt = value; }
    inline void SetLastUpdatedAt(Aws::Utils::DateTime&& value) { m_lastUpdatedAt = std::move(value); }
    inline GetCalculatedAttributeDefinitionResult& WithLastUpdatedAt(const Aws::Utils::DateTime& value) { SetLastUpdatedAt(value); return *this;}
    inline GetCalculatedAttributeDefinitionResult& WithLastUpdatedAt(Aws::Utils::DateTime&& value) { SetLastUpdatedAt(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The aggregation operation to perform for the calculated attribute.</p>
     */
    inline const Statistic& GetStatistic() const{ return m_statistic; }
    inline void SetStatistic(const Statistic& value) { m_statistic = value; }
    inline void SetStatistic(Statistic&& value) { m_statistic = std::move(value); }
    inline GetCalculatedAttributeDefinitionResult& WithStatistic(const Statistic& value) { SetStatistic(value); return *this;}
    inline GetCalculatedAttributeDefinitionResult& WithStatistic(Statistic&& value) { SetStatistic(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The filter assigned to this calculated attribute definition.</p>
     */
    inline const Filter& GetFilter() const{ return m_filter; }
    inline void SetFilter(const Filter& value) { m_filter = value; }
    inline void SetFilter(Filter&& value) { m_filter = std::move(value); }
    inline GetCalculatedAttributeDefinitionResult& WithFilter(const Filter& value) { SetFilter(value); return *this;}
    inline GetCalculatedAttributeDefinitionResult& WithFilter(Filter&& value) { SetFilter(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The conditions including range, object count, and threshold for the
     * calculated attribute.</p>
     */
    inline const Conditions& GetConditions() const{ return m_conditions; }
    inline void SetConditions(const Conditions& value) { m_conditions = value; }
    inline void SetConditions(Conditions&& value) { m_conditions = std::move(value); }
    inline GetCalculatedAttributeDefinitionResult& WithConditions(const Conditions& value) { SetConditions(value); return *this;}
    inline GetCalculatedAttributeDefinitionResult& WithConditions(Conditions&& value) { SetConditions(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Mathematical expression and a list of attribute items specified in that
     * expression.</p>
     */
    inline const AttributeDetails& GetAttributeDetails() const{ return m_attributeDetails; }
    inline void SetAttributeDetails(const AttributeDetails& value) { m_attributeDetails = value; }
    inline void SetAttributeDetails(AttributeDetails&& value) { m_attributeDetails = std::move(value); }
    inline GetCalculatedAttributeDefinitionResult& WithAttributeDetails(const AttributeDetails& value) { SetAttributeDetails(value); return *this;}
    inline GetCalculatedAttributeDefinitionResult& WithAttributeDetails(AttributeDetails&& value) { SetAttributeDetails(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The tags used to organize, track, or control access for this resource.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tags = value; }
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tags = std::move(value); }
    inline GetCalculatedAttributeDefinitionResult& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}
    inline GetCalculatedAttributeDefinitionResult& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}
    inline GetCalculatedAttributeDefinitionResult& AddTags(const Aws::String& key, const Aws::String& value) { m_tags.emplace(key, value); return *this; }
    inline GetCalculatedAttributeDefinitionResult& AddTags(Aws::String&& key, const Aws::String& value) { m_tags.emplace(std::move(key), value); return *this; }
    inline GetCalculatedAttributeDefinitionResult& AddTags(const Aws::String& key, Aws::String&& value) { m_tags.emplace(key, std::move(value)); return *this; }
    inline GetCalculatedAttributeDefinitionResult& AddTags(Aws::String&& key, Aws::String&& value) { m_tags.emplace(std::move(key), std::move(value)); return *this; }
    inline GetCalculatedAttributeDefinitionResult& AddTags(const char* key, Aws::String&& value) { m_tags.emplace(key, std::move(value)); return *this; }
    inline GetCalculatedAttributeDefinitionResult& AddTags(Aws::String&& key, const char* value) { m_tags.emplace(std::move(key), value); return *this; }
    inline GetCalculatedAttributeDefinitionResult& AddTags(const char* key, const char* value) { m_tags.emplace(key, value); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline GetCalculatedAttributeDefinitionResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline GetCalculatedAttributeDefinitionResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline GetCalculatedAttributeDefinitionResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_calculatedAttributeName;

    Aws::String m_displayName;

    Aws::String m_description;

    Aws::Utils::DateTime m_createdAt;

    Aws::Utils::DateTime m_lastUpdatedAt;

    Statistic m_statistic;

    Filter m_filter;

    Conditions m_conditions;

    AttributeDetails m_attributeDetails;

    Aws::Map<Aws::String, Aws::String> m_tags;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace CustomerProfiles
} // namespace Aws
