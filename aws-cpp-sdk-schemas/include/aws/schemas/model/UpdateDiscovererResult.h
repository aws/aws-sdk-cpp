/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/schemas/Schemas_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/schemas/model/DiscovererState.h>
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
namespace Schemas
{
namespace Model
{
  class UpdateDiscovererResult
  {
  public:
    AWS_SCHEMAS_API UpdateDiscovererResult();
    AWS_SCHEMAS_API UpdateDiscovererResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SCHEMAS_API UpdateDiscovererResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The description of the discoverer.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>The description of the discoverer.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_description = value; }

    /**
     * <p>The description of the discoverer.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_description = std::move(value); }

    /**
     * <p>The description of the discoverer.</p>
     */
    inline void SetDescription(const char* value) { m_description.assign(value); }

    /**
     * <p>The description of the discoverer.</p>
     */
    inline UpdateDiscovererResult& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>The description of the discoverer.</p>
     */
    inline UpdateDiscovererResult& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>The description of the discoverer.</p>
     */
    inline UpdateDiscovererResult& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>The ARN of the discoverer.</p>
     */
    inline const Aws::String& GetDiscovererArn() const{ return m_discovererArn; }

    /**
     * <p>The ARN of the discoverer.</p>
     */
    inline void SetDiscovererArn(const Aws::String& value) { m_discovererArn = value; }

    /**
     * <p>The ARN of the discoverer.</p>
     */
    inline void SetDiscovererArn(Aws::String&& value) { m_discovererArn = std::move(value); }

    /**
     * <p>The ARN of the discoverer.</p>
     */
    inline void SetDiscovererArn(const char* value) { m_discovererArn.assign(value); }

    /**
     * <p>The ARN of the discoverer.</p>
     */
    inline UpdateDiscovererResult& WithDiscovererArn(const Aws::String& value) { SetDiscovererArn(value); return *this;}

