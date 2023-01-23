/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/kendra/Kendra_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/kendra/model/Principal.h>
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
namespace kendra
{
namespace Model
{

  /**
   * <p> Information to define the hierarchy for which documents users should have
   * access to. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/kendra-2019-02-03/HierarchicalPrincipal">AWS
   * API Reference</a></p>
   */
  class HierarchicalPrincipal
  {
  public:
    AWS_KENDRA_API HierarchicalPrincipal();
    AWS_KENDRA_API HierarchicalPrincipal(Aws::Utils::Json::JsonView jsonValue);
    AWS_KENDRA_API HierarchicalPrincipal& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_KENDRA_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>A list of <a
     * href="https://docs.aws.amazon.com/kendra/latest/dg/API_Principal.html">principal</a>
     * lists that define the hierarchy for which documents users should have access to.
     * Each hierarchical list specifies which user or group has allow or deny access
     * for each document.</p>
     */
    inline const Aws::Vector<Principal>& GetPrincipalList() const{ return m_principalList; }

    /**
     * <p>A list of <a
     * href="https://docs.aws.amazon.com/kendra/latest/dg/API_Principal.html">principal</a>
     * lists that define the hierarchy for which documents users should have access to.
     * Each hierarchical list specifies which user or group has allow or deny access
     * for each document.</p>
     */
    inline bool PrincipalListHasBeenSet() const { return m_principalListHasBeenSet; }

    /**
     * <p>A list of <a
     * href="https://docs.aws.amazon.com/kendra/latest/dg/API_Principal.html">principal</a>
     * lists that define the hierarchy for which documents users should have access to.
     * Each hierarchical list specifies which user or group has allow or deny access
     * for each document.</p>
     */
    inline void SetPrincipalList(const Aws::Vector<Principal>& value) { m_principalListHasBeenSet = true; m_principalList = value; }

    /**
     * <p>A list of <a
     * href="https://docs.aws.amazon.com/kendra/latest/dg/API_Principal.html">principal</a>
     * lists that define the hierarchy for which documents users should have access to.
     * Each hierarchical list specifies which user or group has allow or deny access
     * for each document.</p>
     */
    inline void SetPrincipalList(Aws::Vector<Principal>&& value) { m_principalListHasBeenSet = true; m_principalList = std::move(value); }

    /**
     * <p>A list of <a
     * href="https://docs.aws.amazon.com/kendra/latest/dg/API_Principal.html">principal</a>
     * lists that define the hierarchy for which documents users should have access to.
     * Each hierarchical list specifies which user or group has allow or deny access
     * for each document.</p>
     */
    inline HierarchicalPrincipal& WithPrincipalList(const Aws::Vector<Principal>& value) { SetPrincipalList(value); return *this;}

    /**
     * <p>A list of <a
     * href="https://docs.aws.amazon.com/kendra/latest/dg/API_Principal.html">principal</a>
     * lists that define the hierarchy for which documents users should have access to.
     * Each hierarchical list specifies which user or group has allow or deny access
     * for each document.</p>
     */
    inline HierarchicalPrincipal& WithPrincipalList(Aws::Vector<Principal>&& value) { SetPrincipalList(std::move(value)); return *this;}

    /**
     * <p>A list of <a
     * href="https://docs.aws.amazon.com/kendra/latest/dg/API_Principal.html">principal</a>
     * lists that define the hierarchy for which documents users should have access to.
     * Each hierarchical list specifies which user or group has allow or deny access
     * for each document.</p>
     */
    inline HierarchicalPrincipal& AddPrincipalList(const Principal& value) { m_principalListHasBeenSet = true; m_principalList.push_back(value); return *this; }

    /**
     * <p>A list of <a
     * href="https://docs.aws.amazon.com/kendra/latest/dg/API_Principal.html">principal</a>
     * lists that define the hierarchy for which documents users should have access to.
     * Each hierarchical list specifies which user or group has allow or deny access
     * for each document.</p>
     */
    inline HierarchicalPrincipal& AddPrincipalList(Principal&& value) { m_principalListHasBeenSet = true; m_principalList.push_back(std::move(value)); return *this; }

  private:

    Aws::Vector<Principal> m_principalList;
    bool m_principalListHasBeenSet = false;
  };

} // namespace Model
} // namespace kendra
} // namespace Aws
