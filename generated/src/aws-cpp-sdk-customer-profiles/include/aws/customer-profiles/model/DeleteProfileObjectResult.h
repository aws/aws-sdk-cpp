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
  class DeleteProfileObjectResult
  {
  public:
    AWS_CUSTOMERPROFILES_API DeleteProfileObjectResult();
    AWS_CUSTOMERPROFILES_API DeleteProfileObjectResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CUSTOMERPROFILES_API DeleteProfileObjectResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>A message that indicates the delete request is done.</p>
     */
    inline const Aws::String& GetMessage() const{ return m_message; }

    /**
     * <p>A message that indicates the delete request is done.</p>
     */
    inline void SetMessage(const Aws::String& value) { m_message = value; }

    /**
     * <p>A message that indicates the delete request is done.</p>
     */
    inline void SetMessage(Aws::String&& value) { m_message = std::move(value); }

    /**
     * <p>A message that indicates the delete request is done.</p>
     */
    inline void SetMessage(const char* value) { m_message.assign(value); }

    /**
     * <p>A message that indicates the delete request is done.</p>
     */
    inline DeleteProfileObjectResult& WithMessage(const Aws::String& value) { SetMessage(value); return *this;}

    /**
     * <p>A message that indicates the delete request is done.</p>
     */
    inline DeleteProfileObjectResult& WithMessage(Aws::String&& value) { SetMessage(std::move(value)); return *this;}

    /**
     * <p>A message that indicates the delete request is done.</p>
     */
    inline DeleteProfileObjectResult& WithMessage(const char* value) { SetMessage(value); return *this;}

  private:

    Aws::String m_message;
  };

} // namespace Model
} // namespace CustomerProfiles
} // namespace Aws
