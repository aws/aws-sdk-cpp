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
namespace Http
{
    class URI;
} //namespace Http
namespace Schemas
{
namespace Model
{

  /**
   */
  class AWS_SCHEMAS_API ListDiscoverersRequest : public SchemasRequest
  {
  public:
    ListDiscoverersRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListDiscoverers"; }

    Aws::String SerializePayload() const override;

    void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    
    inline const Aws::String& GetDiscovererIdPrefix() const{ return m_discovererIdPrefix; }

    
    inline bool DiscovererIdPrefixHasBeenSet() const { return m_discovererIdPrefixHasBeenSet; }

    
    inline void SetDiscovererIdPrefix(const Aws::String& value) { m_discovererIdPrefixHasBeenSet = true; m_discovererIdPrefix = value; }

    
    inline void SetDiscovererIdPrefix(Aws::String&& value) { m_discovererIdPrefixHasBeenSet = true; m_discovererIdPrefix = std::move(value); }

    
    inline void SetDiscovererIdPrefix(const char* value) { m_discovererIdPrefixHasBeenSet = true; m_discovererIdPrefix.assign(value); }

    
    inline ListDiscoverersRequest& WithDiscovererIdPrefix(const Aws::String& value) { SetDiscovererIdPrefix(value); return *this;}

    
    inline ListDiscoverersRequest& WithDiscovererIdPrefix(Aws::String&& value) { SetDiscovererIdPrefix(std::move(value)); return *this;}

    
    inline ListDiscoverersRequest& WithDiscovererIdPrefix(const char* value) { SetDiscovererIdPrefix(value); return *this;}


    
    inline int GetLimit() const{ return m_limit; }

    
    inline bool LimitHasBeenSet() const { return m_limitHasBeenSet; }

    
    inline void SetLimit(int value) { m_limitHasBeenSet = true; m_limit = value; }

    
    inline ListDiscoverersRequest& WithLimit(int value) { SetLimit(value); return *this;}


    
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    
    inline ListDiscoverersRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    
    inline ListDiscoverersRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    
    inline ListDiscoverersRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    
    inline const Aws::String& GetSourceArnPrefix() const{ return m_sourceArnPrefix; }

    
    inline bool SourceArnPrefixHasBeenSet() const { return m_sourceArnPrefixHasBeenSet; }

    
    inline void SetSourceArnPrefix(const Aws::String& value) { m_sourceArnPrefixHasBeenSet = true; m_sourceArnPrefix = value; }

    
    inline void SetSourceArnPrefix(Aws::String&& value) { m_sourceArnPrefixHasBeenSet = true; m_sourceArnPrefix = std::move(value); }

    
    inline void SetSourceArnPrefix(const char* value) { m_sourceArnPrefixHasBeenSet = true; m_sourceArnPrefix.assign(value); }

    
    inline ListDiscoverersRequest& WithSourceArnPrefix(const Aws::String& value) { SetSourceArnPrefix(value); return *this;}

    
    inline ListDiscoverersRequest& WithSourceArnPrefix(Aws::String&& value) { SetSourceArnPrefix(std::move(value)); return *this;}

    
    inline ListDiscoverersRequest& WithSourceArnPrefix(const char* value) { SetSourceArnPrefix(value); return *this;}

  private:

    Aws::String m_discovererIdPrefix;
    bool m_discovererIdPrefixHasBeenSet;

    int m_limit;
    bool m_limitHasBeenSet;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet;

    Aws::String m_sourceArnPrefix;
    bool m_sourceArnPrefixHasBeenSet;
  };

} // namespace Model
} // namespace Schemas
} // namespace Aws
