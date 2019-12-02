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
  class AWS_SCHEMAS_API SearchSchemasRequest : public SchemasRequest
  {
  public:
    SearchSchemasRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "SearchSchemas"; }

    Aws::String SerializePayload() const override;

    void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    
    inline const Aws::String& GetKeywords() const{ return m_keywords; }

    
    inline bool KeywordsHasBeenSet() const { return m_keywordsHasBeenSet; }

    
    inline void SetKeywords(const Aws::String& value) { m_keywordsHasBeenSet = true; m_keywords = value; }

    
    inline void SetKeywords(Aws::String&& value) { m_keywordsHasBeenSet = true; m_keywords = std::move(value); }

    
    inline void SetKeywords(const char* value) { m_keywordsHasBeenSet = true; m_keywords.assign(value); }

    
    inline SearchSchemasRequest& WithKeywords(const Aws::String& value) { SetKeywords(value); return *this;}

    
    inline SearchSchemasRequest& WithKeywords(Aws::String&& value) { SetKeywords(std::move(value)); return *this;}

    
    inline SearchSchemasRequest& WithKeywords(const char* value) { SetKeywords(value); return *this;}


    
    inline int GetLimit() const{ return m_limit; }

    
    inline bool LimitHasBeenSet() const { return m_limitHasBeenSet; }

    
    inline void SetLimit(int value) { m_limitHasBeenSet = true; m_limit = value; }

    
    inline SearchSchemasRequest& WithLimit(int value) { SetLimit(value); return *this;}


    
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    
    inline SearchSchemasRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    
    inline SearchSchemasRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    
    inline SearchSchemasRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    
    inline const Aws::String& GetRegistryName() const{ return m_registryName; }

    
    inline bool RegistryNameHasBeenSet() const { return m_registryNameHasBeenSet; }

    
    inline void SetRegistryName(const Aws::String& value) { m_registryNameHasBeenSet = true; m_registryName = value; }

    
    inline void SetRegistryName(Aws::String&& value) { m_registryNameHasBeenSet = true; m_registryName = std::move(value); }

    
    inline void SetRegistryName(const char* value) { m_registryNameHasBeenSet = true; m_registryName.assign(value); }

    
    inline SearchSchemasRequest& WithRegistryName(const Aws::String& value) { SetRegistryName(value); return *this;}

    
    inline SearchSchemasRequest& WithRegistryName(Aws::String&& value) { SetRegistryName(std::move(value)); return *this;}

    
    inline SearchSchemasRequest& WithRegistryName(const char* value) { SetRegistryName(value); return *this;}

  private:

    Aws::String m_keywords;
    bool m_keywordsHasBeenSet;

    int m_limit;
    bool m_limitHasBeenSet;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet;

    Aws::String m_registryName;
    bool m_registryNameHasBeenSet;
  };

} // namespace Model
} // namespace Schemas
} // namespace Aws
