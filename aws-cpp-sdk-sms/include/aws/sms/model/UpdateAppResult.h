/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#pragma once
#include <aws/sms/SMS_EXPORTS.h>
#include <aws/sms/model/AppSummary.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/sms/model/ServerGroup.h>
#include <aws/sms/model/Tag.h>
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
namespace SMS
{
namespace Model
{
  class AWS_SMS_API UpdateAppResult
  {
  public:
    UpdateAppResult();
    UpdateAppResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    UpdateAppResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Summary description of the application.</p>
     */
    inline const AppSummary& GetAppSummary() const{ return m_appSummary; }

    /**
     * <p>Summary description of the application.</p>
     */
    inline void SetAppSummary(const AppSummary& value) { m_appSummary = value; }

    /**
     * <p>Summary description of the application.</p>
     */
    inline void SetAppSummary(AppSummary&& value) { m_appSummary = std::move(value); }

    /**
     * <p>Summary description of the application.</p>
     */
    inline UpdateAppResult& WithAppSummary(const AppSummary& value) { SetAppSummary(value); return *this;}

    /**
     * <p>Summary description of the application.</p>
     */
    inline UpdateAppResult& WithAppSummary(AppSummary&& value) { SetAppSummary(std::move(value)); return *this;}


    /**
     * <p>List of updated server groups in the application.</p>
     */
    inline const Aws::Vector<ServerGroup>& GetServerGroups() const{ return m_serverGroups; }

    /**
     * <p>List of updated server groups in the application.</p>
     */
    inline void SetServerGroups(const Aws::Vector<ServerGroup>& value) { m_serverGroups = value; }

    /**
     * <p>List of updated server groups in the application.</p>
     */
    inline void SetServerGroups(Aws::Vector<ServerGroup>&& value) { m_serverGroups = std::move(value); }

    /**
     * <p>List of updated server groups in the application.</p>
     */
    inline UpdateAppResult& WithServerGroups(const Aws::Vector<ServerGroup>& value) { SetServerGroups(value); return *this;}

    /**
     * <p>List of updated server groups in the application.</p>
     */
    inline UpdateAppResult& WithServerGroups(Aws::Vector<ServerGroup>&& value) { SetServerGroups(std::move(value)); return *this;}

    /**
     * <p>List of updated server groups in the application.</p>
     */
    inline UpdateAppResult& AddServerGroups(const ServerGroup& value) { m_serverGroups.push_back(value); return *this; }

    /**
     * <p>List of updated server groups in the application.</p>
     */
    inline UpdateAppResult& AddServerGroups(ServerGroup&& value) { m_serverGroups.push_back(std::move(value)); return *this; }


    /**
     * <p>List of tags associated with the application.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }

    /**
     * <p>List of tags associated with the application.</p>
     */
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tags = value; }

    /**
     * <p>List of tags associated with the application.</p>
     */
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tags = std::move(value); }

    /**
     * <p>List of tags associated with the application.</p>
     */
    inline UpdateAppResult& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}

    /**
     * <p>List of tags associated with the application.</p>
     */
    inline UpdateAppResult& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>List of tags associated with the application.</p>
     */
    inline UpdateAppResult& AddTags(const Tag& value) { m_tags.push_back(value); return *this; }

    /**
     * <p>List of tags associated with the application.</p>
     */
    inline UpdateAppResult& AddTags(Tag&& value) { m_tags.push_back(std::move(value)); return *this; }

  private:

    AppSummary m_appSummary;

    Aws::Vector<ServerGroup> m_serverGroups;

    Aws::Vector<Tag> m_tags;
  };

} // namespace Model
} // namespace SMS
} // namespace Aws
