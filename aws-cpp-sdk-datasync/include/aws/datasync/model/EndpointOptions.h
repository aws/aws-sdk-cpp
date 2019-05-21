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

  class AWS_DATASYNC_API EndpointOptions
  {
  public:
    EndpointOptions();
    EndpointOptions(Aws::Utils::Json::JsonView jsonValue);
    EndpointOptions& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    
    inline bool GetFips() const{ return m_fips; }

    
    inline bool FipsHasBeenSet() const { return m_fipsHasBeenSet; }

    
    inline void SetFips(bool value) { m_fipsHasBeenSet = true; m_fips = value; }

    
    inline EndpointOptions& WithFips(bool value) { SetFips(value); return *this;}


    
    inline bool GetPrivateLink() const{ return m_privateLink; }

    
    inline bool PrivateLinkHasBeenSet() const { return m_privateLinkHasBeenSet; }

    
    inline void SetPrivateLink(bool value) { m_privateLinkHasBeenSet = true; m_privateLink = value; }

    
    inline EndpointOptions& WithPrivateLink(bool value) { SetPrivateLink(value); return *this;}

  private:

    bool m_fips;
    bool m_fipsHasBeenSet;

    bool m_privateLink;
    bool m_privateLinkHasBeenSet;
  };

} // namespace Model
} // namespace DataSync
} // namespace Aws
