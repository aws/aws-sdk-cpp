/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotsitewise/IoTSiteWise_EXPORTS.h>
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
namespace IoTSiteWise
{
namespace Model
{
  class AWS_IOTSITEWISE_API CreatePresignedPortalUrlResult
  {
  public:
    CreatePresignedPortalUrlResult();
    CreatePresignedPortalUrlResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    CreatePresignedPortalUrlResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    
    inline const Aws::String& GetPresignedPortalUrl() const{ return m_presignedPortalUrl; }

    
    inline void SetPresignedPortalUrl(const Aws::String& value) { m_presignedPortalUrl = value; }

    
    inline void SetPresignedPortalUrl(Aws::String&& value) { m_presignedPortalUrl = std::move(value); }

    
    inline void SetPresignedPortalUrl(const char* value) { m_presignedPortalUrl.assign(value); }

    
    inline CreatePresignedPortalUrlResult& WithPresignedPortalUrl(const Aws::String& value) { SetPresignedPortalUrl(value); return *this;}

    
    inline CreatePresignedPortalUrlResult& WithPresignedPortalUrl(Aws::String&& value) { SetPresignedPortalUrl(std::move(value)); return *this;}

    
    inline CreatePresignedPortalUrlResult& WithPresignedPortalUrl(const char* value) { SetPresignedPortalUrl(value); return *this;}

  private:

    Aws::String m_presignedPortalUrl;
  };

} // namespace Model
} // namespace IoTSiteWise
} // namespace Aws
