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
  class CreateAppInstanceResult
  {
  public:
    AWS_CHIME_API CreateAppInstanceResult();
    AWS_CHIME_API CreateAppInstanceResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CHIME_API CreateAppInstanceResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The Amazon Resource Number (ARN) of the <code>AppInstance</code>.</p>
     */
    inline const Aws::String& GetAppInstanceArn() const{ return m_appInstanceArn; }

    /**
     * <p>The Amazon Resource Number (ARN) of the <code>AppInstance</code>.</p>
     */
    inline void SetAppInstanceArn(const Aws::String& value) { m_appInstanceArn = value; }

    /**
     * <p>The Amazon Resource Number (ARN) of the <code>AppInstance</code>.</p>
     */
    inline void SetAppInstanceArn(Aws::String&& value) { m_appInstanceArn = std::move(value); }

    /**
     * <p>The Amazon Resource Number (ARN) of the <code>AppInstance</code>.</p>
     */
    inline void SetAppInstanceArn(const char* value) { m_appInstanceArn.assign(value); }

    /**
     * <p>The Amazon Resource Number (ARN) of the <code>AppInstance</code>.</p>
     */
    inline CreateAppInstanceResult& WithAppInstanceArn(const Aws::String& value) { SetAppInstanceArn(value); return *this;}

    /**
     * <p>The Amazon Resource Number (ARN) of the <code>AppInstance</code>.</p>
     */
    inline CreateAppInstanceResult& WithAppInstanceArn(Aws::String&& value) { SetAppInstanceArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Number (ARN) of the <code>AppInstance</code>.</p>
     */
    inline CreateAppInstanceResult& WithAppInstanceArn(const char* value) { SetAppInstanceArn(value); return *this;}

  private:

    Aws::String m_appInstanceArn;
  };

} // namespace Model
} // namespace Chime
} // namespace Aws
