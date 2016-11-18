﻿/*
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
#include <aws/storagegateway/StorageGateway_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

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
namespace StorageGateway
{
namespace Model
{
  /**
   * <p>A JSON object containing the ARN of the gateway that was updated.</p>
   */
  class AWS_STORAGEGATEWAY_API UpdateGatewayInformationResult
  {
  public:
    UpdateGatewayInformationResult();
    UpdateGatewayInformationResult(const AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    UpdateGatewayInformationResult& operator=(const AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

    
    inline const Aws::String& GetGatewayARN() const{ return m_gatewayARN; }

    
    inline void SetGatewayARN(const Aws::String& value) { m_gatewayARN = value; }

    
    inline void SetGatewayARN(Aws::String&& value) { m_gatewayARN = value; }

    
    inline void SetGatewayARN(const char* value) { m_gatewayARN.assign(value); }

    
    inline UpdateGatewayInformationResult& WithGatewayARN(const Aws::String& value) { SetGatewayARN(value); return *this;}

    
    inline UpdateGatewayInformationResult& WithGatewayARN(Aws::String&& value) { SetGatewayARN(value); return *this;}

    
    inline UpdateGatewayInformationResult& WithGatewayARN(const char* value) { SetGatewayARN(value); return *this;}

    
    inline const Aws::String& GetGatewayName() const{ return m_gatewayName; }

    
    inline void SetGatewayName(const Aws::String& value) { m_gatewayName = value; }

    
    inline void SetGatewayName(Aws::String&& value) { m_gatewayName = value; }

    
    inline void SetGatewayName(const char* value) { m_gatewayName.assign(value); }

    
    inline UpdateGatewayInformationResult& WithGatewayName(const Aws::String& value) { SetGatewayName(value); return *this;}

    
    inline UpdateGatewayInformationResult& WithGatewayName(Aws::String&& value) { SetGatewayName(value); return *this;}

    
    inline UpdateGatewayInformationResult& WithGatewayName(const char* value) { SetGatewayName(value); return *this;}

  private:
    Aws::String m_gatewayARN;
    Aws::String m_gatewayName;
  };

} // namespace Model
} // namespace StorageGateway
} // namespace Aws
