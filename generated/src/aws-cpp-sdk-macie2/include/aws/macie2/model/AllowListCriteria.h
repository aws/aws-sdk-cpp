/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/macie2/Macie2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/macie2/model/S3WordsList.h>
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
namespace Macie2
{
namespace Model
{

  /**
   * <p>Specifies the criteria for an allow list. The criteria must specify a regular
   * expression (regex) or an S3 object (s3WordsList). It can't specify
   * both.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/macie2-2020-01-01/AllowListCriteria">AWS
   * API Reference</a></p>
   */
  class AllowListCriteria
  {
  public:
    AWS_MACIE2_API AllowListCriteria();
    AWS_MACIE2_API AllowListCriteria(Aws::Utils::Json::JsonView jsonValue);
    AWS_MACIE2_API AllowListCriteria& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MACIE2_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The regular expression (<i>regex</i>) that defines the text pattern to
     * ignore. The expression can contain as many as 512 characters.</p>
     */
    inline const Aws::String& GetRegex() const{ return m_regex; }
    inline bool RegexHasBeenSet() const { return m_regexHasBeenSet; }
    inline void SetRegex(const Aws::String& value) { m_regexHasBeenSet = true; m_regex = value; }
    inline void SetRegex(Aws::String&& value) { m_regexHasBeenSet = true; m_regex = std::move(value); }
    inline void SetRegex(const char* value) { m_regexHasBeenSet = true; m_regex.assign(value); }
    inline AllowListCriteria& WithRegex(const Aws::String& value) { SetRegex(value); return *this;}
    inline AllowListCriteria& WithRegex(Aws::String&& value) { SetRegex(std::move(value)); return *this;}
    inline AllowListCriteria& WithRegex(const char* value) { SetRegex(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The location and name of the S3 object that lists specific text to
     * ignore.</p>
     */
    inline const S3WordsList& GetS3WordsList() const{ return m_s3WordsList; }
    inline bool S3WordsListHasBeenSet() const { return m_s3WordsListHasBeenSet; }
    inline void SetS3WordsList(const S3WordsList& value) { m_s3WordsListHasBeenSet = true; m_s3WordsList = value; }
    inline void SetS3WordsList(S3WordsList&& value) { m_s3WordsListHasBeenSet = true; m_s3WordsList = std::move(value); }
    inline AllowListCriteria& WithS3WordsList(const S3WordsList& value) { SetS3WordsList(value); return *this;}
    inline AllowListCriteria& WithS3WordsList(S3WordsList&& value) { SetS3WordsList(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_regex;
    bool m_regexHasBeenSet = false;

    S3WordsList m_s3WordsList;
    bool m_s3WordsListHasBeenSet = false;
  };

} // namespace Model
} // namespace Macie2
} // namespace Aws
