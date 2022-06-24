/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mgn/Mgn_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/mgn/model/PostLaunchActions.h>
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
namespace mgn
{
namespace Model
{
  class AWS_MGN_API CreateLaunchConfigurationTemplateResult
  {
  public:
    CreateLaunchConfigurationTemplateResult();
    CreateLaunchConfigurationTemplateResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    CreateLaunchConfigurationTemplateResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Copy Private IP during Launch Configuration.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }

    /**
     * <p>Copy Private IP during Launch Configuration.</p>
     */
    inline void SetArn(const Aws::String& value) { m_arn = value; }

    /**
     * <p>Copy Private IP during Launch Configuration.</p>
     */
    inline void SetArn(Aws::String&& value) { m_arn = std::move(value); }

    /**
     * <p>Copy Private IP during Launch Configuration.</p>
     */
    inline void SetArn(const char* value) { m_arn.assign(value); }

    /**
     * <p>Copy Private IP during Launch Configuration.</p>
     */
    inline CreateLaunchConfigurationTemplateResult& WithArn(const Aws::String& value) { SetArn(value); return *this;}

    /**
     * <p>Copy Private IP during Launch Configuration.</p>
     */
    inline CreateLaunchConfigurationTemplateResult& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}

    /**
     * <p>Copy Private IP during Launch Configuration.</p>
     */
    inline CreateLaunchConfigurationTemplateResult& WithArn(const char* value) { SetArn(value); return *this;}


    /**
     * <p>Copy Private IP during Launch Configuration.</p>
     */
    inline const Aws::String& GetLaunchConfigurationTemplateID() const{ return m_launchConfigurationTemplateID; }

    /**
     * <p>Copy Private IP during Launch Configuration.</p>
     */
    inline void SetLaunchConfigurationTemplateID(const Aws::String& value) { m_launchConfigurationTemplateID = value; }

    /**
     * <p>Copy Private IP during Launch Configuration.</p>
     */
    inline void SetLaunchConfigurationTemplateID(Aws::String&& value) { m_launchConfigurationTemplateID = std::move(value); }

    /**
     * <p>Copy Private IP during Launch Configuration.</p>
     */
    inline void SetLaunchConfigurationTemplateID(const char* value) { m_launchConfigurationTemplateID.assign(value); }

    /**
     * <p>Copy Private IP during Launch Configuration.</p>
     */
    inline CreateLaunchConfigurationTemplateResult& WithLaunchConfigurationTemplateID(const Aws::String& value) { SetLaunchConfigurationTemplateID(value); return *this;}

    /**
     * <p>Copy Private IP during Launch Configuration.</p>
     */
    inline CreateLaunchConfigurationTemplateResult& WithLaunchConfigurationTemplateID(Aws::String&& value) { SetLaunchConfigurationTemplateID(std::move(value)); return *this;}

    /**
     * <p>Copy Private IP during Launch Configuration.</p>
     */
    inline CreateLaunchConfigurationTemplateResult& WithLaunchConfigurationTemplateID(const char* value) { SetLaunchConfigurationTemplateID(value); return *this;}


    /**
     * <p>Copy Private IP during Launch Configuration.</p>
     */
    inline const PostLaunchActions& GetPostLaunchActions() const{ return m_postLaunchActions; }

    /**
     * <p>Copy Private IP during Launch Configuration.</p>
     */
    inline void SetPostLaunchActions(const PostLaunchActions& value) { m_postLaunchActions = value; }

    /**
     * <p>Copy Private IP during Launch Configuration.</p>
     */
    inline void SetPostLaunchActions(PostLaunchActions&& value) { m_postLaunchActions = std::move(value); }

    /**
     * <p>Copy Private IP during Launch Configuration.</p>
     */
    inline CreateLaunchConfigurationTemplateResult& WithPostLaunchActions(const PostLaunchActions& value) { SetPostLaunchActions(value); return *this;}

    /**
     * <p>Copy Private IP during Launch Configuration.</p>
     */
    inline CreateLaunchConfigurationTemplateResult& WithPostLaunchActions(PostLaunchActions&& value) { SetPostLaunchActions(std::move(value)); return *this;}


    /**
     * <p>Copy Private IP during Launch Configuration.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }

    /**
     * <p>Copy Private IP during Launch Configuration.</p>
     */
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tags = value; }

    /**
     * <p>Copy Private IP during Launch Configuration.</p>
     */
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tags = std::move(value); }

    /**
     * <p>Copy Private IP during Launch Configuration.</p>
     */
    inline CreateLaunchConfigurationTemplateResult& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}

    /**
     * <p>Copy Private IP during Launch Configuration.</p>
     */
    inline CreateLaunchConfigurationTemplateResult& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>Copy Private IP during Launch Configuration.</p>
     */
    inline CreateLaunchConfigurationTemplateResult& AddTags(const Aws::String& key, const Aws::String& value) { m_tags.emplace(key, value); return *this; }

    /**
     * <p>Copy Private IP during Launch Configuration.</p>
     */
    inline CreateLaunchConfigurationTemplateResult& AddTags(Aws::String&& key, const Aws::String& value) { m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>Copy Private IP during Launch Configuration.</p>
     */
    inline CreateLaunchConfigurationTemplateResult& AddTags(const Aws::String& key, Aws::String&& value) { m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>Copy Private IP during Launch Configuration.</p>
     */
    inline CreateLaunchConfigurationTemplateResult& AddTags(Aws::String&& key, Aws::String&& value) { m_tags.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>Copy Private IP during Launch Configuration.</p>
     */
    inline CreateLaunchConfigurationTemplateResult& AddTags(const char* key, Aws::String&& value) { m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>Copy Private IP during Launch Configuration.</p>
     */
    inline CreateLaunchConfigurationTemplateResult& AddTags(Aws::String&& key, const char* value) { m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>Copy Private IP during Launch Configuration.</p>
     */
    inline CreateLaunchConfigurationTemplateResult& AddTags(const char* key, const char* value) { m_tags.emplace(key, value); return *this; }

  private:

    Aws::String m_arn;

    Aws::String m_launchConfigurationTemplateID;

    PostLaunchActions m_postLaunchActions;

    Aws::Map<Aws::String, Aws::String> m_tags;
  };

} // namespace Model
} // namespace mgn
} // namespace Aws
