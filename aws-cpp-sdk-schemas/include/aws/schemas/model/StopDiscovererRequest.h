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
#include <aws/schemas/Schemas_EXPORTS.h>
#include <aws/schemas/SchemasRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Schemas
{
namespace Model
{

  /**
   */
  class AWS_SCHEMAS_API StopDiscovererRequest : public SchemasRequest
  {
  public:
    StopDiscovererRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "StopDiscoverer"; }

    Aws::String SerializePayload() const override;


    
    inline const Aws::String& GetDiscovererId() const{ return m_discovererId; }

    
    inline bool DiscovererIdHasBeenSet() const { return m_discovererIdHasBeenSet; }

    
    inline void SetDiscovererId(const Aws::String& value) { m_discovererIdHasBeenSet = true; m_discovererId = value; }

    
    inline void SetDiscovererId(Aws::String&& value) { m_discovererIdHasBeenSet = true; m_discovererId = std::move(value); }

    
    inline void SetDiscovererId(const char* value) { m_discovererIdHasBeenSet = true; m_discovererId.assign(value); }

    
    inline StopDiscovererRequest& WithDiscovererId(const Aws::String& value) { SetDiscovererId(value); return *this;}

    
    inline StopDiscovererRequest& WithDiscovererId(Aws::String&& value) { SetDiscovererId(std::move(value)); return *this;}

    
    inline StopDiscovererRequest& WithDiscovererId(const char* value) { SetDiscovererId(value); return *this;}

  private:

    Aws::String m_discovererId;
    bool m_discovererIdHasBeenSet;
  };

} // namespace Model
} // namespace Schemas
} // namespace Aws
