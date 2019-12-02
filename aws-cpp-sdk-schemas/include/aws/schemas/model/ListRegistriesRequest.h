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
  class AWS_SCHEMAS_API ListRegistriesRequest : public SchemasRequest
  {
  public:
    ListRegistriesRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListRegistries"; }

    Aws::String SerializePayload() const override;

    void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    
    inline int GetLimit() const{ return m_limit; }

    
    inline bool LimitHasBeenSet() const { return m_limitHasBeenSet; }

    
    inline void SetLimit(int value) { m_limitHasBeenSet = true; m_limit = value; }

    
    inline ListRegistriesRequest& WithLimit(int value) { SetLimit(value); return *this;}


    
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    
    inline ListRegistriesRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    
    inline ListRegistriesRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    
    inline ListRegistriesRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    
    inline const Aws::String& GetRegistryNamePrefix() const{ return m_registryNamePrefix; }

    
    inline bool RegistryNamePrefixHasBeenSet() const { return m_registryNamePrefixHasBeenSet; }

    
    inline void SetRegistryNamePrefix(const Aws::String& value) { m_registryNamePrefixHasBeenSet = true; m_registryNamePrefix = value; }

    
    inline void SetRegistryNamePrefix(Aws::String&& value) { m_registryNamePrefixHasBeenSet = true; m_registryNamePrefix = std::move(value); }

    
    inline void SetRegistryNamePrefix(const char* value) { m_registryNamePrefixHasBeenSet = true; m_registryNamePrefix.assign(value); }

    
    inline ListRegistriesRequest& WithRegistryNamePrefix(const Aws::String& value) { SetRegistryNamePrefix(value); return *this;}

    
    inline ListRegistriesRequest& WithRegistryNamePrefix(Aws::String&& value) { SetRegistryNamePrefix(std::move(value)); return *this;}

    
    inline ListRegistriesRequest& WithRegistryNamePrefix(const char* value) { SetRegistryNamePrefix(value); return *this;}


    
    inline const Aws::String& GetScope() const{ return m_scope; }

    
    inline bool ScopeHasBeenSet() const { return m_scopeHasBeenSet; }

    
    inline void SetScope(const Aws::String& value) { m_scopeHasBeenSet = true; m_scope = value; }

    
    inline void SetScope(Aws::String&& value) { m_scopeHasBeenSet = true; m_scope = std::move(value); }

    
    inline void SetScope(const char* value) { m_scopeHasBeenSet = true; m_scope.assign(value); }

    
    inline ListRegistriesRequest& WithScope(const Aws::String& value) { SetScope(value); return *this;}

    
    inline ListRegistriesRequest& WithScope(Aws::String&& value) { SetScope(std::move(value)); return *this;}

    
    inline ListRegistriesRequest& WithScope(const char* value) { SetScope(value); return *this;}

  private:

    int m_limit;
    bool m_limitHasBeenSet;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet;

    Aws::String m_registryNamePrefix;
    bool m_registryNamePrefixHasBeenSet;

    Aws::String m_scope;
    bool m_scopeHasBeenSet;
  };

} // namespace Model
} // namespace Schemas
} // namespace Aws
