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
#include <aws/servicecatalog/ServiceCatalog_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/servicecatalog/model/PrincipalType.h>
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
namespace ServiceCatalog
{
namespace Model
{

  /**
   * <p>Information about a principal.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/servicecatalog-2015-12-10/Principal">AWS
   * API Reference</a></p>
   */
  class AWS_SERVICECATALOG_API Principal
  {
  public:
    Principal();
    Principal(Aws::Utils::Json::JsonView jsonValue);
    Principal& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The ARN of the principal (IAM user, role, or group).</p>
     */
    inline const Aws::String& GetPrincipalARN() const{ return m_principalARN; }

    /**
     * <p>The ARN of the principal (IAM user, role, or group).</p>
     */
    inline bool PrincipalARNHasBeenSet() const { return m_principalARNHasBeenSet; }

    /**
     * <p>The ARN of the principal (IAM user, role, or group).</p>
     */
    inline void SetPrincipalARN(const Aws::String& value) { m_principalARNHasBeenSet = true; m_principalARN = value; }

    /**
     * <p>The ARN of the principal (IAM user, role, or group).</p>
     */
    inline void SetPrincipalARN(Aws::String&& value) { m_principalARNHasBeenSet = true; m_principalARN = std::move(value); }

    /**
     * <p>The ARN of the principal (IAM user, role, or group).</p>
     */
    inline void SetPrincipalARN(const char* value) { m_principalARNHasBeenSet = true; m_principalARN.assign(value); }

    /**
     * <p>The ARN of the principal (IAM user, role, or group).</p>
     */
    inline Principal& WithPrincipalARN(const Aws::String& value) { SetPrincipalARN(value); return *this;}

    /**
     * <p>The ARN of the principal (IAM user, role, or group).</p>
     */
    inline Principal& WithPrincipalARN(Aws::String&& value) { SetPrincipalARN(std::move(value)); return *this;}

    /**
     * <p>The ARN of the principal (IAM user, role, or group).</p>
     */
    inline Principal& WithPrincipalARN(const char* value) { SetPrincipalARN(value); return *this;}


    /**
     * <p>The principal type. The supported value is <code>IAM</code>.</p>
     */
    inline const PrincipalType& GetPrincipalType() const{ return m_principalType; }

    /**
     * <p>The principal type. The supported value is <code>IAM</code>.</p>
     */
    inline bool PrincipalTypeHasBeenSet() const { return m_principalTypeHasBeenSet; }

    /**
     * <p>The principal type. The supported value is <code>IAM</code>.</p>
     */
    inline void SetPrincipalType(const PrincipalType& value) { m_principalTypeHasBeenSet = true; m_principalType = value; }

    /**
     * <p>The principal type. The supported value is <code>IAM</code>.</p>
     */
    inline void SetPrincipalType(PrincipalType&& value) { m_principalTypeHasBeenSet = true; m_principalType = std::move(value); }

    /**
     * <p>The principal type. The supported value is <code>IAM</code>.</p>
     */
    inline Principal& WithPrincipalType(const PrincipalType& value) { SetPrincipalType(value); return *this;}

    /**
     * <p>The principal type. The supported value is <code>IAM</code>.</p>
     */
    inline Principal& WithPrincipalType(PrincipalType&& value) { SetPrincipalType(std::move(value)); return *this;}

  private:

    Aws::String m_principalARN;
    bool m_principalARNHasBeenSet;

    PrincipalType m_principalType;
    bool m_principalTypeHasBeenSet;
  };

} // namespace Model
} // namespace ServiceCatalog
} // namespace Aws
