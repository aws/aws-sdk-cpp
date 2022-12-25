/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mturk-requester/MTurk_EXPORTS.h>
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
namespace MTurk
{
namespace Model
{
  class CreateHITTypeResult
  {
  public:
    AWS_MTURK_API CreateHITTypeResult();
    AWS_MTURK_API CreateHITTypeResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_MTURK_API CreateHITTypeResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p> The ID of the newly registered HIT type.</p>
     */
    inline const Aws::String& GetHITTypeId() const{ return m_hITTypeId; }

    /**
     * <p> The ID of the newly registered HIT type.</p>
     */
    inline void SetHITTypeId(const Aws::String& value) { m_hITTypeId = value; }

    /**
     * <p> The ID of the newly registered HIT type.</p>
     */
    inline void SetHITTypeId(Aws::String&& value) { m_hITTypeId = std::move(value); }

    /**
     * <p> The ID of the newly registered HIT type.</p>
     */
    inline void SetHITTypeId(const char* value) { m_hITTypeId.assign(value); }

    /**
     * <p> The ID of the newly registered HIT type.</p>
     */
    inline CreateHITTypeResult& WithHITTypeId(const Aws::String& value) { SetHITTypeId(value); return *this;}

    /**
     * <p> The ID of the newly registered HIT type.</p>
     */
    inline CreateHITTypeResult& WithHITTypeId(Aws::String&& value) { SetHITTypeId(std::move(value)); return *this;}

    /**
     * <p> The ID of the newly registered HIT type.</p>
     */
    inline CreateHITTypeResult& WithHITTypeId(const char* value) { SetHITTypeId(value); return *this;}

  private:

    Aws::String m_hITTypeId;
  };

} // namespace Model
} // namespace MTurk
} // namespace Aws
