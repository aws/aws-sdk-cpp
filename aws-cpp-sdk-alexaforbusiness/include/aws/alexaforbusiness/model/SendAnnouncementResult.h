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
#include <aws/alexaforbusiness/AlexaForBusiness_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace AlexaForBusiness
{
namespace Model
{
  class AWS_ALEXAFORBUSINESS_API SendAnnouncementResult
  {
  public:
    SendAnnouncementResult();
    SendAnnouncementResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    SendAnnouncementResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The identifier of the announcement.</p>
     */
    inline const Aws::String& GetAnnouncementArn() const{ return m_announcementArn; }

    /**
     * <p>The identifier of the announcement.</p>
     */
    inline void SetAnnouncementArn(const Aws::String& value) { m_announcementArn = value; }

    /**
     * <p>The identifier of the announcement.</p>
     */
    inline void SetAnnouncementArn(Aws::String&& value) { m_announcementArn = std::move(value); }

    /**
     * <p>The identifier of the announcement.</p>
     */
    inline void SetAnnouncementArn(const char* value) { m_announcementArn.assign(value); }

    /**
     * <p>The identifier of the announcement.</p>
     */
    inline SendAnnouncementResult& WithAnnouncementArn(const Aws::String& value) { SetAnnouncementArn(value); return *this;}

    /**
     * <p>The identifier of the announcement.</p>
     */
    inline SendAnnouncementResult& WithAnnouncementArn(Aws::String&& value) { SetAnnouncementArn(std::move(value)); return *this;}

    /**
     * <p>The identifier of the announcement.</p>
     */
    inline SendAnnouncementResult& WithAnnouncementArn(const char* value) { SetAnnouncementArn(value); return *this;}

  private:

    Aws::String m_announcementArn;
  };

} // namespace Model
} // namespace AlexaForBusiness
} // namespace Aws
