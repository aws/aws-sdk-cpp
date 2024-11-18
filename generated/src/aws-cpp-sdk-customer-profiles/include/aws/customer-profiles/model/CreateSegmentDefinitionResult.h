/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/customer-profiles/CustomerProfiles_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
  class CreateSegmentDefinitionResult
  {
  public:
    AWS_CUSTOMERPROFILES_API CreateSegmentDefinitionResult();
    AWS_CUSTOMERPROFILES_API CreateSegmentDefinitionResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CUSTOMERPROFILES_API CreateSegmentDefinitionResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The name of the segment definition.</p>
     */
    inline const Aws::String& GetSegmentDefinitionName() const{ return m_segmentDefinitionName; }
    inline void SetSegmentDefinitionName(const Aws::String& value) { m_segmentDefinitionName = value; }
    inline void SetSegmentDefinitionName(Aws::String&& value) { m_segmentDefinitionName = std::move(value); }
    inline void SetSegmentDefinitionName(const char* value) { m_segmentDefinitionName.assign(value); }
    inline CreateSegmentDefinitionResult& WithSegmentDefinitionName(const Aws::String& value) { SetSegmentDefinitionName(value); return *this;}
    inline CreateSegmentDefinitionResult& WithSegmentDefinitionName(Aws::String&& value) { SetSegmentDefinitionName(std::move(value)); return *this;}
    inline CreateSegmentDefinitionResult& WithSegmentDefinitionName(const char* value) { SetSegmentDefinitionName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The display name of the segment definition.</p>
     */
    inline const Aws::String& GetDisplayName() const{ return m_displayName; }
    inline void SetDisplayName(const Aws::String& value) { m_displayName = value; }
    inline void SetDisplayName(Aws::String&& value) { m_displayName = std::move(value); }
    inline void SetDisplayName(const char* value) { m_displayName.assign(value); }
    inline CreateSegmentDefinitionResult& WithDisplayName(const Aws::String& value) { SetDisplayName(value); return *this;}
    inline CreateSegmentDefinitionResult& WithDisplayName(Aws::String&& value) { SetDisplayName(std::move(value)); return *this;}
    inline CreateSegmentDefinitionResult& WithDisplayName(const char* value) { SetDisplayName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The description of the segment definition.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline void SetDescription(const Aws::String& value) { m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_description.assign(value); }
    inline CreateSegmentDefinitionResult& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline CreateSegmentDefinitionResult& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline CreateSegmentDefinitionResult& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp of when the segment definition was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const{ return m_createdAt; }
    inline void SetCreatedAt(const Aws::Utils::DateTime& value) { m_createdAt = value; }
    inline void SetCreatedAt(Aws::Utils::DateTime&& value) { m_createdAt = std::move(value); }
    inline CreateSegmentDefinitionResult& WithCreatedAt(const Aws::Utils::DateTime& value) { SetCreatedAt(value); return *this;}
    inline CreateSegmentDefinitionResult& WithCreatedAt(Aws::Utils::DateTime&& value) { SetCreatedAt(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The arn of the segment definition.</p>
     */
    inline const Aws::String& GetSegmentDefinitionArn() const{ return m_segmentDefinitionArn; }
    inline void SetSegmentDefinitionArn(const Aws::String& value) { m_segmentDefinitionArn = value; }
    inline void SetSegmentDefinitionArn(Aws::String&& value) { m_segmentDefinitionArn = std::move(value); }
    inline void SetSegmentDefinitionArn(const char* value) { m_segmentDefinitionArn.assign(value); }
    inline CreateSegmentDefinitionResult& WithSegmentDefinitionArn(const Aws::String& value) { SetSegmentDefinitionArn(value); return *this;}
    inline CreateSegmentDefinitionResult& WithSegmentDefinitionArn(Aws::String&& value) { SetSegmentDefinitionArn(std::move(value)); return *this;}
    inline CreateSegmentDefinitionResult& WithSegmentDefinitionArn(const char* value) { SetSegmentDefinitionArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The tags used to organize, track, or control access for this resource.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tags = value; }
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tags = std::move(value); }
    inline CreateSegmentDefinitionResult& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}
    inline CreateSegmentDefinitionResult& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}
    inline CreateSegmentDefinitionResult& AddTags(const Aws::String& key, const Aws::String& value) { m_tags.emplace(key, value); return *this; }
    inline CreateSegmentDefinitionResult& AddTags(Aws::String&& key, const Aws::String& value) { m_tags.emplace(std::move(key), value); return *this; }
    inline CreateSegmentDefinitionResult& AddTags(const Aws::String& key, Aws::String&& value) { m_tags.emplace(key, std::move(value)); return *this; }
    inline CreateSegmentDefinitionResult& AddTags(Aws::String&& key, Aws::String&& value) { m_tags.emplace(std::move(key), std::move(value)); return *this; }
    inline CreateSegmentDefinitionResult& AddTags(const char* key, Aws::String&& value) { m_tags.emplace(key, std::move(value)); return *this; }
    inline CreateSegmentDefinitionResult& AddTags(Aws::String&& key, const char* value) { m_tags.emplace(std::move(key), value); return *this; }
    inline CreateSegmentDefinitionResult& AddTags(const char* key, const char* value) { m_tags.emplace(key, value); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline CreateSegmentDefinitionResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline CreateSegmentDefinitionResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline CreateSegmentDefinitionResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_segmentDefinitionName;

    Aws::String m_displayName;

    Aws::String m_description;

    Aws::Utils::DateTime m_createdAt;

    Aws::String m_segmentDefinitionArn;

    Aws::Map<Aws::String, Aws::String> m_tags;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace CustomerProfiles
} // namespace Aws
