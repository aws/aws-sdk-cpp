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
#include <aws/elasticache/ElastiCache_EXPORTS.h>
#include <aws/elasticache/ElastiCacheRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace ElastiCache
{
namespace Model
{

  /**
   * <p>Represents the input of a <code>CreateCacheSecurityGroup</code>
   * operation.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/elasticache-2015-02-02/CreateCacheSecurityGroupMessage">AWS
   * API Reference</a></p>
   */
  class AWS_ELASTICACHE_API CreateCacheSecurityGroupRequest : public ElastiCacheRequest
  {
  public:
    CreateCacheSecurityGroupRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateCacheSecurityGroup"; }

    Aws::String SerializePayload() const override;

  protected:
    void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    /**
     * <p>A name for the cache security group. This value is stored as a lowercase
     * string.</p> <p>Constraints: Must contain no more than 255 alphanumeric
     * characters. Cannot be the word "Default".</p> <p>Example:
     * <code>mysecuritygroup</code> </p>
     */
    inline const Aws::String& GetCacheSecurityGroupName() const{ return m_cacheSecurityGroupName; }

    /**
     * <p>A name for the cache security group. This value is stored as a lowercase
     * string.</p> <p>Constraints: Must contain no more than 255 alphanumeric
     * characters. Cannot be the word "Default".</p> <p>Example:
     * <code>mysecuritygroup</code> </p>
     */
    inline bool CacheSecurityGroupNameHasBeenSet() const { return m_cacheSecurityGroupNameHasBeenSet; }

    /**
     * <p>A name for the cache security group. This value is stored as a lowercase
     * string.</p> <p>Constraints: Must contain no more than 255 alphanumeric
     * characters. Cannot be the word "Default".</p> <p>Example:
     * <code>mysecuritygroup</code> </p>
     */
    inline void SetCacheSecurityGroupName(const Aws::String& value) { m_cacheSecurityGroupNameHasBeenSet = true; m_cacheSecurityGroupName = value; }

    /**
     * <p>A name for the cache security group. This value is stored as a lowercase
     * string.</p> <p>Constraints: Must contain no more than 255 alphanumeric
     * characters. Cannot be the word "Default".</p> <p>Example:
     * <code>mysecuritygroup</code> </p>
     */
    inline void SetCacheSecurityGroupName(Aws::String&& value) { m_cacheSecurityGroupNameHasBeenSet = true; m_cacheSecurityGroupName = std::move(value); }

    /**
     * <p>A name for the cache security group. This value is stored as a lowercase
     * string.</p> <p>Constraints: Must contain no more than 255 alphanumeric
     * characters. Cannot be the word "Default".</p> <p>Example:
     * <code>mysecuritygroup</code> </p>
     */
    inline void SetCacheSecurityGroupName(const char* value) { m_cacheSecurityGroupNameHasBeenSet = true; m_cacheSecurityGroupName.assign(value); }

    /**
     * <p>A name for the cache security group. This value is stored as a lowercase
     * string.</p> <p>Constraints: Must contain no more than 255 alphanumeric
     * characters. Cannot be the word "Default".</p> <p>Example:
     * <code>mysecuritygroup</code> </p>
     */
    inline CreateCacheSecurityGroupRequest& WithCacheSecurityGroupName(const Aws::String& value) { SetCacheSecurityGroupName(value); return *this;}

    /**
     * <p>A name for the cache security group. This value is stored as a lowercase
     * string.</p> <p>Constraints: Must contain no more than 255 alphanumeric
     * characters. Cannot be the word "Default".</p> <p>Example:
     * <code>mysecuritygroup</code> </p>
     */
    inline CreateCacheSecurityGroupRequest& WithCacheSecurityGroupName(Aws::String&& value) { SetCacheSecurityGroupName(std::move(value)); return *this;}

    /**
     * <p>A name for the cache security group. This value is stored as a lowercase
     * string.</p> <p>Constraints: Must contain no more than 255 alphanumeric
     * characters. Cannot be the word "Default".</p> <p>Example:
     * <code>mysecuritygroup</code> </p>
     */
    inline CreateCacheSecurityGroupRequest& WithCacheSecurityGroupName(const char* value) { SetCacheSecurityGroupName(value); return *this;}


    /**
     * <p>A description for the cache security group.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>A description for the cache security group.</p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>A description for the cache security group.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>A description for the cache security group.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>A description for the cache security group.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>A description for the cache security group.</p>
     */
    inline CreateCacheSecurityGroupRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>A description for the cache security group.</p>
     */
    inline CreateCacheSecurityGroupRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>A description for the cache security group.</p>
     */
    inline CreateCacheSecurityGroupRequest& WithDescription(const char* value) { SetDescription(value); return *this;}

  private:

    Aws::String m_cacheSecurityGroupName;
    bool m_cacheSecurityGroupNameHasBeenSet;

    Aws::String m_description;
    bool m_descriptionHasBeenSet;
  };

} // namespace Model
} // namespace ElastiCache
} // namespace Aws