    /**
     * <p>The ARN of the discoverer.</p>
     */
    inline UpdateDiscovererResult& WithDiscovererArn(Aws::String&& value) { SetDiscovererArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the discoverer.</p>
     */
    inline UpdateDiscovererResult& WithDiscovererArn(const char* value) { SetDiscovererArn(value); return *this;}


    /**
     * <p>The ID of the discoverer.</p>
     */
    inline const Aws::String& GetDiscovererId() const{ return m_discovererId; }

    /**
     * <p>The ID of the discoverer.</p>
     */
    inline void SetDiscovererId(const Aws::String& value) { m_discovererId = value; }

    /**
     * <p>The ID of the discoverer.</p>
     */
    inline void SetDiscovererId(Aws::String&& value) { m_discovererId = std::move(value); }

    /**
     * <p>The ID of the discoverer.</p>
     */
    inline void SetDiscovererId(const char* value) { m_discovererId.assign(value); }

    /**
     * <p>The ID of the discoverer.</p>
     */
    inline UpdateDiscovererResult& WithDiscovererId(const Aws::String& value) { SetDiscovererId(value); return *this;}

    /**
     * <p>The ID of the discoverer.</p>
     */
    inline UpdateDiscovererResult& WithDiscovererId(Aws::String&& value) { SetDiscovererId(std::move(value)); return *this;}

    /**
     * <p>The ID of the discoverer.</p>
     */
    inline UpdateDiscovererResult& WithDiscovererId(const char* value) { SetDiscovererId(value); return *this;}


    /**
     * <p>The ARN of the event bus.</p>
     */
    inline const Aws::String& GetSourceArn() const{ return m_sourceArn; }

    /**
     * <p>The ARN of the event bus.</p>
     */
    inline void SetSourceArn(const Aws::String& value) { m_sourceArn = value; }

    /**
     * <p>The ARN of the event bus.</p>
     */
    inline void SetSourceArn(Aws::String&& value) { m_sourceArn = std::move(value); }

    /**
     * <p>The ARN of the event bus.</p>
     */
    inline void SetSourceArn(const char* value) { m_sourceArn.assign(value); }

    /**
     * <p>The ARN of the event bus.</p>
     */
    inline UpdateDiscovererResult& WithSourceArn(const Aws::String& value) { SetSourceArn(value); return *this;}

    /**
     * <p>The ARN of the event bus.</p>
     */
    inline UpdateDiscovererResult& WithSourceArn(Aws::String&& value) { SetSourceArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the event bus.</p>
     */
    inline UpdateDiscovererResult& WithSourceArn(const char* value) { SetSourceArn(value); return *this;}


    /**
     * <p>The state of the discoverer.</p>
     */
    inline const DiscovererState& GetState() const{ return m_state; }

    /**
     * <p>The state of the discoverer.</p>
     */
    inline void SetState(const DiscovererState& value) { m_state = value; }

    /**
     * <p>The state of the discoverer.</p>
     */
    inline void SetState(DiscovererState&& value) { m_state = std::move(value); }

    /**
     * <p>The state of the discoverer.</p>
     */
    inline UpdateDiscovererResult& WithState(const DiscovererState& value) { SetState(value); return *this;}

    /**
     * <p>The state of the discoverer.</p>
     */
    inline UpdateDiscovererResult& WithState(DiscovererState&& value) { SetState(std::move(value)); return *this;}


    /**
     * <p>The Status if the discoverer will discover schemas from events sent from
     * another account.</p>
     */
    inline bool GetCrossAccount() const{ return m_crossAccount; }

    /**
     * <p>The Status if the discoverer will discover schemas from events sent from
     * another account.</p>
     */
    inline void SetCrossAccount(bool value) { m_crossAccount = value; }

    /**
     * <p>The Status if the discoverer will discover schemas from events sent from
     * another account.</p>
     */
    inline UpdateDiscovererResult& WithCrossAccount(bool value) { SetCrossAccount(value); return *this;}


    /**
     * <p>Tags associated with the resource.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }

    /**
     * <p>Tags associated with the resource.</p>
     */
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tags = value; }

    /**
     * <p>Tags associated with the resource.</p>
     */
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tags = std::move(value); }

    /**
     * <p>Tags associated with the resource.</p>
     */
    inline UpdateDiscovererResult& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}

    /**
     * <p>Tags associated with the resource.</p>
     */
    inline UpdateDiscovererResult& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>Tags associated with the resource.</p>
     */
    inline UpdateDiscovererResult& AddTags(const Aws::String& key, const Aws::String& value) { m_tags.emplace(key, value); return *this; }

    /**
     * <p>Tags associated with the resource.</p>
     */
    inline UpdateDiscovererResult& AddTags(Aws::String&& key, const Aws::String& value) { m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>Tags associated with the resource.</p>
     */
    inline UpdateDiscovererResult& AddTags(const Aws::String& key, Aws::String&& value) { m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>Tags associated with the resource.</p>
     */
    inline UpdateDiscovererResult& AddTags(Aws::String&& key, Aws::String&& value) { m_tags.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>Tags associated with the resource.</p>
     */
    inline UpdateDiscovererResult& AddTags(const char* key, Aws::String&& value) { m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>Tags associated with the resource.</p>
     */
    inline UpdateDiscovererResult& AddTags(Aws::String&& key, const char* value) { m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>Tags associated with the resource.</p>
     */
    inline UpdateDiscovererResult& AddTags(const char* key, const char* value) { m_tags.emplace(key, value); return *this; }

  private:

    Aws::String m_description;

    Aws::String m_discovererArn;

    Aws::String m_discovererId;

    Aws::String m_sourceArn;

    DiscovererState m_state;

    bool m_crossAccount;

    Aws::Map<Aws::String, Aws::String> m_tags;
  };

} // namespace Model
} // namespace Schemas
} // namespace Aws
