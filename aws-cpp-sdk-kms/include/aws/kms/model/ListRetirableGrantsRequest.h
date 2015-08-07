/*
* Copyright 2010-2015 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/kms/KMS_EXPORTS.h>
#include <aws/kms/KMSRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace KMS
{
namespace Model
{

  /*
  */
  class AWS_KMS_API ListRetirableGrantsRequest : public KMSRequest
  {
  public:
    ListRetirableGrantsRequest();
    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    
    inline long GetLimit() const{ return m_limit; }
    
    inline void SetLimit(long value) { m_limitHasBeenSet = true; m_limit = value; }

    
    inline ListRetirableGrantsRequest&  WithLimit(long value) { SetLimit(value); return *this;}

    
    inline const Aws::String& GetMarker() const{ return m_marker; }
    
    inline void SetMarker(const Aws::String& value) { m_markerHasBeenSet = true; m_marker = value; }

    
    inline void SetMarker(const char* value) { m_markerHasBeenSet = true; m_marker.assign(value); }

    
    inline ListRetirableGrantsRequest&  WithMarker(const Aws::String& value) { SetMarker(value); return *this;}

    
    inline ListRetirableGrantsRequest& WithMarker(const char* value) { SetMarker(value); return *this;}

    
    inline const Aws::String& GetRetiringPrincipal() const{ return m_retiringPrincipal; }
    
    inline void SetRetiringPrincipal(const Aws::String& value) { m_retiringPrincipalHasBeenSet = true; m_retiringPrincipal = value; }

    
    inline void SetRetiringPrincipal(const char* value) { m_retiringPrincipalHasBeenSet = true; m_retiringPrincipal.assign(value); }

    
    inline ListRetirableGrantsRequest&  WithRetiringPrincipal(const Aws::String& value) { SetRetiringPrincipal(value); return *this;}

    
    inline ListRetirableGrantsRequest& WithRetiringPrincipal(const char* value) { SetRetiringPrincipal(value); return *this;}

  private:
    long m_limit;
    bool m_limitHasBeenSet;
    Aws::String m_marker;
    bool m_markerHasBeenSet;
    Aws::String m_retiringPrincipal;
    bool m_retiringPrincipalHasBeenSet;
  };

} // namespace Model
} // namespace KMS
} // namespace Aws
