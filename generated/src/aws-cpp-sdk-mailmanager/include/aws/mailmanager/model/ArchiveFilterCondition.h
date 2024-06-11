/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mailmanager/MailManager_EXPORTS.h>
#include <aws/mailmanager/model/ArchiveBooleanExpression.h>
#include <aws/mailmanager/model/ArchiveStringExpression.h>
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
namespace MailManager
{
namespace Model
{

  /**
   * <p>A filter condition used to include or exclude emails when exporting from or
   * searching an archive.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mailmanager-2023-10-17/ArchiveFilterCondition">AWS
   * API Reference</a></p>
   */
  class ArchiveFilterCondition
  {
  public:
    AWS_MAILMANAGER_API ArchiveFilterCondition();
    AWS_MAILMANAGER_API ArchiveFilterCondition(Aws::Utils::Json::JsonView jsonValue);
    AWS_MAILMANAGER_API ArchiveFilterCondition& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MAILMANAGER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>A boolean expression to evaluate against email attributes.</p>
     */
    inline const ArchiveBooleanExpression& GetBooleanExpression() const{ return m_booleanExpression; }
    inline bool BooleanExpressionHasBeenSet() const { return m_booleanExpressionHasBeenSet; }
    inline void SetBooleanExpression(const ArchiveBooleanExpression& value) { m_booleanExpressionHasBeenSet = true; m_booleanExpression = value; }
    inline void SetBooleanExpression(ArchiveBooleanExpression&& value) { m_booleanExpressionHasBeenSet = true; m_booleanExpression = std::move(value); }
    inline ArchiveFilterCondition& WithBooleanExpression(const ArchiveBooleanExpression& value) { SetBooleanExpression(value); return *this;}
    inline ArchiveFilterCondition& WithBooleanExpression(ArchiveBooleanExpression&& value) { SetBooleanExpression(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A string expression to evaluate against email attributes.</p>
     */
    inline const ArchiveStringExpression& GetStringExpression() const{ return m_stringExpression; }
    inline bool StringExpressionHasBeenSet() const { return m_stringExpressionHasBeenSet; }
    inline void SetStringExpression(const ArchiveStringExpression& value) { m_stringExpressionHasBeenSet = true; m_stringExpression = value; }
    inline void SetStringExpression(ArchiveStringExpression&& value) { m_stringExpressionHasBeenSet = true; m_stringExpression = std::move(value); }
    inline ArchiveFilterCondition& WithStringExpression(const ArchiveStringExpression& value) { SetStringExpression(value); return *this;}
    inline ArchiveFilterCondition& WithStringExpression(ArchiveStringExpression&& value) { SetStringExpression(std::move(value)); return *this;}
    ///@}
  private:

    ArchiveBooleanExpression m_booleanExpression;
    bool m_booleanExpressionHasBeenSet = false;

    ArchiveStringExpression m_stringExpression;
    bool m_stringExpressionHasBeenSet = false;
  };

} // namespace Model
} // namespace MailManager
} // namespace Aws
