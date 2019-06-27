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
#include <aws/dynamodb/DynamoDB_EXPORTS.h>
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
namespace DynamoDB
{
namespace Model
{

  /**
   * <p>Represents the settings used to enable or disable Time to Live (TTL) for the
   * specified table.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/dynamodb-2012-08-10/TimeToLiveSpecification">AWS
   * API Reference</a></p>
   */
  class AWS_DYNAMODB_API TimeToLiveSpecification
  {
  public:
    TimeToLiveSpecification();
    TimeToLiveSpecification(Aws::Utils::Json::JsonView jsonValue);
    TimeToLiveSpecification& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Indicates whether TTL is to be enabled (true) or disabled (false) on the
     * table.</p>
     */
    inline bool GetEnabled() const{ return m_enabled; }

    /**
     * <p>Indicates whether TTL is to be enabled (true) or disabled (false) on the
     * table.</p>
     */
    inline bool EnabledHasBeenSet() const { return m_enabledHasBeenSet; }

    /**
     * <p>Indicates whether TTL is to be enabled (true) or disabled (false) on the
     * table.</p>
     */
    inline void SetEnabled(bool value) { m_enabledHasBeenSet = true; m_enabled = value; }

    /**
     * <p>Indicates whether TTL is to be enabled (true) or disabled (false) on the
     * table.</p>
     */
    inline TimeToLiveSpecification& WithEnabled(bool value) { SetEnabled(value); return *this;}


    /**
     * <p>The name of the TTL attribute used to store the expiration time for items in
     * the table.</p>
     */
    inline const Aws::String& GetAttributeName() const{ return m_attributeName; }

    /**
     * <p>The name of the TTL attribute used to store the expiration time for items in
     * the table.</p>
     */
    inline bool AttributeNameHasBeenSet() const { return m_attributeNameHasBeenSet; }

    /**
     * <p>The name of the TTL attribute used to store the expiration time for items in
     * the table.</p>
     */
    inline void SetAttributeName(const Aws::String& value) { m_attributeNameHasBeenSet = true; m_attributeName = value; }

    /**
     * <p>The name of the TTL attribute used to store the expiration time for items in
     * the table.</p>
     */
    inline void SetAttributeName(Aws::String&& value) { m_attributeNameHasBeenSet = true; m_attributeName = std::move(value); }

    /**
     * <p>The name of the TTL attribute used to store the expiration time for items in
     * the table.</p>
     */
    inline void SetAttributeName(const char* value) { m_attributeNameHasBeenSet = true; m_attributeName.assign(value); }

    /**
     * <p>The name of the TTL attribute used to store the expiration time for items in
     * the table.</p>
     */
    inline TimeToLiveSpecification& WithAttributeName(const Aws::String& value) { SetAttributeName(value); return *this;}

    /**
     * <p>The name of the TTL attribute used to store the expiration time for items in
     * the table.</p>
     */
    inline TimeToLiveSpecification& WithAttributeName(Aws::String&& value) { SetAttributeName(std::move(value)); return *this;}

    /**
     * <p>The name of the TTL attribute used to store the expiration time for items in
     * the table.</p>
     */
    inline TimeToLiveSpecification& WithAttributeName(const char* value) { SetAttributeName(value); return *this;}

  private:

    bool m_enabled;
    bool m_enabledHasBeenSet;

    Aws::String m_attributeName;
    bool m_attributeNameHasBeenSet;
  };

} // namespace Model
} // namespace DynamoDB
} // namespace Aws
