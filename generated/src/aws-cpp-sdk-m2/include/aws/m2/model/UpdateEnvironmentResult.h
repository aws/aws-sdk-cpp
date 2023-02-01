/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/m2/MainframeModernization_EXPORTS.h>
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
namespace MainframeModernization
{
namespace Model
{
  class UpdateEnvironmentResult
  {
  public:
    AWS_MAINFRAMEMODERNIZATION_API UpdateEnvironmentResult();
    AWS_MAINFRAMEMODERNIZATION_API UpdateEnvironmentResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_MAINFRAMEMODERNIZATION_API UpdateEnvironmentResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The unique identifier of the runtime environment that was updated.</p>
     */
    inline const Aws::String& GetEnvironmentId() const{ return m_environmentId; }

    /**
     * <p>The unique identifier of the runtime environment that was updated.</p>
     */
    inline void SetEnvironmentId(const Aws::String& value) { m_environmentId = value; }

    /**
     * <p>The unique identifier of the runtime environment that was updated.</p>
     */
    inline void SetEnvironmentId(Aws::String&& value) { m_environmentId = std::move(value); }

    /**
     * <p>The unique identifier of the runtime environment that was updated.</p>
     */
    inline void SetEnvironmentId(const char* value) { m_environmentId.assign(value); }

    /**
     * <p>The unique identifier of the runtime environment that was updated.</p>
     */
    inline UpdateEnvironmentResult& WithEnvironmentId(const Aws::String& value) { SetEnvironmentId(value); return *this;}

    /**
     * <p>The unique identifier of the runtime environment that was updated.</p>
     */
    inline UpdateEnvironmentResult& WithEnvironmentId(Aws::String&& value) { SetEnvironmentId(std::move(value)); return *this;}

    /**
     * <p>The unique identifier of the runtime environment that was updated.</p>
     */
    inline UpdateEnvironmentResult& WithEnvironmentId(const char* value) { SetEnvironmentId(value); return *this;}

  private:

    Aws::String m_environmentId;
  };

} // namespace Model
} // namespace MainframeModernization
} // namespace Aws
