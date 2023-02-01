/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connectcampaigns/ConnectCampaigns_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace ConnectCampaigns
{
namespace Model
{
  /**
   * <p>The response for Create Campaign API</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/connectcampaigns-2021-01-30/CreateCampaignResponse">AWS
   * API Reference</a></p>
   */
  class CreateCampaignResult
  {
  public:
    AWS_CONNECTCAMPAIGNS_API CreateCampaignResult();
    AWS_CONNECTCAMPAIGNS_API CreateCampaignResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CONNECTCAMPAIGNS_API CreateCampaignResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    
    inline const Aws::String& GetArn() const{ return m_arn; }

    
    inline void SetArn(const Aws::String& value) { m_arn = value; }

    
    inline void SetArn(Aws::String&& value) { m_arn = std::move(value); }

    
    inline void SetArn(const char* value) { m_arn.assign(value); }

    
    inline CreateCampaignResult& WithArn(const Aws::String& value) { SetArn(value); return *this;}

    
    inline CreateCampaignResult& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}

    
    inline CreateCampaignResult& WithArn(const char* value) { SetArn(value); return *this;}


    
    inline const Aws::String& GetId() const{ return m_id; }

    
    inline void SetId(const Aws::String& value) { m_id = value; }

    
    inline void SetId(Aws::String&& value) { m_id = std::move(value); }

    
    inline void SetId(const char* value) { m_id.assign(value); }

    
    inline CreateCampaignResult& WithId(const Aws::String& value) { SetId(value); return *this;}

    
    inline CreateCampaignResult& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}

    
    inline CreateCampaignResult& WithId(const char* value) { SetId(value); return *this;}


    
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }

    
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tags = value; }

    
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tags = std::move(value); }

    
    inline CreateCampaignResult& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}

    
    inline CreateCampaignResult& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}

    
    inline CreateCampaignResult& AddTags(const Aws::String& key, const Aws::String& value) { m_tags.emplace(key, value); return *this; }

    
    inline CreateCampaignResult& AddTags(Aws::String&& key, const Aws::String& value) { m_tags.emplace(std::move(key), value); return *this; }

    
    inline CreateCampaignResult& AddTags(const Aws::String& key, Aws::String&& value) { m_tags.emplace(key, std::move(value)); return *this; }

    
    inline CreateCampaignResult& AddTags(Aws::String&& key, Aws::String&& value) { m_tags.emplace(std::move(key), std::move(value)); return *this; }

    
    inline CreateCampaignResult& AddTags(const char* key, Aws::String&& value) { m_tags.emplace(key, std::move(value)); return *this; }

    
    inline CreateCampaignResult& AddTags(Aws::String&& key, const char* value) { m_tags.emplace(std::move(key), value); return *this; }

    
    inline CreateCampaignResult& AddTags(const char* key, const char* value) { m_tags.emplace(key, value); return *this; }

  private:

    Aws::String m_arn;

    Aws::String m_id;

    Aws::Map<Aws::String, Aws::String> m_tags;
  };

} // namespace Model
} // namespace ConnectCampaigns
} // namespace Aws
