/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/awstransfer/Transfer_EXPORTS.h>
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
namespace Transfer
{
namespace Model
{
  class UpdateProfileResult
  {
  public:
    AWS_TRANSFER_API UpdateProfileResult();
    AWS_TRANSFER_API UpdateProfileResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_TRANSFER_API UpdateProfileResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Returns the identifier for the profile that's being updated.</p>
     */
    inline const Aws::String& GetProfileId() const{ return m_profileId; }

    /**
     * <p>Returns the identifier for the profile that's being updated.</p>
     */
    inline void SetProfileId(const Aws::String& value) { m_profileId = value; }

    /**
     * <p>Returns the identifier for the profile that's being updated.</p>
     */
    inline void SetProfileId(Aws::String&& value) { m_profileId = std::move(value); }

    /**
     * <p>Returns the identifier for the profile that's being updated.</p>
     */
    inline void SetProfileId(const char* value) { m_profileId.assign(value); }

    /**
     * <p>Returns the identifier for the profile that's being updated.</p>
     */
    inline UpdateProfileResult& WithProfileId(const Aws::String& value) { SetProfileId(value); return *this;}

    /**
     * <p>Returns the identifier for the profile that's being updated.</p>
     */
    inline UpdateProfileResult& WithProfileId(Aws::String&& value) { SetProfileId(std::move(value)); return *this;}

    /**
     * <p>Returns the identifier for the profile that's being updated.</p>
     */
    inline UpdateProfileResult& WithProfileId(const char* value) { SetProfileId(value); return *this;}

  private:

    Aws::String m_profileId;
  };

} // namespace Model
} // namespace Transfer
} // namespace Aws
