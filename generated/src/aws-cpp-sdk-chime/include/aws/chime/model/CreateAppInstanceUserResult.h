/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/chime/Chime_EXPORTS.h>
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
namespace Chime
{
namespace Model
{
  class CreateAppInstanceUserResult
  {
  public:
    AWS_CHIME_API CreateAppInstanceUserResult();
    AWS_CHIME_API CreateAppInstanceUserResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CHIME_API CreateAppInstanceUserResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The user's ARN.</p>
     */
    inline const Aws::String& GetAppInstanceUserArn() const{ return m_appInstanceUserArn; }

    /**
     * <p>The user's ARN.</p>
     */
    inline void SetAppInstanceUserArn(const Aws::String& value) { m_appInstanceUserArn = value; }

    /**
     * <p>The user's ARN.</p>
     */
    inline void SetAppInstanceUserArn(Aws::String&& value) { m_appInstanceUserArn = std::move(value); }

    /**
     * <p>The user's ARN.</p>
     */
    inline void SetAppInstanceUserArn(const char* value) { m_appInstanceUserArn.assign(value); }

    /**
     * <p>The user's ARN.</p>
     */
    inline CreateAppInstanceUserResult& WithAppInstanceUserArn(const Aws::String& value) { SetAppInstanceUserArn(value); return *this;}

    /**
     * <p>The user's ARN.</p>
     */
    inline CreateAppInstanceUserResult& WithAppInstanceUserArn(Aws::String&& value) { SetAppInstanceUserArn(std::move(value)); return *this;}

    /**
     * <p>The user's ARN.</p>
     */
    inline CreateAppInstanceUserResult& WithAppInstanceUserArn(const char* value) { SetAppInstanceUserArn(value); return *this;}

  private:

    Aws::String m_appInstanceUserArn;
  };

} // namespace Model
} // namespace Chime
} // namespace Aws
