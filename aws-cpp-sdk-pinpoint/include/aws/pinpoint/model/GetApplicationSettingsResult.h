/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/pinpoint/Pinpoint_EXPORTS.h>
#include <aws/pinpoint/model/ApplicationSettingsResource.h>
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
  class GetApplicationSettingsResult
  {
  public:
    AWS_PINPOINT_API GetApplicationSettingsResult();
    AWS_PINPOINT_API GetApplicationSettingsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_PINPOINT_API GetApplicationSettingsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    
    inline const ApplicationSettingsResource& GetApplicationSettingsResource() const{ return m_applicationSettingsResource; }

    
    inline void SetApplicationSettingsResource(const ApplicationSettingsResource& value) { m_applicationSettingsResource = value; }

    
    inline void SetApplicationSettingsResource(ApplicationSettingsResource&& value) { m_applicationSettingsResource = std::move(value); }

    
    inline GetApplicationSettingsResult& WithApplicationSettingsResource(const ApplicationSettingsResource& value) { SetApplicationSettingsResource(value); return *this;}

    
    inline GetApplicationSettingsResult& WithApplicationSettingsResource(ApplicationSettingsResource&& value) { SetApplicationSettingsResource(std::move(value)); return *this;}

  private:

    ApplicationSettingsResource m_applicationSettingsResource;
  };

} // namespace Model
} // namespace Pinpoint
} // namespace Aws
