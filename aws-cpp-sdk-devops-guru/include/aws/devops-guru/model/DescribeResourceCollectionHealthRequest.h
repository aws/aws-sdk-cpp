/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/devops-guru/DevOpsGuru_EXPORTS.h>
#include <aws/devops-guru/DevOpsGuruRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Http
{
    class URI;
} //namespace Http
namespace DevOpsGuru
{
namespace Model
{

  /**
   */
  class AWS_DEVOPSGURU_API DescribeResourceCollectionHealthRequest : public DevOpsGuruRequest
  {
  public:
    DescribeResourceCollectionHealthRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeResourceCollectionHealth"; }

    Aws::String SerializePayload() const override;

    void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    
    inline DescribeResourceCollectionHealthRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    
    inline DescribeResourceCollectionHealthRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    
    inline DescribeResourceCollectionHealthRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    
    inline const Aws::String& GetResourceCollectionType() const{ return m_resourceCollectionType; }

    
    inline bool ResourceCollectionTypeHasBeenSet() const { return m_resourceCollectionTypeHasBeenSet; }

    
    inline void SetResourceCollectionType(const Aws::String& value) { m_resourceCollectionTypeHasBeenSet = true; m_resourceCollectionType = value; }

    
    inline void SetResourceCollectionType(Aws::String&& value) { m_resourceCollectionTypeHasBeenSet = true; m_resourceCollectionType = std::move(value); }

    
    inline void SetResourceCollectionType(const char* value) { m_resourceCollectionTypeHasBeenSet = true; m_resourceCollectionType.assign(value); }

    
    inline DescribeResourceCollectionHealthRequest& WithResourceCollectionType(const Aws::String& value) { SetResourceCollectionType(value); return *this;}

    
    inline DescribeResourceCollectionHealthRequest& WithResourceCollectionType(Aws::String&& value) { SetResourceCollectionType(std::move(value)); return *this;}

    
    inline DescribeResourceCollectionHealthRequest& WithResourceCollectionType(const char* value) { SetResourceCollectionType(value); return *this;}

  private:

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet;

    Aws::String m_resourceCollectionType;
    bool m_resourceCollectionTypeHasBeenSet;
  };

} // namespace Model
} // namespace DevOpsGuru
} // namespace Aws
