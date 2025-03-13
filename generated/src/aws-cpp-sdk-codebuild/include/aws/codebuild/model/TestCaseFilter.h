/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codebuild/CodeBuild_EXPORTS.h>
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
namespace CodeBuild
{
namespace Model
{

  /**
   * <p>A filter used to return specific types of test cases. In order to pass the
   * filter, the report must meet all of the filter properties.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/codebuild-2016-10-06/TestCaseFilter">AWS
   * API Reference</a></p>
   */
  class TestCaseFilter
  {
  public:
    AWS_CODEBUILD_API TestCaseFilter() = default;
    AWS_CODEBUILD_API TestCaseFilter(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODEBUILD_API TestCaseFilter& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODEBUILD_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The status used to filter test cases. A <code>TestCaseFilter</code> can have
     * one status. Valid values are:</p> <ul> <li> <p> <code>SUCCEEDED</code> </p>
     * </li> <li> <p> <code>FAILED</code> </p> </li> <li> <p> <code>ERROR</code> </p>
     * </li> <li> <p> <code>SKIPPED</code> </p> </li> <li> <p> <code>UNKNOWN</code>
     * </p> </li> </ul>
     */
    inline const Aws::String& GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    template<typename StatusT = Aws::String>
    void SetStatus(StatusT&& value) { m_statusHasBeenSet = true; m_status = std::forward<StatusT>(value); }
    template<typename StatusT = Aws::String>
    TestCaseFilter& WithStatus(StatusT&& value) { SetStatus(std::forward<StatusT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A keyword that is used to filter on the <code>name</code> or the
     * <code>prefix</code> of the test cases. Only test cases where the keyword is a
     * substring of the <code>name</code> or the <code>prefix</code> will be
     * returned.</p>
     */
    inline const Aws::String& GetKeyword() const { return m_keyword; }
    inline bool KeywordHasBeenSet() const { return m_keywordHasBeenSet; }
    template<typename KeywordT = Aws::String>
    void SetKeyword(KeywordT&& value) { m_keywordHasBeenSet = true; m_keyword = std::forward<KeywordT>(value); }
    template<typename KeywordT = Aws::String>
    TestCaseFilter& WithKeyword(KeywordT&& value) { SetKeyword(std::forward<KeywordT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_status;
    bool m_statusHasBeenSet = false;

    Aws::String m_keyword;
    bool m_keywordHasBeenSet = false;
  };

} // namespace Model
} // namespace CodeBuild
} // namespace Aws
