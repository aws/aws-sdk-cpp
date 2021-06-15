/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/auditmanager/AuditManager_EXPORTS.h>
#include <aws/auditmanager/model/KeywordInputType.h>
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
namespace AuditManager
{
namespace Model
{

  /**
   * <p> The keyword to search for in AWS CloudTrail logs, AWS Config rules, AWS
   * Security Hub checks, and AWS API names. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/auditmanager-2017-07-25/SourceKeyword">AWS
   * API Reference</a></p>
   */
  class AWS_AUDITMANAGER_API SourceKeyword
  {
  public:
    SourceKeyword();
    SourceKeyword(Aws::Utils::Json::JsonView jsonValue);
    SourceKeyword& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p> The method of input for the specified keyword. </p>
     */
    inline const KeywordInputType& GetKeywordInputType() const{ return m_keywordInputType; }

    /**
     * <p> The method of input for the specified keyword. </p>
     */
    inline bool KeywordInputTypeHasBeenSet() const { return m_keywordInputTypeHasBeenSet; }

    /**
     * <p> The method of input for the specified keyword. </p>
     */
    inline void SetKeywordInputType(const KeywordInputType& value) { m_keywordInputTypeHasBeenSet = true; m_keywordInputType = value; }

    /**
     * <p> The method of input for the specified keyword. </p>
     */
    inline void SetKeywordInputType(KeywordInputType&& value) { m_keywordInputTypeHasBeenSet = true; m_keywordInputType = std::move(value); }

    /**
     * <p> The method of input for the specified keyword. </p>
     */
    inline SourceKeyword& WithKeywordInputType(const KeywordInputType& value) { SetKeywordInputType(value); return *this;}

    /**
     * <p> The method of input for the specified keyword. </p>
     */
    inline SourceKeyword& WithKeywordInputType(KeywordInputType&& value) { SetKeywordInputType(std::move(value)); return *this;}


    /**
     * <p> The value of the keyword used to search AWS CloudTrail logs, AWS Config
     * rules, AWS Security Hub checks, and AWS API names when mapping a control data
     * source. </p>
     */
    inline const Aws::String& GetKeywordValue() const{ return m_keywordValue; }

    /**
     * <p> The value of the keyword used to search AWS CloudTrail logs, AWS Config
     * rules, AWS Security Hub checks, and AWS API names when mapping a control data
     * source. </p>
     */
    inline bool KeywordValueHasBeenSet() const { return m_keywordValueHasBeenSet; }

    /**
     * <p> The value of the keyword used to search AWS CloudTrail logs, AWS Config
     * rules, AWS Security Hub checks, and AWS API names when mapping a control data
     * source. </p>
     */
    inline void SetKeywordValue(const Aws::String& value) { m_keywordValueHasBeenSet = true; m_keywordValue = value; }

    /**
     * <p> The value of the keyword used to search AWS CloudTrail logs, AWS Config
     * rules, AWS Security Hub checks, and AWS API names when mapping a control data
     * source. </p>
     */
    inline void SetKeywordValue(Aws::String&& value) { m_keywordValueHasBeenSet = true; m_keywordValue = std::move(value); }

    /**
     * <p> The value of the keyword used to search AWS CloudTrail logs, AWS Config
     * rules, AWS Security Hub checks, and AWS API names when mapping a control data
     * source. </p>
     */
    inline void SetKeywordValue(const char* value) { m_keywordValueHasBeenSet = true; m_keywordValue.assign(value); }

    /**
     * <p> The value of the keyword used to search AWS CloudTrail logs, AWS Config
     * rules, AWS Security Hub checks, and AWS API names when mapping a control data
     * source. </p>
     */
    inline SourceKeyword& WithKeywordValue(const Aws::String& value) { SetKeywordValue(value); return *this;}

    /**
     * <p> The value of the keyword used to search AWS CloudTrail logs, AWS Config
     * rules, AWS Security Hub checks, and AWS API names when mapping a control data
     * source. </p>
     */
    inline SourceKeyword& WithKeywordValue(Aws::String&& value) { SetKeywordValue(std::move(value)); return *this;}

    /**
     * <p> The value of the keyword used to search AWS CloudTrail logs, AWS Config
     * rules, AWS Security Hub checks, and AWS API names when mapping a control data
     * source. </p>
     */
    inline SourceKeyword& WithKeywordValue(const char* value) { SetKeywordValue(value); return *this;}

  private:

    KeywordInputType m_keywordInputType;
    bool m_keywordInputTypeHasBeenSet;

    Aws::String m_keywordValue;
    bool m_keywordValueHasBeenSet;
  };

} // namespace Model
} // namespace AuditManager
} // namespace Aws
