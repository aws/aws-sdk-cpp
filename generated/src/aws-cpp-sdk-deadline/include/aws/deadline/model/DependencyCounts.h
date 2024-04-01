/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/deadline/Deadline_EXPORTS.h>

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
namespace deadline
{
namespace Model
{

  /**
   * <p>The number of dependencies for the consumer.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/deadline-2023-10-12/DependencyCounts">AWS
   * API Reference</a></p>
   */
  class DependencyCounts
  {
  public:
    AWS_DEADLINE_API DependencyCounts();
    AWS_DEADLINE_API DependencyCounts(Aws::Utils::Json::JsonView jsonValue);
    AWS_DEADLINE_API DependencyCounts& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DEADLINE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The number of consumers resolved.</p>
     */
    inline int GetConsumersResolved() const{ return m_consumersResolved; }

    /**
     * <p>The number of consumers resolved.</p>
     */
    inline bool ConsumersResolvedHasBeenSet() const { return m_consumersResolvedHasBeenSet; }

    /**
     * <p>The number of consumers resolved.</p>
     */
    inline void SetConsumersResolved(int value) { m_consumersResolvedHasBeenSet = true; m_consumersResolved = value; }

    /**
     * <p>The number of consumers resolved.</p>
     */
    inline DependencyCounts& WithConsumersResolved(int value) { SetConsumersResolved(value); return *this;}


    /**
     * <p>The number of unresolved consumers.</p>
     */
    inline int GetConsumersUnresolved() const{ return m_consumersUnresolved; }

    /**
     * <p>The number of unresolved consumers.</p>
     */
    inline bool ConsumersUnresolvedHasBeenSet() const { return m_consumersUnresolvedHasBeenSet; }

    /**
     * <p>The number of unresolved consumers.</p>
     */
    inline void SetConsumersUnresolved(int value) { m_consumersUnresolvedHasBeenSet = true; m_consumersUnresolved = value; }

    /**
     * <p>The number of unresolved consumers.</p>
     */
    inline DependencyCounts& WithConsumersUnresolved(int value) { SetConsumersUnresolved(value); return *this;}


    /**
     * <p>The number of resolved dependencies.</p>
     */
    inline int GetDependenciesResolved() const{ return m_dependenciesResolved; }

    /**
     * <p>The number of resolved dependencies.</p>
     */
    inline bool DependenciesResolvedHasBeenSet() const { return m_dependenciesResolvedHasBeenSet; }

    /**
     * <p>The number of resolved dependencies.</p>
     */
    inline void SetDependenciesResolved(int value) { m_dependenciesResolvedHasBeenSet = true; m_dependenciesResolved = value; }

    /**
     * <p>The number of resolved dependencies.</p>
     */
    inline DependencyCounts& WithDependenciesResolved(int value) { SetDependenciesResolved(value); return *this;}


    /**
     * <p>The number of unresolved dependencies.</p>
     */
    inline int GetDependenciesUnresolved() const{ return m_dependenciesUnresolved; }

    /**
     * <p>The number of unresolved dependencies.</p>
     */
    inline bool DependenciesUnresolvedHasBeenSet() const { return m_dependenciesUnresolvedHasBeenSet; }

    /**
     * <p>The number of unresolved dependencies.</p>
     */
    inline void SetDependenciesUnresolved(int value) { m_dependenciesUnresolvedHasBeenSet = true; m_dependenciesUnresolved = value; }

    /**
     * <p>The number of unresolved dependencies.</p>
     */
    inline DependencyCounts& WithDependenciesUnresolved(int value) { SetDependenciesUnresolved(value); return *this;}

  private:

    int m_consumersResolved;
    bool m_consumersResolvedHasBeenSet = false;

    int m_consumersUnresolved;
    bool m_consumersUnresolvedHasBeenSet = false;

    int m_dependenciesResolved;
    bool m_dependenciesResolvedHasBeenSet = false;

    int m_dependenciesUnresolved;
    bool m_dependenciesUnresolvedHasBeenSet = false;
  };

} // namespace Model
} // namespace deadline
} // namespace Aws
