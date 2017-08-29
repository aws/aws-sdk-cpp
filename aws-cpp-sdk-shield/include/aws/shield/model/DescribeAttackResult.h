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
#include <aws/shield/Shield_EXPORTS.h>
#include <aws/shield/model/AttackDetail.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace Shield
{
namespace Model
{
  class AWS_SHIELD_API DescribeAttackResult
  {
  public:
    DescribeAttackResult();
    DescribeAttackResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    DescribeAttackResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The attack that is described.</p>
     */
    inline const AttackDetail& GetAttack() const{ return m_attack; }

    /**
     * <p>The attack that is described.</p>
     */
    inline void SetAttack(const AttackDetail& value) { m_attack = value; }

    /**
     * <p>The attack that is described.</p>
     */
    inline void SetAttack(AttackDetail&& value) { m_attack = std::move(value); }

    /**
     * <p>The attack that is described.</p>
     */
    inline DescribeAttackResult& WithAttack(const AttackDetail& value) { SetAttack(value); return *this;}

    /**
     * <p>The attack that is described.</p>
     */
    inline DescribeAttackResult& WithAttack(AttackDetail&& value) { SetAttack(std::move(value)); return *this;}

  private:

    AttackDetail m_attack;
  };

} // namespace Model
} // namespace Shield
} // namespace Aws
