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
    AWS_DEADLINE_API DependencyCounts() = default;
    AWS_DEADLINE_API DependencyCounts(Aws::Utils::Json::JsonView jsonValue);
    AWS_DEADLINE_API DependencyCounts& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DEADLINE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The number of resolved dependencies.</p>
     */
    inline int GetDependenciesResolved() const { return m_dependenciesResolved; }
    inline bool DependenciesResolvedHasBeenSet() const { return m_dependenciesResolvedHasBeenSet; }
    inline void SetDependenciesResolved(int value) { m_dependenciesResolvedHasBeenSet = true; m_dependenciesResolved = value; }
    inline DependencyCounts& WithDependenciesResolved(int value) { SetDependenciesResolved(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of unresolved dependencies.</p>
     */
    inline int GetDependenciesUnresolved() const { return m_dependenciesUnresolved; }
    inline bool DependenciesUnresolvedHasBeenSet() const { return m_dependenciesUnresolvedHasBeenSet; }
    inline void SetDependenciesUnresolved(int value) { m_dependenciesUnresolvedHasBeenSet = true; m_dependenciesUnresolved = value; }
    inline DependencyCounts& WithDependenciesUnresolved(int value) { SetDependenciesUnresolved(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of consumers resolved.</p>
     */
    inline int GetConsumersResolved() const { return m_consumersResolved; }
    inline bool ConsumersResolvedHasBeenSet() const { return m_consumersResolvedHasBeenSet; }
    inline void SetConsumersResolved(int value) { m_consumersResolvedHasBeenSet = true; m_consumersResolved = value; }
    inline DependencyCounts& WithConsumersResolved(int value) { SetConsumersResolved(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of unresolved consumers.</p>
     */
    inline int GetConsumersUnresolved() const { return m_consumersUnresolved; }
    inline bool ConsumersUnresolvedHasBeenSet() const { return m_consumersUnresolvedHasBeenSet; }
    inline void SetConsumersUnresolved(int value) { m_consumersUnresolvedHasBeenSet = true; m_consumersUnresolved = value; }
    inline DependencyCounts& WithConsumersUnresolved(int value) { SetConsumersUnresolved(value); return *this;}
    ///@}
  private:

    int m_dependenciesResolved{0};
    bool m_dependenciesResolvedHasBeenSet = false;

    int m_dependenciesUnresolved{0};
    bool m_dependenciesUnresolvedHasBeenSet = false;

    int m_consumersResolved{0};
    bool m_consumersResolvedHasBeenSet = false;

    int m_consumersUnresolved{0};
    bool m_consumersUnresolvedHasBeenSet = false;
  };

} // namespace Model
} // namespace deadline
} // namespace Aws
