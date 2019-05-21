/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/datasync/DataSync_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace DataSync
{
namespace Model
{

  class AWS_DATASYNC_API PrivateLinkConfig
  {
  public:
    PrivateLinkConfig();
    PrivateLinkConfig(Aws::Utils::Json::JsonView jsonValue);
    PrivateLinkConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    
    inline const Aws::String& GetPrivateLinkEndpoint() const{ return m_privateLinkEndpoint; }

    
    inline bool PrivateLinkEndpointHasBeenSet() const { return m_privateLinkEndpointHasBeenSet; }

    
    inline void SetPrivateLinkEndpoint(const Aws::String& value) { m_privateLinkEndpointHasBeenSet = true; m_privateLinkEndpoint = value; }

    
    inline void SetPrivateLinkEndpoint(Aws::String&& value) { m_privateLinkEndpointHasBeenSet = true; m_privateLinkEndpoint = std::move(value); }

    
    inline void SetPrivateLinkEndpoint(const char* value) { m_privateLinkEndpointHasBeenSet = true; m_privateLinkEndpoint.assign(value); }

    
    inline PrivateLinkConfig& WithPrivateLinkEndpoint(const Aws::String& value) { SetPrivateLinkEndpoint(value); return *this;}

    
    inline PrivateLinkConfig& WithPrivateLinkEndpoint(Aws::String&& value) { SetPrivateLinkEndpoint(std::move(value)); return *this;}

    
    inline PrivateLinkConfig& WithPrivateLinkEndpoint(const char* value) { SetPrivateLinkEndpoint(value); return *this;}


    
    inline const Aws::Vector<Aws::String>& GetSubnetArns() const{ return m_subnetArns; }

    
    inline bool SubnetArnsHasBeenSet() const { return m_subnetArnsHasBeenSet; }

    
    inline void SetSubnetArns(const Aws::Vector<Aws::String>& value) { m_subnetArnsHasBeenSet = true; m_subnetArns = value; }

    
    inline void SetSubnetArns(Aws::Vector<Aws::String>&& value) { m_subnetArnsHasBeenSet = true; m_subnetArns = std::move(value); }

    
    inline PrivateLinkConfig& WithSubnetArns(const Aws::Vector<Aws::String>& value) { SetSubnetArns(value); return *this;}

    
    inline PrivateLinkConfig& WithSubnetArns(Aws::Vector<Aws::String>&& value) { SetSubnetArns(std::move(value)); return *this;}

    
    inline PrivateLinkConfig& AddSubnetArns(const Aws::String& value) { m_subnetArnsHasBeenSet = true; m_subnetArns.push_back(value); return *this; }

    
    inline PrivateLinkConfig& AddSubnetArns(Aws::String&& value) { m_subnetArnsHasBeenSet = true; m_subnetArns.push_back(std::move(value)); return *this; }

    
    inline PrivateLinkConfig& AddSubnetArns(const char* value) { m_subnetArnsHasBeenSet = true; m_subnetArns.push_back(value); return *this; }


    
    inline const Aws::Vector<Aws::String>& GetSecurityGroupArns() const{ return m_securityGroupArns; }

    
    inline bool SecurityGroupArnsHasBeenSet() const { return m_securityGroupArnsHasBeenSet; }

    
    inline void SetSecurityGroupArns(const Aws::Vector<Aws::String>& value) { m_securityGroupArnsHasBeenSet = true; m_securityGroupArns = value; }

    
    inline void SetSecurityGroupArns(Aws::Vector<Aws::String>&& value) { m_securityGroupArnsHasBeenSet = true; m_securityGroupArns = std::move(value); }

    
    inline PrivateLinkConfig& WithSecurityGroupArns(const Aws::Vector<Aws::String>& value) { SetSecurityGroupArns(value); return *this;}

    
    inline PrivateLinkConfig& WithSecurityGroupArns(Aws::Vector<Aws::String>&& value) { SetSecurityGroupArns(std::move(value)); return *this;}

    
    inline PrivateLinkConfig& AddSecurityGroupArns(const Aws::String& value) { m_securityGroupArnsHasBeenSet = true; m_securityGroupArns.push_back(value); return *this; }

    
    inline PrivateLinkConfig& AddSecurityGroupArns(Aws::String&& value) { m_securityGroupArnsHasBeenSet = true; m_securityGroupArns.push_back(std::move(value)); return *this; }

    
    inline PrivateLinkConfig& AddSecurityGroupArns(const char* value) { m_securityGroupArnsHasBeenSet = true; m_securityGroupArns.push_back(value); return *this; }

  private:

    Aws::String m_privateLinkEndpoint;
    bool m_privateLinkEndpointHasBeenSet;

    Aws::Vector<Aws::String> m_subnetArns;
    bool m_subnetArnsHasBeenSet;

    Aws::Vector<Aws::String> m_securityGroupArns;
    bool m_securityGroupArnsHasBeenSet;
  };

} // namespace Model
} // namespace DataSync
} // namespace Aws
