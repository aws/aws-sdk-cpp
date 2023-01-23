/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
  class SendAnnouncementResult
  {
  public:
    AWS_ALEXAFORBUSINESS_API SendAnnouncementResult();
    AWS_ALEXAFORBUSINESS_API SendAnnouncementResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_ALEXAFORBUSINESS_API SendAnnouncementResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


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
