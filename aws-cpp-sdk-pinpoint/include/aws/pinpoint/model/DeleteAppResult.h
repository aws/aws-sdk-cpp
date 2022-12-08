/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/pinpoint/Pinpoint_EXPORTS.h>
#include <aws/pinpoint/model/ApplicationResponse.h>
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
namespace Pinpoint
{
namespace Model
{
  class DeleteAppResult
  {
  public:
    AWS_PINPOINT_API DeleteAppResult();
    AWS_PINPOINT_API DeleteAppResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_PINPOINT_API DeleteAppResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    
    inline const ApplicationResponse& GetApplicationResponse() const{ return m_applicationResponse; }

    
    inline void SetApplicationResponse(const ApplicationResponse& value) { m_applicationResponse = value; }

    
    inline void SetApplicationResponse(ApplicationResponse&& value) { m_applicationResponse = std::move(value); }

    
    inline DeleteAppResult& WithApplicationResponse(const ApplicationResponse& value) { SetApplicationResponse(value); return *this;}

    
    inline DeleteAppResult& WithApplicationResponse(ApplicationResponse&& value) { SetApplicationResponse(std::move(value)); return *this;}

  private:

    ApplicationResponse m_applicationResponse;
  };

} // namespace Model
} // namespace Pinpoint
} // namespace Aws
