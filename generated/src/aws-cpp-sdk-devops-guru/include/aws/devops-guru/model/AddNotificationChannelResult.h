/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/devops-guru/DevOpsGuru_EXPORTS.h>
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
namespace DevOpsGuru
{
namespace Model
{
  class AddNotificationChannelResult
  {
  public:
    AWS_DEVOPSGURU_API AddNotificationChannelResult();
    AWS_DEVOPSGURU_API AddNotificationChannelResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_DEVOPSGURU_API AddNotificationChannelResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p> The ID of the added notification channel. </p>
     */
    inline const Aws::String& GetId() const{ return m_id; }

    /**
     * <p> The ID of the added notification channel. </p>
     */
    inline void SetId(const Aws::String& value) { m_id = value; }

    /**
     * <p> The ID of the added notification channel. </p>
     */
    inline void SetId(Aws::String&& value) { m_id = std::move(value); }

    /**
     * <p> The ID of the added notification channel. </p>
     */
    inline void SetId(const char* value) { m_id.assign(value); }

    /**
     * <p> The ID of the added notification channel. </p>
     */
    inline AddNotificationChannelResult& WithId(const Aws::String& value) { SetId(value); return *this;}

    /**
     * <p> The ID of the added notification channel. </p>
     */
    inline AddNotificationChannelResult& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}

    /**
     * <p> The ID of the added notification channel. </p>
     */
    inline AddNotificationChannelResult& WithId(const char* value) { SetId(value); return *this;}

  private:

    Aws::String m_id;
  };

} // namespace Model
} // namespace DevOpsGuru
} // namespace Aws
