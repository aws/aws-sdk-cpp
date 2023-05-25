/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/accessanalyzer/AccessAnalyzer_EXPORTS.h>
#include <aws/accessanalyzer/model/FindingSourceType.h>
#include <aws/accessanalyzer/model/FindingSourceDetail.h>
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
   * <p>The source of the finding. This indicates how the access that generated the
   * finding is granted. It is populated for Amazon S3 bucket findings.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/accessanalyzer-2019-11-01/FindingSource">AWS
   * API Reference</a></p>
   */
  class FindingSource
  {
  public:
    AWS_ACCESSANALYZER_API FindingSource();
    AWS_ACCESSANALYZER_API FindingSource(Aws::Utils::Json::JsonView jsonValue);
    AWS_ACCESSANALYZER_API FindingSource& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_ACCESSANALYZER_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Indicates the type of access that generated the finding.</p>
     */
    inline const FindingSourceType& GetType() const{ return m_type; }

    /**
     * <p>Indicates the type of access that generated the finding.</p>
     */
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }

    /**
     * <p>Indicates the type of access that generated the finding.</p>
     */
    inline void SetType(const FindingSourceType& value) { m_typeHasBeenSet = true; m_type = value; }

    /**
     * <p>Indicates the type of access that generated the finding.</p>
     */
    inline void SetType(FindingSourceType&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }

    /**
     * <p>Indicates the type of access that generated the finding.</p>
     */
    inline FindingSource& WithType(const FindingSourceType& value) { SetType(value); return *this;}

    /**
     * <p>Indicates the type of access that generated the finding.</p>
     */
    inline FindingSource& WithType(FindingSourceType&& value) { SetType(std::move(value)); return *this;}


    /**
     * <p>Includes details about how the access that generated the finding is granted.
     * This is populated for Amazon S3 bucket findings.</p>
     */
    inline const FindingSourceDetail& GetDetail() const{ return m_detail; }

    /**
     * <p>Includes details about how the access that generated the finding is granted.
     * This is populated for Amazon S3 bucket findings.</p>
     */
    inline bool DetailHasBeenSet() const { return m_detailHasBeenSet; }

    /**
     * <p>Includes details about how the access that generated the finding is granted.
     * This is populated for Amazon S3 bucket findings.</p>
     */
    inline void SetDetail(const FindingSourceDetail& value) { m_detailHasBeenSet = true; m_detail = value; }

    /**
     * <p>Includes details about how the access that generated the finding is granted.
     * This is populated for Amazon S3 bucket findings.</p>
     */
    inline void SetDetail(FindingSourceDetail&& value) { m_detailHasBeenSet = true; m_detail = std::move(value); }

    /**
     * <p>Includes details about how the access that generated the finding is granted.
     * This is populated for Amazon S3 bucket findings.</p>
     */
    inline FindingSource& WithDetail(const FindingSourceDetail& value) { SetDetail(value); return *this;}

    /**
     * <p>Includes details about how the access that generated the finding is granted.
     * This is populated for Amazon S3 bucket findings.</p>
     */
    inline FindingSource& WithDetail(FindingSourceDetail&& value) { SetDetail(std::move(value)); return *this;}

  private:

    FindingSourceType m_type;
    bool m_typeHasBeenSet = false;

    FindingSourceDetail m_detail;
    bool m_detailHasBeenSet = false;
  };

} // namespace Model
} // namespace AccessAnalyzer
} // namespace Aws
