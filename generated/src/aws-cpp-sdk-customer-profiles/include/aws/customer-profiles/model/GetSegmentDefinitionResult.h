/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/customer-profiles/CustomerProfiles_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/customer-profiles/model/SegmentGroup.h>
#include <aws/core/utils/DateTime.h>
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
  class GetSegmentDefinitionResult
  {
  public:
    AWS_CUSTOMERPROFILES_API GetSegmentDefinitionResult();
    AWS_CUSTOMERPROFILES_API GetSegmentDefinitionResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CUSTOMERPROFILES_API GetSegmentDefinitionResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The name of the segment definition.</p>
     */
    inline const Aws::String& GetSegmentDefinitionName() const{ return m_segmentDefinitionName; }
    inline void SetSegmentDefinitionName(const Aws::String& value) { m_segmentDefinitionName = value; }
    inline void SetSegmentDefinitionName(Aws::String&& value) { m_segmentDefinitionName = std::move(value); }
    inline void SetSegmentDefinitionName(const char* value) { m_segmentDefinitionName.assign(value); }
    inline GetSegmentDefinitionResult& WithSegmentDefinitionName(const Aws::String& value) { SetSegmentDefinitionName(value); return *this;}
    inline GetSegmentDefinitionResult& WithSegmentDefinitionName(Aws::String&& value) { SetSegmentDefinitionName(std::move(value)); return *this;}
    inline GetSegmentDefinitionResult& WithSegmentDefinitionName(const char* value) { SetSegmentDefinitionName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The display name of the segment definition.</p>
     */
    inline const Aws::String& GetDisplayName() const{ return m_displayName; }
    inline void SetDisplayName(const Aws::String& value) { m_displayName = value; }
    inline void SetDisplayName(Aws::String&& value) { m_displayName = std::move(value); }
    inline void SetDisplayName(const char* value) { m_displayName.assign(value); }
    inline GetSegmentDefinitionResult& WithDisplayName(const Aws::String& value) { SetDisplayName(value); return *this;}
    inline GetSegmentDefinitionResult& WithDisplayName(Aws::String&& value) { SetDisplayName(std::move(value)); return *this;}
    inline GetSegmentDefinitionResult& WithDisplayName(const char* value) { SetDisplayName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The description of the segment definition.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline void SetDescription(const Aws::String& value) { m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_description.assign(value); }
    inline GetSegmentDefinitionResult& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline GetSegmentDefinitionResult& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline GetSegmentDefinitionResult& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The segment criteria associated with this definition.</p>
     */
    inline const SegmentGroup& GetSegmentGroups() const{ return m_segmentGroups; }
    inline void SetSegmentGroups(const SegmentGroup& value) { m_segmentGroups = value; }
    inline void SetSegmentGroups(SegmentGroup&& value) { m_segmentGroups = std::move(value); }
    inline GetSegmentDefinitionResult& WithSegmentGroups(const SegmentGroup& value) { SetSegmentGroups(value); return *this;}
    inline GetSegmentDefinitionResult& WithSegmentGroups(SegmentGroup&& value) { SetSegmentGroups(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The arn of the segment definition.</p>
     */
    inline const Aws::String& GetSegmentDefinitionArn() const{ return m_segmentDefinitionArn; }
    inline void SetSegmentDefinitionArn(const Aws::String& value) { m_segmentDefinitionArn = value; }
    inline void SetSegmentDefinitionArn(Aws::String&& value) { m_segmentDefinitionArn = std::move(value); }
    inline void SetSegmentDefinitionArn(const char* value) { m_segmentDefinitionArn.assign(value); }
    inline GetSegmentDefinitionResult& WithSegmentDefinitionArn(const Aws::String& value) { SetSegmentDefinitionArn(value); return *this;}
    inline GetSegmentDefinitionResult& WithSegmentDefinitionArn(Aws::String&& value) { SetSegmentDefinitionArn(std::move(value)); return *this;}
    inline GetSegmentDefinitionResult& WithSegmentDefinitionArn(const char* value) { SetSegmentDefinitionArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp of when the segment definition was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const{ return m_createdAt; }
    inline void SetCreatedAt(const Aws::Utils::DateTime& value) { m_createdAt = value; }
    inline void SetCreatedAt(Aws::Utils::DateTime&& value) { m_createdAt = std::move(value); }
    inline GetSegmentDefinitionResult& WithCreatedAt(const Aws::Utils::DateTime& value) { SetCreatedAt(value); return *this;}
    inline GetSegmentDefinitionResult& WithCreatedAt(Aws::Utils::DateTime&& value) { SetCreatedAt(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The tags used to organize, track, or control access for this resource.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tags = value; }
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tags = std::move(value); }
    inline GetSegmentDefinitionResult& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}
    inline GetSegmentDefinitionResult& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}
    inline GetSegmentDefinitionResult& AddTags(const Aws::String& key, const Aws::String& value) { m_tags.emplace(key, value); return *this; }
    inline GetSegmentDefinitionResult& AddTags(Aws::String&& key, const Aws::String& value) { m_tags.emplace(std::move(key), value); return *this; }
    inline GetSegmentDefinitionResult& AddTags(const Aws::String& key, Aws::String&& value) { m_tags.emplace(key, std::move(value)); return *this; }
    inline GetSegmentDefinitionResult& AddTags(Aws::String&& key, Aws::String&& value) { m_tags.emplace(std::move(key), std::move(value)); return *this; }
    inline GetSegmentDefinitionResult& AddTags(const char* key, Aws::String&& value) { m_tags.emplace(key, std::move(value)); return *this; }
    inline GetSegmentDefinitionResult& AddTags(Aws::String&& key, const char* value) { m_tags.emplace(std::move(key), value); return *this; }
    inline GetSegmentDefinitionResult& AddTags(const char* key, const char* value) { m_tags.emplace(key, value); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline GetSegmentDefinitionResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline GetSegmentDefinitionResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline GetSegmentDefinitionResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_segmentDefinitionName;

    Aws::String m_displayName;

    Aws::String m_description;

    SegmentGroup m_segmentGroups;

    Aws::String m_segmentDefinitionArn;

    Aws::Utils::DateTime m_createdAt;

    Aws::Map<Aws::String, Aws::String> m_tags;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace CustomerProfiles
} // namespace Aws
