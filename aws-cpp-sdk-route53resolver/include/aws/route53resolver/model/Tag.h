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
#include <aws/route53resolver/Route53Resolver_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace Route53Resolver
{
namespace Model
{

  /**
   * <p>One tag that you want to add to the specified resource. A tag consists of a
   * <code>Key</code> (a name for the tag) and a <code>Value</code>.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/route53resolver-2018-04-01/Tag">AWS
   * API Reference</a></p>
   */
  class AWS_ROUTE53RESOLVER_API Tag
  {
  public:
    Tag();
    Tag(Aws::Utils::Json::JsonView jsonValue);
    Tag& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name for the tag. For example, if you want to associate Resolver
     * resources with the account IDs of your customers for billing purposes, the value
     * of <code>Key</code> might be <code>account-id</code>.</p>
     */
    inline const Aws::String& GetKey() const{ return m_key; }

    /**
     * <p>The name for the tag. For example, if you want to associate Resolver
     * resources with the account IDs of your customers for billing purposes, the value
     * of <code>Key</code> might be <code>account-id</code>.</p>
     */
    inline bool KeyHasBeenSet() const { return m_keyHasBeenSet; }

    /**
     * <p>The name for the tag. For example, if you want to associate Resolver
     * resources with the account IDs of your customers for billing purposes, the value
     * of <code>Key</code> might be <code>account-id</code>.</p>
     */
    inline void SetKey(const Aws::String& value) { m_keyHasBeenSet = true; m_key = value; }

    /**
     * <p>The name for the tag. For example, if you want to associate Resolver
     * resources with the account IDs of your customers for billing purposes, the value
     * of <code>Key</code> might be <code>account-id</code>.</p>
     */
    inline void SetKey(Aws::String&& value) { m_keyHasBeenSet = true; m_key = std::move(value); }

    /**
     * <p>The name for the tag. For example, if you want to associate Resolver
     * resources with the account IDs of your customers for billing purposes, the value
     * of <code>Key</code> might be <code>account-id</code>.</p>
     */
    inline void SetKey(const char* value) { m_keyHasBeenSet = true; m_key.assign(value); }

    /**
     * <p>The name for the tag. For example, if you want to associate Resolver
     * resources with the account IDs of your customers for billing purposes, the value
     * of <code>Key</code> might be <code>account-id</code>.</p>
     */
    inline Tag& WithKey(const Aws::String& value) { SetKey(value); return *this;}

    /**
     * <p>The name for the tag. For example, if you want to associate Resolver
     * resources with the account IDs of your customers for billing purposes, the value
     * of <code>Key</code> might be <code>account-id</code>.</p>
     */
    inline Tag& WithKey(Aws::String&& value) { SetKey(std::move(value)); return *this;}

    /**
     * <p>The name for the tag. For example, if you want to associate Resolver
     * resources with the account IDs of your customers for billing purposes, the value
     * of <code>Key</code> might be <code>account-id</code>.</p>
     */
    inline Tag& WithKey(const char* value) { SetKey(value); return *this;}


    /**
     * <p>The value for the tag. For example, if <code>Key</code> is
     * <code>account-id</code>, then <code>Value</code> might be the ID of the customer
     * account that you're creating the resource for.</p>
     */
    inline const Aws::String& GetValue() const{ return m_value; }

    /**
     * <p>The value for the tag. For example, if <code>Key</code> is
     * <code>account-id</code>, then <code>Value</code> might be the ID of the customer
     * account that you're creating the resource for.</p>
     */
    inline bool ValueHasBeenSet() const { return m_valueHasBeenSet; }

    /**
     * <p>The value for the tag. For example, if <code>Key</code> is
     * <code>account-id</code>, then <code>Value</code> might be the ID of the customer
     * account that you're creating the resource for.</p>
     */
    inline void SetValue(const Aws::String& value) { m_valueHasBeenSet = true; m_value = value; }

    /**
     * <p>The value for the tag. For example, if <code>Key</code> is
     * <code>account-id</code>, then <code>Value</code> might be the ID of the customer
     * account that you're creating the resource for.</p>
     */
    inline void SetValue(Aws::String&& value) { m_valueHasBeenSet = true; m_value = std::move(value); }

    /**
     * <p>The value for the tag. For example, if <code>Key</code> is
     * <code>account-id</code>, then <code>Value</code> might be the ID of the customer
     * account that you're creating the resource for.</p>
     */
    inline void SetValue(const char* value) { m_valueHasBeenSet = true; m_value.assign(value); }

    /**
     * <p>The value for the tag. For example, if <code>Key</code> is
     * <code>account-id</code>, then <code>Value</code> might be the ID of the customer
     * account that you're creating the resource for.</p>
     */
    inline Tag& WithValue(const Aws::String& value) { SetValue(value); return *this;}

    /**
     * <p>The value for the tag. For example, if <code>Key</code> is
     * <code>account-id</code>, then <code>Value</code> might be the ID of the customer
     * account that you're creating the resource for.</p>
     */
    inline Tag& WithValue(Aws::String&& value) { SetValue(std::move(value)); return *this;}

    /**
     * <p>The value for the tag. For example, if <code>Key</code> is
     * <code>account-id</code>, then <code>Value</code> might be the ID of the customer
     * account that you're creating the resource for.</p>
     */
    inline Tag& WithValue(const char* value) { SetValue(value); return *this;}

  private:

    Aws::String m_key;
    bool m_keyHasBeenSet;

    Aws::String m_value;
    bool m_valueHasBeenSet;
  };

} // namespace Model
} // namespace Route53Resolver
} // namespace Aws
