/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
