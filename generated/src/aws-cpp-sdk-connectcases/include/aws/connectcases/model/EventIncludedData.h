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
    AWS_CONNECTCASES_API EventIncludedData() = default;
    AWS_CONNECTCASES_API EventIncludedData(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECTCASES_API EventIncludedData& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECTCASES_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Details of what case data is published through the case event stream.</p>
     */
    inline const CaseEventIncludedData& GetCaseData() const { return m_caseData; }
    inline bool CaseDataHasBeenSet() const { return m_caseDataHasBeenSet; }
    template<typename CaseDataT = CaseEventIncludedData>
    void SetCaseData(CaseDataT&& value) { m_caseDataHasBeenSet = true; m_caseData = std::forward<CaseDataT>(value); }
    template<typename CaseDataT = CaseEventIncludedData>
    EventIncludedData& WithCaseData(CaseDataT&& value) { SetCaseData(std::forward<CaseDataT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Details of what related item data is published through the case event
     * stream.</p>
     */
    inline const RelatedItemEventIncludedData& GetRelatedItemData() const { return m_relatedItemData; }
    inline bool RelatedItemDataHasBeenSet() const { return m_relatedItemDataHasBeenSet; }
    template<typename RelatedItemDataT = RelatedItemEventIncludedData>
    void SetRelatedItemData(RelatedItemDataT&& value) { m_relatedItemDataHasBeenSet = true; m_relatedItemData = std::forward<RelatedItemDataT>(value); }
    template<typename RelatedItemDataT = RelatedItemEventIncludedData>
    EventIncludedData& WithRelatedItemData(RelatedItemDataT&& value) { SetRelatedItemData(std::forward<RelatedItemDataT>(value)); return *this;}
    ///@}
  private:

    CaseEventIncludedData m_caseData;
    bool m_caseDataHasBeenSet = false;

    RelatedItemEventIncludedData m_relatedItemData;
    bool m_relatedItemDataHasBeenSet = false;
  };

} // namespace Model
} // namespace ConnectCases
} // namespace Aws
