/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/
#pragma once
#include <aws/apigateway/APIGateway_EXPORTS.h>
#include <aws/apigateway/APIGatewayRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace Http
{
    class URI;
} //namespace Http
namespace APIGateway
{
namespace Model
{

  /**
   */
  class AWS_APIGATEWAY_API GetClientCertificatesRequest : public APIGatewayRequest
  {
  public:
    GetClientCertificatesRequest();
    Aws::String SerializePayload() const override;

    void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    
    inline const Aws::String& GetPosition() const{ return m_position; }

    
    inline void SetPosition(const Aws::String& value) { m_positionHasBeenSet = true; m_position = value; }

    
    inline void SetPosition(Aws::String&& value) { m_positionHasBeenSet = true; m_position = value; }

    
    inline void SetPosition(const char* value) { m_positionHasBeenSet = true; m_position.assign(value); }

    
    inline GetClientCertificatesRequest& WithPosition(const Aws::String& value) { SetPosition(value); return *this;}

    
    inline GetClientCertificatesRequest& WithPosition(Aws::String&& value) { SetPosition(value); return *this;}

    
    inline GetClientCertificatesRequest& WithPosition(const char* value) { SetPosition(value); return *this;}

    
    inline long GetLimit() const{ return m_limit; }

    
    inline void SetLimit(long value) { m_limitHasBeenSet = true; m_limit = value; }

    
    inline GetClientCertificatesRequest& WithLimit(long value) { SetLimit(value); return *this;}

  private:
    Aws::String m_position;
    bool m_positionHasBeenSet;
    long m_limit;
    bool m_limitHasBeenSet;
  };

} // namespace Model
} // namespace APIGateway
} // namespace Aws
