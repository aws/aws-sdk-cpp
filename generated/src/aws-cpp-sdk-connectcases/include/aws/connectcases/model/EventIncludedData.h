/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connectcases/ConnectCases_EXPORTS.h>
#include <aws/connectcases/model/CaseEventIncludedData.h>
#include <aws/connectcases/model/RelatedItemEventIncludedData.h>
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
namespace ConnectCases
{
namespace Model
{

  /**
   * <p>Details of what case and related item data is published through the case
   * event stream.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/connectcases-2022-10-03/EventIncludedData">AWS
   * API Reference</a></p>
   */
  class EventIncludedData
  {
  public:
    AWS_CONNECTCASES_API EventIncludedData();
    AWS_CONNECTCASES_API EventIncludedData(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECTCASES_API EventIncludedData& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECTCASES_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Details of what case data is published through the case event stream.</p>
     */
    inline const CaseEventIncludedData& GetCaseData() const{ return m_caseData; }

    /**
     * <p>Details of what case data is published through the case event stream.</p>
     */
    inline bool CaseDataHasBeenSet() const { return m_caseDataHasBeenSet; }

    /**
     * <p>Details of what case data is published through the case event stream.</p>
     */
    inline void SetCaseData(const CaseEventIncludedData& value) { m_caseDataHasBeenSet = true; m_caseData = value; }

    /**
     * <p>Details of what case data is published through the case event stream.</p>
     */
    inline void SetCaseData(CaseEventIncludedData&& value) { m_caseDataHasBeenSet = true; m_caseData = std::move(value); }

    /**
     * <p>Details of what case data is published through the case event stream.</p>
     */
    inline EventIncludedData& WithCaseData(const CaseEventIncludedData& value) { SetCaseData(value); return *this;}

    /**
     * <p>Details of what case data is published through the case event stream.</p>
     */
    inline EventIncludedData& WithCaseData(CaseEventIncludedData&& value) { SetCaseData(std::move(value)); return *this;}


    /**
     * <p>Details of what related item data is published through the case event
     * stream.</p>
     */
    inline const RelatedItemEventIncludedData& GetRelatedItemData() const{ return m_relatedItemData; }

    /**
     * <p>Details of what related item data is published through the case event
     * stream.</p>
     */
    inline bool RelatedItemDataHasBeenSet() const { return m_relatedItemDataHasBeenSet; }

    /**
     * <p>Details of what related item data is published through the case event
     * stream.</p>
     */
    inline void SetRelatedItemData(const RelatedItemEventIncludedData& value) { m_relatedItemDataHasBeenSet = true; m_relatedItemData = value; }

    /**
     * <p>Details of what related item data is published through the case event
     * stream.</p>
     */
    inline void SetRelatedItemData(RelatedItemEventIncludedData&& value) { m_relatedItemDataHasBeenSet = true; m_relatedItemData = std::move(value); }

    /**
     * <p>Details of what related item data is published through the case event
     * stream.</p>
     */
    inline EventIncludedData& WithRelatedItemData(const RelatedItemEventIncludedData& value) { SetRelatedItemData(value); return *this;}

    /**
     * <p>Details of what related item data is published through the case event
     * stream.</p>
     */
    inline EventIncludedData& WithRelatedItemData(RelatedItemEventIncludedData&& value) { SetRelatedItemData(std::move(value)); return *this;}

  private:

    CaseEventIncludedData m_caseData;
    bool m_caseDataHasBeenSet = false;

    RelatedItemEventIncludedData m_relatedItemData;
    bool m_relatedItemDataHasBeenSet = false;
  };

} // namespace Model
} // namespace ConnectCases
} // namespace Aws
