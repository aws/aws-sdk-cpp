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
  class CreateProfileResult
  {
  public:
    AWS_ALEXAFORBUSINESS_API CreateProfileResult();
    AWS_ALEXAFORBUSINESS_API CreateProfileResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_ALEXAFORBUSINESS_API CreateProfileResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The ARN of the newly created room profile in the response.</p>
     */
    inline const Aws::String& GetProfileArn() const{ return m_profileArn; }

    /**
     * <p>The ARN of the newly created room profile in the response.</p>
     */
    inline void SetProfileArn(const Aws::String& value) { m_profileArn = value; }

    /**
     * <p>The ARN of the newly created room profile in the response.</p>
     */
    inline void SetProfileArn(Aws::String&& value) { m_profileArn = std::move(value); }

    /**
     * <p>The ARN of the newly created room profile in the response.</p>
     */
    inline void SetProfileArn(const char* value) { m_profileArn.assign(value); }

    /**
     * <p>The ARN of the newly created room profile in the response.</p>
     */
    inline CreateProfileResult& WithProfileArn(const Aws::String& value) { SetProfileArn(value); return *this;}

    /**
     * <p>The ARN of the newly created room profile in the response.</p>
     */
    inline CreateProfileResult& WithProfileArn(Aws::String&& value) { SetProfileArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the newly created room profile in the response.</p>
     */
    inline CreateProfileResult& WithProfileArn(const char* value) { SetProfileArn(value); return *this;}

  private:

    Aws::String m_profileArn;
  };

} // namespace Model
} // namespace AlexaForBusiness
} // namespace Aws
