/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/robomaker/RoboMaker_EXPORTS.h>
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
namespace RoboMaker
{
namespace Model
{
  class GetWorldTemplateBodyResult
  {
  public:
    AWS_ROBOMAKER_API GetWorldTemplateBodyResult();
    AWS_ROBOMAKER_API GetWorldTemplateBodyResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_ROBOMAKER_API GetWorldTemplateBodyResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The world template body.</p>
     */
    inline const Aws::String& GetTemplateBody() const{ return m_templateBody; }

    /**
     * <p>The world template body.</p>
     */
    inline void SetTemplateBody(const Aws::String& value) { m_templateBody = value; }

    /**
     * <p>The world template body.</p>
     */
    inline void SetTemplateBody(Aws::String&& value) { m_templateBody = std::move(value); }

    /**
     * <p>The world template body.</p>
     */
    inline void SetTemplateBody(const char* value) { m_templateBody.assign(value); }

    /**
     * <p>The world template body.</p>
     */
    inline GetWorldTemplateBodyResult& WithTemplateBody(const Aws::String& value) { SetTemplateBody(value); return *this;}

    /**
     * <p>The world template body.</p>
     */
    inline GetWorldTemplateBodyResult& WithTemplateBody(Aws::String&& value) { SetTemplateBody(std::move(value)); return *this;}

    /**
     * <p>The world template body.</p>
     */
    inline GetWorldTemplateBodyResult& WithTemplateBody(const char* value) { SetTemplateBody(value); return *this;}

  private:

    Aws::String m_templateBody;
  };

} // namespace Model
} // namespace RoboMaker
} // namespace Aws
