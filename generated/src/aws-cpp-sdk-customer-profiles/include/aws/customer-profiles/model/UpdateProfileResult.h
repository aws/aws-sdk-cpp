/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/customer-profiles/CustomerProfiles_EXPORTS.h>
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
namespace CustomerProfiles
{
namespace Model
{
  class UpdateProfileResult
  {
  public:
    AWS_CUSTOMERPROFILES_API UpdateProfileResult();
    AWS_CUSTOMERPROFILES_API UpdateProfileResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CUSTOMERPROFILES_API UpdateProfileResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The unique identifier of a customer profile.</p>
     */
    inline const Aws::String& GetProfileId() const{ return m_profileId; }

    /**
     * <p>The unique identifier of a customer profile.</p>
     */
    inline void SetProfileId(const Aws::String& value) { m_profileId = value; }

    /**
     * <p>The unique identifier of a customer profile.</p>
     */
    inline void SetProfileId(Aws::String&& value) { m_profileId = std::move(value); }

    /**
     * <p>The unique identifier of a customer profile.</p>
     */
    inline void SetProfileId(const char* value) { m_profileId.assign(value); }

    /**
     * <p>The unique identifier of a customer profile.</p>
     */
    inline UpdateProfileResult& WithProfileId(const Aws::String& value) { SetProfileId(value); return *this;}

    /**
     * <p>The unique identifier of a customer profile.</p>
     */
    inline UpdateProfileResult& WithProfileId(Aws::String&& value) { SetProfileId(std::move(value)); return *this;}

    /**
     * <p>The unique identifier of a customer profile.</p>
     */
    inline UpdateProfileResult& WithProfileId(const char* value) { SetProfileId(value); return *this;}

  private:

    Aws::String m_profileId;
  };

} // namespace Model
} // namespace CustomerProfiles
} // namespace Aws
