/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/accessanalyzer/AccessAnalyzer_EXPORTS.h>
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
namespace AccessAnalyzer
{
namespace Model
{

  /**
   * <p>Contains information about the reasoning why a check for access passed or
   * failed.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/accessanalyzer-2019-11-01/ReasonSummary">AWS
   * API Reference</a></p>
   */
  class ReasonSummary
  {
  public:
    AWS_ACCESSANALYZER_API ReasonSummary() = default;
    AWS_ACCESSANALYZER_API ReasonSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_ACCESSANALYZER_API ReasonSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_ACCESSANALYZER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>A description of the reasoning of a result of checking for access.</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    ReasonSummary& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The index number of the reason statement.</p>
     */
    inline int GetStatementIndex() const { return m_statementIndex; }
    inline bool StatementIndexHasBeenSet() const { return m_statementIndexHasBeenSet; }
    inline void SetStatementIndex(int value) { m_statementIndexHasBeenSet = true; m_statementIndex = value; }
    inline ReasonSummary& WithStatementIndex(int value) { SetStatementIndex(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier for the reason statement.</p>
     */
    inline const Aws::String& GetStatementId() const { return m_statementId; }
    inline bool StatementIdHasBeenSet() const { return m_statementIdHasBeenSet; }
    template<typename StatementIdT = Aws::String>
    void SetStatementId(StatementIdT&& value) { m_statementIdHasBeenSet = true; m_statementId = std::forward<StatementIdT>(value); }
    template<typename StatementIdT = Aws::String>
    ReasonSummary& WithStatementId(StatementIdT&& value) { SetStatementId(std::forward<StatementIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    int m_statementIndex{0};
    bool m_statementIndexHasBeenSet = false;

    Aws::String m_statementId;
    bool m_statementIdHasBeenSet = false;
  };

} // namespace Model
} // namespace AccessAnalyzer
} // namespace Aws
