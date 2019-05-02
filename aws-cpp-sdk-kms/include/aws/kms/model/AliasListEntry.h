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
#include <aws/kms/KMS_EXPORTS.h>
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
namespace KMS
{
namespace Model
{

  /**
   * <p>Contains information about an alias.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/kms-2014-11-01/AliasListEntry">AWS
   * API Reference</a></p>
   */
  class AWS_KMS_API AliasListEntry
  {
  public:
    AliasListEntry();
    AliasListEntry(Aws::Utils::Json::JsonView jsonValue);
    AliasListEntry& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>String that contains the alias. This value begins with
     * <code>alias/</code>.</p>
     */
    inline const Aws::String& GetAliasName() const{ return m_aliasName; }

    /**
     * <p>String that contains the alias. This value begins with
     * <code>alias/</code>.</p>
     */
    inline bool AliasNameHasBeenSet() const { return m_aliasNameHasBeenSet; }

    /**
     * <p>String that contains the alias. This value begins with
     * <code>alias/</code>.</p>
     */
    inline void SetAliasName(const Aws::String& value) { m_aliasNameHasBeenSet = true; m_aliasName = value; }

    /**
     * <p>String that contains the alias. This value begins with
     * <code>alias/</code>.</p>
     */
    inline void SetAliasName(Aws::String&& value) { m_aliasNameHasBeenSet = true; m_aliasName = std::move(value); }

    /**
     * <p>String that contains the alias. This value begins with
     * <code>alias/</code>.</p>
     */
    inline void SetAliasName(const char* value) { m_aliasNameHasBeenSet = true; m_aliasName.assign(value); }

    /**
     * <p>String that contains the alias. This value begins with
     * <code>alias/</code>.</p>
     */
    inline AliasListEntry& WithAliasName(const Aws::String& value) { SetAliasName(value); return *this;}

    /**
     * <p>String that contains the alias. This value begins with
     * <code>alias/</code>.</p>
     */
    inline AliasListEntry& WithAliasName(Aws::String&& value) { SetAliasName(std::move(value)); return *this;}

    /**
     * <p>String that contains the alias. This value begins with
     * <code>alias/</code>.</p>
     */
    inline AliasListEntry& WithAliasName(const char* value) { SetAliasName(value); return *this;}


    /**
     * <p>String that contains the key ARN.</p>
     */
    inline const Aws::String& GetAliasArn() const{ return m_aliasArn; }

    /**
     * <p>String that contains the key ARN.</p>
     */
    inline bool AliasArnHasBeenSet() const { return m_aliasArnHasBeenSet; }

    /**
     * <p>String that contains the key ARN.</p>
     */
    inline void SetAliasArn(const Aws::String& value) { m_aliasArnHasBeenSet = true; m_aliasArn = value; }

    /**
     * <p>String that contains the key ARN.</p>
     */
    inline void SetAliasArn(Aws::String&& value) { m_aliasArnHasBeenSet = true; m_aliasArn = std::move(value); }

    /**
     * <p>String that contains the key ARN.</p>
     */
    inline void SetAliasArn(const char* value) { m_aliasArnHasBeenSet = true; m_aliasArn.assign(value); }

    /**
     * <p>String that contains the key ARN.</p>
     */
    inline AliasListEntry& WithAliasArn(const Aws::String& value) { SetAliasArn(value); return *this;}

    /**
     * <p>String that contains the key ARN.</p>
     */
    inline AliasListEntry& WithAliasArn(Aws::String&& value) { SetAliasArn(std::move(value)); return *this;}

    /**
     * <p>String that contains the key ARN.</p>
     */
    inline AliasListEntry& WithAliasArn(const char* value) { SetAliasArn(value); return *this;}


    /**
     * <p>String that contains the key identifier referred to by the alias.</p>
     */
    inline const Aws::String& GetTargetKeyId() const{ return m_targetKeyId; }

    /**
     * <p>String that contains the key identifier referred to by the alias.</p>
     */
    inline bool TargetKeyIdHasBeenSet() const { return m_targetKeyIdHasBeenSet; }

    /**
     * <p>String that contains the key identifier referred to by the alias.</p>
     */
    inline void SetTargetKeyId(const Aws::String& value) { m_targetKeyIdHasBeenSet = true; m_targetKeyId = value; }

    /**
     * <p>String that contains the key identifier referred to by the alias.</p>
     */
    inline void SetTargetKeyId(Aws::String&& value) { m_targetKeyIdHasBeenSet = true; m_targetKeyId = std::move(value); }

    /**
     * <p>String that contains the key identifier referred to by the alias.</p>
     */
    inline void SetTargetKeyId(const char* value) { m_targetKeyIdHasBeenSet = true; m_targetKeyId.assign(value); }

    /**
     * <p>String that contains the key identifier referred to by the alias.</p>
     */
    inline AliasListEntry& WithTargetKeyId(const Aws::String& value) { SetTargetKeyId(value); return *this;}

    /**
     * <p>String that contains the key identifier referred to by the alias.</p>
     */
    inline AliasListEntry& WithTargetKeyId(Aws::String&& value) { SetTargetKeyId(std::move(value)); return *this;}

    /**
     * <p>String that contains the key identifier referred to by the alias.</p>
     */
    inline AliasListEntry& WithTargetKeyId(const char* value) { SetTargetKeyId(value); return *this;}

  private:

    Aws::String m_aliasName;
    bool m_aliasNameHasBeenSet;

    Aws::String m_aliasArn;
    bool m_aliasArnHasBeenSet;

    Aws::String m_targetKeyId;
    bool m_targetKeyIdHasBeenSet;
  };

} // namespace Model
} // namespace KMS
} // namespace Aws
