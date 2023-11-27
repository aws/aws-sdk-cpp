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
    AWS_ACCESSANALYZER_API ReasonSummary();
    AWS_ACCESSANALYZER_API ReasonSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_ACCESSANALYZER_API ReasonSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_ACCESSANALYZER_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>A description of the reasoning of a result of checking for access.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>A description of the reasoning of a result of checking for access.</p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>A description of the reasoning of a result of checking for access.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>A description of the reasoning of a result of checking for access.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>A description of the reasoning of a result of checking for access.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>A description of the reasoning of a result of checking for access.</p>
     */
    inline ReasonSummary& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>A description of the reasoning of a result of checking for access.</p>
     */
    inline ReasonSummary& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>A description of the reasoning of a result of checking for access.</p>
     */
    inline ReasonSummary& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>The index number of the reason statement.</p>
     */
    inline int GetStatementIndex() const{ return m_statementIndex; }

    /**
     * <p>The index number of the reason statement.</p>
     */
    inline bool StatementIndexHasBeenSet() const { return m_statementIndexHasBeenSet; }

    /**
     * <p>The index number of the reason statement.</p>
     */
    inline void SetStatementIndex(int value) { m_statementIndexHasBeenSet = true; m_statementIndex = value; }

    /**
     * <p>The index number of the reason statement.</p>
     */
    inline ReasonSummary& WithStatementIndex(int value) { SetStatementIndex(value); return *this;}


    /**
     * <p>The identifier for the reason statement.</p>
     */
    inline const Aws::String& GetStatementId() const{ return m_statementId; }

    /**
     * <p>The identifier for the reason statement.</p>
     */
    inline bool StatementIdHasBeenSet() const { return m_statementIdHasBeenSet; }

    /**
     * <p>The identifier for the reason statement.</p>
     */
    inline void SetStatementId(const Aws::String& value) { m_statementIdHasBeenSet = true; m_statementId = value; }

    /**
     * <p>The identifier for the reason statement.</p>
     */
    inline void SetStatementId(Aws::String&& value) { m_statementIdHasBeenSet = true; m_statementId = std::move(value); }

    /**
     * <p>The identifier for the reason statement.</p>
     */
    inline void SetStatementId(const char* value) { m_statementIdHasBeenSet = true; m_statementId.assign(value); }

    /**
     * <p>The identifier for the reason statement.</p>
     */
    inline ReasonSummary& WithStatementId(const Aws::String& value) { SetStatementId(value); return *this;}

    /**
     * <p>The identifier for the reason statement.</p>
     */
    inline ReasonSummary& WithStatementId(Aws::String&& value) { SetStatementId(std::move(value)); return *this;}

    /**
     * <p>The identifier for the reason statement.</p>
     */
    inline ReasonSummary& WithStatementId(const char* value) { SetStatementId(value); return *this;}

  private:

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    int m_statementIndex;
    bool m_statementIndexHasBeenSet = false;

    Aws::String m_statementId;
    bool m_statementIdHasBeenSet = false;
  };

} // namespace Model
} // namespace AccessAnalyzer
} // namespace Aws
